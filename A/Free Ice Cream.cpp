#include <iostream>
#include <climits>  // for ULONG_MAX
using namespace std;

int main()
{
    int n = 0, chs = 0;

    unsigned long long x = 0;
    cin >> n >> x ;
    for(int i = 0 ; i< n ; ++i)
    {
        char si ;
        int temp = 0 ;
        cin >> si >> temp;
        if(si == '+')
        {
            x += temp;
        }
        else if(x >= temp && si == '-')
        {
            x -= temp;
        }
        else
            ++chs;
    }
    cout << x <<" "<< chs ;
    return 0 ;
}
