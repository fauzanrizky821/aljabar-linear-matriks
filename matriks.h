#ifndef MATRIKS_H
#define MATRIKS_H

// Include Library
#include <iostream>
#include "matriks.cpp"

using namespace std;

// List of Modules

/* Fauzan */
bool penjumlahanMatriks(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
bool penguranganMatriks(int i1, int j1, int i2, int j2,int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
bool perkalianLinier(int i1, int j1, int i2, int j2, int matriks1[][100], int matriks2[][100], int hasilMatriks[][100]);
void inversMatriks();

/* Fachry */
void transposeMatriks(int i, int j, int matriks[][100]);
void matriksNol(int i, int j);

/* Wildan */
void trace(int m, int n, int matriks[][100]);
void perkalianSkalar(int skalar, int matriks[][100]);
void buatMatriksIdentitas(int m, int n, int matriks[][100]);

/* Rifqi */
bool perkalianMatriks(int kolomA, int barisA, int kolomB, int barisB, int matriksA[100][100], int matriksB[100][100], int matriksC[100][100]);
int gatePerkalian();
int menampilkanMatriks(const char* nama_matriks, int kolom, int baris, int matriks[100][100]);
int insertDuaMatriks(int &barisA, int &kolomA, int &barisB, int &kolomB, int matriksA[100][100], int matriksB[100][100]);
int insertSatuMatriks(int &barisA, int &kolomA, int matriksA[100][100]);
#endif
