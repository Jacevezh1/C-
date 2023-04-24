# include <iostream>



void happyBirth(std::string name, int age);

int main() {

    std::string name = "Bro";
    int age = 21;

    happyBirth(name, age);

    return 0;
}

void happyBirth(std::string name, int age) {

    // Cant acces main variable, need to past it as args
    std::cout << "Happy Birthdat to you! " << name << std::endl;

    std::cout << "Happy Birthdat to age! " << age << std::endl;
    std::cout << "Happy Birthdat to me!" << std::endl;



}