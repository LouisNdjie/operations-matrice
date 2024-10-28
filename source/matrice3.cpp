#include<iostream>
#include<math.h>

#include"../header/matrice3.h"

//Déclaration de la fonction d'addition
void addition3(float tabA[3][3],float tabB[3][3],float result[3][3])
{
    int i,j;
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 3; j++)
        {
            result[i][j] = tabA[i][j] +  tabB[i][j];
        }
        
    }

}

//Déclaration de la fonction de soustraction
void soustraction3(float tabA[3][3],float tabB[3][3],float result[3][3])
{
    int i,j;
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 3; j++)
        {
            result[i][j] = tabA[i][j] -  tabB[i][j];
        }
        
    }
}

//Déclaration de la fonction de multiplication
void multiplication3(float tabA[3][3],float tabB[3][3],float result[3][3]){
    int i,j,k;
    for ( i = 1; i <= 3; i++){
        for ( j = 1; j <= 3; j++){
            result[i][j] = 0;
            for ( k = 1; k <= 3; k++)
            {
              result[i][j] = result[i][j]+(tabA[i][k] *  tabB[k][j]);  
            }
            
        }
        
    }
}

//Déclaration de la fonction de transpose
void transpose3(float tabA[3][3],float result[3][3]){
    int i,j;
    for ( i = 1; i <= 3; i++){
        for ( j = 1; j <= 3; j++){  
        result[j][i] =  tabA[i][j];  
        }
        
    }
}

//Déclaration de la fonction d'inverse
void inverse3(float tabA[3][3]){
    int i,j,k,l;
    float comatrice[3][3],result[3][3];
    float det = determinant3(tabA);
    float inv_deter = 1;
    inv_deter = inv_deter/det;
    if (det == 0)
    {
        std::cout<<"cette matrice n'est pas inversible"<<std::endl;
    }else
    {
        for ( i = 1; i <= 3; i++) {
            for ( j = 1; j <= 3; j++) {
                // Calcul du cofacteur
                float cofacteur = 0;
                for ( k = 1; k <= 3; k++) {
                    for (l = 1; l <= 3; l++) {
                        if (k != i && l != j) {
                            cofacteur = cofacteur +(pow(-1, k + l) * tabA[k][l]);
                        }
                    }
                }
                comatrice[i][j] = cofacteur;
            }
        }
        for ( i = 1; i <= 3; i++){
            inv_deter = inv_deter;
            result[i][j] = 0;
            for ( j = 1; j <= 3; j++){
            
                result[i][j] = (inv_deter *  comatrice[i][j]);  
            }
        }
        std::cout<<"l'inverse de la matrice INV ="<<std::endl;
        for(i=1;i<=3;i++){
            std::cout<<"(";
            for(j=1;j<=3;j++){
                std::cout<<result[i][j]<<" ";
            }
            std::cout<<"\b)\n";
        }
    }
    
}

//Déclaration de la fonction de calcul de la trace
float trace3(float tabA[3][3]){
    int i;
    float trace = 0;
    for ( i = 1; i <= 3; i++){
        trace =  trace + tabA[i][i];     
    }
    return trace;
}

//Déclaration de la fonction de calacul du determinant
float determinant3(float tabA[3][3]){
    float determinant = 0;
    determinant = tabA[1][1] * ((tabA[2][2] * tabA[3][3]) - (tabA[2][3]*tabA[3][2])) - tabA[1][2] * ((tabA[2][1] * tabA[3][3]) - (tabA[2][3]*tabA[3][1])) + tabA[1][3] * ((tabA[2][1] * tabA[3][2]) - (tabA[2][2] * tabA[3][1]));
    return determinant;
}