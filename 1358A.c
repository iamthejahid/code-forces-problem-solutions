#include <stdio.h>
int main(){
    int test,i;
    scanf("%d",&test);
    for (i = 1;i <= test;i++){
        int n,m,sum=0,lamp;
        scanf("%d%d",&n,&m);
        sum = n * m;
        if ((sum%2) == 0){
            lamp = sum/2;
        }
        else  {
            lamp = (sum / 2) + 1;
        }
        printf("%d\n",lamp);
    }
}