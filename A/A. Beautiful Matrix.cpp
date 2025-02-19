#include <iostream>

using namespace std;

int absolu(int m)
{
    if(m >=0)
    {
        return m;
    }
    return m * -1 ;
}
int main()
{
    int r1 =0, c1 = 0 ;
    bool t;
    for(int r =0; r < 5; ++r)
    {
        for(int c =0; c <5; ++c)
        {
            cin>>t;
            if(t)
            {
                r1 = r;
                c1 = c;
                break;
            }
        }
    }
    int path = absolu(r1 - 2) + absolu(c1-2);
    cout << path<<endl;
    return 0 ;
}
