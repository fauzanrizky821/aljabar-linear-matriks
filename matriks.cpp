#include "matriks.h"

using namespace std;

int menampilkanMatriks(const char *nama_matriks, int kolom, int baris, int matriks[100][100])
{
    cout << nama_matriks << endl;
    cout << " " << static_cast<char>(218) << static_cast<char>(196);
    for (int i = 0; i <= kolom; i++)
    {
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(191) << endl;

    for (int i = 0; i < baris; i++)
    {
        cout << " " << static_cast<char>(179);
        for (int j = 0; j < kolom; j++)
        {
            cout << "\t" << matriks[i][j];
        }
        cout << "\t " << static_cast<char>(179) << endl;
    }

    cout << " " << static_cast<char>(192) << static_cast<char>(196);
    for (int i = 0; i <= kolom; i++)
    {
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(217) << endl;

    return 0;
}

bool penjumlahanMatriks(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100])
{
    if ((i1 != i2) || (j1 != j2))
    {
        cout << "Jumlah elemen pada matriks tidak sama. Matriks tidak dapat dijumlahkan!!" << endl;

        return 0;
    }
    else
    {
        for (int a = 0; a < i1; a++)
        {
            for (int b = 0; b < i2; b++)
            {
                hasilMatriks[a][b] = matriks1[a][b] + matriks2[a][b];
            }
        }
        return 1;
    }
}

bool penguranganMatriks(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100])
{
    if ((i1 != i2) || (j1 != j2))
    {
        cout << "Jumlah elemen pada matriks tidak sama. Matriks tidak dapat dijumlahkan!!" << endl;
        return 0;
    }
    else
    {
        for (int a = 0; a < i1; a++)
        {
            for (int b = 0; b < i2; b++)
            {
                hasilMatriks[a][b] = matriks1[a][b] - matriks2[a][b];
            }
        }
        return 1;
    }
}

bool perkalianLinier(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100])
{
    if (j1 != i2)
    {
        cout << "Jumlah kolom matriks pertama harus sama dengan jumlah baris matriks kedua!" << endl;
        return 0;
    }
    else
    {
        int hasil = 1;
        int ih = i1;
        int jh = j2;

        int m = 0;
        for (int n = 0; n < j2; n++)
        {
            m = 0;
            for (int j = 0; j < j1; j++)
            {
                for (int i = 0; i < i1; i++)
                {
                    hasilMatriks[i][n] = hasilMatriks[i][n] + matriks1[i][j] * matriks2[m][n];
                }
                m++;
            }
        }
        return 1;
    }
}

void inversMatriks()
{
    double matriks[2][2], hasilMatriks[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << " Masukkan angka pada elemen (" << i << "," << j << ") = ";
            cin >> matriks[i][j];
        }
    }

    double det = 1 / (matriks[0][0] * matriks[1][1] - matriks[0][1] * matriks[1][0]);
    cout << "determinan: " << det << endl;

    if (det == 0)
    {
        cout << "Tidak bisa melakukan invers karena determinan bernilai nol" << endl;
    }
    else
    {
        hasilMatriks[0][0] = matriks[1][1];
        hasilMatriks[0][1] = -1 * matriks[0][1];
        hasilMatriks[1][0] = -1 * matriks[1][0];
        hasilMatriks[1][1] = matriks[0][0];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                hasilMatriks[i][j] = hasilMatriks[i][j] * det;
            }
        }

        cout << "Hasil Invers" << endl;
        cout << " " << static_cast<char>(218) << static_cast<char>(196);
        for (int i = 0; i <= 2; i++)
        {
            cout << "\t";
        }
        cout << static_cast<char>(196) << static_cast<char>(191) << endl;

        for (int i = 0; i < 2; i++)
        {
            cout << " " << static_cast<char>(179);
            for (int j = 0; j < 2; j++)
            {
                cout << "\t" << hasilMatriks[i][j];
            }
            cout << "\t " << static_cast<char>(179) << endl;
        }

        cout << " " << static_cast<char>(192) << static_cast<char>(196);
        for (int i = 0; i <= 2; i++)
        {
            cout << "\t";
        }
        cout << static_cast<char>(196) << static_cast<char>(217) << endl;
    }
}

int trace(int m, int n, int matriks[][100])
{
    int trace = 0;
    if (m != n)
    {
        return 0;
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
    return trace;
    }
    
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

void buatMatriksIdentitas(int m, int n, int matriks[][100])
{
    if (m != n)
    {
        cout << "Matriks identitas tidak bisa dibuat. Bukan matriks persegi!!\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    matriks[i][j] = 0;
                }
                else
                {
                    matriks[i][j] = 1;
                }
            }
        }
    }
}

