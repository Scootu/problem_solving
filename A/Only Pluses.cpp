#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t = 0 ;

    cin >> t ;
    for(int i = 0 ; i< t; ++i)
    {
        int n = 5 ;
        vector<int> arr(3);
        int a, b,c ;
        cin >> a >> b >> c ;
        arr[0] = a ;
        arr[1] = b;
        arr[2]= c ;
        while(n--){
            sort(arr.begin(),arr.end());
            arr[0]+= 1 ;
        }
        cout << arr[0]*arr[1]*arr[2] << endl;
    }
    return 0 ;
}
