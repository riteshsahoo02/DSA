#include <iostream>
#include<vector>
using namespace std;
using vvi = vector<vector<int>>;

void DFS(int node,vvi& adj,vector<bool> &visited, vector<int>  &ans){
    visited[node] = 1;
    ans.push_back(node);
    for(int neighbour: adj[node]){
        if(!visited[neighbour])
            DFS(neighbour, adj, visited, ans);
    }
}
int main(){
    int vertex, edges;
    cout<<"Enter no. of vertices and edges for graph:";
    cin>>vertex>>edges;
    vector<vector<int>> adjList(vertex);
    int u,v;
    cout<<"Enter edges:";
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for(int i=0;i<vertex;i++){
        cout<<i<<"-->";
        for(int neighbour: adjList[i]){
            cout<<neighbour<<" ";
        }
        cout<<endl;
    }
    vector<int> ans;
    vector<bool> visited(vertex);
    DFS(0,adjList, visited,ans);
    cout<<"DFS Traversal"<<endl;
    for(int node: ans)
        cout<<node<<"-->";
    return 0;
}