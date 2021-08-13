// // matrix multiplication
// // basic

#include <iostream>
using namespace std;

// print matrix
void print_matrix(int r, int c, int *m)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << *((m + i * c) + j) << " ";
        }
        cout << endl;
    }
}

// main function
int main()
{
    //matrix 1
    int row1, col1;
    cout << "enter row and column size of matrix1 : " << endl;
    cout << "row : ";
    cin >> row1;
    cout << "col : ";
    cin >> col1;
    int matrix1[row1][col1];
    cout << "enter " << row1 * col1 << " element of matrix : \n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "element [" << i << "][" << j << "] :";
            cin >> matrix1[i][j];
        }
    }

    //matric 2
    int row2, col2;
    cout << "enter row and column size of matrix2 : " << endl;
    cout << "row : ";
    cin >> row2;
    cout << "col : ";
    cin >> col2;
    int matrix2[row2][col2];
    cout << "enter " << row2 * col2 << " element of matrix : \n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "element [" << i << "][" << j << "] :";
            cin >> matrix2[i][j];
        }
    }

    // print two matrices
    cout << "matrix 1 :\n";
    print_matrix(row1, col1, (int *)matrix1);
    cout << "matrix 2 :\n";
    print_matrix(row2, col2, (int *)matrix2);

    if (col1 != row2)
    {
        cout << "multiplication not possible!\n";
    }

    else
    {
        int result[row1][col2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int ans = 0;
                for (int k = 0; k < col1; k++)
                {
                    ans += matrix1[i][k] * matrix2[k][j];   // formula
                }
                result[i][j] = ans;
            }
        }
        // print  matrix product :
        cout << "matrix1 x matrix2 :\n";
        print_matrix(row1, col2, (int *)result);
    }
}