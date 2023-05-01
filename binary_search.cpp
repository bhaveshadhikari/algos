#include <iostream>
using namespace std;
int binarysearch(int *a, int i, int j, int key)
{
    int m = (i + j) / 2;
    if (a[m] == key)
        return m;
    if (key < a[m] and i < m)
        return binarysearch(a, i, m - 1, key);
    if (key > a[m] and j > m)
        return binarysearch(a, m+1, j, key);
    return -1;
}
int main(){
    int n;
    cout<<char(10)<<"enter # of elements: ";
    cin>>n;
    int *a=new int(n);
    cout<<"enter elements in ascending order: ";
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int key;
    cout<<"enter key to search: ";
    cin>>key;
    cout<<"position (1-"<<n<<"): " <<binarysearch(a,0,n-1,key)+1<<'\n';
    delete[] a;
    return 0;

}
