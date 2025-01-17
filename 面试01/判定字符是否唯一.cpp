#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isUnique(string s) {
        unordered_map<char,int>set;
        for (int i=0;i<s.length();i++) {
            set[s[i]]++;
            if (set[s[i]]>1)
                return false;
        }
        return true;
    }
};

int main() {
    Solution solution;
    string astr;
    cin>>astr;
    if (solution.isUnique(astr)==true)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
