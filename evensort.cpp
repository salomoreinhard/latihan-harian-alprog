#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Masukkan Panjang Array : ";
    cin>>n;
    int arr[n];
    cout<<"Masukkan Angka : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Angka yang diinput : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
