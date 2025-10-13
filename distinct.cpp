#include<iostream>
using namespace std;
int main(){
    int n;
    bool kondisi = false;
    cout<<"Masukkan Panjang Array : ";
    cin>>n;
    int arr[n];
    cout<<"Masukkan Bilangan : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Bilangan yang di input : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
        if(arr[i] == arr[j]){
            kondisi = true;
            break;
        }
    }
    if(kondisi)
    break;
}
    cout<<endl;
    cout<<"Kondisi = ";
    if(kondisi == true){
        cout<<"true";
    }else{
        cout<<"false";
    }

}