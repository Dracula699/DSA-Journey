#include <iostream>
using namespace std;

void space(int space) {
    for(int i = 0; i < space; i++) {
        cout << "  ";
    }
}

void other_part (int n) {
    for(int i = n; i > 0; i--) {
        cout << i << ' ';
    }
}

void pyramid_pattern (int n) {
    int space_idk = n-1;
    
    int temp = 1;

    for (int i = 1; i <= n; i++) {
        
        space(space_idk);

        for (int j = 1; j <= i; j++) {
            cout << j << ' ';
        }

        if (i != 1) {
            other_part(temp);
            temp++;
        }
        
        cout << endl;
        space_idk--;
        
    }
}

int main () {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    pyramid_pattern(number);    
    return 0;
}
