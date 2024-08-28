#include<iostream>
using namespace std;

int buat_matriks();
// int tampil_matriks(int baris, int kolom, int matriksA[][]);

int main(){
    int kolomA, barisA, kolomB, barisB;

    cout << static_cast<char>(201);
    for(int i=1; i<= 30; i++){
        cout << static_cast<char>(205);
    }
    cout << static_cast<char>(187) <<endl;
    cout << static_cast<char>(186) << "      Perkalian 2 Matriks     " << static_cast<char>(186) <<endl;
    cout << static_cast<char>(200);
    for(int i=1; i<= 30; i++)
        cout << static_cast<char>(205);
    cout << static_cast<char>(188) <<endl;
    

    cout << "\nMatriks A :" <<endl;
    cout << "Masukkan jumlah kolom = ";
    cin >> kolomA;
    cout << "Masukkan jumlah baris = ";
    cin >> barisA;

    int matriksA[barisA][kolomA];

    // assign matriks
    for(int i=1; i<=barisA; i++){
        for(int j=1; j<=kolomA; j++){
            cout << "Masukkan angka pada elemen (" << i << "," << j << ") = " ;
            cin >> matriksA[i][j]; 
        }
    }
    //end asign

    
    //begin
    cout << "\nMatriks B :" <<endl;
    cout << "Masukkan jumlah kolom = ";
    cin >> kolomB;
    cout << "Masukkan jumlah baris = ";
    cin >> barisB;

    int matriksB[barisB][kolomB];

    // assign matriks
    for(int i=1; i<=barisB; i++){
        for(int j=1; j<=kolomB; j++){
            cout << "Masukkan angka pada elemen (" << i << "," << j << ") = " ;
            cin >> matriksB[i][j]; 
        }
    }
    //end asign

    // TANPILAN 
    cout << "\n Tampilan Matriks A : " << endl;
    cout << static_cast<char>(218) << static_cast<char>(196) ;
    for(int i=1; i<=kolomA; i++){
        cout << "   ";
    }
    cout << static_cast<char>(196) << static_cast<char>(191) <<endl;

    for(int i=1; i<=barisA; i++){
        cout << static_cast<char>(179) << " ";
        for(int j=1; j<=kolomA; j++){
            cout << " " << matriksA[i][j] << " " ;
        }
        cout << " " << static_cast<char>(179) <<endl;
    }

    cout << static_cast<char>(192) << static_cast<char>(196) ;
    for(int i=1; i<=kolomA; i++){
        cout << "   ";
    }
    cout << static_cast<char>(196) << static_cast<char>(217) <<endl ;
    //end tampilan

    //tampilan
    cout << "\n Tampilan Matriks B  " << endl;
    cout << static_cast<char>(218) << static_cast<char>(196) ;
    for(int i=1; i<=kolomB; i++){
        cout << "   ";
    }
    cout << static_cast<char>(196) << static_cast<char>(191) <<endl;

    for(int i=1; i<=barisB; i++){
        cout << static_cast<char>(179) << " ";
        for(int j=1; j<=kolomB; j++){
            cout << " " << matriksB[i][j] << " " ;
        }
        cout << " " << static_cast<char>(179) <<endl;
    }

    cout << static_cast<char>(192) << static_cast<char>(196) ;
    for(int i=1; i<=kolomB; i++){
        cout << "   ";
    }
    cout << static_cast<char>(196) << static_cast<char>(217) <<endl ;
    //end tampilan

    cout << "=====================================" << endl;

    //perkalian matriks
    if (kolomA != barisB){
        cout << " !! Maaf, kolom A dan baris B jumlahnya harus sama !! " <<endl;
    }
    else{

        int temp;
        int barisC = barisA;
        int kolomC = kolomB;
        int matriksC[barisC][kolomC];

        for(int x=1; x<=kolomB; x++){
            for(int i=1; i<=barisA; i++){  
                int y=1;
                int j=1;
                temp = 0;
                for(int b=1; b<=kolomA; b++){
                    // cout << endl<<matriksA[i][j] << "*" << matriksB[y][x] << " + ";
                    temp = temp + (matriksA[i][j] * matriksB[y][x]);
                    y++;
                    j++;
                }
                matriksC[i][x] = temp;
            }
        }
        //

        //tampilan
        cout << " Hasil A x B :  " << endl;
        cout << static_cast<char>(218) << static_cast<char>(196) ;
        for(int i=1; i<=kolomC; i++){
            cout << "    ";
        }
        cout << static_cast<char>(196) << static_cast<char>(191) <<endl;

        for(int i=1; i<=barisC; i++){
            cout << static_cast<char>(179) << " ";
            for(int j=1; j<=kolomC; j++){
                cout << " " << matriksC[i][j] << " ";
            }
            cout << " " << static_cast<char>(179) <<endl;
        }

        cout << static_cast<char>(192) << static_cast<char>(196) ;
        for(int i=1; i<=kolomC; i++){
            cout << "    ";
        }
        cout << static_cast<char>(196) << static_cast<char>(217) <<endl ;
        //end tampilan
    }

    return 0;
}

// int buat_matriks(){
//     int kolom, baris;
    
//     cout << "Masukkan jumlah kolom = ";
//     cin >> kolom;
//     cout << "Masukkan jumlah baris = ";
//     cin >> baris;

//     int matriksA[baris][kolom];

//     for(int i=1; i<=baris; i++){
//         for(int j=1; i<=kolom; i++){
//             cout << "Masukkan angka pada elemen [" << i << "] , [" << j << "]" <<endl;
//             cin >> matriksA[i][j]; 
//         }
//     }
// }

// int tampil_matriks(int baris, int kolom, int matriksA[][]){
//     cout << " Elemen Matrik A :  " << endl;
//     cout << static_cast<char>(218) << static_cast<char>(196) ;
//     for(int i=1; i<=kolom; i++){
//         cout << "   ";
//     }
//     cout << static_cast<char>(196) << static_cast<char>(191) <<endl;

//     for(int i=1; i<=baris; i++){
//         cout << static_cast<char>(179) << " ";
//         for(int j=1; j<=kolom; j++){
//             cout << " " << matriksA[i][j] << " ";
//         }
//         cout << " " << static_cast<char>(179) <<endl;
//     }

//     cout << static_cast<char>(192) << static_cast<char>(196) ;
//     for(int i=1; i<=kolom; i++){
//         cout << "   ";
//     }
//     cout << static_cast<char>(196) << static_cast<char>(217) <<endl ;
// }