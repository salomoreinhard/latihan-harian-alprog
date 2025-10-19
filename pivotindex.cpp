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
    cout<<"Output : ";
    int total = 0;
    int kiri = 0;
    int pivot;
    for(int i = 0; i<n; i++){
        total += arr[i];
    }
    for(int i = 0; i<n; i++){
        int kanan = total - arr[i] - kiri;
        if(kiri == kanan){
            pivot = i;
            break;
        }
        kiri += arr[i];
    }
    cout<<pivot;
}