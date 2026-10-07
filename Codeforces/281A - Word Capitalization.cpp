#include <iostream>
using namespace std;

 string capitalization_1letter(string s){
    s[0]=toupper(s[0]);//Capitalizing only 1st letter
    return s;
}
int main() 
{   
    string s;
    cin>>s;
    cout <<capitalization_1letter(s);
    return 0;
}