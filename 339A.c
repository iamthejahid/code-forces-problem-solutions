#include <stdio.h>
#include <string.h>
int main(){
    int  i,  j,  sz, one = 0, two = 0, three = 0;
    char x[100];
    scanf("%s",&x);
    sz = strlen(x);
    for (i = 0; i <= (sz-1); i++){
        if (x[i] == 43){
            continue;
        }
        else {
            if (x[i]==49){
                one++;
            }
            else if (x[i]==50){
                two++;
            }
            else {
                three++;
            }
        }
    }

 
    for (j = 0; j <= sz-1; j++){
        if (x[j] == 43){
            continue;
        }
        else {
            if (j >= 0 && j <(one*2)){
                x[j] = 49;
            }
            else if (j >= (one*2) && j < ((one+two)*2)){
                x[j] = 50;
            }
 
            else {
                x[j] = 51;
            }
        }
    }
    printf("%s\n",x);
}