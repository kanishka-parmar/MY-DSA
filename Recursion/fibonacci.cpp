#include<iostream>
using namespace std;
  int n;
void fibonacci(int a,int b){
static int i=1;
   if(i==n){
    return ;
   }
   else{
    int c=a+b;
    cout<<c<<" ";
    i++;
    fibonacci(b,c);
   }
 
}
int main(){
    cout<<"Enter limit"<<endl;
    int a=0,b=1;
    cin>>n;
    cout<<1<<" ";
    fibonacci(a,b);
}