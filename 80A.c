#include <stdio.h>
int main(){
    int a,num,c;
    scanf("%d%d",&a,&num);
    int i, p = 0;
       for(i=1; i<=num; i++)
       {
          if(num%i==0)
          {
             p++;
          }
       }
       if(p==2) //prime number yes
       {
             for(int i=a+1;i>0;i++){
                    int count=0;
                        for(int j=1;j<=i;j++){
                            if(i%j==0)
                            count++;
                       }
                        if(count==2){
                        c = i;
                        break;
                        }
                    }
                    if (c == num){
                        printf("YES\n");
                    }
                    else {
                        printf("NO\n");
                    }
       }
       else
       {
          printf("NO\n");
       }
 
}