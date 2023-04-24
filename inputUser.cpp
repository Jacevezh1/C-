# include <iostream>

int main() {

    // Cout << (Insertion operator)
    // Cout << (Extraction operator)


    std::string name;
    int age;

    std::cout << "Whats your age";
    std::cin >> age;


    std::cout << "Whats your name:  ";
    std::getline(std::cin >> std::ws, name);
    
    
    
    std::cout << "Hello" << name;
    std::cout << "You are" << age << " Years old";
    

    return 0;
}