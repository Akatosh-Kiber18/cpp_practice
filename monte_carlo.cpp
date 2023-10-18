#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int iterations;
    std::cout << "Enter the number of iterations: ";
    std::cin >> iterations;

    if (iterations <= 0) {
        std::cout << "Please enter a valid positive number of iterations." << std::endl;
        return 1;
    }

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int insideCircle = 0;
    for (int i = 0; i < iterations; i++) {

        double x = static_cast<double>(std::rand()) / RAND_MAX;
        double y = static_cast<double>(std::rand()) / RAND_MAX;

        if (x * x + y * y <= 1.0) {
            insideCircle++;
        }
    }

    double pi_estimate = 4.0 * insideCircle / static_cast<double>(iterations);

    std::cout << "Estimated value of Pi after " << iterations << " iterations: " << pi_estimate << std::endl;

    return 0;
}
