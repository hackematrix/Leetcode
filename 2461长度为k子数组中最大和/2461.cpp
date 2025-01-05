#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maximumSubarraySum(vector<int>&nums,int k)
    {
        unordered_map<int,int>numCount; //hash table
        long long sum=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            numCount[nums[i]]++;

            if(i<k-1)
                continue; //进入窗口
            if(numCount.size()>=k)//确保每个数都不相等
            {
                ans=max(ans,sum);
            }//更新
            if(i-k+1>=0)
            {
                sum-=nums[i-k+1];//出窗口
                numCount[nums[i-k+1]]--;
                if(numCount[nums[i-k+1]]<=0)
                    numCount.erase(nums[i-k+1]);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int>nums{1,5,4,2,9,9,9};
    int k;
    cin>>k;
    Solution solution;
    long long ans=solution.maximumSubarraySum(nums,k);
    cout<<ans<<endl;
    return 0;
}
