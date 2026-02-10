#include <iostream>

int main(){

    int age; 
    bool baby = false;
    std::cout << "Enter your age here: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You are allowed into the website YAY!" << std::endl;
    }else if(age < 18 && baby == false){
        
        std::cout << "You're aren't allowed in SADGE :("<< std::endl;
    }else if(age < 18 && baby == true){
        std::cout << "WE NEED A MOTHER!" << std::endl;
    }else{
        std::cout << "GET OUT ME YARD!!!" <<std::endl;
    }
    return 0;
}