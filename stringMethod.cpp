# include <iostream>


int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) {
        std::cout << "Your name cant be over 12 chars";
    } else {
        std::cout << "Welcome " << name;
    }

    // name.empty() ----> returns bool
    // name.clear() ----> returns nothing, its clears
    // name.append("@gmail.com") ----> add a string to end of other
    // name.at(0) ----> return specific char of string
    // name.insert(0, "?") ----> Add char at begg
    // name.find(' ') ----> Find index first ws
    // name.erase(0, 3) ----> Delets chars from string


    return 0;
}