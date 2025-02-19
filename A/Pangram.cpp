#include <iostream>
#include <string>
#include <cstring>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string input;
    cin>> input;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        set<char> letter;
        for (char c : input)
        { // convert to lowercase
            int v = toupper((int)c);
            letter.insert(v); // all uppercase letters
        }

        if (letter.size() == 26)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}