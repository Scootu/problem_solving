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

const int N = 100;

// adjacency matrix
bool adjMatrixBool[N][N];
char adjMatrix[N][N];

vector<int> adjMatrixAll[N][N]; // Keep all edges for a given pair of nodes

map<pair<int, int>, int> adjMatrixMap; // Imagine graph of 100000 node, but total number of edges is 50000!

// Adjacency lists
vector<vector<int>> adjList1;            // boolean relation
vector<vector<pair<int, int>>> adjList2; // cost relation (node, cost): Select 1 of multiple edges

ll n, q, r, c, t;
int vis[N][N];
void dfs(int i, int j)
{
    if (i < 0 || j < 0 || i == n || j == n)
        return;
    if (adjMatrix[i][j] == '.' || vis[i][j])
        return;
    vis[i][j] = 1;

    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}
int main()
{
    char str;
    cin >> t;
    int z = 1;
    int ans;
    while (z <= t)
    {
        cin >> n;
        ans = 0;
        memset(vis, 0, sizeof(vis));
        lp(i, n)
        {
            lp(j, n)
            {
                cin >> adjMatrix[i][j];
            }
        }
        lp(i, n) lp(j, n)
        {
            if (!vis[i][j] && adjMatrix[i][j] == 'x')
            {
                ans++;
                dfs(i, j);
            }
        }
        printf("Case %d: %d\n", z, ans);
        z++;
    }

    return 0;
}