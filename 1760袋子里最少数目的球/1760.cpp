#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>nums;
        int maxOperations;
        int minimumSize(vector<int>&nums,int maxOperations){
            auto judge=[&](auto &&judge,int k)->bool{
                int count=0;
                for(auto&i:nums){
                    count+=ceil((double)i/k)-1;
                }
                if(count>maxOperations)
                return false;
               
                return true;

            };
            this->nums=nums;
            this->maxOperations=maxOperations;
            int n=nums.size();
            int left=1;
            int right=*max_element(nums.begin(),nums.end());
            while(left<=right){
                int middle=(left+right)/2;
                if(judge(judge,middle)==false)
                left=middle+1;
                else 
                right=middle-1;
            }
            return left;
        }
};

int main(){
    Solution solution;
    vector<int>nums{2,4,8,2};
    int maxOperations=4;
    int result=solution.minimumSize(nums,maxOperations);
    cout<<result<<endl;
    return 0;
}
