#include<bits/stdc++.h>
using namespace std;

Struct ListNode{
  int value;
  ListNode* next;
  ListNode(): value(0),next(nullptr){}
  ListNode(int x):value(x),next(nullptr){}
  ListNode(int x,ListNode*next): value(x),next(next){}

};

class Solution{
  public:
    int ConvertBinary(ListNode* head){
      int ans=0;
      ListNode*index=head;
      while(index!=nullptr){
        ans=ans<<1;
        ans|=index->value;
        index=index->next;
      }
      return ans;
    }
}

int main(){
  Solution solution;
  ListNode*head=new ListNode(1);
  head->next=new ListNode(0);
  head->next->next=new ListNode(1);
  int result=solution.ConvertBinary(head);
  cout<<result<<endl;
  return 0;
}
