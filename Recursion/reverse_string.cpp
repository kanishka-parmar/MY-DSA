#include<iostream>
using namespace std;
void reverse(int l,string s){
   static int i=l;
   while(i>=0){
      cout<<s[i];
      i--;
      reverse(i,s);
   }
}
int main(){
    string s;
    cin>>s;
    cout<<"REVERSE ";
    int len=s.length();
    reverse(len,s);
}