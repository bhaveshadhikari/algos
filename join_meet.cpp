#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter order: ";
    cin >> r >> c;
    bool a[r][c], b[r][c];
    printf("enter A(%dx%d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    printf("enter B(%dx%d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    printf("join A or B : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << (a[i][j] | b[i][j]) << " ";
        cout << char(10);
    }
    
    printf("meet A and B : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << (a[i][j] & b[i][j]) << " ";
        cout << char(10);
    }

    return 0;
}
