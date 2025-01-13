#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //统计0的个数,保证0的个数只有1
    int longestSubarray(vector<int>&nums) {
       int ans=0;
        int left=0;//左指针
        int count=0;//统计0的计数器
        for (int right=0;right<nums.size();right++) {
            if (nums[right]==0)
                count++;
            while (count>1) {
                if (nums[left]==0)
                    count--;
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans;
    }
};
int main() {
    Solution solution;
    vector<int>nums{0,1,1,1,0,1,1,0,1};
    int result=solution.longestSubarray(nums);
    cout<<result<<endl;
    return 0;
}
