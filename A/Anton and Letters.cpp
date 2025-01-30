#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string str = "" , str1 ="";
    int i = 1 ;
    getline(cin,str);
    set<int> arr;
    while(i < str.length()){
        if(str[i]!= ',' && str[i] != '}' && str[i] != ' ')
           arr.insert(str[i]);
        ++i;
    }

    cout << arr.size() <<endl;
    return 0 ;
}
