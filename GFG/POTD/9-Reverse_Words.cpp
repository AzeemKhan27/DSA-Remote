#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:

        //function to reverse words in a given string.
        
        string reverseWords(string str){
            vector<string> words;
            string word;
            stringstream ss(str);

            //split the string by '.' and store words in a vector;
            while(getline(ss, word,'.')){
                words.push_back(word);
            }

            //reverse vector
            reverse(words.begin(), words.end());

            //Join the words with '.'

            string result;
            // for(int i=0; i<words.size(); i++){
             for(size_t i =0; i<words.size(); i++){
                result += words[i];
                if(i != words.size() - 1){
                    result += ".";
                }   
            }

            return result;
        }
};

int main(){
    Solution obj;

    //test-case-1
    string str1 = "much.very.coding.like.i";
    cout<< obj.reverseWords(str1) <<endl;

    //test-case-2
    string str2 = "me.vs.me.its";
    cout<< obj.reverseWords(str2) <<endl;

    return 0;
}