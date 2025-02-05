#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> coins(n);
    int total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        total_sum += coins[i];
    }
    
    sort(coins.rbegin(), coins.rend()); // Sort in descending order
    
    int my_sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        my_sum += coins[i];
        count++;
        if (my_sum > total_sum - my_sum) {
            cout << count << endl;
            return 0;
        }
    }
    
    return 0;
}
