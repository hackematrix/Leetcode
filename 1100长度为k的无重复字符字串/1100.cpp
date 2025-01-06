#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numKLenSubstrNoRepeats(string s,int k)
    {
        int len=s.length();
        unordered_map<char,int>stringCount;
        string temp;
        int ans=0;
        for(int i=0;i<len;i++)
        {
            temp+=s[i];
            stringCount[s[i]]++;
            if(i<k-1)
                continue;//进入窗口
            if(stringCount.size()>=k)
                ans++;//更新
            if(i-k+1>=0)
            {
                temp.erase(0,1);
                stringCount[s[i-k+1]]--;
                if(stringCount[s[i-k+1]]<=0)
                    stringCount.erase(s[i-k+1]);

            }
        }
        return ans;

    }
};

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    Solution solution;
    int result=solution.numKLenSubstrNoRepeats(s,k);
    cout<<result<<endl;
    return 0;
}
