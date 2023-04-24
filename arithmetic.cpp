# include <iostream>

int main() {

    // Suma, division, resta, mtl

    int students = 20;

    // Incrementar
    students += 1;
    students++;

    // Minus
    students-=1;
    students--;


    // Mult
    students = students * 2;
    students*=2;

    // Div
    students = students / 2;
    students/=3;

    int remainder = students % 2;


    std::cout << remainder;

    
    int teachers = 6 - 5 + 4 * 3 / 2;
    std::cout << teachers;

    return 0;
}