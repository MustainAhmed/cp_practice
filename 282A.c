#include<stdio.h>
int main()
{
    int n,i,j,X=0;
     scanf("%d",&n);
    char a[n][3];

    for(i = 0 ; i < n ; i++){
        scanf("%c   %c   %c", &a[i][0] , &a[i][1] , &a[i][2]);
    }

    for(i = 0 ; i < n ; i++){

            if(a[i][1]=='+'){
                X=X+1;
            }
            else if(a[i][1]=='-'){
                X=X-1;
            }

    }

    printf("%d",X);
    return 0;
}
