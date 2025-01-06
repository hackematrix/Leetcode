#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int>decrypt(vector<int>&code,int k)
    {
        vector<int>ans(code.size(),0);
        int len=code.size();
        int ak=abs(k);
        int sum=0;
        if(k==0)
            return ans;
        for(int i=0;i<len+ak-1;i++){//循环数组的长度
            sum+=code[i%len];//确保循环
            if(i<ak-1)
                continue;//进入窗口
            if(k>0)
                ans[(i-ak+len)%len]=sum;//len-1,0,1,...
            else
                ans[(i+1)%len]=sum;//k,k+1...
            if(i-ak+1>=0)
                sum-=code[(i-ak+1)%len];
        }
        return ans;
    }
    };

int main()
{
    Solution solution;
    vector<int>code{5,7,1,4};
    int k=3;
    vector<int>ans=solution.decrypt(code,k);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
