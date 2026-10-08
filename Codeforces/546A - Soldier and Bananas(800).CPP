#include <iostream>
using namespace std;

int Borrow(int k,int n,int w){
    int total_cost=w*k*(w+1)/2;
    return max(0,total_cost-n);
}
int main()  
{   int k,n,w;
    cin>>k>>n>>w;
    cout<<Borrow(k,n,w);
    return 0;
}