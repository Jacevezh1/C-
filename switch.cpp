# include <iostream>

int main() {

    int month;
    std::cout << "Enter your month: ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    case 2:
        std::cout << "It is February";
        break;
    case 3:
        std::cout << "It is March";
        break;
    case 4:
        std::cout << "It is April";
        break;
    case 5:
        std::cout << "It is May";
        break;
    case 6:
        std::cout << "It is June";
        break;
    
    default:
        std::cout << "Please enter only 1 to 6";
    }

    
    

    

    return 0;
}