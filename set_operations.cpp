#include <iostream>
using namespace std;
int main() {
    int n1,n2;
    cout<<"|A|: ";    //set A
    cin>>n1;
    int a[n1];
    cout<<" elements of A: ";
    for(int i=0; i<n1; i++)
        cin>>a[i];
    cout<<"|B|: ";     //set B
    cin>>n2;
    int b[n2];
    cout<<" elements of B: ";
    for(int i=0; i<n2; i++)
        cin>>b[i];
    int u[n1+n2],k=n1;        //calculating union
    for(int i=0; i<n1; i++)
        u[i] = a[i];
    for(int i=0; i<n2; i++)
        for(int j=0; j<n1; j++)
            if(b[i]==a[j])
                break;
            else
             if (j+1 == n1)
                u[k++]=b[i];
    cout<<"union: ";
    for(int i=0; i<k; i++)
        cout<<u[i]<<" ";
    return 0;
}
