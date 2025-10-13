#include<iostream>
using namespace std;
void movezeroes(int arr[], int n){
    int posisi = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            arr[posisi] = arr[i];
            posisi++;
        }

    }

   while(posisi<n){
        arr[posisi]=0;
        posisi++;
    }
}
int main(){
    int n;
    cout<<"Masukkna panjang array : ";
    cin>>n;
    int arr[n];
    cout<<"Masukkan Angka : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Angka yang di input : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    movezeroes(arr, n);
    cout<<"Angka setelah dilakukan movezeroes : ";

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}