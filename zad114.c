// Program treba oduzet 2 matrice.

#include <stdio.h>

int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,m,n;
    int redak, stupac;

    printf("Unesi broj redaka : ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca : ");
        scanf("%d",&n);

        printf("\nUnesi vrijednosti matriuce a: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi a[%d][%d] vrijednost : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatrica A je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    printf("\nUnesi vrijednost matrice B : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi b[%d][%d] vrijednost: ",i,j);
                 scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrica B je : \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", B[i][j]);
            }
            printf("\n\n");
        }
    /*
     * Oduzima 2 matrice.
     */
    for(redak=0; redak<m; redak++)
    {
        for(stupac=0; stupac<n; stupac++)
        {
            C[redak][stupac] = A[redak][stupac] - B[redak][stupac];
        }
    }

    /*
     * Ispis razlike
     */
    printf("\nRazlika 2 matrice je A - B = C \n");
    printf("\nmatrica C je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", C[i][j]);
            }
            printf("\n\n");
        }

    return 0;
}
