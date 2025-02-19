#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int i = 0;
    set<char> arr;

    for (int i = 0; i < str.length();++i ) {
         arr.insert(str[i]);
    }
    if(arr.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    }else {
        cout << "IGNORE HIM!";
    }
    return 0 ;
}
