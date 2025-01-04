#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //统计白色个数即可
    int minimumRecolors(string block,int k)
    {
        int ans=1e9;
        int sum=0;
        for(int i=0;i<block.length();i++)
        {
            if(block[i]=='W')
                sum++;
            if(i<k-1)
                continue;
            ans=min(ans,sum);
            if(block[i-k+1]=='W')
                sum--;
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    string block;
    int k;
    cin>>block;
    cin>>k;
    int result=solution.minimumRecolors(block,k);
    cout<<result<<endl;
    return 0;
}
