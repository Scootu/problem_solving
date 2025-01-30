#include <iostream>

using namespace std;

int main(){
    int g = 1 , n = 0 , l = 0;
    cin >> n ;
    cin >> l;
    for(int i = 1 ; i < n;++i){
        int r ;
        cin >> r;
        if(r != l){
            ++g;
            l = r;
        }
    }
    cout << g <<endl;
    return 0 ;
}
