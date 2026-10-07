#include <iostream>
using namespace std;

string easy_math(string s){
    for(int i=0;i<s.length();i+=2){//1st loop for go forward
    // Skip the operators by moving 2 steps at a time

        for(int j=0;j<i;j+=2){
            if(s[i]<s[j]){//2nd loop for compare
               swap(s[i],s[j]);
            }
        }
        
    }
    return s;
}
int main() 
{ 
    string s;
    cin>>s;
    cout<<easy_math(s);

    return 0;
}