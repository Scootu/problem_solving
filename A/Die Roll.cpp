#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int y = 0, w = 0,p = 0 ;
    cin >> y >> w ;
    p = max(y,w);
    if(p == 6)
    {
        cout << "1/6";
    }
    else if(p == 0 || p == 1)
    {
        cout << "1/1";
    }
    else
    {
        p = (6 - p)+1;
        if(p < 4)
        {
            int a = 6 / p ; // p = 3
            cout <<"1/"<<a;
        }
        else if(p == 4)
        {
            cout <<"2/3";
        }
        else if(p>4)
        {
            cout <<p<<"/"<<"6";
        }
    }
    return 0 ;
}
