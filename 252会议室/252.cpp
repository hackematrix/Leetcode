#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool canAttendMeetings(vector<vector<int>>&intervals){
            sort(intervals.begin(),intervals.end());
            int pre=0;
            for(auto cur:intervals){
                if(pre>cur[0])
                return false;
                pre=cur[1];
            }
            return true;
        }

        void print(bool ans){
            if(ans==true)
            cout<<"true"<<endl;
            else
            cout<<"false"<<endl;

        }
};

int main(){
    Solution solution;
    vector<vector<int>>test1{{0,30},{5,10},{15,20}};
    bool ans1=solution.canAttendMeetings(test1);
    solution.print(ans1);
    return 0;
}
