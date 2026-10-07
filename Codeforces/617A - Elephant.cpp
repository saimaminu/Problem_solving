#include <iostream>
using namespace std;

 int move(int x){
    int move;
    x%5==0? move=x/5 : move=(x/5)+1;
    return move;
}
int main() 
{   
    int a;
    cin>>a;
    cout<<move(a);
    return 0;
}