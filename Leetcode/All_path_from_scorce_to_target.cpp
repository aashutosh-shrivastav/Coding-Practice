#include<bits/stdc++.h>

using namespace std;

class Solution{
    private:
    vector<vector<int>> graph;
    public:
    

    Solution(vector<vector<int>> g) : graph(g) {}

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){
        vector<vector<int>> ans;
        vector<int> path;
        dfs(0,path,graph,ans);
        return ans;
    }


    void dfs(int cur,vector<int> & path,vector<vector<int>>& g,vector<vector<int>>& ans){
        if(cur==g.size()-1){
            path.push_back(cur);
            ans.push_back(path);
            path.pop_back();
            return;
        }
        path.push_back(cur);
        for(int i=0;i<g[cur].size();i++){
            dfs(g[cur][i],path,g,ans);
        }
        path.pop_back();
        return;
    }

    void display_all_path(){
        vector<vector<int> > dis = allPathsSourceTarget(graph);
        cout<<"\nDisplaying all "<<dis.size()<<" paths from 0 to "<<(graph.size()-1)<<" :\n";
        for(int i=0;i<dis.size();i++){
            cout<<"\npath "<<i+1<<" : ";0
            for(int j=0;j<dis[i].size();j++){
                cout<<" --> "<<dis[i][j];
            }
            cout<<endl;
        }
        return ;
    }
};

int main(){
    cout<<"\nenter no of nodes : ";
    int n;
    cin>>n;
    vector<vector<int>> g;


    for(int i=0;i<n;i++){
        cout<<"\nenter no of connected node from element id  "<<i<<" : ";
        int m;
        cin>>m;
        vector<int > nodes;
        for(int j=0;j<m;j++){
            cout<<"node "<<i<<" is connnected to node : ";
            int x;
            cin>>x;
            nodes.push_back(x);
        }
        g.push_back(nodes);
        cout<<endl;
    }

    Solution obj(g);
    obj.display_all_path();
    
    return 0;
}