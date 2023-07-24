#include <iostream>
using namespace std;

int main()
{
    int matrixOne[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    int matrixTwo[3][2] = {
        {1, 2},
        {4, 6},
        {7, 9}};
    int answer[2][2]; // Corrected size to store the product of 2x3 * 3x2

    for (int i = 0; i < 2; i++) // Corrected the loop condition to 2
    {
        for (int j = 0; j < 2; j++) // Corrected the loop condition to 2
        {
            answer[i][j] = 0; // Initialize the answer cell to zero before calculating the product
            for (int k = 0; k < 3; k++)
            {
                answer[i][j] += matrixOne[i][k] * matrixTwo[k][j];
            }
        }
    }

    // Printing the result
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
