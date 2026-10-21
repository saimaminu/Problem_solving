#include <iostream>
#include <stack>
using namespace std;

stack<int>st1,st2;
void transfer(){
    if(st1.empty()){
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }
}

int main() {
  int n,val;
  cin>>n;
  while(n--){
    int type;
    cin>>type;
    if(type==1){
        cin>>val;
        st2.push(val);
    }
    else if(type==2){
        transfer();
        st1.pop();
    }
    else if(type==3){
        transfer();
        cout<<st1.top()<<endl;
    }
  }

    return 0;
}