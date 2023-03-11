#include <iostream>
using namespace std;
int main() {
    int r1 , c1;
    int r2 , c2;
    cout<<"order for 1st matrix ( m,n ): ";
    scanf("%d,%d",&r1,&c1);
    int a[r1][c1];
    cout <<"enter matrix A :"<<endl;
    for(int i = 0 ; i < r1; i++)
      for(int j = 0; j < c1; j++)
        cin>>a[i][j];
    x:   
    cout<<'\n'<<"order for 2nd matrix ( m,n ): ";
    scanf("%d,%d",&r2,&c2);
    int b[r2][c2];
    if ( c1 != r2){
        cout<<"invalid orientation!!";
        goto x;
    }
    cout <<"enter matrix B :"<<endl;
    for(int i = 0 ; i < r2; i++)
      for(int j = 0; j < c2; j++)
        cin>>b[i][j];
    
    cout<<endl<<"Boolean product is :"<<endl;
    for(int i = 0 ; i < r1; i++){
        cout<<"| ";
        for(int j = 0; j < c2; j++){
            int product=0;
            for(int k = 0; k < r2; k++)
               product = product || (a[i][k]&&b[k][j]); 
            cout <<product<<" ";
        }
        cout<<"|"<<'\n';
    }
    return 0;
}
