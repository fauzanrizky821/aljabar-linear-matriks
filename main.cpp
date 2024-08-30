#include <iostream>
#include "matriks.h"

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

int main(){
    int pilih_menu;
    do{
        // TAMPILAN
        cout << static_cast<char>(201);
        for(int i=1; i<= 40; i++)
            cout << static_cast<char>(205);
        cout << static_cast<char>(187) <<endl;
        cout << static_cast<char>(186) << "                APLIKASI                " << static_cast<char>(186) <<endl;
        cout << static_cast<char>(186) << "           KALKULATOR MATRIKS           " << static_cast<char>(186) <<endl;
        cout << static_cast<char>(200);
        for(int i=1; i<= 40; i++)
            cout << static_cast<char>(205);
        cout << static_cast<char>(188) <<endl;

        cout << static_cast<char>(186) << "   1. Operasi Penjumlahan               " << static_cast<char>(186) <<endl;
        cout << static_cast<char>(186) << "   2. Operasi Pengurangan               " << static_cast<char>(186) <<endl;
        cout << static_cast<char>(186) << "   3. Operasi Perkalian                 " << static_cast<char>(186) <<endl;
        cout << static_cast<char>(186) << "   0. Keluar                            " << static_cast<char>(186) <<endl;
        cout << static_cast<char>(200);
        for(int i=1; i<= 40; i++)
            cout << static_cast<char>(205);
        cout << static_cast<char>(188) <<endl;
        //END TAMPILAN

        cout << " Pilih Menu = ";
        cin >> pilih_menu;

        switch(pilih_menu){
            case 3:
                system("cls");
                gatePerkalian();
                break;
        
            default:
                break;
        }
        system("cls");
    }while(pilih_menu != 0);

    return 0;


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

    
}