
#ifndef MATRICE2_H_INCLUDED
#define MATRICE2_H_INCLUDED

void addition2(float tabA[2][2],float tabB[2][2],float result[2][2]);
void soustraction2(float tabA[2][2],float tabB[2][2],float result[2][2]);
void multiplication2(float tabA[2][2],float tabB[2][2],float result[2][2]);
void transpose2(float tabA[2][2],float result[2][2]);
void inverse2(float tabA[2][2]);
float trace2(float tabA[2][2]);
float determinant2(float tabA[2][2]);

#endif