bool perkalianMatriks(int kolomA, int barisA, int kolomB, int barisB, int matriksA[100][100], int matriksB[100][100], int matriksC[100][100])
{
    // perkalian matriks
    if (kolomA != barisB)
    {
        cout << " !! Maaf, kolom A dan baris B jumlahnya harus sama !! " << endl;
        return 0;
    }
    else
    {
        int temp;

        for (int x = 1; x <= kolomB; x++)
        {
            for (int i = 1; i <= barisA; i++)
            {
                int y = 1;
                int j = 1;
                temp = 0;
                for (int b = 1; b <= kolomA; b++)
                {
                    temp = temp + (matriksA[i - 1][j - 1] * matriksB[y - 1][x - 1]);
                    y++;
                    j++;
                }
                matriksC[i - 1][x - 1] = temp;
            }
        }
        return 1;
    }
}

int gatePerkalian()
{
    int kolomA, barisA, kolomB, barisB;

    cout << static_cast<char>(201);
    for (int i = 1; i <= 40; i++)
    {
        cout << static_cast<char>(205);
    }
    cout << static_cast<char>(187) << endl;
    cout << static_cast<char>(186) << "           Perkalian 2 Matriks          " << static_cast<char>(186) << endl;
    cout << static_cast<char>(200);
    for (int i = 1; i <= 40; i++)
        cout << static_cast<char>(205);
    cout << static_cast<char>(188) << endl;

    // assign matriks A
    int matriksA[100][100];
    cout << "\n Matriks A :" << endl;
    cout << " Masukkan jumlah kolom = ";
    cin >> kolomA;
    cout << " Masukkan jumlah baris = ";
    cin >> barisA;

    for (int i = 1; i <= barisA; i++)
    {
        for (int j = 1; j <= kolomA; j++)
        {
            cout << " Masukkan angka pada elemen (" << i << "," << j << ") = ";
            cin >> matriksA[i - 1][j - 1];
        }
    }

    // assign matriks B
    int matriksB[100][100];
    barisB = kolomA;
    cout << "\n Matriks B :" << endl;
    cout << "          jumlah baris = " << barisB << endl;
    cout << " Masukkan jumlah kolom = ";
    cin >> kolomB;

    for (int i = 1; i <= barisB; i++)
    {
        for (int j = 1; j <= kolomB; j++)
        {
            cout << " Masukkan angka pada elemen (" << i << "," << j << ") = ";
            cin >> matriksB[i - 1][j - 1];
        }
    }
    // end assign
    cout << endl;
    menampilkanMatriks(" Tampilan Matriks A :", kolomA, barisA, matriksA);
    menampilkanMatriks(" Tampilan Matriks B :", kolomB, barisB, matriksB);

    cout << "=====================================" << endl;

    int barisC = barisA;
    int kolomC = kolomB;
    int matriksC[100][100];

    if (perkalianMatriks(kolomA, barisA, kolomB, barisB, matriksA, matriksB, matriksC))
    {
        menampilkanMatriks(" Hasil A x B : ", kolomC, barisC, matriksC);
    }
    cout << " Tekan Enter untuk Kembali ";
    cin.ignore();
    cin.get();
}

int insertDuaMatriks(int &barisA, int &kolomA, int &barisB, int &kolomB, int matriksA[100][100], int matriksB[100][100])
{
    // assign matriks A
    cout << "\n Matriks A :" << endl;
    cout << " Masukkan jumlah kolom = ";
    cin >> kolomA;
    cout << " Masukkan jumlah baris = ";
    cin >> barisA;

    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            cout << " Masukkan angka pada elemen (" << i << "," << j << ") = ";
            cin >> matriksA[i][j];
        }
    }

    // assign matriks B
    cout << "\n Matriks B :" << endl;
    cout << " Masukkan jumlah kolom = ";
    cin >> kolomB;
    cout << " Masukkan jumlah baris = ";
    cin >> barisB;

    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << " Masukkan angka pada elemen (" << i << "," << j << ") = ";
            cin >> matriksB[i][j];
        }
    }
    // end assign

    return 0;
}

int insertSatuMatriks(int &barisA, int &kolomA, int matriksA[100][100])
{
    // assign matriks A
    cout << "\n Matriks:" << endl;
    cout << " Masukkan jumlah kolom = ";
    cin >> kolomA;
    cout << " Masukkan jumlah baris = ";
    cin >> barisA;

    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            cout << " Masukkan angka pada elemen (" << i << "," << j << ") = ";
            cin >> matriksA[i][j];
        }
    }
    return 0;
}

void transposeMatriks(int i, int j, int matriks[][100])
{
    int transpose[100][100];
    for (int p = 0; p < i; p++)
    {
        for (int q = 0; q < j; q++)
        {
            int temp;
            temp = matriks[p][q];
            matriks[p][q] = transpose[q][p];
            transpose[q][p] = temp;
        }
    }
    menampilkanMatriks("Matriks Transpose",i,j,transpose);
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
    menampilkanMatriks("Matriks Nol",j,i,matriks);
}