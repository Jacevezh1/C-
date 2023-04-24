# include <iostream>

int main() {

    // Const (En este caso siempre Upper Case, no se puede modificar, daria error)
    const double PI = 3.141519;
    double radius = 10;
    double circunference = 2 * PI * radius;

    std::cout << circunference << "cm";


    const int SPEED = 1000;
    const int HEIGHT = 10;


    std::cout << SPEED + HEIGHT;


    return 0;
}