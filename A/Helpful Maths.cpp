#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    string line ;
    vector<int> arr(0);
    getline(cin,line);
    istringstream iss(line);
    int i = 0 ;
    while(i < line.length()){
        int t = 0 ;
        if(iss >> t)
            arr.push_back(t);
        ++i;
    }
    sort(arr.begin(),arr.end());
    cout << arr[0];
    for(int i = 1 ; i<arr.size();++i){
        cout << '+'<<arr[i];
    }

    return 0 ;
}
