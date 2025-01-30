#include <iostream>

using namespace std;

int main(){
    int n = 0, b = 0,d = 0, waste = 0, emw = 0;
    cin >> n >> b >>d;
    for(int i = 0; i< n;++i){
        int o = 0 ;
        cin >> o ;
        if(o <= b){
            waste+=o;
            if(waste > d){
                ++emw;
                waste = 0 ;
            }
        }
    }
    cout << emw <<endl;
    return 0 ;
}
