#include <iostream>

using namespace std;

int main(){
    int a = 27 , n = -12 ;
    int r = (a%n +n)%n ;
    cout << "a :"<<a <<" n: "<<n<<endl;
    cout << r << endl;
    cout << (a % 12)%12 << endl ;

    int arr[8] = {1,2,3,4,5,6,7,8};
    //after 34 iteration where is the position in the  array
    cout << (34 % 8) << endl ;
    int x = (34 % 8)  ; // 0 , 1 , (n-1)
    cout << arr[x]<<endl;
    // 2,4,8,6
    cout<<14% 4<<endl ;
    return 0 ;
}
