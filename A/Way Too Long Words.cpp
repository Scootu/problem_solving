#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n ;
    while(n--){
        string temp ;
        cin >> temp ;
        if(temp.length() > 10){
            string t = to_string(temp.length() - 2) ;
             cout << temp.front()+t+temp.back() <<endl ;
        }else {
          cout << temp <<endl;
        }
    }

    return 0 ;
}
