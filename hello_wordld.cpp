#include <iostream> 

int main(){

    // this is a comment :D
    /*
    hello!
    this is a multi-line comment!
    gcc nameoffile.cpp -o nameofexe
    ./nameofexe
    */
    // std::cout << "hello world" << std::endl;
    // std::cout << "I need to learn more stuff and get better grades" <<'\n';
    int x; // declaration
    x = 5; // assignment
    int y = 6;
    int sum = x + y;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;

    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;
    std::cout << days << std::endl; // truncates the result

    //double (number including a decimal)
    double price = 10.99;
    double gpa = 2.5; 
    double temperatur = 25.1; 

    std::cout<< price << std::endl;

    //single character 
    char grade = 'A';
    char initial = 'C';
    char currency = '$';
    std::cout<< initial << std::endl;


    //boolean (true or flase) idk why I'm doing this just to make sure I know what is going on
    bool power = true;
    bool student = true;
    bool forSale = false;

    std::cout << forSale << std::endl; // for some reason I can't print out this?


    // string (objects that repsent a seqence of text)
    std::string name = "bro";
    // you know what a string is bro just move one XD
    std::cout << name << std::endl;

    std::cout << "hello " << name << '\n';
    std::cout << "you are "<< age << " years old";
    return 0;
}