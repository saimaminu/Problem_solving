#include <iostream>
using namespace std;
 
int main() 
{
    int n_prob,i,a,b,c,flag=0;
    cin>>n_prob;
    for(i=1;i<=n_prob;i++){
    cin>>a>>b>>c;
    if(a+b+c>=2) flag++;
    } 
    cout<<flag;
    return 0;
}