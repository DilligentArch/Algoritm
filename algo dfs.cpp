#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll n=1e7+10;
bool vis[n];
vector<ll>adj[n];

int main()
{
    cout<< "Enter Nodes"<<endl;
    ll node,edge,st;
    cin>>node;
    cout<< "Enter edges"<<endl;
    cin>>edge;
    for(ll i=1;i<=edge;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
        cout<< "Enter the start node"<<endl;
        cin>>st;
        stack<ll>sq;
        sq.push(st);
        vis[st]=true;
        cout<<"Dfs result"<<endl;
        while(!sq.empty()){
            ll t=sq.top();
            sq.pop();
            cout<<t<<endl;
            for(ll i=0;i<adj[t].size();i++){
                if(!vis[adj[t][i]]){
                    vis[adj[t][i]]=true;
                    sq.push(adj[t][i]);
                }
            }

        }




}
