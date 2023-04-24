# include <iostream>

int main() {

    char unit;
    double temp;

    std::cout << "********* Temp conversion **************" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celcuis" << std::endl;
    std::cout << "Unit to convert: " << std::endl;
    std::cin >> unit;


    if (unit == 'F' || unit == 'f') {
        std::cout << 'Enter the temperature in Celsuis: ' << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp + 32);
        std::cout << "F = Temperature is now: " << temp << std::endl;

    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Farenheit: " << std::endl;
        std::cin >> temp;

        temp = (temp - 32 / 1.8);

        std::cout << "C = Temperature is now: " << temp << std::endl;

    } else {
        std::cout << 'Enter valid input';
    }
    
    std::cout << "***********************";

    

    return 0;
}