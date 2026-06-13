// BFS Traversal is a level order traversal and uses queue(FIFO) and visited array. TC: O(V+E) SC: O(V)

#include <iostream>
#include<queue>
#include <vector>
using namespace std;

void bfsGraph(int v,vector<int> adj[], vector<int>&ans){
    queue<int>q;
    vector<int> visited(v, 0);
    q.push(0);
    visited[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
}
int main(){
    int vertex, edges;
    cout<<"Enter no.of vertices and edges for graph:";
    cin>>vertex>>edges;
    int u, v;
    vector<int> adjList[vertex];
    cout<<"Enter edges:";
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for(int i=0;i<vertex;i++){
        cout<<i<<"-->";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> ans;
    bfsGraph(vertex, adjList, ans);
    cout<<"BFS Graph Traversal"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"-->";
    }
    return 0;
}
