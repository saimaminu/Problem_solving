#include <iostream>
using namespace std;
 
 int move(string s){
    int take=0,i=0;
    while(i<s.length()){
        if(s[i]==s[i+1])take++;
        i++;
    }
    return take;
}
int main() 
{   int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<move(s);
    return 0;
}