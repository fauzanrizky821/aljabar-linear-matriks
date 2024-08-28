#include <iostream>
// #include "matriks.h"

using namespace std;

void penjumlahan(int i, int j, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100])
{
    if ((i != i) && (j != j))
    {
        cout << "Jumlah elemen pada matriks tidak sama. Matriks tidak dapat dijumlahkan!!" << endl;
    }
    else
    {
        for (int a = 0; a < 2; a++)
        {
            for (int b = 0; b < 2; b++)
            {
                hasilMatriks[a][b] = matriks1[a][b] + matriks2[a][b];
            }
        }
    }
}

int main()
{
    int matriks1[2][2], matriks2[2][2], hasilMatriks[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriks1[i][j] = 2;
            matriks2[i][j] = 3;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriks1[i][j];
            cout << matriks2[i][j] << endl;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << hasilMatriks[i][j];
        }
    }

    // perkalian matriks dengan skalar
    int skalar = 2;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasilMatriks[i][j] = hasilMatriks[i][j] * skalar;
        }
    }

    cout << "\nhasil perkalian matriks dengan skalar : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << hasilMatriks[i][j];
        }
    }
}