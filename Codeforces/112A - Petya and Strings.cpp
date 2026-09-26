#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for (int i=0;i<s1.length();i++){
        //convert the strings to upper-case
    s1[i]=toupper(s1[i]);
    s2[i]=toupper(s2[i]);
    }
    //compare the strings
    if (s1==s2) cout<<"0";
        else if (s1>s2) cout<<"1";
        else  cout<<"-1";
    return 0;
}