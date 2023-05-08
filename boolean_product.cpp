#include <iostream>
using namespace std;
int main()
{
    int r1, c1;
    cout << "enter order: ";
    cin >> r1 >> c1;
    bool a[r1][c1];
    printf("enter A(%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];


    int r2, c2;
    re_enter:
    cout << "enter order: ";
    cin >> r2 >> c2;
    if (c1 != r2){
        cout << "invalid orientation!!";
        goto re_enter;
    }

    bool b[r2][c2];
    printf("enter B(%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    printf("boolean product (%dx%d) : \n", r1, c2);
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            bool product = 0;
            for (int k = 0; k < r2; k++)
                product = product | (a[i][k] & b[k][j]);
            cout << product << " ";
        }cout << char(10);
    }
    return 0;
}
