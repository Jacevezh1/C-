# include <iostream>

int main() {

    // Ternary operator ?:
    int temp;

    std::cout << "Enter the temp : ";
    std::cin >> temp;

    if(temp > 3 && temp < 7) {
        std::cout << "Nice Weather";
    } else if (temp == 0 || temp == 1) {
        std::cout << "Bad wather";
    } else if (temp != 0) {
        std::cout << "Nice";
    } else {
        std::cout << "Temp is bad";
    }


    return 0;

    
}