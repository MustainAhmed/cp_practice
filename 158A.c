#include<stdio.h>
int main()
{
    int n=0,a[n],j,i,c=0;
    scanf("%d %d",&n,&j);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>=a[j-1]){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
