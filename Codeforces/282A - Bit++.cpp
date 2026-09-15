#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n,X=0;
    string a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a=="X++") X++;
        else if(a=="++X") ++X;
        else if(a=="X--") X--;
        else if(a=="--X") --X;
    }
    cout<<X;
    return 0;
}