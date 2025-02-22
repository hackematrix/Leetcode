#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int similarPairs(vector<string>&words){
     //哈希+位运算
     unordered_map<int,int>hash;
     int ans=0;

        for(auto word:words){
            int mask=0;//将字符串转掩码
            for(auto ch:word){
                mask|=1<<(ch-'a');
            }
            ans+=hash[mask];
            hash[mask]++;
        }
        return ans;
    }
};


int main(){
    Solution solution;
    vector<string>words{"aba","aabb","abcd","bac","aabc"};
    int ans=solution.similarPairs(words);
    cout<<ans<<endl;
    return 0;
}
