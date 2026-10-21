
#include <iostream>
using namespace std;

long long arr[37];

long long stepPerms(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;

    if (arr[n] != 0)
        return arr[n];

    arr[n] = (stepPerms(n - 1) +
              stepPerms(n - 2) +
              stepPerms(n - 3)) % 10000000007LL;
    return arr[n];
}

int main() {
    int s, n;
    cin >> s;
    while (s--) {
        cin >> n;
        cout << stepPerms(n) << endl;
    }
    return 0;
}
