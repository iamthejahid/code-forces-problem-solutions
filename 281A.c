#include <stdio.h>
int main(){
    char s[1000];
    scanf("%s",s);
    if (s[0] > 96 && s[0] < 123){
        s[0] = s[0] -  32;
    }
    printf("%s\n",s);
}