#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    int n =  0, h = 0 , w = 0 , t =0;
    vector<int> arr;

    while(n <1 || h < 1 || n > 1000 || h > 1000 ){
        cin >> n >> h;
    }
    cin.ignore();
    string line;
    getline(cin, line);

    istringstream iss(line);
    for (int i = 0; i < n; ++i) {
        iss >> t;
        while (t < 1 || t > 2 * h) {
            iss >> t;
        }
        arr.push_back(t);
    }
    for(int i =0 ; i< n ;++i){
        if(arr[i] > h){
            w+=2;
        }else {
        w+=1;
        }
    }
    cout << w ;
    return 0 ;
}
