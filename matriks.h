#ifndef MATRIKS_H
#define MATRIKS_H

// Include Library
#include <iostream>

using namespace std;

// List of Moduls
void penjumlahanMatriks(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
void penguranganMatriks(int i1, int j1, int i2, int j2,int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
void perkalianLinear(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
void inversMatriks(int i, int j, int matriks[][100], int hasilMatriks[][100]);
void transposeMatriks(int i, int j, int matriks[100][100]);
void matriksNol(int i, int j);
void trace(int m, int n, int matriks[][100]);
void perkalianSkalar(int skalar, int matriks[][100]);
void buatMatriksIdentitas(int m, int n, int matriks[][100]);
bool perkalianMatriks(int kolomA, int barisA, int kolomB, int barisB, int matriksA[100][100], int matriksB[100][100], int matriksC[100][100]);
int gatePerkalian();
int menampilkanMatriks(const char* nama_matriks, int kolom, int baris, int matriks[100][100]);

#include "matriks.cpp"

#endif
