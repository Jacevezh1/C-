# include <iostream>


int main() {

    int number;

    do {
        std::cout << "Enter your positive number: ";
        std::cin >> number;
    }  while(number < 0);

    std::cout << "The number is: " << number;

    return 0;
}