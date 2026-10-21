
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        stack<int> st;

        for (int j = 0; j < n; j++) {
            cin >> x;
            st.push(x);
        }

        int mx = st.top();
        st.pop();

        while (!st.empty()) {
            if (st.top() > mx)
                mx = st.top();

            st.pop();
        }

        cout << mx << endl;
    }

    return 0;
}
