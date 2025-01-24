#include <iostream>

using namespace std;

void solve()
{

    int n, m, a, d;
    int count = 0;
    cin >> n >> m >> a >> d;
    while (n <= m)
    {
        {
            if (n % a != 0 && n % (a + d) != 0 && n % (a + 2 * d) != 0 && n % (a + 3 * d) != 0 && n % (a + 4 * d) != 0)
            {
                count++;
            }
            n++;
        }
        
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}