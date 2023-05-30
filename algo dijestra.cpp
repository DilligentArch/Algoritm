#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void dijkstra(vector<pair<ll,ll>>adj[],ll v, ll src){
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    vector<ll>dis(v,INT_MAX);
    pq.push({0,src});
    dis[src]=0;
    while(!pq.empty()){
        ll u=pq.top().second;
        pq.pop();

        for(ll i=0;i<adj[u].size();i++){
            ll x=adj[u][i].first;
            ll weight=adj[u][i].second;
            if(dis[u] + weight <dis[x]){
                dis[x]=dis[u]+ weight;
                pq.push({dis[x],x});
            }
        }
    }

    for(ll i=0;i<v;i++)cout<<i<< " "<< dis[i]<<endl;

}

int main()
{

    ll v,e;
    cin>>v>>e;
    vector<pair<ll,ll> >adj[v];
    for(ll i=0; i<e; i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});

    }

     ll src;
     cin>>src;
     dijkstra(adj,v,src);
}
