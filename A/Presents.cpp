#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    int *T = new int[n]; // initaile new array
    for (int i = 0; i < n; i++)
    {
        cin >> T[i];
    }

    for (int i = 0; i < n; i++)
    {
        counter = 1;
        // Follow the sequence until we reach the same index again
        int r = i;
        while (T[r] != r + 1)
        {
            r++;
            counter++;
        }

        cout << counter << " ";
    }
    return 0;
}