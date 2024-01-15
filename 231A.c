#include<stdio.h>
int main()
{
    int c=0,k=0,n=0,i,j;
    int a[n][3];
    scanf("%d",&n);
    for(i=0;i<n;i++){

       scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);

    }
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==1){
                k++;

            if(k>1){
                c++;
            }}
        }
        k=0;

    }

    printf("%d",c);
    return 0;
}
