#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<int> pieces(k);

        for (int i = 0; i < k; ++i) {
            cin >> pieces[i];
        }

        sort(pieces.begin(), pieces.end(), greater<int>());

        int operations = 0;
        int idx = 0;


        while (idx < k && pieces[idx] > 1) {

            operations += (pieces[idx] - 1);
            idx++;
        }


        operations += (n - 1);

        cout << operations << "\n";
    }

    return 0;
}


