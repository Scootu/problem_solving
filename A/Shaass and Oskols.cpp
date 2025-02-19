#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0, m = 0 ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i< n ; ++i)
    {
        cin >> arr[i];
    }
    cin >> m ;
    for(int i = 0 ; i< m ; ++i)
    {
        int x = 0 ;
        int y = 0 ;
        cin >> x >> y ;
        --x;
        if(x != 0 && x >0)
        {
            arr[x-1] += y - 1;

        }
        if(x != n-1)
        {
            arr[x+1] += arr[x] - y;

        }
        arr[x] = 0;
    }
    for(int i = 0 ; i< n; ++i)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}
