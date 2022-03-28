#include <iostream> 
#include <sstream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    int flag = 0,counter = 0;
    int year, i , j ;
    cin >> year;
    
 
    while (flag != 1)
    {
        counter = 0;
        year = year + 1;
        stringstream middle ;  
        middle  << year;  
        string str;  
        middle  >> str; 
 
 
        for( i = 3; i >=1 ; i-- ) {
            for (j = 0; j < i; j++ ) {
                if (str[i] == str[j]) {
                    counter = counter + 1;
                }
            }
        }
 
        if (counter == 0 ) {
            flag = 1;
            break;
        }
 
    }
    cout << year <<endl;
    return 0; 
}