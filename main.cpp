#include <iostream>
#include "matriks.h"

using namespace std;

int main()
{
    int pilih_menu;
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
        case 3:
            system("cls");
            gatePerkalian();
            break;

        default:
            break;
        }
        system("cls");
    } while (pilih_menu != 0);

    return 0;
}