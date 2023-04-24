# include <iostream>
# include <ctime>

int main() {

    // Pseudorandom --> not trully random
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "Number guessing name" << std::endl;

    do{
        std::cout << "Enter a guess between 1 - 100" << std::endl;
        std::cin >> guess;
        tries++;

        if(guess > num) {
            std::cout << "To High" << std::endl;
        } else if (guess < num) {
            std::cout << "To low" << std::endl;
        } else {
            std::cout << "Correct, number of tries" << tries << std::endl;
        }
    } while (guess != num);


    std::cout << "********* END ************" << std::endl;
    
    
    return 0;
} 