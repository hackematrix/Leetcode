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
    int vowelString(vector<string>&words,int left,int right)
    {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            string temp=words[i];
            int len=temp.length();
            if(vowels(temp[0])&&vowels(temp[len-1]))
                ans++;
        }
        return ans;
    }
};
int main()
{
    Solution solution;
    vector<string>words;
    string input;

    getline(cin,input);
    stringstream ss(input);
    string word;
    while(ss>>word)
        words.push_back(word);
    int left,right;
    cin>>left>>right;
    int result=solution.vowelString(words,left,right);
    cout<<result<<endl;
    return 0;
}


