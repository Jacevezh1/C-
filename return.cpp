// Header files, input and output
# include <iostream>


double square(double lenght);
double cube(double lenght);

std::string concatStr(std::string string1, std::string string2);


int main() {

    double lenght = 6.0;
    double area = square(lenght);
    double volume = cube(lenght);

    std::string firstName = "Bro";
    std::string lastName = "Code";
    std::string fullName = concatStr(firstName, lastName);

    std::cout << "Hello: " << fullName << std::endl;
    
    std::cout << "Area: " << area << std::endl;
    std::cout << "Volume: " << area << std::endl;






    return 0;
}

// If we return something change void for data type of return
double square(double lenght) {
    double result = lenght * lenght;

    return result;
}


double cube(double lenght) {
    double result = lenght * lenght * lenght;

    return result;
}

std::string concatStr(std::string string1, std::string string2) {
    return string1 + " " + string2;
}