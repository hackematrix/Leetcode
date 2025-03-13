#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<vector<int>>threeSum(vector<int>&nums){
                sort(nums.begin(),nums.end());
                int len=nums.size();
                vector<vector<int>>ans;
                for(int i=0;i<len-2;i++){
                    int x=nums[i];
                    if(i>0&&nums[i]==nums[i-1])
                    continue;

                    int left=i+1;
                    int right=len-1;
                    
                    while(left<right){
                        int temp=x+nums[left]+nums[right];
                        if(temp>0)
                        right--;
                        else if(temp<0)
                        left++;
                        else{
                            ans.push_back({x,nums[left],nums[right]});
                            for(left++;left<right&&nums[left]==nums[left-1];left++);
                            for(right--;right>left&&nums[right]==nums[right+1];right--);

                            
                        }
                        
                    }
                }

                return ans;
        }
};


int main(){
    Solution solution;
    vector<int>test1{-1,0,1,2,-1,-4};
    vector<vector<int>>ans;
    ans=solution.threeSum(test1);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
