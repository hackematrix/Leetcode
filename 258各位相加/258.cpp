#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {
        if(num<10)
            return num;
        while(num>=10)
        {
            int temp=0;
            int sum=0;
            while(num!=0)
            {
                temp=num%10;
                num/=10;
                sum+=temp;//拆数
            }
            num=sum;
        }
        return num;

    }

};
int main()
{
    Solution solution;
    int num;
    cin>>num;
    int result=solution.addDigits(num);
    cout<<result<<endl;
    return 0;

}
