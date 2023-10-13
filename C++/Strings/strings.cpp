#include <iostream>
#include <string>
using namespace std;

int hitungJumlah(string kata);
string gabungankata(string kata_1, string kata_2);
string gabungan_kata_terbalik(string kata_1, string kata_2);
int main() {
	string a,b,kata_merged,kata_merged_terbalik;
    int jumlaha,jumlahb;
    cin>>a;
    cin>>b;
    jumlaha = hitungJumlah(a);
    jumlahb = hitungJumlah(b);
    kata_merged = gabungankata(a,b);
    kata_merged_terbalik = gabungan_kata_terbalik(a,b);
    cout<<jumlaha<<" "<<jumlahb<<endl<<kata_merged<<endl<<kata_merged_terbalik;
  
    return 0;
}

int hitungJumlah(string kata){
    int jumlah;
    jumlah = kata.size();
    
    return jumlah;
}

string gabungankata(string kata_1,string kata_2){
    string gabungan_kata = kata_1 + kata_2;
    
    return gabungan_kata;
}

string gabungan_kata_terbalik(string kata_1,string kata_2){
    char kata_ganti = kata_1[0];
    string gabungan_kata;
    kata_1[0] = kata_2[0];
    kata_2[0] = kata_ganti;
    gabungan_kata = kata_1+" "+kata_2;
    
    return gabungan_kata;
}
