#include<stdio.h>
#include<math.h>
int main()
{
   int a[5][5],c,b,i,j;
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        scanf("%d",&a[i][j]);

        if(a[i][j]==1){
            c=2-i;
            b=2-j;
        }
    }
    printf("\n");
   }

   printf("%d",abs(c)+abs(b));
    return 0;
}
