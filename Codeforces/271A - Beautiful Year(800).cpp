#include <iostream>
using namespace std;

int beautiful_year(int year){
    while(1){
        year++;
        int a=year/1000;
        int b=(year/100)%10;
        int c=(year/10)%10;
        int d=year%10;
        if(a!=b and a!=c and a!=d && b!=c and b!=d && c!=d){
            return year;
        }
    }

}
int main() 
{   int n;
    cin>>n;
    cout<<beautiful_year(n);
    return 0;
}
/*
split the year--->
1987/1000=1
1987/100=19; 19%10=9
1987/10=198; 198%10=8
1987%10=7
*/