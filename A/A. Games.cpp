#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
    int n = 0 , match = 0 ;
    cin >> n ;

    vector<pair<int,int>> arr(n);
    for(int i = 0 ; i< n ; ++i){
        pair<int,int> team;
        cin >> team.first >> team.second ;
        arr[i] = team;
    }
    for(int i = 0 ; i< n ; ++i){
        int h = arr[i].first;
        for(int j = 0 ; j < n;++j){
            if(h == arr[j].second)
                ++match;
        }
    }
    cout << match <<endl;
    return 0 ;
}
