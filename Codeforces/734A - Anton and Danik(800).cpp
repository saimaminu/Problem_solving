#include <iostream>
using namespace std;

void won(string s){
    int a=0,d=0;
    for(int i=0;i<s.length();i++){
    s[i]=='A'? a++:d++;
    }
    if(a>d) cout<<"Anton";
   else if(a<d) cout<<"Danik";
   else cout<<"Friendship";
return;
}
int main()  
{   int n;
    string s;
    cin>>n>>s;
    won(s);
    return 0;
}