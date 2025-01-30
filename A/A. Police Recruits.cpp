#include <iostream>

using namespace std;

int main()
{
    int n = 0, unt = 0,force = 0  ;
    cin >> n;
    for(int i = 0 ; i<n; ++i)
    {
        int temp = 0 ;
        cin >> temp ;
        if(temp !=  -1)
        {
            force += temp;
        }
        else
        {
            if(force > 0)
            {
                --force;
            }
            else
            {
                ++unt;
            }
        }
    }
    cout << unt <<endl;
    return 0 ;
}
