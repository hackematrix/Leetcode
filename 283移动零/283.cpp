#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    //逆向思维，遍历不是0的
    void moveZeros(vector<int>&nums){
        int index=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]!=0)
            nums[index++]=nums[i];
        }
        for(int i=index;i<nums.size();i++)
          nums[i]=0;

    }
};

int main(){
  vector<int>nums={0,1,0,3,12};
  Solution solution;
  solution.moveZeros(nums);
  for(int num:nums)
    cout<<num<<" ";
  cout<<endl;
  return 0;
}
