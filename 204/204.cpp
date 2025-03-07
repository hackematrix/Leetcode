#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countPrimes(int n){

        vector<int>prime(n+1);
        vector<bool>is_prime(n+1);
        int ans=0;

        is_prime[0]=is_prime[1]=false;

        for(int i=2;i<=n;i++)
        is_prime[i]=true;
      
        for(int i=2;i<n;i++){
            if(is_prime[i])
            {
                prime[++ans]=i;
                if((long long)i*i>n)
                continue;
                for(int j=i*i;j<=n;j=j+i)
                is_prime[j]=false;
            }
        }
        return ans;
    }
};

int main(){
    Solution solution;
    int test1=10;
    int test2=0;
    int test3=1;
    int ans1=solution.countPrimes(test1);
    int ans2=solution.countPrimes(test2);
    int ans3=solution.countPrimes(test3);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    cout<<ans3<<endl;
    return 0;


}
