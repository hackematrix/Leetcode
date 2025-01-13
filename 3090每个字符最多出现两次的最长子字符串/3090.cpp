#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //不定长滑动窗口法
    int maximumLengthSubstring(string s) {
        int len=s.length();
        int ans=0;
        unordered_map<char,int>count;//哈希表
        int left=0;
        for (int right=0;right<len;right++) {
            count[s[right]]++;
            while (count[s[right]]>2) {
                count[s[left]]--;
                left++;//左指针移动

            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string s;
    cin>>s;
    int result=solution.maximumLengthSubstring(s);
    cout<<result<<endl;
    return 0;
}
