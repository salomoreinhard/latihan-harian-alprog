#include<iostream>
#include<string>
using namespace std;
int main(){
    char kata[50];
    cout<<"Masukkan Kata : ";
    cin>>kata;

    int panjang = 0;
    while(kata[panjang] != '\0'){
        panjang++;
    } 

    for(int i = 0; i<panjang/2; i++){
        char sementara = kata[i];
        kata[i] = kata[panjang - 1 -i];
        kata[panjang - 1 - i] = sementara;
    }

    cout<<"Reverse String : "<<kata;
}