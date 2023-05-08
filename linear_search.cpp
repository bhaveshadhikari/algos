#include<iostream>
using namespace std;
int linearsearch(int *a, int i, int j, int key){
    if(a[i] == key)
        return i;
    if(i == j)
        return -1;
    return linearsearch(a,i+1,j,key);

}
int main()
{
    int n;
    cout << char(10) << "enter # of elements: ";
    cin >> n;
    int *a = new int(n);
    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int key;
    cout << "enter key to search: ";
    cin >> key;
    cout << "position (1-" << n << "): " << linearsearch(a, 0, n - 1, key) + 1 << '\n';
    delete[] a;
    return 0;
}
