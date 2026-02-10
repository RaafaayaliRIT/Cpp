#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
int main(){
    int age;
    cout << "Please enter your age: ";
    cin >> age; // gets the userinput from the user
    cout << "Your are " << age << " years old!" << endl;

    // you can use the getline()

    string name;
    cout << "please enter your name: ";
    std::getline(cin >> std::ws,name);
    cout << "Hello, " << name+"!";

    
    return 0;
}