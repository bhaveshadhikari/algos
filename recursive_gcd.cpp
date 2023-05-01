#include <iostream>
using namespace std;
int gcd(int a, int b){
    if (b != 0)
        return gcd(b, a % b);
    return abs(a);
}
int main(){
    int a,b;
    cout<<"enter two integers: ";
    cin>>a>>b;
    cout<<"gcd : "<<gcd(a,b);
    return 0;
}
