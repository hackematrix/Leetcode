#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int treeDiameter(vector<vector<int>>&edges){
               //邻接表
               vector<unordered_set<int>>graphs(edges.size()+1);

               //构建表
               for(auto edge:edges){
                graphs[edge[0]].insert(edge[1]);
                graphs[edge[1]].insert(edge[0]);
               } 

               int ans=0; //答案
               vector<bool>visit(graphs.size(),false);

              auto dfs=[&](auto&&dfs,int vertex,vector<unordered_set<int>>&graph,vector<bool>&vit)->int{
                    vit[vertex]=true;

                    int first_val=0;
                    int second_val=0;
                    int distance=0;

                    for(int neighbour:graph[vertex]){
                        if(!vit[neighbour]){
                            distance=dfs(dfs,neighbour,graph,vit)+1;
                            if(distance>first_val){
                                second_val=first_val;
                                first_val=distance;
                            }
                            else if(distance>second_val)
                            second_val=distance;
                        }
                    }
                    ans=max(ans,first_val+second_val);
                return  first_val;
              };

              dfs(dfs,0,graphs,visit);
              return ans;
        }
};


int main(){
    Solution solution;
    vector<vector<int>>edges1{{0,1},{0,2}};
    vector<vector<int>>edges2{
        {0,1},{1,2},{2,3},{1,4},{4,5}};
    int ans1=solution.treeDiameter(edges1);
    int ans2=solution.treeDiameter(edges2);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    return 0;    

}
