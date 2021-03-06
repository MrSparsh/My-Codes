//Template for solving tree questions

#include <bits/stdc++.h>
using namespace std;
#define loop(i, k, n) for (ll i = k; i < n; i += 1)
#define loop2(i, k, n, diff) for (ll i = k; i < n; i += diff)
#define debug2(x, y) cout << #x << " :: " << x << "\t" << #y << " :: " << y << endl;
#define debug3(x, y, z) cout << #x << " :: " << x << "\t" << #y << " :: " << y << "\t" << #z << " :: " << z << endl;
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
typedef long long ll; typedef pair<ll, ll> pl; typedef vector<ll> vl; typedef vector<pl> vpl; typedef vector<vl> vvl; typedef vector<vpl> vvpl;
const ll mod = 1000000007;

vector<vector<ll> > G;
void input(ll n){
	G.clear(); G.resize(n+1);
	ll u, v;
	for(ll i=1;i<=n-1;i++){
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
}

// ll par[400001];
// void input2(ll n){
// 	G.clear(),G.resize(n);
// 	loop(i,1,n){
// 		cin>>par[i];
// 		G[par[i]].pb(i);
// 		G[i].pb(par[i]);
// 	}
// }

void dfs(ll u, ll par){
	for(ll v:G[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}

int main()
{
	boost;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	
	return 0;
}