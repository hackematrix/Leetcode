#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<string>>groupAnagrams(vector<string>&strs){
        vector<vector<string>>ans;

        unordered_map<string,vector<string>>hash;

        for(auto &str:strs){
            string next=str;
            sort(next.begin(),next.end());
            hash[next].emplace_back(str);

        }
        
        for(auto it:hash)
        ans.emplace_back(it.second);
            
        return ans;
    }

    void print(vector<vector<string>>&ans){
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main(){
    Solution solution;
    vector<string>strs1{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<string>strs2{""};
    vector<string>strs3{"a"};

    vector<vector<string>>ans1;
    ans1=solution.groupAnagrams(strs1);
    vector<vector<string>>ans2;
    ans2=solution.groupAnagrams(strs2);
    vector<vector<string>>ans3;
    ans3=solution.groupAnagrams(strs3);

    solution.print(ans1);
    solution.print(ans2);
    solution.print(ans3);

    return 0;
    
}
