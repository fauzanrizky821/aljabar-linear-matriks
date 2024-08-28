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