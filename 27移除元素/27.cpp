#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int removeElement(vector<int>&nums,int val ){
      int index=0;
      for(int num:nums){
        if(num!=val)
          nums[index++]=num;
      }
      return index;
    }
};

int main(){
  vector<int>nums={0,1,2,2,3,0,4,2};
  int val=2;
  Solution solution;
  int result=solution.removeElement(nums,val);
  cout<<result<<endl;
  return 0;
}
