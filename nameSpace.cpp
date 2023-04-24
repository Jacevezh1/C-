# include <iostream>

// Create namespace
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}


int main() {

    // The ahorra lines de codigo
    using std::cout;
    using std::string;

    // Es implicito
    using namespace first;
    
    // No se utiliza el prefjo
    using namespace std;

    // int x = 0;

    std::cout << x;
    // std::cout << second::x;

    return 0;
}