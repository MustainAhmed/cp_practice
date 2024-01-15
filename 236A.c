#include<stdio.h>
int main()
{
    int i,j,k=0,c=0;
    char a[100],b[100];
    gets(a);
    for(i=0;i<strlen(a);i++){
        for(j=i+1;j<strlen(a);j++){
            if(a[i]==a[j]){
                a[j]=a[j]-32+j;
            }
        }
        b[k]=a[i];
        k++;
    }

    for(k=0;k<strlen(b);k++){
        if(b[k]>='A'&&b[k]<='Z'){
            continue;
        }
        else{
            c++;
        }
    }
    if(c%2){
        printf("IGNORE HIM!");
    }
    else{
        printf("CHAT WITH HER!");
    }

    return 0;
}
