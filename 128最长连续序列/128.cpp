#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int longestConsecutive(vector<int>& nums){
      //哈希集合去重
      unordered_set<int>hashset;
      for(int num:nums)
        hashset.insert(num);
      int ans=0; //保存答案
      for(int pivot:hashset){
        if(hashset.count(pivot-1)!=0)
          continue;//保证数字不是开头
        int change=pivot+1;//偏移量
        while(hashset.count(change)!=0)

          change++;
        ans=max(ans,change-pivot);//更新答案

      }
      return ans;
    }
};

int main(){
  vector<int>nums={0,3,7,2,5,8,4,6,0,1};
  Solution solution;
  int result=solution.longestConsecutive(nums);
  cout<<result<<endl;
  return 0;
}
