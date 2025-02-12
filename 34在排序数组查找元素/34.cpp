#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>searchRange(vector<int>&nums,int target){
             vector<int>ans(2,-1);
             if(ans.empty())
             return ans;
             auto search=[&](auto &&search,vector<int>&nums,int target)->int{
                    int left=0;
                    int right=nums.size()-1;
                    while(left<=right){
                        int middle=left+(right-left)/2;
                        if(nums[middle]>=target)
                        right=middle-1;
                        else
                        left=middle+1;
                    }
                    return left;
             };
             if(search(search,nums,target)<nums.size()&&nums[search(search,nums,target)]==target)
             ans[0]=search(search,nums,target);
             else
             return ans;
             auto search2=[&](auto&&search2,vector<int>&nums,int target)->int{
                int left=0;
                int right=nums.size()-1;
                while(left<=right){
                    int middle=left+(right-left)/2;
                    if(nums[middle]<=target)
                    left=middle+1;
                    else
                    right=middle-1;
                    
                }
                return right;
             };
             ans[1]=search2(search2,nums,target);
            return ans;        
        }
};

int main(){
    Solution solution;
    vector<int>nums{5,7,7,8,8,10};
    int target=8;
    vector<int>ans=solution.searchRange(nums,target);
    for(int num:ans)
    cout<<num<<" ";
    cout<<endl;
    return 0;
}
