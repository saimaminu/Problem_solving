#include <iostream>

using namespace std;

void check_reverse(string s1,string s2){
    for(int i=0,j=s2.length()-1;i<s1.length() or j>=0;i++,j--){
            if(s1[i]!=s2[j]){
                cout<<"NO";
                return;
            }

        }
    cout<<"YES";
    return ;
    }

int main()  
{   string s1,s2;
    cin>>s1>>s2;
    check_reverse(s1,s2);
    return 0;
}