#include<iostream>
using namespace std;
int sum (int x){
    // cout<<"hello"<<endl;
    int tot=0;
    if(x==1){
       return 1;
    }
    else{
        // cout<<"ADDED"<<endl;
       tot=x+sum(x-1);
    }
return tot;
    
}
int main(){
    int n;
     cout<<"Enter limit"<<endl;
    cin>>n;
    int ans=sum(n);
    cout<<ans<<endl;
   return 0;
}
