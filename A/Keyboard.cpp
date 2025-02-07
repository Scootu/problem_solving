#include <iostream>
using namespace std;

int main()
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char m;
    cin >> m;
    if (m == 'R')
    {
        string line;
        cin >> line;
        int i = 0;
        while (line[i] != '\0')
        {
            char s = line[i];
            for (int t = 0; t < 30; t++)
            {
                if (keyboard[t] == s)
                {
                    cout << keyboard[t - 1];
                    break;
                }
            }
            i++;
        }
    }
    else
    {
        string line;
        cin >> line;
        int i = 0;
        while (line[i] != '\0')
        {
            char s = line[i];
            for (int t = 0; t < 30; t++)
            {
                if (keyboard[t] == s)
                {
                    cout << keyboard[t + 1];
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}