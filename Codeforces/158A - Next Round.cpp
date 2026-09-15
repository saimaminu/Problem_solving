#include <iostream>
using namespace std;

int main() 
{
    int n,k,a=0;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];}

        for(int i=1;i<=n;i++){
            if(arr[i]){
        if(arr[i]>=arr[k]) a++;
    }}
    cout<<a;
    return 0;
}