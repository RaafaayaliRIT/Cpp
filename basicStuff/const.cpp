#include <iostream>
#include <string>
using namespace std;
int main(){
    const double PI = 3.14159;
    //PI = 3.40;  //const doesn't allowed you to change a varabile, it's a immutable varible 
    double radius = 10;
    double circumference = 2 * PI * radius;
    cout << circumference << "cm" << endl;

    return 0;
}