#include<iostream>
using namespace std;
void function(int arr[], int n, int target){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                cout<<"["<<i<<","<<j<<"]";
                return;
            }
        }
    }
}
    
int main(){
    int n, target;
    cout<<"Masukkan Panjang Array : ";
    cin>>n;
    int arr[n];
    cout<<"Masukkan Bilangan : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Target = ";
    cin>>target;
    function(arr, n, target);

}