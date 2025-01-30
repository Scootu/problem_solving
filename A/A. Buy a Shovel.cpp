#include <iostream>

using namespace std;

int main(){
    int NOS = 1 , k = 0 , r = 0 , i = 0;
    cin >> k >> r ;

    while(((NOS*k)-r) % 10 != 0 && (NOS * k) % 10 != 0){
          ++NOS;
    }

    cout << NOS <<endl;
    return 0 ;
}
