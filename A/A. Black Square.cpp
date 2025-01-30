#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0, i = 0 ;
    int arr[4] = {0};
    string str ;
    for(int i = 0 ; i < 4 ; ++i)
    {
        cin >> arr[i];
    }
    cin >> str;
    while(i < str.length())
    {
        sum += arr[(str[i] - '0') -1];
        ++i;
    }
    cout << sum <<endl;
    return 0 ;
}
