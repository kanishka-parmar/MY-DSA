#include<iostream>
using namespace std;
int count(int n){
    static int sum=0;
     if(n!=0){
        sum+=n%10;
        count(n/10);
     }
     return sum;
}
int main(){
    cout<<"Enter no ";
    int n;
    cin>>n;
    cout<<"Sum of digits= "<<count(n)<<endl;
    return 0;
}