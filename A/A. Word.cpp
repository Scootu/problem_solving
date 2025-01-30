#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int l = 0, U  = 0 , i = 0;
    while(i < str.length()){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            ++U;
        }else if(str[i] >='a'&& str[i] <='z'){
            ++l;
        }
        ++i;
    }
    if(l > U || l == U){
        for(auto&x : str){
            x = tolower(x);
        }
    }else if(l < U){
        for(auto&x : str){
            x = toupper(x);
        }
    }
    cout << str ;
    return 0 ;
}
