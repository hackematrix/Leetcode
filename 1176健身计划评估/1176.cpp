#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int diePlanPerformance(vector<int>&calories,int k,int lower,int upper)
    {
        int ans=0;
        int sum=0;
        for(int i=0;i<calories.size();i++)
        {
            sum+=calories[i];
            if(i<k-1)
                continue;
          if(sum<lower)
              ans--;
            if(sum>upper)
                ans++;
            if(i-k+1>=0)
            {
                sum-=calories[i-k+1];
            }
        }
        return ans;
    }
};

int main()
{
    vector<int>calories{1,2,3,4,5};
    int k=1;

    int lower=3;
    int upper=3;
    Solution solution;
    int result=solution.diePlanPerformance(calories,k,lower,upper);
    cout<<result<<endl;
    return 0;
}
