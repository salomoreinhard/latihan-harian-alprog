#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}
int main(){
    int n;
    cout<<"Masukkan Jumlah Data : ";
    cin>>n;
    int data[n];
    for(int i = 0; i<n; i++){
        cin>>data[i];
    }
    cout<<"Data sebelum diurutkan : ";
    for(int i = 0; i<n; i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;

    insertionSort(data, n);
    cout<<"Data setelah diurutkan : ";
    printArray(data, n);

    return 0;

}