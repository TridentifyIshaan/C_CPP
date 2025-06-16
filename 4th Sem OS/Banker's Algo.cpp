#include <iostream>
using namespace std;

int main() {
    int p = 5, r = 3; // Number of processes and resources

    // Allocation Matrix
    int alloc[p][r] = { {0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2} };

    // Maximum Matrix
    int max[p][r] = { {7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3} };

    // Available Resources
    int avail[r] = {3, 3, 2};

    int f[p] = {0}, ans[p], ind = 0, need[p][r];

    // Calculate Need Matrix
    for (int i = 0; i < p; i++)
        for (int j = 0; j < r; j++)
            need[i][j] = max[i][j] - alloc[i][j];

    // Banker's Algorithm
    for (int k = 0; k < p; k++) {
        for (int i = 0; i < p; i++) {
            if (!f[i]) {
                int flag = 0; // Check if process can be allocated resources
                for (int j = 0; j < r; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1; // Process cannot be allocated resources
                        break;
                    }
                }
                if (!flag) { // true
                    ans[ind++] = i;
                    for (int j = 0; j < r; j++)
                        avail[j] += alloc[i][j];
                    f[i] = 1;
                }
            }
        }
    }

    // Check Safe State
    bool safe = true;
    for (int i = 0; i < p; i++) {
        if (!f[i]) {
            safe = false;
            cout << "System is NOT in a safe state.\n";
            break;
        }
    }

    if (safe) {
        cout << "System is in a SAFE state.\nSafe Sequence: ";
        for (int i = 0; i < p - 1; i++)
            cout << "P" << ans[i] << " -> ";
        cout << "P" << ans[p - 1] << endl;
    }
    return 0;
}