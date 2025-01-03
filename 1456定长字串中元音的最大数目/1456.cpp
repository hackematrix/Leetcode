#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool vowels(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        else
            return false;
    }//辨别元音

    //滑动窗口法
    int maxVowels(string s,int k)
    {
        int ans=0;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(vowels(s[i]))
                sum++;
            //进入窗口
            if(i<k-1)
                continue;
            //更新
            ans=max(ans,sum);
            //出窗口
            if(vowels(s[i-k+1]))
                sum--;
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
    int result=solution.maxVowels(s,k);
    cout<<result<<endl;
    return 0;
}
