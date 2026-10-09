#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]) flag=true;
    }
    cout<<(flag? "HARD":"EASY");
    return 0;
}