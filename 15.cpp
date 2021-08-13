// // matrix exponentiation
// basic method

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

    // creating a copy of matrix
    int matrix2[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            matrix2[i][j] = matrix1[i][j];
        }
    }
    int power, p;
    cout << "enter power : ";
    cin >> power;
    p = power;

    // print two matrices
    cout << "matrix 1 :\n";
    print_matrix(row1, col1, (int *)matrix1);

    if (col1 != row1)
    {
        cout << "multiplication not possible!\n";
    }

    else
    {
        power--;
        int result[row1][col1];
        while (power--)
        {

            for (int i = 0; i < row1; i++)
            {
                for (int j = 0; j < col1; j++)
                {
                    int ans = 0;
                    for (int k = 0; k < col1; k++)
                    {
                        ans += matrix1[i][k] * matrix2[k][j]; // formula
                    }
                    result[i][j] = ans;
                }
            }

            // copy result to new matrix
            for (int i = 0; i < row1; i++)
            {
                for (int j = 0; j < col1; j++)
                {
                    matrix2[i][j] = result[i][j];
                }
            }
        }
        // print  matrix product :
        cout << "matrix1 ^" << p << endl;
        print_matrix(row1, col1, (int *)result);
    }
}
