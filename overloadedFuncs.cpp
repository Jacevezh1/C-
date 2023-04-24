# include <iostream>


// Functions can share same name but they need different params

// Funcition signature = function name + params
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {

    bakePizza("peperonni", "mushroom");

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza!";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your! " << topping1;
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your! " << topping1 << " And " << topping2;
}