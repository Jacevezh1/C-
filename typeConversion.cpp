# include <iostream>

int main() {

    // Implicito 
    // int x = 3.14;
    double x = (int) 3.14;

    std::cout << x;


    char y = 100;
    std::cout << y;


    int correct = 8;
    int questions = 10;

    // Explicito
    double score = correct /(double)questions * 100;

    std::cout << score << "%";

    

    return 0;
}