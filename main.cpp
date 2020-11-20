#include <iostream>


double my_pow(double num, unsigned int pow);

int main() {
    return 0;
}

double my_pow(double num, unsigned int pow) {
    if (pow == 0) {
        return 1;
    }
    if (pow == 1) {
        return num;
    }
    double oneHalf = my_pow(num, pow/2);
    return oneHalf * oneHalf * my_pow(num, pow%2);
}
