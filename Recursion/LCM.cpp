#include<iostream>
using namespace std;
int lcm(int a,int b){
    static int i=0;
    i+=a;
    if((i%a==0)&&(i%b==0)){
      return i;
    }
    else{
        lcm(a,b);
    }
     
}
int main(){
    cout<<"Enter two numbers"<<endl;
    int a,b,l;
    cin>>a>>b;
    if(a>b){
        l=lcm(a,b);
    }
    else{
        l=lcm(b,a);
    }
    cout<<" lcm of "<<a<<" and "<<b<<" is "<<l;
    return 0;
}