#include <iostream>

using namespace std;

string word_transform(string s){
    int a=0;
    for(int i=0;i<s.length();i++){
        char letter=toupper(s[i]);
        if(letter==s[i]) a++;
    }
    if(s.length()-a<(s.length()/2.0)){
        for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);}
       }
    else{
        for(int i=0;i<s.length();i++){
         s[i]=tolower(s[i]);
         }
       }
    return s;
    }

int main()  
{   string s;
    cin>>s;
    cout<<word_transform(s);
    return 0;
}