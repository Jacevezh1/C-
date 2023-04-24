// Header files, input and output
# include <iostream>


// Program
int main() {

    // Varibles (se necesita declarar el tipo)
    int x = 9;
    int y;

    y = 10;

    std::cout << x << std::endl;
    std::cout << y << std::endl;


    int months = 21;
    int years = 30;

    // Double (number including decimals)
    double price = 10.99;

    std::cout << price << std::endl;

    // Char (single char)
    char letter = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial << std::endl;


    // Boolean (2 states)
    bool student = false;
    bool teacher = true;

    // String 
    std::string name = "Javier";
    std::string food = "Pizza";

    std::cout << name;
    std::cout << food << std::endl;

    // Imprimir string con variable
    std::cout << "Hello" << name << std::endl;
    std::cout << "You are" << food << std::endl;


    return 0;

}