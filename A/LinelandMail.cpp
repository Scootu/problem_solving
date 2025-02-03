#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cities(n);
    
    for (int i = 0; i < n; i++) {
        cin >> cities[i];
    }

    for (int i = 0; i < n; i++) {
        int mini, maxi;

        
        if (i == 0) {
            mini = abs(cities[i] - cities[i + 1]); 
        } else if (i == n - 1) {
            mini = abs(cities[i] - cities[i - 1]); 
        } else {
            mini = min(abs(cities[i] - cities[i - 1]), abs(cities[i] - cities[i + 1])); 
        }

       
        maxi = max(abs(cities[i] - cities[0]), abs(cities[i] - cities[n - 1])); 

        cout << mini << " " << maxi << "\n";
    }

    return 0;
}
