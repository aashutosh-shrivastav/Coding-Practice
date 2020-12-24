#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution{
    private:
    vector<vector<bool > >graph;
    
    public:
    Solution(vector<vector<bool>> g) :graph(g) {}

    void iterative_dfs(){
        //0 to n-1 nodes
        vector<bool > visited(graph.size());
        stack<int> stk;
        stk.push(0);
        visited[0]=true;

        while(!stk.empty()){
            int s = stk.top();
            stk.pop();
            for(int i=0;i<graph[s].size();i++){
                if(graph[s][i] && !visited[i]){
                    stk.push(i);
                    visited[i]=true;
                }
            }
            cout<<"visiting "<<s<<endl;
        }

    return ;
    }


};

int main(){
    
    int n;
    cout<<"enter no of nodes : ";
    cin>>n;//no of nodes
    
    vector<vector<bool> > g(n,vector<bool>(n));
    
    cout<<"no of edges :";
    int m;//no of edges
    cin>>m;

    for(int i=0;i<m;i++){
        
        int x,y;
        cout<<"enter edge from x to y :";
        cin>>x>>y;
        g[x][y]=true;
        g[y][x]=true;
    }
    Solution obj(g);
    obj.iterative_dfs();
    return 0;
}