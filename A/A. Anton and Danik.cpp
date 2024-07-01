#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0, i =0,W_A = 0,W_D =0;
    string s;
    cin >> n;
    while(cin.fail() || n < 1 || n > 100000)
    {
        cin >> n;
    }
    cin.ignore();
    getline(cin,s);
    while(s[i] != '\0')
    {
        if(s[i] == 'A')
        {
            W_A++;
        }
        else if(s[i] == 'D')
        {
            W_D++;
        }
        i++;
    }
    if(W_A > W_D)
    {
        cout <<"Anton";
    }
    else if(W_A < W_D)
    {
        cout << "Danik";
    }
    else if(W_A == W_D)
    {
        cout << "Friendship";
    }

    return 0 ;
}
