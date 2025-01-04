#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //思路先统计不生气的人数，然后统计在minutes时间段生气人数最大值
    int maxSatisfied(vector<int>&customers,vector<int>&grumpy,int minutes)
    {
        int ans=0;
        int sum=0;//生气人数
        int count=0;//不生气人数
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0)
                count+=customers[i];
        }
        //滑动窗口
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==1)
                sum+=customers[i];
            if(i<minutes-1)
                continue;//进入窗口
            ans=max(ans,sum);//更新
            if(grumpy[i-minutes+1]==1)
                sum-=customers[i-minutes+1];//出窗口
        }
        ans+=count;
        return ans;
    }

};

int main()
{
    Solution solution;
    vector<int>customers{1,0,1,2,1,1,7,5};
    vector<int>grumpy{0,1,0,1,0,1,0,1};
    int minutes;
    cin>>minutes;
    int result=solution.maxSatisfied(customers,grumpy,minutes);
    cout<<result<<endl;
    return 0;

}
