#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[],int l,int m,int high){
    int n1=m-l+1;
    int n2=high-m;
    int x[n1];
    int y[n2];
    for(int i=0;i<n1;i++){
        x[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        y[i]=arr[i+m+1];
    }
    int p=0,q=0,k=l;
    while(p<n1 && q<n2){
        if(x[p]<=y[q]){
            arr[k]=x[p];
            p++;
        }
        else{
           arr[k]=y[q];
            q++; 
        }
       k++;
    }
    while(p<n1){
        arr[k]=x[p];
        p++;k++;
    }
     while(q<n1){
        arr[k]=y[q];
        q++;k++;
    }
}
void mergesort(int arr[],int l,int h){
    if(l<h){
        int mid=(l+(h-1))/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main(){
    int arr[10]={19,13,1,2,34,12,10,5},n=8;
    int low=0,high=n-1;
    cout<<"Unsorted Array"<<endl;
    print(arr,n);
    mergesort(arr,low,high);
    cout<<"Sorted Array"<<endl;
    print(arr,n);
}