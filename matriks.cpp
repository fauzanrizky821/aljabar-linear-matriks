#include <iostream>
using namespace std;

void transposeMatriks(int i, int j, int matriks[100][100]){
    int transpose[100][100];
    for (int p = 0; p < i; p++)
    {
        for (int q = 0; q < j; q++)
        {
            transpose[q][p] = matriks[p][q];
        }
    }
    for (int p = 0; p < j; p++)
    {
        for (int q = 0; q < i; q++)
        {
            cout << transpose[p][q];
        }
        cout << endl;
    }
}

void matriksNol(int i, int j)
{
    int matriks[100][100];
    for (int p = 0; p < i; p++)
    {
        for (int q = 0; q < j; q++)
        {
            matriks[p][q] = 0;
        }
    }
    for (int p = 0; p < i; p++)
    {
        for (int q = 0; q < j; q++)
        {
            cout << matriks[p][q];
        }
        cout << endl;
    }
}