#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int n ;
    while(cin >> n && n != 0)
    {
        unsigned int sq = (int) sqrt(n); // to geting the numbers of factors if odd = on , even = off , if the number have a square root it's mean that the numbers of factors is even so it's off
        cout << (sq * sq == n ? "yes\n" : "no\n" );
    }
    return 0 ;
}
