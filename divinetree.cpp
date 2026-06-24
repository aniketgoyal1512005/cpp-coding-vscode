#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long m;
        cin>>n>>m;
        bool done=0;

        for(int root=1;root<=n;root++){
            vector<vector<int>>adj(n+1);
            vector<pair<int,int>>edges;
            int parent=0;

            for(int i=1;i<=n;i++){
                if(i==root)continue;
                if(parent==root)parent++;
                edges.push_back({parent,i});
                adj[parent].push_back(i);
                adj[i].push_back(parent);
                parent++;
                if(parent>n)parent=1;
            }

            vector<long long>d(n+1);
            queue<int>q;
            vector<int>vis(n+1,0);
            d[root]=root;
            q.push(root);
            vis[root]=1;

            while(!q.empty()){
                int u=q.front();q.pop();
                for(int v:adj[u]){
                    if(!vis[v]){
                        d[v]=min((long long)v,d[u]);
                        vis[v]=1;
                        q.push(v);
                    }
                }
            }

            long long sum=0;
            for(int i=1;i<=n;i++)sum+=d[i];
            if(sum==m){
                cout<<root<<endl;
                for(auto e:edges)cout<<e.first<<" "<<e.second<<endl;
                done=1;
                break;
            }
        }
        if(!done)cout<<-1<<endl;
    }
    return 0;
}
