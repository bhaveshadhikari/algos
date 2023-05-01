#include <iostream>
using namespace std;
unsigned long long int tail_fact(unsigned int n, unsigned long long a)
{
    if (n == 0)
        return a;
    return tail_fact(n - 1, n * a);
}
int main(){
    unsigned int n;
    cout<<"enter Z >= 0 : ";
    cin>>n;
    cout<<"factorial of "<<n<<" : "<<tail_fact(n,1);
    return 0;
}
