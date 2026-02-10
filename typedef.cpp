
/*
typedef = reserved keyword used to create an additional 
name (alias) for another data type.

new identfiers for an existing type
helps with readability and reduces typos

used when there is a clear benfit 
Replaced with the 'using' (work bettwe w/ templates)

*/
#include <vector>
#include <iostream>

typedef std::vector<std::pair<std::string, int>> pairlist_t ;
typedef std::string text_t;
typedef int number_t;

using dub_t = double; // more popular now days, better for templates?



int main(){
    std::vector<std::pair<std::string, int>> hardPairlist;
    pairlist_t pairlist;

    std::string firstname = "Raafay"; 
    text_t lastname = "ali";

    std::cout << firstname + " " + lastname << std::endl;

    number_t age = 21;



    return 0;
}