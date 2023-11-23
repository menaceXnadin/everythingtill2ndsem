#include<stdio.h>
int main()
{
     int i,j,n;
     printf("Enter Swastik Size(n):");
     scanf("%d",&n);
     printf("* ");
    
     for(i=0; i<n-2; i++)
           printf("  ");
    
     for(i=0; i<n; i++)  
           printf("* ");
    
     printf("\n");
    
     for(j=0; j<n-2; j++)
     {
           printf("* ");
           for(i=0; i<n-2; i++)
                printf("  ");
           printf("* \n");
     }
    
     for(i=0; i<n*2-1; i++)    
           printf("* ");
     printf("\n");
    
     for(j=0; j<n-2; j++)
     {
           for(i=0; i<=n-2; i++)
                printf("  ");
           printf("* ");
           for(i=0; i<n-2; i++)
                printf("  ");
           printf("* \n");
     }

     for(i=0; i<n; i++)  
           printf("* ");
     for(i=0; i<n-2; i++)
           printf("  ");
     printf("* ");  
     return 0;
}
