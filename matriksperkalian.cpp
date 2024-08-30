#include<iostream>
using namespace std;

int menampilkanMatriks(const char* nama_matriks, int kolom, int baris, int matriks[100][100]);

bool perkalianMatriks(int kolomA, int barisA, int kolomB, int barisB, int matriksA[100][100], int matriksB[100][100], int matriksC[100][100]){
    //perkalian matriks
    if (kolomA != barisB){
        cout << " !! Maaf, kolom A dan baris B jumlahnya harus sama !! " <<endl;
        return 0;
    }
    else{
        int temp;

        for(int x=1; x<=kolomB; x++){
            for(int i=1; i<=barisA; i++){  
                int y=1;
                int j=1;
                temp = 0;
                for(int b=1; b<=kolomA; b++){
                    temp = temp + (matriksA[i][j] * matriksB[y][x]);
                    y++;
                    j++;
                }
                matriksC[i][x] = temp;
            }
        }
        return 1;
    }
}

int gatePerkalian(){
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

    int matriksA[100][100];

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

    int matriksB[100][100];

    // assign matriks
    for(int i=1; i<=barisB; i++){
        for(int j=1; j<=kolomB; j++){
            cout << "Masukkan angka pada elemen (" << i << "," << j << ") = " ;
            cin >> matriksB[i][j]; 
        }
    }
    //end asign

    menampilkanMatriks("Tampilan Matriks A :", kolomA, barisA, matriksA);
    menampilkanMatriks("Tampilan Matriks B :", kolomB, barisB, matriksB);

    cout << "=====================================" << endl;

    int barisC = barisA;
    int kolomC = kolomB;
    int matriksC[100][100];

    if(perkalianMatriks(kolomA,barisA, kolomB, barisB, matriksA, matriksB, matriksC)){
        menampilkanMatriks("Hasil A x B : ", kolomC, barisC, matriksC);
    }
}

int menampilkanMatriks(const char* nama_matriks, int kolom, int baris, int matriks[100][100]){
    cout << nama_matriks << endl;
    cout << static_cast<char>(218) << static_cast<char>(196) ;
    for(int i=0; i<=kolom; i++){
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(191) <<endl;

    for(int i=1; i<=baris; i++){
        cout << static_cast<char>(179);
        for(int j=1; j<=kolom; j++){
            cout << "\t" << matriks[i][j];
        }
        cout << "\t " << static_cast<char>(179) <<endl;
    }

    cout << static_cast<char>(192) << static_cast<char>(196) ;
    for(int i=0; i<=kolom; i++){
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(217) <<endl ;
    return 0;
}

int main(){
    gatePerkalian();
    return 0;
}
