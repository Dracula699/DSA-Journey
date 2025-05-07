#include <iostream>
using namespace std;

void adding_space(int space) {
    for(int i = 0; i < space; i++) {
        cout << "  ";
    }
}

void other_hollow_diamond (int n) {
    int space = 1;
    int temp = n + (n-3);
   
    for (int i = 0; i < n; i++) {
        adding_space(space);
        for(int j = temp; j > 0; j--) {
            
            if(j == 1 || j == temp) {
                cout << "*" << ' ';
            }
            else {
                cout << "  "; 
            }
     
        }
        cout << endl;
        space += 1;
        temp -= 2;
        
    }
}

void hollow_diamond (int n) {
    int space = n - 1;
    int temp = 1;
   
    for (int i = 0; i < n; i++) {
        adding_space(space);
        for(int j = 1; j <= temp; j++) {
            if(j == 1 || j == temp) {
                cout << "*" << ' ';
            }
            else {
                cout << "  "; 
            }
        }
        cout << endl;
        space -= 1;
        temp += 2;
    }
    other_hollow_diamond(n);
}

int main () {
    int number = 4;
    hollow_diamond(number);
    return 0;
}