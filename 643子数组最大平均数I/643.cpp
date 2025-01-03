#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMaxAverage(vector<int>&nums,int k)
    {
        double sum=0;
        double ans=-1e8;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(i<k-1)
                continue;//进入窗口
            ans=max(ans,sum);

            if(i-k+1>=0)
                sum-=nums[i-k+1];

        }
        ans=ans/k;
        return ans;
    }
};
int main()
{
    Solution solution;
    vector<int>nums={1,12,-5,-6,50,3};

    int k=0;
    cin>>k;
    double result=solution.findMaxAverage(nums,k);
    cout<<result<<endl;
    return 0;
}
