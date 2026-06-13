// --------------- Unweighted undirected graph -------------
#include <iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edges;
    cout<<"Enter no.of vertices and edges:";
    cin>>vertex>>edges;
    vector<int> adjList[vertex];
    int u, v;
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
    return 0;
}

// ----------- Undirected Weighted graph ------------
// #include<iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int vertex, edges;
//     cout<<"Enter no.of vertices and edges for graph:";
//     cin>>vertex>>edges;
//     int u, v, weights;
//     vector<pair<int,int>> adjList[vertex];
//     cout<<"Enter edges with weights:";
//     for(int i=0;i<edges;i++){
//         cin>>u>>v>>weights;
//         adjList[u].push_back(make_pair(v, weights));
//         adjList[v].push_back(make_pair(u, weights));
//     }
//     for(int i=0;i<vertex;i++){
//         cout<<i<<"-->";
//         for(int j=0;j<adjList[i].size();j++){
//             cout<<"("<<adjList[i][j].first<<","<<adjList[i][j].second<<") ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// --------------- Directed Unweighted Graph ---------------
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int vertex, edges;
//     cout<<"Enter no. of vertices and edges:";
//     cin>>vertex>>edges;
//     int u, v;
//     vector<int> adjList[vertex];
//     cout<<"Enter edges:";
//     for(int i=0;i<edges;i++){
//         cin>>u>>v;
//         adjList[u].push_back(v);
//     }
//     for(int i=0;i<vertex;i++){
//         cout<<i<<"-->";
//         for(int j=0;j<adjList[i].size();j++){
//             cout<<adjList[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
