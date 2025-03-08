#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

   

        vector<int>findAnagrams(string s,string p){
         vector<int>ans;   
         array<int,26>count_s{};
         array<int,26>count_p{};
         int len=s.length();

         for(auto ch_p:p){
            count_p[ch_p-'a']++;
         }
         
         for(int left=0,right=0;right<len;right++){
            count_s[s[right]-'a']++;
            if(right-left+1>=p.length()){
                if(count_p==count_s)
                 ans.push_back(left);
                 count_s[s[left]-'a']--;
                 left++;   
            }
         }
         return ans;
        }

};

int main(){
    Solution solution;
    string s1="cbaebabacd";
    string p1="abc";
    string s2= "abab";
    string p2="ab";
    vector<int>ans1;
    vector<int>ans2;
    ans1=solution.findAnagrams(s1,p1);
    ans2=solution.findAnagrams(s2,p2);

    for(auto num1:ans1)
    cout<<num1<<" ";
    cout<<endl;

    for(auto num2:ans2)
    cout<<num2<<" ";
    cout<<endl;
    
    return 0;
}
