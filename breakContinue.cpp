# include <iostream>


int main() {

    for(int i = 1; i <= 10; i++) {
        if(i == 13) {
            break;
        }
        std::cout << i << std::endl;
    }

    std::cout << "Hapy new year!" << std::endl;

    return 0;
}