#include <stdio.h>
#include <string.h>
 
int main(){
    char a[200];
    scanf("%s",&a);
    int i,rev_sum,len,sum = 0;
    len = strlen(a);
    for (i = 0; i < len; i++){              //for flagging the smaller words.
        if (a[i] > 91){
            sum = sum+1;
        }
    }
    rev_sum = len - sum;                    //total amount of capital word
    if (rev_sum > sum ){
        for (i = 0;i < len;i++){
            if (a[i] > 91){
                a[i] = a[i] - 32;
            }
        }
    }
    else {
        for (i = 0;i < len;i++){
            if (a[i] < 91){
                a[i] = a[i] + 32;
            }
        }
    }
    printf("%s\n",a);
}