#include <iostream>


double my_pow(double num, int pow);

int main() {
    return 0;
}

double my_pow(double num, int pow) {
    double out = 1;
    bool neg = pow < 0;

    if (neg) {
        pow *= -1;
        for (int i = 0; i < pow; i++) {
            out /= num;
        }
    }
    else {
        for (int i = 0; i < pow; i++) {
            out *= num;
        }
    }

    return out;
}
