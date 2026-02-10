#include <iostream>
int area(int x, int y){
    return x * y;
}
int main(){
    int x, y, z;
    x = y = z = 50;
    // there are all 50
    std::cout << x + y + z << '\n';

    const int myNumber = 15; // will always be 15
    // myNumber = 10; // will error since myNumber is read-only

    int length = 5;
    int width = 10;
    std::cout<< area(length,width) << std::endl; 
    return 0;
}
