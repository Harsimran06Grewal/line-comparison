#include <iostream>

#include <cmath>

using namespace std;

int main(){
    int x1, x2, y1, y2;
    cout << "Enter the value of x1 : ";
    cin >> x1;
    cout << "Enter the value of x2 : ";
    cin >> x2;
    cout << "Enter the value of y1 : ";
    cin >> y1;
    cout << "Enter the value of y2 : ";
    cin >> y2;
    int length_of_line;
    length_of_line = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
    cout << length_of_line << endl;

    return 0;
}