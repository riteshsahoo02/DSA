// --------------------Undirected unweighted Graph -----------
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int vertex, edges;
    cout<<"Enter no.of vertices and edges for graph:";
    cin>>vertex>>edges;
    vector<vector<bool>>adjMatr(vertex, vector<bool>(vertex, 0));
    int u, v;
    cout<<"Enter edges:";
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjMatr[u][v] = 1;
        adjMatr[v][u] = 1;
    }
    for(int i=0; i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adjMatr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// -------------- Undirected weighted Graph ---------------
// #include<iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int vertex, edges;
//     cout<<"Enter no.of vertices and edges for the graph:";
//     cin>>vertex>>edges;
//     vector<vector<int>> adjMatr(vertex, vector<int>(vertex,0));
//     int u,v,weights;
//     cout<<"Enter edges with weights:";
//     for(int i=0;i<edges;i++){
//         cin>>u>>v>>weights;
//         adjMatr[u][v] = weights;
//         adjMatr[v][u] = weights;
//     }
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<adjMatr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//--------------- Directed Unweighted Graph----------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int vertex, edges;
//     cout<<"Enter no.of vertices and edges for graph: ";
//     cin>>vertex>>edges;
//     vector<vector<bool> > adjMatr(vertex, vector<bool>(vertex, 0));
//     int u, v;
//     cout<<"Enter edges:";
//     for(int i=0;i<edges;i++){
//         cin>>u>>v;
//         adjMatr[u][v] = 1;
//     }
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<adjMatr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// --------------- Directed weighted Graph -------------------------
// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int vertex, edges;
//     cout<<"Enter no.of vertices and edges:";
//     cin>>vertex>>edges;
//     vector<vector<int>>adjMatr(vertex,vector<int>(vertex,0));
//     int u, v,weights;
//     cout<<"Enter edges with weights for directed graph:";
//     for(int i=0;i<edges;i++){
//         cin>>u>>v>>weights;
//         adjMatr[u][v] = weights;
//     }
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout<<adjMatr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }