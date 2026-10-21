
#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int y,count=0;
    for(int i=0;i<n;i++) {
        cin>>y;
        if(y+k<=5) count++;
    }
    cout<<count/3<<endl;
    return 0;
}
