#include <iostream>
using namespace std;
#include <string>

void adding_space(int space) {
    for(int i = 0; i < space; i++) {
        cout << " ";
    }
}

void inverted_triangle(int n) {
    int temp = n;
    int space;
    for(int i = 1; i <= n; i++) {
        for(int j = temp; j > 0; j--) {
            cout << i << ' '; 
        }
        cout << endl;
        temp--;
        space = n - temp;
        adding_space(space);
    }
}

int main () {
    int number;
    cout << "Plesae enter the number: ";
    cin >> number;
    inverted_triangle(number);
    return 0;
}
