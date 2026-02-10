

/*
boolean, 1 byte, stores true or false
char, 1 byte, stores a single character/letter/number, or ASCII value
int, 2 or 4 bytes???!?!??, stores a whole number, without decimals
float, 4 bytes, Stores fractional numbers, containing one or more decimals. Sufficient for storing >>6-7<< decimal digits
double, 8 byte, Stores fractional numbers, containing one or more decimals. Sufficient for storing >>15<< decimal digits 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int num; // integer (whole number)
    float foo; // floating point number 
    double dou; // floating point number (idk what the difference is)
    char letter; // character
    bool bin; //boolean 
    string txt; // String

    // e is representing a power of 10
    // scienctific numbers can be used, never knew that
    float f1 = 35e3;
    double d1 = 12e4;
    cout << f1<<'\n';
    cout << d1<< endl;

    // char can be assigned numbers which just mean there ASCII value
    char a = 65;
    cout << a << endl;
    //a double will have more precision then a float since it can hold more values so when doing calculations, use the double over the float


    //auto automatically detects the types of variables bases on the value you assign to it
    auto x = 5; // x is now an int
    auto float1 = 3.0f; // you need to put the f to define it's a float or it will just pick a double I think
    auto dob = 3.5; // double
    auto mystring = string("Hello"); // std::string
    // you can do this with the rest of the datatypes but I'm only putting in the slightly werid onesfrom w3schools

    /*
    auto x; <- this doesn't work because you need a value, also once it's assigned a type you can't change it half way through by changing the value, at that point you need to change the variables type
    
    */

    string greeting = "hello"; // regular string
    char greeting[] = "hello"; // C-style of string

    return 0;
}