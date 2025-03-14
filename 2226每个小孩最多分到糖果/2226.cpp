#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{
   public: 
   vector<int>candies;
   ll k;    
    int maximumCandies(vector<int>&candies,ll k){
         this->candies=candies;
         this->k=k;
         
         auto check=[&](auto&&check,ll middle)->bool{
            ll sum=0;
            if(middle==0)
            return true;

            for(auto candy:candies)
            sum+=(ll)candy/middle;

            if(sum>=k)
            return true;

            return false;
         };

         ll left=0;
         ll right=*max_element(candies.begin(),candies.end());
         
         while(left<=right){
            ll mid=(left+right)>>1;
            if(check(check,mid))
             left=mid+1;
             
            else
            right=mid-1;

         }
         return left-1;
    }
};

int main(){
    Solution solution;
    vector<int>test1{5,8,6};
    long long k1=3;
    int ans1=solution.maximumCandies(test1,k1);
    cout<<ans1<<endl;
    vector<int>test2{2,5};
    long long k2=11;
    int ans2=solution.maximumCandies(test2,k2);
    cout<<ans2<<endl;
    return 0;
}
