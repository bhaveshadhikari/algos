#include <iostream>
using namespace std;

class matrix
{

    int r, c;
    int **mat;

public:
    matrix() {}

    matrix(int r, int c)
    {
        this->r = r;
        this->c = c;
        mat = new int *[r];
        for (int i = 0; i < r; i++)
            mat[i] = new int[c];
    }

    friend istream &operator>>(istream &input, matrix &m)
    {
        printf("\nenter %d x %d matrix below : \n", m.r, m.c);
        for (int i = 0; i < m.r; i++)
            for (int j = 0; j < m.c; j++)
                cin >> m.mat[i][j];
        return input;
    }

    ~matrix()
    {
        for (int i = 0; i < r; i++)
            delete[] mat[i];
        delete[] mat;
    }

    friend ostream &operator<<(ostream &output, matrix &m)
    {
        for (int i = 0; i < m.r; i++)
        {
            for (int j = 0; j < m.c; j++)
                output << m.mat[i][j] << " ";
            output << endl;
        }
        return output;
    }

    matrix operator-(matrix &m)
    {
        matrix temp(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp.mat[i][j] = mat[i][j] - m.mat[i][j];
            }
        }
        return temp;
    }
    matrix operator+(matrix &m)
    {
        matrix temp(r, c);
        for (int i = 0; i < m.r; i++)
            for (int j = 0; j < m.c; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        return temp;
    }
    matrix operator*(matrix &m)
    {

        matrix temp(r, m.c);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < m.c; j++)
            {
                temp.mat[i][j] = 0;
                for (int k = 0; k < c; k++)
                    temp.mat[i][j] += mat[i][k] * m.mat[k][j];
            }
        }

        return temp;
    }
};
int main()
{
    start:
    int r1, c1;
    cout << "enter r1,c1: ";
    cin >> r1 >> c1;
    int r2, c2;
    cout << "enter r2,c2: ";
    cin >> r2 >> c2;
    
    if ( c1 != r2)
    {
        cout<<"invalid dimensions to operate! enter again"<<endl;
        goto start;
    }
    

    matrix a(r1, c1);
    matrix b(r2, c2);
    cin >> a;
    cin >> b;

    if (r1 == r2 and c1 == c2)
    {
    matrix diff = a - b;
    cout << endl
         << "difference : " << endl
         << diff;
    matrix sum = a + b;
    cout << endl
         << "sum: " << endl
         << sum;
    }
    else
        cout <<endl<< "cant perform addition and subtraction!" << endl;
    
    matrix mul = a * b;
    cout << endl
         << "product: " << endl
         << mul;
    
    return 0;
}
