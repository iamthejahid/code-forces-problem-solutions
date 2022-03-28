#include <stdio.h>
int main(){
    int test, i, a, b, c, sum=0;
    scanf("%d",&test);
    for (i = 1;i <= test;i++){
        scanf("%d%d%d",&a,&b,&c);
        if ((a+b+c)>1){
            sum = sum+1;
        }
        a = 0;
        b = 0;
        c = 0;
    }
    printf ("%d\n",sum);
 
}