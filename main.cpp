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

void perkalian(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100])
{

    int temp[i1];
    int hasil = 1;
    int ih = i1;
    int jh = j2;

    for (int i = 0; i < i1; i++)
    {
        temp[i] = 0;
        cout << "Buat temp" << " " << i << ": " << temp[i] << endl;
    }
    cout << endl;

    int m = 0;
    for (int n; n < j2; n++)
    {
        m = 0;
        for (int i = 0; i < i1; i++)
        {
            temp[i] = 0;
            cout << "temp" << " " << i << ": " << temp[i] << endl;
        }

        for (int j = 0; j < j1; j++)
        {
            for (int i = 0; i < i1; i++)
            {
                temp[i] = temp[i] + matriks1[i][j] * matriks2[m][n];
            }
            m++;
        }

        cout << "Baris ke-" << n + 1 << endl;
        for (int m = 0; m < ih; m++)
        {
            hasilMatriks[m][n] = temp[m];

            cout << "Kolom ke-" << m + 1 << " " << hasilMatriks[m][n] << endl;
        }
    }
}

int main()
{
    int matriks1[100][100], matriks2[100][100], hasilMatriks[100][100];

    matriks1[0][0] = 1;
    matriks1[0][1] = 2;
    matriks1[0][2] = 4;
    matriks1[1][0] = 2;
    matriks1[1][1] = 6;
    matriks1[1][2] = 0;

    matriks2[0][0] = 4;
    matriks2[0][1] = 1;
    matriks2[0][2] = 4;
    matriks2[0][3] = 3;
    matriks2[1][0] = 0;
    matriks2[1][1] = -1;
    matriks2[1][2] = 3;
    matriks2[1][3] = 1;
    matriks2[2][0] = 2;
    matriks2[2][1] = 7;
    matriks2[2][2] = 5;
    matriks2[2][3] = 2;

    perkalian(2, 3, 3, 4, matriks1, matriks2, hasilMatriks);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << hasilMatriks[i][j] << " ";
        }
        cout << endl;
    }
}