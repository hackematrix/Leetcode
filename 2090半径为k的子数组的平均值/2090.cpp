#include<bits/stdc++.h>
using namespace std;
//滑动窗口法
class Solution
{
public:
    vector<int>getAverage(vector<int>&nums,int k)
    {
        int windowsLength=2*k+1;//窗口的大小
        vector<int>array(nums.size(),-1);
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(i<windowsLength-1)
                continue;//进入窗口
            if(i>=2*k)//说明窗口已经形成
                array[i-k]=sum/windowsLength;//更新
            if(i-windowsLength+1>=0)
                sum-=nums[i-windowsLength+1];//出窗口
        }
        return array;
    }
};
int main()
{
    Solution solution;
    vector<int>nums{7,4,3,9,1,8,5,2,6};
    int k;
    cin>>k;
    vector<int>result=solution.getAverage(nums,k);
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
    cout<<endl;
    return 0;

}
