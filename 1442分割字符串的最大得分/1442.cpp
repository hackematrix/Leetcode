#include<bits/stdc++.h>
using namespace std;
//模拟法
class Solution
{
public:
    int maxScore(string s)
    {
        int len=s.length();
        int ans=0;
        for(int i=1;i<len;i++)
        {
            int count=0; //要注意在for循环里定义,每次ans最大时，count要清零，不然ans的结果会叠加
            for(int j=0;j<i;j++)
            {
                if(s[j]=='0')
                    count++;
            }//分成两个字符串，其中一个为[0,i-1]
            for(int j=i;j<len;j++)
            {
                if(s[j]=='1')
                    count++;
            }//成两个字符串，其中一个为[i,n-1]
            ans=max(ans,count);
        }
        return ans;
    }
};
int main()
{
    Solution solution;
    string s;
    cin>>s;
    int result=solution.maxScore(s);
    cout<<result<<endl;
    return 0;
}
