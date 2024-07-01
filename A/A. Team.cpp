#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n =0 , res = 0;
    cin >> n ;
    cin.ignore();
    while(cin.fail() || n < 1 || n > 1000){
        cin.clear();
        cin.ignore();
        cin >> n ;
    }
    for(int i =0 ; i< n ; ++i){
        string line ;
        getline(cin,line);
        istringstream iss(line);
        int z =0,s =0;
        for(int t = 0; t<3;++t){
            if (iss >> t) { // read an integer from the string stream
                s += t;
            }
        }
        if(s >= 2){
            res++;
        }
    }
    cout << res;
    return 0 ;
}
