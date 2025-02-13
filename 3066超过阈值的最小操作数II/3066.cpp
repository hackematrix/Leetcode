#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution{
    public:
        priority_queue<ll,vector<ll>,greater<ll>>qu;
        int minOperations(vector<int>&nums,int k){
            for(auto num:nums)
            {
                qu.push(num);
            }
            int ans=0;
            while(!qu.empty()){
                ll x=qu.top();
                qu.pop();
                if(x>=k)
                return ans;
                ll y=qu.top();
                qu.pop();
                qu.push(2*min(x,y)+max(x,y));
                ans++;
            }
            return ans;
        }
};

int main(){
    Solution solution;
    vector<int>nums{2,11,10,1,3};
    int k=10;
    int result=solution.minOperations(nums,k);
    cout<<result<<endl;
    return 0;
}
