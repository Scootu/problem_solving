#include <iostream>

using namespace std;
int longestUncommonSubsequence(string a, string b)
{
    if (a == b)
        return -1;
    return max(a.length(), b.length());
}

int main()
{
    string a, b;
    cin >> a >> b;

    cout << longestUncommonSubsequence(a, b) << endl;
    return 0;
}