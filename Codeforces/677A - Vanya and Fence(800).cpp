#include <iostream>
using namespace std;

int main() 
{
    int n,h,a=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]>h? a+=2:a++;
    }
    cout<<a;
    return 0;
}