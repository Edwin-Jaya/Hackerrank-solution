#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int* a, int* b){
    int sum_result=(*a)+(*b);
    return sum_result;
}

int subtraction(int* a, int* b){
    int subs_result=abs((*a)-(*b));
    return subs_result;
}

int main() {
    int result,a,b;
    cin>>a>>b;
    result = sum(&a,&b);
    cout<<result<<endl;
    result = subtraction(&a,&b);
    cout<<result<<endl;
    return 0;
}
