#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int Digit(int n){
            int sum=0;
            while(n){
                sum+=n%10;
                n/=10;
            }
            return sum;           
        }

        int maximumSum(vector<int>&nums){
            unordered_map<int,int>hash_table;
            int ans=-1;
            for(int num:nums){
                int digit=Digit(num);
                if(hash_table.count(digit)){
                    ans=max(ans,hash_table[digit]+num);
                    hash_table[digit]=max(hash_table[digit],num);
                }
                else{
                    hash_table[digit]=num;
                }
            }
            return ans;
        }
};

int main(){
    Solution solution;
    vector<int>nums{10,12,19,14};
    int result=solution.maximumSum(nums);
    cout<<result<<endl;
    return 0;
}
