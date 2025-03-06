#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>findMissingAndRepeatedValues(vector<vector<int>>&grid){
                vector<int>ans(2,0);
                unordered_map<int,int>hash;
                for(int i=0;i<grid.size();i++){
                    for(int j=0;j<grid[0].size();j++){
                        hash[grid[i][j]]++;
                    }
                }
                int ans1=0;
                int ans2=0;
                for(auto it:hash){
                    if(it.second>1)
                    ans1=it.first;

                }
                int len=grid.size()*grid.size();
                for(int i=1;i<=len;i++){
                    if(hash[i]==0)
                    ans2=i;
                }
                ans={ans1,ans2};
                return ans;
        }
};


int main(){
    Solution solution;
    vector<vector<int>>grid1{{1,3},{2,2}};
    vector<vector<int>>grid2{{9,1,7},{8,9,2},{3,4,6}};
    vector<int>ans1=solution.findMissingAndRepeatedValues(grid1);
    vector<int>ans2=solution.findMissingAndRepeatedValues(grid2);
    
    for(auto num1:ans1)
    {
        cout<<num1<<" ";
        cout<<endl;
    }

    for(auto num2:ans2){
        cout<<num2<<" ";
        cout<<endl;
    }

    return 0;
}
