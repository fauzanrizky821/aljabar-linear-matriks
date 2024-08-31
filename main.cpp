#include <iostream>
#include "matriks.h"

using namespace std;

int main()
{
    int barisA, kolomA, barisB, kolomB;
    int matriksA[100][100], matriksB[100][100], hasilMatriks[100][100];
    int pilih_menu;
    system("cls");
    do
    {
        // TAMPILAN
        cout << static_cast<char>(201);
        for (int i = 1; i <= 40; i++)
            cout << static_cast<char>(205);
        cout << static_cast<char>(187) << endl;
        cout << static_cast<char>(186) << "                APLIKASI                " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "           KALKULATOR MATRIKS           " << static_cast<char>(186) << endl;
        cout << static_cast<char>(200);
        for (int i = 1; i <= 40; i++)
            cout << static_cast<char>(205);
        cout << static_cast<char>(188) << endl;

        cout << static_cast<char>(186) << "   1. Operasi Penjumlahan               " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   2. Operasi Pengurangan               " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   3. Operasi Perkalian                 " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   4. Tranpose                          " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   5. Trace                             " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   6. Matriks Nol                       " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   7. Matriks Identitas                 " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   8. Invers                            " << static_cast<char>(186) << endl;
        cout << static_cast<char>(186) << "   0. Keluar                            " << static_cast<char>(186) << endl;
        cout << static_cast<char>(200);
        for (int i = 1; i <= 40; i++)
            cout << static_cast<char>(205);
        cout << static_cast<char>(188) << endl;
        // END TAMPILAN

        cout << " Pilih Menu = ";
        cin >> pilih_menu;

        switch (pilih_menu)
        {
        case 1:
            insertDuaMatriks(barisA, kolomA, barisB, kolomB, matriksA, matriksB);
            if (penjumlahanMatriks(barisA, kolomA, barisB, kolomB, matriksA, matriksB, hasilMatriks))
            {
                menampilkanMatriks("Hasil Penjumlahan", kolomA, barisA, hasilMatriks);
            }
            cout << " Tekan Enter untuk Kembali ";
            cin.ignore();
            cin.get();
            break;
        case 2:
            insertDuaMatriks(barisA, kolomA, barisB, kolomB, matriksA, matriksB);
            if(penguranganMatriks(barisA, kolomA, barisB, kolomB, matriksA, matriksB, hasilMatriks))
            {
                menampilkanMatriks("Hasil Pengurangan", kolomA, barisA, hasilMatriks);
            }
            cout << " Tekan Enter untuk Kembali ";
            cin.ignore();
            cin.get();
            break;
        case 3:
            do {
                system("cls");
                // Tampilan
                cout << static_cast<char>(201);
                for (int i = 1; i <= 40; i++)
                    cout << static_cast<char>(205);
                cout << static_cast<char>(187) << endl;
                cout << static_cast<char>(186) << "            METODE PERKALIAN            " << static_cast<char>(186) << endl;
                cout << static_cast<char>(200);
                for (int i = 1; i <= 40; i++)
                    cout << static_cast<char>(205);
                cout << static_cast<char>(188) << endl;

                cout << static_cast<char>(186) << "   1. Perkalian biasa                   " << static_cast<char>(186) << endl;
                cout << static_cast<char>(186) << "   2. Perkalian dengan skalar           " << static_cast<char>(186) << endl;
                cout << static_cast<char>(186) << "   3. Perkalian dengan kombinasi linear " << static_cast<char>(186) << endl;
                cout << static_cast<char>(186) << "   0. Keluar                            " << static_cast<char>(186) << endl;
                cout << static_cast<char>(200);
                for (int i = 1; i <= 40; i++)
                    cout << static_cast<char>(205);
                cout << static_cast<char>(188) << endl;
                //End Tampilan
                cout << " Pilih Metode = ";
                cin >> pilih_menu;
                
                switch (pilih_menu)
                {
                case 1:
                    system("cls");
                    gatePerkalian();
                    break;
                case 2:
                    int skalar;
                    cout << "Masukkan nilai skalar : ";
                    cin >> skalar;
                    insertSatuMatriks(barisA, kolomA, matriksA);
                    menampilkanMatriks("Matriks yang dibuat :", kolomA, barisA, matriksA);
                    perkalianSkalar(skalar, barisA, kolomA, matriksA);
                    menampilkanMatriks("Hasil perkalian matriks dengan skalar :", kolomA, barisA, matriksA);
                    system("pause");
                    break;
                case 3:
                    insertDuaMatriks(barisA, kolomA, barisB, kolomB, matriksA, matriksB);
                    if (perkalianLinier(barisA, kolomA, barisB, kolomB, matriksA, matriksB, hasilMatriks))
                    {
                        menampilkanMatriks("Hasil Perkalian Kombinasi Linear", kolomA, barisA, hasilMatriks);   
                    }
                    cout << " Tekan Enter untuk Kembali ";
                    cin.ignore();
                    cin.get();
                    break;

                default:
                    break;
                }
                } while (pilih_menu != 0);
            pilih_menu = 99;
            break;
        case 4:
            insertSatuMatriks(barisA,kolomA,matriksA);
            transposeMatriks(barisA,kolomA,matriksA);
            cout << " Tekan Enter untuk Kembali ";
            cin.ignore();
            cin.get();
            break;
        case 5:
            int hasiltrace;
            insertSatuMatriks(barisA,kolomA,matriksA);
            hasiltrace = trace(barisA, kolomA, matriksA);
            if (hasiltrace != 0) 
            {
                cout << "=== Trace dari matriks tersebut adalah ===" << endl;
                cout << "                  " << hasiltrace << endl;
            }
            else 
            {
                cout << "Trace tidak dapat dihitung. Bukan matriks persegi!!\n";

            }
            system("pause");
            break;
        case 6:
            cout << "\n Matriks:" << endl;
            cout << " Masukkan jumlah kolom = ";
            cin >> kolomA;
            cout << " Masukkan jumlah baris = ";
            cin >> barisA;
            matriksNol(barisA,kolomA);
            cout << " Tekan Enter untuk Kembali ";
            cin.ignore();
            cin.get();
            break;
        case 7:
            insertSatuMatriks(barisA,kolomA,matriksA);
            if (buatMatriksIdentitas(barisA, kolomA, matriksA))
            {
                menampilkanMatriks("Matriks Identitas :", kolomA, barisA, matriksA);
            } 
            else 
            {
                cout << "Matriks identitas tidak dapat dibuat. Bukan matriks persegi!!\n";
            }
            system("pause");
            break;
        case 8:
            inversMatriks();
            cout << " Tekan Enter untuk Kembali ";
            cin.ignore();
            cin.get();
            break;
        

        default:
            break;
        }
        system("cls");
    } while (pilih_menu != 0);

    return 0;
}