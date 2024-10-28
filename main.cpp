//inclusion des bibliothèques natives 
#include<iostream> 
#include<stdlib.h>

//inclusion des bibliothèques utilisateur
#include"header/matrice2.h"
#include"header/matrice3.h"

//Declaration des matrices d'ordre 2 à utiliser
float mat2A[2][2];
float mat2B[2][2];
float somme2[2][2];
float diff2[2][2];
float produit2[2][2];
float trans2A[2][2],trans2B[2][2];

//Declaration des matrices d'ordre 3 à utiliser
float mat3A[3][3];
float mat3B[3][3];
float somme3[3][3];
float diff3[3][3];
float produit3[3][3];
float trans3A[3][3],trans3B[3][3];

//marge d'erreur pour les matrices d'ordre 2
float marge2[2][2];

//marge d'erreur pour les matrices d'ordre 2
float marge3[3][3];

//Declaration des variables pour la gestion de l'interface utilisateur
int choix = 0,choix1 = 0,i = 0,j = 0;

//fonction principale
int main(int argc, char** argv)
{

    //Definition de l'interface utilisateur
    std::cout<<"------------------Operation sur les matrices------------------"<<std::endl;
    std::cout<<"[1]- Operations sur les matrices d'ordre 2"<<std::endl;
    std::cout<<"[2]- Operations sur les matrices d'ordre 3"<<std::endl;
    std::cout<<"[3]- Fermer le programme "<<std::endl;
    std::cout<<"--------------------------------------------------------------"<<std::endl;

    //Definition des options de l'utilisateur
    do
    {
        std::cout<<"Faites un choix :"<<std::endl;
        std::cin>>choix;
       switch (choix)
        {
            case 1:

                // renseignement des matrices d'ordre 2 
                system("cls");
                std::cout<<"renseignez la matrice A\n";
                std::cout<<"A ="<<std::endl;
               for(i=1;i<=2;i++){
                    for(j=1;j<=2;j++){
                        std::cin>>mat2A[i][j];
                    }
                }

                std::cout<<"renseignez la matrice B\n";
                std::cout<<"B ="<<std::endl;
                for(i=1;i<=2;i++){
                    for(j=1;j<=2;j++){ 
                        std::cin>>mat2B[i][j];
                    }
                }

                //affichage des valeurs des matrices d'ordre 2
                std::cout<<std::endl<<"la matrice A = \n";
                for(i=1;i<=2;i++){
                    std::cout<<"(";
                    for(j=1;j<=2;j++){
                         std::cout<<mat2A[i][j]<<" ";
                    }
                    std::cout<<"\b)\n";
                }
               
                std::cout<<std::endl<<"la matrice B = \n";
                for(i=1;i<=2;i++){
                    std::cout<<"(";
                    for(j=1;j<=2;j++){
                       std::cout<<mat2B[i][j]<<" ";
                    }
                    std::cout<<"\b)\n";
                }

                system("pause");
                system("cls");

                //liste des operations pour une matrice d'ordre 2 

                std::cout<<"------------------Operation sur les matrices d'ordre 2------------------"<<std::endl;
                std::cout<<"[1]- Addition"<<std::endl;
                std::cout<<"[2]- Soustraction"<<std::endl;
                std::cout<<"[3]- Multiplication"<<std::endl;
                std::cout<<"[4]- Transpose"<<std::endl;
                std::cout<<"[5]- Inverse"<<std::endl;
                std::cout<<"[6]- Trace"<<std::endl;
                std::cout<<"[7]- Determinant"<<std::endl;
                std::cout<<"[8]- exit"<<std::endl;
                std::cout<<"------------------------------------------------------------------------"<<std::endl;
                std::cout<<"Faites un choix :"<<std::endl;
                std::cin>>choix1;

                //definition des operations pour une matrice d'ordre 2

                do
                {
                    switch (choix1)
                    {
                            case 1:
                            //ADDITION
                                addition2(mat2A,mat2B,somme2);
                                std::cout<<"la somme A+B =\n";
                                for(i=1;i<=2;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=2;j++){
                                        std::cout<<somme2[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                                system("pause");
                                choix1 = 8;
                                break;
                            case 2:
                               //SOUSTRACTION
                                soustraction2(mat2A,mat2B,diff2);
                                std::cout<<"la difference A-B =\n";
                                for(i=1;i<=2;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=2;j++){
                                        std::cout<<diff2[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                                system("pause");
                                choix1 = 8;
                                break;
                             case 3:
                             //MULTIPLICATION
                                multiplication2(mat2A,mat2B,produit2);
                                std::cout<<"le produit AB =\n";
                                for(i=1;i<=2;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=2;j++){
                                        std::cout<<produit2[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }
                                system("pause");
                                choix1 = 8;
                                break;
                            case 4:
                            //TRANSPOSE

                            //transpose de la matrice A
                                transpose2(mat2A,trans2A);
                                std::cout<<"la transpose de la matrice A =\n";
                                for(i=1;i<=2;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=2;j++){
                                        std::cout<<trans2A[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                            //transopse de la matrice B
                                transpose2(mat2B,trans2B);
                                std::cout<<"la transpose de la matrice B =\n";
                                for(i=1;i<=2;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=2;j++){
                                        std::cout<<trans2B[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                                system("pause");
                                choix1 = 8;
                                break;
                            case 5:
                            //INVERSE

                            //inverse de la matrice A
                                inverse2(mat2A);

                            //inverse de la matrice B
                                inverse2(mat2B);

                                system("pause");
                                choix1 = 8;
                                break;
                             case 6:
                            //TRACE

                            //calcul de la trace de la matrice A
                                std::cout<<"la trace de la matrice A est :"<<trace2(mat2A)<<std::endl;

                            //calcul de la trace de la matrice B
                                std::cout<<"la trace de la matrice B est :"<<trace2(mat2B)<<std::endl;

                                system("pause");
                                choix1 = 8;
                                break;
                            case 7:
                            //DETERMINANT

                            //calcul du determinant de la matrice A
                                std::cout<<"le determinant de la matrice A est :"<<determinant2(mat2A)<<std::endl;

                            //calcul du determinant de la matrice B
                                std::cout<<"le determinant de la matrice B est :"<<determinant2(mat2B)<<std::endl;

                                system("pause");
                                choix1 = 8;
                                break;
                            case 8 :
                            system("exit");  
                        }
                    break;
                }while (choix1 != 1 || choix1 != 2  ||choix1 != 3 || choix1 != 4 || choix1 != 5  || choix1 != 6|| choix1 != 7 || choix1 != 8 );
                
                break;

                case 2:
                
                // renseignement des matrices d'ordre 3
                system("cls");
                std::cout<<"renseignez la matrice A\n";
                std::cout<<"A ="<<std::endl;
               for(i=1;i<=3;i++){
                    for(j=1;j<=3;j++){
                        std::cin>>mat3A[i][j];
                    }
                }

                std::cout<<"renseignez la matrice B\n";
                std::cout<<"B ="<<std::endl;
                for(i=1;i<=3;i++){
                    for(j=1;j<=3;j++){ 
                        std::cin>>mat3B[i][j];
                    }
                }

                //affichage des valeurs des matrices d'ordre 3
                std::cout<<std::endl<<"la matrice A = \n";
                for(i=1;i<=3;i++){
                    std::cout<<"(";
                    for(j=1;j<=3;j++){
                         std::cout<<mat3A[i][j]<<" ";
                    }
                    std::cout<<"\b)\n";
                }
               
                std::cout<<std::endl<<"la matrice B = \n";
                for(i=1;i<=3;i++){
                    std::cout<<"(";
                    for(j=1;j<=3;j++){
                       std::cout<<mat3B[i][j]<<" ";
                    }
                    std::cout<<"\b)\n";
                }

                system("pause");
                system("cls");

                //liste des operations pour une matrice d'ordre 3 

                std::cout<<"------------------Operation sur les matrices d'ordre 3------------------"<<std::endl;
                std::cout<<"[1]- Addition"<<std::endl;
                std::cout<<"[2]- Soustraction"<<std::endl;
                std::cout<<"[3]- Multiplication"<<std::endl;
                std::cout<<"[4]- Transpose"<<std::endl;
                std::cout<<"[5]- Inverse"<<std::endl;
                std::cout<<"[6]- Trace"<<std::endl;
                std::cout<<"[7]- Determinant"<<std::endl;
                std::cout<<"[8]- exit"<<std::endl;
                std::cout<<"------------------------------------------------------------------------"<<std::endl;
                std::cout<<"Faites un choix :"<<std::endl;
                std::cin>>choix1;

                //definition des operations pour une matrice d'ordre 3

                do
                {
                    switch (choix1)
                    {
                            case 1:
                            //ADDITION
                                addition3(mat3A,mat3B,somme3);
                                std::cout<<"la somme A+B =\n";
                                for(i=1;i<=3;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=3;j++){
                                        std::cout<<somme3[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                                system("pause");
                                choix1 = 8;
                                break;
                            case 2:
                               //SOUSTRACTION
                                soustraction3(mat3A,mat3B,diff3);
                                std::cout<<"la difference A-B =\n";
                                for(i=1;i<=3;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=3;j++){
                                        std::cout<<diff3[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                                system("pause");
                                choix1 = 8;
                                break;
                             case 3:
                             //MULTIPLICATION
                                multiplication3(mat3A,mat3B,produit3);
                                std::cout<<"le produit AB =\n";
                                for(i=1;i<=3;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=3;j++){
                                        std::cout<<produit3[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                                system("pause");
                                choix1 = 8;
                                break;
                            case 4:
                            //TRANSPOSE

                            //transpose de la matrice A
                                transpose3(mat3A,trans3A);
                                std::cout<<"la transpose de la matrice A =\n";
                                for(i=1;i<=3;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=3;j++){
                                        std::cout<<trans3A[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                            //transopse de la matrice B
                                transpose3(mat3B,trans3B);
                                std::cout<<"la transpose de la matrice B =\n";
                                for(i=1;i<=3;i++){
                                    std::cout<<"(";
                                    for(j=1;j<=3;j++){
                                        std::cout<<trans3B[i][j]<<" ";
                                    }
                                    std::cout<<"\b)\n";
                                }

                                system("pause");
                                choix1 = 8;
                                break;
                            case 5:
                            //INVERSE

                            //inverse de la matrice A
                                inverse3(mat3A);

                            //inverse de la matrice B
                                inverse3(mat3B);

                                system("pause");
                                choix1 = 8;
                                break;
                             case 6:
                             //TRACE

                            //calcul de la trace de la matrice A
                                std::cout<<"la trace de la matrice A est :"<<trace3(mat3A)<<std::endl;

                            //calcul de la trace de la matrice B
                                std::cout<<"la trace de la matrice B est :"<<trace3(mat3B)<<std::endl;
                                system("pause");

                                choix1 = 8;
                                break;
                            case 7:
                            //DETERMINANT

                            //calcul du determinant de la matrice A
                                std::cout<<"le determinant de la matrice A est :"<<determinant3(mat3A)<<std::endl;
                            
                            //calcul du determinant de la matrice B
                                std::cout<<"le determinant de la matrice B est :"<<determinant3(mat3B)<<std::endl;
                            
                                system("pause");
                                choix1 = 8;
                                break;
                            case 8 :
                            system("exit");  
                        }
                    break;
                }while (choix1 != 1 || choix1 != 2  ||choix1 != 3 || choix1 != 4 || choix1 != 5  || choix1 != 6|| choix1 != 7 || choix1 != 8 );
                
                break;
    
                case 3 :
                system("exit");         

            } 
            break;
        }while (choix != 1 || choix != 2  ||choix != 3 );
    }