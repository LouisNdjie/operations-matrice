#ifndef MATRICE3_H_INCLUDED
#define MATRICE3_H_INCLUDED

void addition3(float tabA[3][3],float tabB[3][3],float result[3][3]);
void soustraction3(float tabA[3][3],float tabB[3][3],float result[3][3]);
void multiplication3(float tabA[3][3],float tabB[3][3],float result[3][3]);
void transpose3(float tabA[3][3],float result[3][3]);
void inverse3(float tabA[3][3]);
float trace3(float tabA[3][3]);
float determinant3(float tabA[3][3]);

#endif