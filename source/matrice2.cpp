#include<iostream>
#include<math.h>

#include"../header/matrice2.h"

//Déclaration de la fonction d'addition
void addition2(float tabA[2][2],float tabB[2][2],float result[2][2])
{
    int i,j;
    for ( i = 1; i <= 2; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            result[i][j] = tabA[i][j] +  tabB[i][j];
        }
        
    }

}

//Déclaration de la fonction de soustraction
void soustraction2(float tabA[2][2],float tabB[2][2],float result[2][2])
{
    int i,j;
    for ( i = 1; i <= 2; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            result[i][j] = tabA[i][j] -  tabB[i][j];
        }
        
    }
}

//Déclaration de la fonction multiplication
void multiplication2(float tabA[2][2],float tabB[2][2],float result[2][2]){
    int i,j,k;
    for ( i = 1; i <= 2; i++){
        for ( j = 1; j <= 2; j++){
            result[i][j] = 0;
            for ( k = 1; k <= 2; k++)
            {
              result[i][j] = result[i][j]+(tabA[i][k] *  tabB[k][j]);  
            }
            
        }
        
    }
}

//Déclaration de la fonction de transpose
void transpose2(float tabA[2][2],float result[2][2]){
    int i,j;
    for ( i = 1; i <= 2; i++){
        for ( j = 1; j <= 2; j++){  
        result[j][i] =  tabA[i][j];  
        }
        
    }
}

//Déclaration de la fonction d'inverse
void inverse2(float tabA[2][2]){
    int i,j,k,l;
    float comatrice[2][2],  result[2][2];
    float deter =  determinant2(tabA);
    float inv_deter = 1;
    inv_deter = inv_deter/deter;
    if (deter == 0)
    {
        std::cout<<"cette matrice n'est pas inversible"<<std::endl;
    }else
    {
        for ( i = 1; i <= 2; i++) {
            for ( j = 1; j <= 2; j++) {
                // Calcul du cofacteur
                float cofacteur = 0;
                for ( k = 1; k <= 2; k++) {
                    for (l = 1; l <= 2; l++) {
                        if (k != i && l != j) {
                            cofacteur = cofacteur +(pow(-1, k + l) * tabA[k][l]);
                        }
                    }
                }
                comatrice[i][j] = cofacteur;
            }
        }
        for ( i = 1; i <= 2; i++){
            inv_deter = inv_deter;
            result[i][j] = 0;
            for ( j = 1; j <= 2; j++){ 
                result[i][j] = inv_deter *  comatrice[i][j]; 
            }
        }
        std::cout<<"l'inverse de la matrice INV ="<<std::endl;
        for(i=1;i<=2;i++){
            std::cout<<"(";
            for(j=1;j<=2;j++){
                std::cout<<result[i][j]<<" ";
            }
            std::cout<<"\b)\n";
        }
    }
}

//Déclaration de la fonction de calcul de la trace
float trace2(float tabA[2][2]){
    int i;
    float trace = 0;
    for ( i = 1; i <= 2; i++){
        trace =  trace + tabA[i][i];     
    }
    return trace;
}

//Déclaration de la fonction de calcul du determinant
float determinant2(float tabA[2][2]){
    float det;
    det = (tabA[1][1] * tabA[2][2]) - (tabA[2][1] * tabA[1][2]);
    return det;
}
