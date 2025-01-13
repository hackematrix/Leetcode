#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int LengthOfLongestSubstring(string s) {
        int len=s.length();
        unordered_map<char,int>count;//哈希表
        int left=0;//左指针
        int ans=0;
        for (int right=0;right<len;right++) {
            count[s[right]]++;
            while (count[s[right]]>1) {
                //说明字母有重复
                count[s[left]]--;
                left++;//左指针右移
            }
            ans=max(ans,right-left+1);


        }
        return ans;
    }
};

int main() {
    string s;
    cin>>s;
    Solution solution;
    int result=solution.LengthOfLongestSubstring(s);
    cout<<result<<endl;
    return 0;
}
