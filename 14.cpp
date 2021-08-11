// // matrix multiplication
// // basic

// #include <iostream>
// using namespace std;
// int r1,c1;

// void matrixMultiply(int *m1, int I, int r1, int c1,int power)
// {
//     int result[r1][c1],ans=0;
//     while(power--)
//     {
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 for(int k=0;k<c1;k++)
//                 {
//                     ans+=m1[i][k]*m1[k][j];
//                 }
//             }
//         }
//     }
    
// }

// void matrixExponentiation()
// {
//     int m1[r1][c1], Id[r1][c1];

//     // taking input as elements of matrix 1
//     cout << "enter " << r1 * c1 << " elements of matrix 1 : ";
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cin >> m1[i][j];
//         }
//     }

//     // identity matrix
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cin >> m1[i][j];
//         }
//     }

//     int power;
//     cout << "enter power : ";
//     cin >> power;
//     // basic method
//     matrixMultiply(&m1,Id[0][0], r1, c1,power);
// }

// int main()
// {
//     cout << "enter no of row & column of matrix : ";
//     cin >> r1 >> c1;
//     matrixExponentiation();
//     return 0;
// }

// incomplete