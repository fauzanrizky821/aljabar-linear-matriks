#include "matriks.h"
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

void transposeMatriks(int i, int j, int matriks[100][100])
{
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
void trace(int m, int n, int matriks[][100])
{

    int trace;
    if (m != n)
    {
        cout << "Trace pada matriks tidak dapat dihitung, bukan matriks persegi!!\n";
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    trace = trace + matriks[i][j];
                }
            }
        }
    }
    cout << "Trace dari matriks tersebut adalah : " << trace;
}

void perkalianSkalar(int skalar, int matriks[][100])
{
    // perkalian matriks dengan skalar
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriks[i][j] = matriks[i][j] * skalar;
        }
    }

    cout << "\nhasil perkalian matriks dengan skalar : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriks[i][j];
        }
    }
}