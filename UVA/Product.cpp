#include <bits/stdc++.h>

using namespace std;

const int MXN = 600 ;
int main()
{
    string s1, s2 ;

    while(cin >> s1)
    {
        cin >> s2 ;
        // this is obligation because we need in mathimatical direction 75 position 0 is 7 before reverse
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(), s2.end());
        int a[MXN];
        memset(a,0,sizeof(a));
        for(int i = 0 ; i < s1.length() ; ++i)
        {
            for(int j = 0 ; j < s2.length(); j++)
            {
                a[i+j] += (s1[i] -'0') * (s2[j] - '0');
                cout << a[i+j]<<endl; //why i + j ?
            }

        }

        // for(int i = 0 ; i < MXN - 1; i++) cout << a[i];
        for(int i = 0 ; i< MXN - 1 ; i++)
        {
            a[i + 1] += a[i] / 10 ;
            a[i] %= 10 ;
        }
        int i = MXN - 1 ;
        while(i > 0 && a[i] == 0) i--;
        for(; i >=0; i--) cout << a[i];
        cout << endl ;
    }
    return 0 ;
}
