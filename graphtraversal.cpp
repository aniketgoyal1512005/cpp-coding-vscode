#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    int mat[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            mat[i][j] = 0;
        }
    }

    int e;
    cout << "Enter the number of edges: ";
    cin >> e;

    for(int i = 0; i < e; i++){
        int u, v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        mat[u][v] = 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    
    int status[n];
    for(int i = 0; i < n; i++)
        status[i] = 1;

    int q[n];
    int f = 0, r = 0;
    int v;

    int s;
    cout<<"Enter start vertex: ";
    cin>>s;

    q[r++]=s;
    status[s]=2;

    cout<<"BFS Traversal: ";
    while(f < r){
        v = q[f++];
        cout<<v<<" ";

        for(int i = 0; i < n; i++){
            if(mat[v][i] == 1 && status[i] == 1){
                q[r++] = i;
                status[i] = 3;
            }
        }
    }
    

    cout << endl;
    return 0;
}
