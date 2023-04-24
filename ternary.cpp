# include <iostream>

int main() {

    // Ternary operator ?:

    int grade = 80;

    grade >= 60 ? std::cout << "You passed" << std::endl : std::cout << "You fail" << std::endl;

    int number = 9;
    number % 2 == 1 ? std::cout << "Odd" << std::endl : std::cout << "Even" << std::endl;

    bool hungry = true;

    hungry ? std::cout << "You are hungry" : std::cout << "You are full";

    std::cout << (hungry ? "You are hungry" : "Even");

    return 0;
}