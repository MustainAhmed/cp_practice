#include<stdio.h>
int main()
{
    int m=0,n=0,i;
    char a[100],b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]=a[i]+32;
        }
        if(b[i]>='A'&&b[i]<='Z'){
            b[i]=b[i]+32;
        }

        m=m+(int)a[i];
        n=n+(int)b[i];
    }

    if(m==n){
        printf("0");
    }
    else if(m<n){
        printf("-1");
    }
    else if(m>n){
        printf("1");
    }



    return 0;
}
