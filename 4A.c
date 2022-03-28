#include <stdio.h>
int main() {   
    int number;
   
 
    scanf("%d", &number);
 
 
    if(number == 2 || number == 0) {
        printf("NO");
    } else {
        if(number % 2 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    }
    
    return 0;
}