# include <iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18 && age < 100){
        std::cout << "Welcome to the site";
    } else if (age >= 100) {
        std::cout << "You are to old";
    }
    else {
        std::cout << "You are not old enough to enter";
    }

    return 0;
}