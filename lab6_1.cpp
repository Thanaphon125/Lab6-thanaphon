#include<iostream>
using namespace std;

int main() {
    int number;
    int t = 0; 
    int s = 0; 
    
   
    
    while (true) {
        cout << "Enter an integer: " ;
        
        cin >> number; 
        
        if (number == 0) { 
            break;
        }
        
        if (number % 2 == 0) {
            t++; 
        } else {
            s++;
            
        }
    }
    
    
    cout << "#Even numbers = " << t << endl;
    cout << "#Odd numbers = " << s << endl;
    
    return 0;
}
