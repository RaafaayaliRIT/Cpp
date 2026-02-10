#include <iostream> 

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

/*
using namespace std; <- this is a bad idea since std is a huge library and you will have naming issues
instead use something like this
using std::cout
using std::string 
using std::endl 
^
all of these are better since they are more specfic to what you would need and doesn't just bonmb everything.

*/
int main(){
    using namespace first;
    int x = 0;

    std::cout << x << std::endl; // uses the local x
    std::cout << first::x << std::endl; // uses the x in the frist namespace

    return 0;
}