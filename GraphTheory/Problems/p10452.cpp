#include <iostream>
#include <vector>
#include <string>

using namespace std;

const char *key = "IEHOVA#"; // Order of valid steps
int dx[] = {-1, 0, 0}; // forth, left, right
int dy[] = {0, -1, 1}; // forth, left, right
string moves[] = {"forth", "left", "right"};

void solve(int m, int n, vector<string> &grid) {
    int x, y;
    
    // Find '@' (starting position)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '@') {
                x = i;
                y = j;
                break;
            }
        }
    }
    
    vector<string> path;
    for (int i = 0; key[i]; i++) { // Follow the order "IEHOVA#"
        for (int d = 0; d < 3; d++) { // Try forth, left, right
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && ny >= 0 && ny < n && grid[nx][ny] == key[i]) {
                path.push_back(moves[d]);
                //update
                x = nx;
                y = ny;
                break;
            }
        }
    }

    // Print the path
    for (size_t i = 0; i < path.size(); i++) {
        if (i > 0) cout << " ";
        cout << path[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<string> grid(m);
        for (int i = 0; i < m; i++) {
            cin >> grid[i];
        }
        solve(m, n, grid);
    }
    return 0;
}
