# include <iostream>


int main() {

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;

    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "Enter symbol: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            std::cout << symbol << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "Hapy new year!" << std::endl;

    return 0;
} 