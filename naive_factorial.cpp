#include <iostream>
using namespace std;
long long int fact(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    unsigned int n;
    cout << "enter Z >= 0 : ";
    cin >> n;
    cout << "Factorial of " << n << " : " << fact(n);
    return 0;
}
