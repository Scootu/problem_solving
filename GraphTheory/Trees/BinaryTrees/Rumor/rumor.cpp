#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <sstream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <stdio.h>
#include <assert.h>
#include <memory.h>
#include <bitset>

using namespace std;

#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define clr(v, d) memset(v, d, sizeof(v))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lpi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); --i)

typedef long long ll;
const ll OO = 1e8;

const double EPS = (1e-7);
int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1
                                                                     : 1; }

#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;
ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 8432;
ll c[template_array_size];

vector<ll> edges[100005];
bool vis[100005];

ll dfs(ll v)
{
    ll mn = c[v];
    vis[v] = 1;

    for (ll x : edges[v])
    {
        if (!vis[x])
        {
            mn = min(mn, dfs(x));
        }
    }
    return mn;
}

void solve()
{
    cin >> n >> m;

    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (ll i = 0; i < m; i++)
    { // Adjacency list
        ll u, v;
        cin >> u >> v;
        --u;
        --v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            ans += dfs(i);
        }
    }

    cout << ans << '\n';
}
int main()
{
    solve();
    return 0;
}