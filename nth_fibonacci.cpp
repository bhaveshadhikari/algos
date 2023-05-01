#include<iostream>
using namespace std;
unsigned long long int fibo( int n){
    if (n == 1 || n == 2)
    return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"enter n(>0): ";
    cin>>n;
    cout<<"nth fibonacci term is : "<<fibo(n);
    return 0;
}
