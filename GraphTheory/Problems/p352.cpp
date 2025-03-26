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

const int N = 30;
ll n, t, r, c;
// adjacency matrix

int gridsize = 25;
char adjMatrix[30][30];
int vis[30][30];
int x[] = {0, 0, -1, 1, -1, -1, 1, 1};
int y[] = {1, -1, 0, 0, 1, -1, 1, -1};
bool isValid(int row, int column)
{
    return row >= 0 && column >= 0 && row < gridsize && column < gridsize;
}

void cancel(int row, int column)
{
    if (vis[row][column])
    {
        return;
    }
    vis[row][column] = 1;
    lp(i, 8)
    {
        int r = row + x[i];
        int c = column + y[i];
        if (isValid(r, c) && !vis[r][c] && adjMatrix[r][c] == '1')
        {
            cancel(r, c);
        }
    }
}

int main()
{
    int testCase = 1;
    while (cin >> gridsize)
    {

        lp(i, gridsize) lp(j, gridsize)
        {
            char b;
            cin >> b;
            adjMatrix[i][j] = b;
        }
        memset(vis, 0, sizeof(vis));
        int pro = 0;
        lp(i, gridsize) lp(j, gridsize)
        {
            if (!vis[i][j] && adjMatrix[i][j] == '1')
            {
                cancel(i, j);
                pro++;
            }
        }
        printf("Image number %d contains %d war eagles.", testCase++, pro);
    }

    return 0;
}