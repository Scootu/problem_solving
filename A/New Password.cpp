#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a = (char)'a';
    int z = (char)'z';
    string password = "";
    set<char> arr;

    // Seed the random number generator
    srand(time(0));

    // Generate k distinct random characters
    while (arr.size() < k) {
        char randomChar = (char)((rand() % (z - a + 1)) + a);
        arr.insert(randomChar);
    }

    // Convert the set to a vector for easy indexing
    vector<char> charVec(arr.begin(), arr.end());

    // Construct the password
    for (int i = 0; i < n; ++i) {
        password += charVec[i % k];
    }

    cout << password << endl;

    return 0;
}
