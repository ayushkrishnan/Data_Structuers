#include <stdio.h>
void read_matrix(int a[10][10],int row,int column);
void create_sparse(int a[10][10],int row,int column,int b[15][3]);
void print_sparse(int b[15][3]);
int main()
{
    int a[10][10],b[15][3],row,column;
    printf("\n enter the size of matrix(rows,columns): ");
    scanf("%d%d",&row,&column);
    read_matrix(a,row,column);
    create_sparse(a,row,column,b);
    print_sparse (b);
    return 0;
}
void read_matrix(int a[10][10],int row,int column)
{
    int i,j;
    printf("\n enter elements of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is");
    for(i=0;i<row;i++)
    {
       for(j=0;j<column;j++)
       {
            printf("\n\t%d",a[i][j]);
       }
       printf("\n");
    }    	

}   
 
void create_sparse(int a[10][10],int row,int column,int b[15][3])
{
    int i,j,k;
    k=1;
    b[0][0]=row;
    b[0][1]=column;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(a[i][j]!=0)
            {
                
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }
        }
    }
    b[0][2]=k-1;
}
void print_sparse(int b [15][3])
{
    int i,column;
    column=b[0][2];
    printf("\n sparse form-list of 3 triplets\n");
    for(i=0;i<=column;i++)
    {
        printf("\t%d\t %d\t %d\n",b[i][0],b[i][1],b[i][2]);
    }
}
	


    


 	

