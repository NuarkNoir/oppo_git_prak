#include <iostream>


double my_pow(double num, unsigned int pow);

int main() {
    return 0;
}

double my_pow(double num, unsigned int pow) {
    double out = num;

    for (int i = 1; i < pow; i++) {
        out *= num;
    }

    return out;
}
