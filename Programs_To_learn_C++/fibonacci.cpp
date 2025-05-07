// To print fibonacci series

#include <iostream>
using namespace std;

void fibonacci_series(int n) {
    int first_number = 0;
    int second_number = 1;

    cout << first_number << " ";
    cout << second_number << " ";

    for(int i = 2; i < n; i++) {
        int sum = 0;
        sum = second_number+first_number;
        first_number = second_number;
        second_number = sum;
        
        
        cout << sum << ' ';
    } 
}

int main () {
    int number = 8;
    fibonacci_series(number);
    return 0;
}