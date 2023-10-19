#include <iostream>
#include <thread>

typedef unsigned long long ull;
ull oddSum = 0;
ull evenSum = 0;

void findEven(ull start, ull end);
void findOdd(ull start, ull end);

int main() {
    ull start = 0, end = 1900000000;

    std::thread t1(findEven, start, end);
    std::thread t2(findOdd, start, end);

    t1.join();
    t2.join();

    std::cout << "Odd sum = " << oddSum << std::endl;
    std::cout << "Even sum = " << evenSum;
    return 0;
}

void findEven(ull start, ull end) {
    for (ull i = start; i <= end; ++i) {
        if ((i % 2) == 0) {
            oddSum += i;
        }
    }
}
void findOdd(ull start, ull end) {
    for (ull i = start; i <= end; ++i) {
        if ((i % 2) != 0) {
            evenSum += i;
        }
    }
}