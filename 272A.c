#include <stdio.h>
 
 
int main()
{
    int friends = 0, fingers = 0;
    scanf("%d", &friends);
    for(int i = 0 ; i < friends ; i++) {
        int temp = 0;
        scanf("%d" , &temp);
        fingers = fingers + temp;
    }
 
    friends++;
    
    int temp2 = fingers%friends;
    
    // int tempFinger = fingers + 5; 
    
    int result = 0; 
    
    for (int i = 0; i <5; i++) {
       
        fingers++;
        if(fingers % friends != 1) {
            result++;
        }  
        
   
    }
         printf("%d\n", result);
    
    
 
}