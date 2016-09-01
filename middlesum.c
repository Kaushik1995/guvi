#include <stdio.h>
#include <stdlib.h>
int main() {
     int r, c, i, j;
     int *m[r];
     int sum=0;
     scanf("%d%d",&r,&c);
     for (i=0; i<r; i++)
          m[i] = (int *)malloc(c * sizeof(int));
      for (i = 0; i <  r; i++){
             for (j = 0; j < c; j++){
                 scanf("%d",&m[i][j]);
                }                    
        } 
      for (i = 1; i <  r-1; i++){
             for (j = 1; j < c-1; j++){
                 sum=sum+m[i][j];
               }
        }     
 printf("%d",sum);
	   return 0;
}
