# include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********* Calculator **************";

    std::cout << "Enter either (+ - * /)";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #1: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result " << result;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result " << result;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result " << result;
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Result " << result;
        break;
    default:
        std::cout << "Enter a valid op";
        break;
    }

    
    std::cout << "***********************";

    

    return 0;
}