#include <stdio.h>
#include <string.h>
 
int main(){
char br[200];
scanf("%s",&br);
int lengi = strlen(br);
    for (int i = 0;i < lengi;i++){
        if (br[i] == 46 ){
            printf("0");
        }
        else{
            if (br[i+1] == 46){
                printf("1");
                i++;
            }
            else {
                printf("2");
                i++;
            }
            }
 
        }
    }
