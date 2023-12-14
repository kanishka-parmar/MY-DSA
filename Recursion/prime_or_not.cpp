#include<iostream>
using namespace std;
int prime(int n){
    static int i=n/2;
    if(i==1){
        return 1;
    }
    else if(n%i==0){
      return 0;
    }
    else{
            i--;
            prime(n);
        }  
}
int main(){
    cout<<"Enter ";
    int n;
    cin>>n;
    int ans=prime(n);
    if(ans==0){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
    return 0;
}