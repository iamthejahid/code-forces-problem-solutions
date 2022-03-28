#include <iostream>
#include <sstream> 
#include <string> 
using namespace std;
 
int main () {
 
    int i,flag,counter = 0,sec_counter = 0;
    long long int xFF;
    cin >> xFF;
    stringstream middle ;  
    middle << xFF;  
    string str;  
    middle  >> str; 
 
    for (i = 0; i<= str.length()-1; i++ ) {
       if (str[i] == 55) {
           counter = counter + 1;
       } else if (str[i] == 52) {
           sec_counter = sec_counter + 1;
       }
    }
 
    flag = sec_counter + counter ;
 
    if (flag == 4) {
        cout << "YES" << endl;
    } else if (flag == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
 
    }
   
   return 0;
}