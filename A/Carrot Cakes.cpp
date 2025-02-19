#include <iostream>

using namespace std;

int main()
{
    int n = 0, t =0,k = 0, d = 0,backed =0, time1 = 0, time2 = 0 ;
    cin >> n >> t >> k >> d ;
    while(backed < n)
    {
        backed += k;
        time1 += t;
    }
    backed = 0 ;
    // 8 6 4 5
    while(backed < n){
          time2 += t;
          backed += k;
          if(d <=t ){
            t = d;
            k = k*2;
          }else {
             d -= t;
          }
    }
    if(time1 <= time2){
        cout << "NO"<<endl;
    }else if(time1 > time2) {
        cout << "YES"<<endl;
     }
    return 0 ;
}
