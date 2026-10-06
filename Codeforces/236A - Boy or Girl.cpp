#include <iostream>
using namespace std;

int unique_letters(string s){
    int a=0;//counter
    for(int i=0;i<s.length();i++){//1st loop for go forward
        bool flag=true;//if length is not zero, then atleast a letter exist
        for(int j=0;j<i;j++){//2nd loop for compare
            if(s[i]==s[j]){
                flag=false;
                break;
            }
        }
        if(flag)a++;
    }
    return a;
}
int main() 
{ 
    string s;
    cin>>s;
    int x=unique_letters(s);
    cout<<(x%2==0? "CHAT WITH HER!":"IGNORE HIM!");

    return 0;
}