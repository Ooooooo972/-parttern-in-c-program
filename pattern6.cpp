#include<stdio.h>
int main()
{
    int rows,i,j ;


       printf("enter the value of rows:-");
        scanf("%d",&rows);
      for ( i = 0; i < rows; i++) 
	  { 

       
        for ( j = 0; j < rows - i; j++)
		 {
            printf("* ");
          }
        printf("\n");
      }
}

