#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n  = 0, s = 0, d = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; ++i)
    {
        if(i % 2 == 0)
        {
            if(arr.back() > arr.front())
            {
                s += arr.back();
                arr.erase(arr.end() - 1);
            }
            else
            {
                s += arr.front();
                arr.erase(arr.begin());
            }
        }
        else
        {
            if(arr.back() > arr.front())
            {
                d += arr.back();
                arr.erase(arr.end() - 1);
            }
            else
            {
                d += arr.front();
                arr.erase(arr.begin());
            }
        }
    }
    cout << s << " " << d;
    return 0;
}

