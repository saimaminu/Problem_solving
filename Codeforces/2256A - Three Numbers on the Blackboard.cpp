#include <bits/stdc++.h>
using namespace std;

//Find the Maximum among three numbers
int max_(int a,int b,int c){
    int max1;
    if(a>=b and a>=c) return a; 
        else if(b>=c and b>=a) return b; 
        else return c;
}

//Find the Second-maximum among three numbers
int max2_(int a,int b,int c){
    
    int max=max_(a,b,c);
        if(a==max){
            if(b>c) return b;
            else return c;
        } 
        else if(b==max){
            if(a>c) return a;
            else return c;
        }
        else {if(b>a) return b;
            else return a;}
    
}

//Find the Minimum among three numbers
int min_(int a,int b,int c){
    
        if(a<=b and a<=c) return a; 
        else if(b<=c and b<=a) return b; 
        else return c;
       
}

int main() 
{
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int maximum=max_(a,b,c);
        int maximum2=max2_(a,b,c);
        int minimum=min_(a,b,c);
       
       if(maximum2+minimum<maximum){
            maximum=maximum2+minimum;
            cout<<maximum-minimum<<endl;
        }
        else cout<<maximum-minimum<<endl;
    }
    return 0;
}