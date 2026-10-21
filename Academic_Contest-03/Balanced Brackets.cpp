
#include <iostream>
#include <stack>
using namespace std;

string isBalanced(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } 
        else {
            if (st.empty()) {
                return "NO";
            }

            char top = st.top();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return "NO";
            }

            st.pop();
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        cout << isBalanced(s) << '\n';
    }

    return 0;
}
