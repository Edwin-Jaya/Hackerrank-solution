#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr_rows, total_queries, element, arr_columns,j=0;
    cin>>arr_rows;
    cin>>total_queries;
    int** arr = new int*[arr_rows];
    for (int i=0;i<arr_rows;i++){
        cin>>arr_columns;
        int* arr_temp = new int[arr_columns];
        while (j<arr_columns){
            cin>>element;
            arr_temp[j]=element;
            j++;
        }
        j=0;
        arr[i]=arr_temp;
    }
    for (int i=0;i<total_queries;i++){
        int rows_index,columsn_index;
        cin>>rows_index>>columsn_index;
        cout<<arr[rows_index][columsn_index]<<endl;
    }
    return 0;
}