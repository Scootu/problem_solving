#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0 , i = 1 , t = 0;
    cin >> n ;
    string str ;
    cin >> str;
    while(i < str.length()){
        if(str[i] == str[i - 1]){
            ++t;
        }
        ++i;
    }
    cout << t ;
    return 0 ;
}
