#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string str ;
    int moves = 0 ;
    char c = 'a'; // initial

    cin >> str;
    for(int i = 0 ; i< str.length(); ++i)
    {
        moves += min(abs(c-str[i]),26-abs(c-str[i]));

        c = str[i];
    }

    cout << moves << endl;
    return 0 ;
}
