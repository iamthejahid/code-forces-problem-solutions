#include <stdio.h>
int main(){
    long testcase,o;
    scanf("%li",&testcase);
    int a,b,c,d;
    long long int rest,l,sum;
        for (o = 1;o <= testcase; o++){
            scanf("%d%d%d%d",&a,&b,&c,&d);
            if (b >= a){
            printf("%d\n",b);
            }
            else {
                if (d >= c){
                printf("%d\n",-1);
                }
                else {
                    rest = a-b;
                    if ((rest%(c-d))==0){
                        l = rest / (c-d);
                        sum = b + (l * c);
                        printf("%lli\n",sum);
                    }
                    else {
                        l = (rest / (c-d)) + 1;
                        sum = b + (l * c);
                        printf("%lli\n",sum);
                    }
                }
            }
        }
    }