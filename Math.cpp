# include <iostream>
# include <cmath>

int main() {

    double x = 4;
    double y = 2;
    double z = 3;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(2, 4);
    z = sqrt(9);
    z = ceil(3);


    std::cout << z;

    return 0;
}