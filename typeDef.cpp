# include <iostream>
# include <vector>

// Using better that typedef



// Asignar tipos de datos a variables
typedef std::vector<std::pair<std::string, int> > pairlist_t;
typedef std::string text_t;
typedef int number_t;

// Using en vez de typedef
using texto_t = std::string;

int main() {

    // Se la asigna y se reducen tipos
    pairlist_t pairlist;

    number_t age = 21;

    text_t firstName = "Messi";

    std::cout << firstName;
    std::cout << age << std::endl;


    return 0;
}