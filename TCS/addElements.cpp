#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void front(int arr[],int n, int ele){

    int temp = arr[n-1];
    
    for(int i=n-1;i>0;i--)
    {
        
        arr[i] = arr[i-1] ;

    }
    arr[0]=ele;
    arr[n]=temp;
    

}

void End(int arr[],int n,int ele){
    arr[n+1]=ele;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    front(arr,n,21);
    End(arr,n,21);

    for(int i=0;i<=n+1;i++)
    {
        cout<<arr[i]<<" ";
    }


}