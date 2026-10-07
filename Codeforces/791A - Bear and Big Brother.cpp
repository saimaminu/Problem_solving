#include <iostream>
using namespace std;

 int year(int a,int b){
    int i=0;
    while(a<=b){//Comparing their age after every year
       a=a*3;
       b=b*2;
        i++;
    }
    return i;
}
int main() 
{   
    int a,b;
    cin>>a>>b;
    cout<<year(a,b);
    return 0;
}