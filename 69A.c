#include <stdio.h>
 
int main(){
    int line;
    scanf("%d",&line);
    int x,y,z;
    int ex = 0,ey = 0,ez = 0;
    for (int i = 1;i <= line;i++){
        scanf("%d%d%d",&x,&y,&z);
        ex+= x;
        ey+= y;
        ez+= z;
    }
    if (ex == 0 && ey == 0 && ez == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    //printf("%d is x\t%d is y\t %d is z\n",ex,ey,ez);
}