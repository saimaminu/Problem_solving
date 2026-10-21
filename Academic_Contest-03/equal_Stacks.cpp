
#include <iostream>
#include <stack>
using namespace std;

int equalStacks(int a[],int b[],int c[],int n1,int n2,int n3){
stack<int> s1, s2, s3;
    int h1 = 0, h2 = 0, h3 = 0;

    for (int i = 0; i < n1; i++) {
        cin >> a[i];
        h1 += a[i];
    }
    for (int i = n1 - 1; i >= 0; i--)
        s1.push(a[i]);

    for (int i = 0; i < n2; i++) {
        cin >> b[i];
        h2 += b[i];
    }
    for (int i = n2 - 1; i >= 0; i--)
        s2.push(b[i]);

    for (int i = 0; i < n3; i++) {
        cin >> c[i];
        h3 += c[i];
    }
    for (int i = n3 - 1; i >= 0; i--)
        s3.push(c[i]);

    while (!(h1 == h2 && h2 == h3)) {
        if (h1 >= h2 && h1 >= h3) {
            h1 -= s1.top();
            s1.pop();
        }
        else if (h2 >= h1 && h2 >= h3) {
            h2 -= s2.top();
            s2.pop();
        }
        else {
            h3 -= s3.top();
            s3.pop();
        }
    }

    return h1;

}


int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    cout<<equalStacks(a,b,c,n1,n2,n3);
    return 0;
}
