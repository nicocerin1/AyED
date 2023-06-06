#include <iostream>
#include <cmath>

int main() {
    double pi = 0.0;
    double epsilon = 1e-6; // presición solicitada (6 decimales)
    int i = 0;

    while (std::abs(4 * pi - M_PI) > epsilon) {
        double term = (i % 2 == 0) ? 1.0 : -1.0;
        pi += term / (2 * i + 1);
        i++;
    }
    
    std::cout << "El valor de pi es: " << 4 * pi << std::endl;

    return 0;
}
