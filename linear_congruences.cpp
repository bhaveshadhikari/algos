#include <iostream>
using namespace std;
int inverse(int a, int b){
    int q,r;
    int prev_s = 1, prev_t = 0;
    int cur_s = 0, cur_t = 1;
    int s,t;
    while(b !=0){
        q = a / b;
        r = a % b;
        a = b;
        b = r;
        s =  prev_s - q * cur_s;
        t =  prev_t - q * cur_t;
        prev_s = cur_s;
        prev_t = cur_t;
        cur_s = s;
        cur_t = t;
    }
    return prev_s;
}

int main() {
    int n;
    cout<<"no of linear congurences: ";
    cin>>n;
    cout<<"x : a mod m"<<endl;
    int a[n],m[n],y[n],M[n];
    int product_m = 1,x = 0;
    for( int i = 0; i<n ; i++){
        cout<<"x : ";
        scanf("%d mod %d",&a[i],&m[i]);
        product_m*=m[i];
    }
    for( int i = 0; i<n ; i++){
        M[i]= product_m/m[i];
        y[i] = inverse(M[i],m[i]);
        x+=M[i]*y[i]*a[i];
    }
    x = x % product_m;
    cout<<"x = "<< ((x > 0)? x : product_m + x) <<endl ;
    cout<<"solution class : {..,";
    for(int i = x - (2 * product_m) ; i <= x+ (3*product_m) ; i+= product_m)
        cout<< i<<", ";
    cout<<"...}"<<endl;
    return 0;
}
