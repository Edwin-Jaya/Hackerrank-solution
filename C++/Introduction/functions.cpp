#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findmax(int a, int b, int c, int d){
    int maxNumber=a;
    if (maxNumber<b){
        maxNumber=b;
    }
    if (maxNumber<c){
        maxNumber=c;
    }
    if (maxNumber<d){
        maxNumber=d;
    }
    return maxNumber;
}
int main() {
    int maxValue,number_one,number_two,number_three,number_four;
    cin>>number_one>>number_two>>number_three>>number_four;
    maxValue=findmax(number_one,number_two,number_three,number_four);
    cout<<maxValue;
    return 0;
}
