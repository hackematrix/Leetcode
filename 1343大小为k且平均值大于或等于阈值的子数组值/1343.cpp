#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numOfSubarrays(vector<int>&nums,int k,int threshold)
    {
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(i<k-1)
                continue;
            if((double)sum/k>=threshold)
            {
                ans+=1;
            }
            if(i-k+1>=0)
                sum-=nums[i-k+1];
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int>nums={2,2,2,2,5,5,5,8};
    int threshold;
    int k;
    cin>>k>>threshold;
    int result=solution.numOfSubarrays(nums,k,threshold);
    cout<<result<<endl;
    return 0;
}
