#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    bool a[][n] = {
        {0, 0, 0, 1},
        {1, 0, 1, 0},
        {1, 0, 0, 1},
        {0, 0, 1, 0}};
    
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] |= (a[i][k] & a[k][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << char(10);
    }
    return 0;
}

/*
1 0 1 1
1 0 1 1
1 0 1 1
1 0 1 1
*/
