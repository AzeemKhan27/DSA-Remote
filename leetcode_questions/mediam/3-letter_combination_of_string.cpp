class Solution {
public:
    void solve(vector<string> &ans, int index, string output, string digits, vector<string> &mapping){

        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }

        //1 case solve, baaki recursion sambhal lega
        char digitCharacter = digits[index];

        int digitInteger = digitCharacter - '0';  // -0 can convert value into integer.

        string value = mapping[digitInteger];    // mapping ki value

        for(int i=0; i<value.length(); i++){

            char ch = value[i];           // character nikal liya

        // output.push_back(ch);  //include character.

        solve(ans, index + 1, output + ch, digits, mapping);

        // output.pop_back();   //backtracking | exclude character.
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if(digits.length() == 0)
          return ans;

        int index = 0;
        string output = "";
        
        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        // if we will use map data structure:

        // unordered_map<int, string> mapping;
        // mapping[2] = "abc";
        // mapping[3] = "def";
        // mapping[4] = "ghi";
        // mapping[5] = "jkl";
        // mapping[6] = "mno";
        // mapping[7] = "pqrs";
        // mapping[8] = "tuv";
        // mapping[9] = "wxyz";

        solve(ans, index, output, digits, mapping);
        return ans;
    }
};