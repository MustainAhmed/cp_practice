#include<stdio.h>
int main()
{
    int i,j,c=1,k=0;
    char a[100];
    int b[100];
    fgets(a,100,stdin);
    for(i=0;i<strlen(a);i++){
        for(j=0;j<strlen(a);j++){
            if(a[j]==c){
                b[k]=c;
                k++;
            }
        }
        c++;
    }
    for(i=0;i<strlen(b);i++){
        if(i==strlen(b)-1){
                printf("%d",b[i]);
    }
    else{
        printf("%d+",b[i]);
    }}
    return 0;
}
