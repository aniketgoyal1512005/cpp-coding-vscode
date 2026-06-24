#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=0;
        }
    }
    int e;
    cout << "Enter the number of edges: ";
    cin >> e;
    for(int i=0;i<e;i++){
        int u,v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        mat[u][v]=1;
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

}