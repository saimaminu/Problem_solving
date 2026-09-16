#include <iostream>
using namespace std;

int main() 
{int a=0;
    int arr[6][6];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
        cin>>arr[i][j];
    }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
        if(arr[i][j]==1){
           
            while(i!=3 or j!=3){
            if(i<3) {swap(arr[i][j],arr[i+1][j]);i++;a++;}
            if(i>3) {swap(arr[i][j],arr[i-1][j]);i--;a++;}
            if(j<3) {swap(arr[i][j],arr[i][j+1]);j++;a++;}
            if(j>3) {swap(arr[i][j],arr[i][j-1]);j--;a++;}
         
        }}
    }
    }
    cout<<a;
    return 0;
}