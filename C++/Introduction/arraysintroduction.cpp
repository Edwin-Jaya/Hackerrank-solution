#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr_len,element;
    cin>>arr_len;
    int* arr = new int[arr_len];
    for (int i=0;i<arr_len;i++){
        cin>>element;
        arr[i]=element;
    }
    for (int i=arr_len-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
