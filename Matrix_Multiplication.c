#include <stdio.h>
int main()
{
    int a[5][5], b[5][5],c[5][5];
    int i,j,k;
    int row1, row2, col1, col2;

    printf("Enter the value of frist Matrix row: ");
    scanf("%d",&row1);
    printf("Enter the value of frist Matrix col: ");
    scanf("%d",&col1);
    printf("\nEnter the value of second Matrix row: ");
    scanf("%d",&row2);
    printf("Enter the value of second Matrix col: ");
    scanf("%d",&col2);

    if(col1==row2)
    {
      printf("\n-----First Matrix-----");
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                printf("\nEnter value of a[%d][%d]",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n-----Second Matrix-----");
        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("\nEnter value of b[%d][%d]",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("%d",b[i][j]);
            }
            printf("\n");
        }
//Matrix Multiplication

        for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                c[i][j]=0;
                for(k=0; k<row1; k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("\n-----Matrix Multiplication Result-----\n");

        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n!!!***Matrix Multiplication not Possible***!!!");
        printf("try again-----");
    }


}