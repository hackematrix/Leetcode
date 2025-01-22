#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    //逆波兰表达式
    int evaIRPN(vector<string>& tokens){
       stack<int>st;
       for(string s:tokens){
         if(s=="+"||s=="-"||s=="*"||s=="/"){
           int num1=st.top();
           st.pop();
           int num2=st.top();
           st.pop();
           if(s=="+")
             st.push(num1+num2);
           if(s=="-")
             st.push(num2-num1);
           if(s=="*")
             st.push(num1*num2);
           if(s=="/")
             st.push(num2/num1);
         }
         else{
           st.push(stoi(s));
         }
       }
        
      return st.top();
    }
};

int main(){
  vector<string>tokens={"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
  Solution solution;
  int result=solution.evaIRPN(tokens);
  cout<<result<<endl;
  return 0;
}
