#include<iostream>
using namespace std;
int pow(int x,int y){
    static int res=1;
    if(y==0){
        return res;
    }
    else{
        res=x*pow(x,y-1);
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<pow(x,y);
    return 0;
}