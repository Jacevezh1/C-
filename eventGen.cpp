# include <iostream>
# include <ctime>

int main() {

    // Pseudorandom --> not trully random
    srand(time(0));

    int randnum = (rand() % 10) + 1;
    
    switch (randnum)
    {
    case 1:
        std::cout << "You win a sticker" << std::endl;
        break;
    case 2:
        std::cout << "You win a tshirt" << std::endl;
        break;
    case 3:
        std::cout << "You win a lunch" << std::endl;
        break;
    case 4:
        std::cout << "You win a car" << std::endl;
        break;
    case 5:
        std::cout << "You win a house" << std::endl;
        break;
    default:
        break;
    }
    

    return 0;
} 