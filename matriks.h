#ifndef MATRIKS_H
#define MATRIKS_H

// Include Library
#include <iostream>

using namespace std;



// List of Moduls
void penjumlahanMatriks(int i, int j, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
void penguranganMatriks(int i, int j, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
void transposeMatriks(int i, int j, int matriks[100][100]);
void matriksNol(int i, int j);
void trace(int m, int n, int matriks[][100]);
void perkalianSkalar(int skalar, int matriks[][100]);
void buatMatriksIdentitas(int m, int n, int matriks[][100]);


#endif
