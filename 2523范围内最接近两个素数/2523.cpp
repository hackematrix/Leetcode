#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>closestPrimes(int left,int right){
        vector<int>ans(2,-1);
        vector<bool>is_prime(right+1);
        is_prime[0]=is_prime[1]=false;
        for(int i=2;i<=right;i++)
        is_prime[i]=true;
        for(int i=2;i*i<=right;i++){
            if(is_prime[i]){
            
            for(int j=i*i;j<=right;j+=i)
            is_prime[j]=false;
            }
        }
        int distance=INT_MAX;
        int pre=1;
        for(int i=left;i<=right;i++){
            if(is_prime[i])
            {
                if(pre>=2){
                    int diff=i-pre;
                    if(distance>i-pre){
                        distance=i-pre;
                        ans={pre,i};
                    }
                }
                pre=i;
            }
        }
        return ans;
    }
};

int main(){
    Solution solution;
    int left1=10;
    int right1=19;
    int left2=4;
    int right2=6;
    vector<int>ans1;
    ans1=solution.closestPrimes(left1,right1);
    vector<int>ans2;
    ans2=solution.closestPrimes(left2,right2);

    for(auto num1:ans1)
    cout<<num1<<" ";
    cout<<endl;

    for(auto num2:ans2)
    cout<<num2<<" ";
    cout<<endl;

    return 0;

}
