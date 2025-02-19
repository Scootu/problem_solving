#include <iostream>

using namespace std;

int main(){
    int a =0, b = 0,y = 0;
    cin>>a >> b;
    while(cin.fail() || a <1 || b<1 || a > 10 || b > 10 || a > b){
        cin.clear();
        cin.ignore();
        cin>> a >> b;
    }
    while(a <= b){
        a*=3; //Tripled
        b*=2; //doubled
        y++;
    }
    cout<< y;
    return 0 ;
}
