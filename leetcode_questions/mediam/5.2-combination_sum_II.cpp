class Solution {
public:
    void combinationSum_helper(vector<int>& candidates, int target, vector<int> &v,vector<vector<int>> &ans, int index){

        //base
        if(target == 0){
            ans.push_back(v);
            return;
        }

        if(target < 0){
            return;
        }

        for(int i=index; i<candidates.size(); i++){

            //handling repeated element and filtering unique elements
            if(i > index && candidates[i] == candidates[i - 1]){
                continue;
            }

            v.push_back(candidates[i]);  //ek bar consider/pick kr rhe hai
            combinationSum_helper(candidates, target-candidates[i],v,ans,i+1);
            v.pop_back();               // kabhi nahi bhi karte hai
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //making arr sort to be unique elements.
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans; // answer return karna hai
        vector<int>v; //curr vector banakr rakhonga eg: [2,2,3] = 7. like that
        combinationSum_helper(candidates, target, v, ans, 0);   

        //remove repeated elements
        // set<vector<int>>st;
        // for(auto e:ans){
        //     st.insert(e);
        // }
        // ans.clear();
        // for(auto e:st){
        //     ans.push_back(e);       //only unique vectors.
        // }

        return ans;
    }
};