#include<bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution{
    public:
        vector<int>ranks;
        int cars;
        ll repairCars(vector<int>&ranks,int cars){
            this->ranks=ranks;
            this->cars=cars;

            auto check=[&](auto&&check,ll middle)->bool{
                ll sum=0;
                for(auto rank:ranks)
                sum+=sqrt(middle/rank);

                if(sum>=cars)
                return true;

                return false;
            };

            ll left=0;
            ll right=1e14;
            while(left<=right){
                ll middle=(left+right)>>1;

                if(check(check,middle))
                right=middle-1;
                else
                left=middle+1;
            }
            return left;
        }

};

int main(){
    Solution solution;
    vector<int>ranks{4,2,3,1};
    int cars=10;
    long long ans=solution.repairCars(ranks,cars);
    cout<<ans<<endl;
    return 0;
}
