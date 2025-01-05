#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maxSum(vector<int>&nums,int m,int k)
    {
        unordered_map<int,int>numCount;
        long long sum=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            numCount[nums[i]]++;

            if(i<k-1)
            continue;
            if(numCount.size()>=m)
            {
                ans=max(ans,sum);
            }
            if(i-k+1>=0)
            {
                sum-=nums[i-k+1];
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
    vector<int>nums{2,6,7,3,1,7};
    int m=3,k=4;
    Solution solution;
    long long result=solution.maxSum(nums,m,k);
    cout<<result<<endl;
    return 0;
}
