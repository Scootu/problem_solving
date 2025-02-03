#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> snacks(n);
    for (int i = 0; i < n; ++i) {
        cin >> snacks[i];
    }

    set<int> waiting; 
    int next = n;     

    for (int i = 0; i < n; ++i) {
        waiting.insert(snacks[i]);  
        
        
        while (waiting.count(next)) {
            cout << next << " ";
            waiting.erase(next);
            next--;
        }
        cout << endl; 
    }

    return 0;
}
