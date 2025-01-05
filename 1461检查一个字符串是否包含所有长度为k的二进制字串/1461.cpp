#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //滑动窗口
    bool hasAllCodes(string s,int k)
    {
        unordered_set<string>set; //hash Tables
        string temp;
        for(int i=0;i<s.length();i++)
        {
            temp+=s[i];
            if(i<k-1)
                continue;
            if(i-k+1>=0)
            {
                set.insert(temp);
                temp.erase(0,1);
            }
        }
        return set.size()==(1<<k);
    }
};

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    Solution solution;
    bool ans=solution.hasAllCodes(s,k);
    if(ans==true)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
