#include <iostream>
#include <stack>
using namespace std;

stack<int> st, mx;

int getMax(int x) {
    if (x == 1) {
        int val;
        cin >> val;
        st.push(val);

        if (mx.empty() || val >= mx.top())
            mx.push(val);
    }
    else if (x == 2) {
        if (st.top() == mx.top())
            mx.pop();

        st.pop();
    }
    else if (x == 3) {
        return mx.top();
    }

    return -1;
}

int main() {
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        int display = getMax(x);

        if (x == 3)
            cout << display << endl;
    }

    return 0;
}