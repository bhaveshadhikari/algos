#include <iostream>
using namespace std;
void extendedEuclidean(int a, int b){
    int q, r;
    int prev_s = 1, prev_t = 0;
    int cur_s = 0, cur_t = 1;
    int s, t;
    while (b != 0){
        q = a / b;
        r = a % b;
        a = b;
        b = r;
        s = prev_s - q* cur_s;
        t = prev_t - q* cur_t;
        prev_s = cur_s;
        prev_t = cur_t;
        cur_s = s;
        cur_t = t;
    }
    cout<<"Gcd : "<<a<<endl;
    cout<<"s : "<<prev_s<<endl;
    cout<<"t : "<<prev_t;
}
int main(){
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    extendedEuclidean(a,b);
    return 0;
}
