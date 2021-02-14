#include <stdio.h>
void main()
{
    int matrice[10][10], transpose[10][10];
    int i,j,n,m;
  
    printf("Entrez le nombre de lignes et de colonnes:\n");
    scanf("%d%d",&n,&m);
  
    printf("Entrez les éléments de la matrice\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &matrice[i][j]);
        }
    }
    printf("La matrice:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
    //Transposition
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            transpose[j][i] = matrice[i][j];
        }
    }
    printf("La transposition de la matrice est:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}