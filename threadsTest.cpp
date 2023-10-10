#include <iostream>
#include <thread>

void printHello(int threadID) {
    std::cout << "Hello from thread " << threadID << std::endl;
}

int main() {
    const int numThreads = 5;
    std::thread threads[numThreads];

    for (int i = 0; i < numThreads; ++i) {
        threads[i] = std::thread(printHello, i); // Create threads and assign tasks
    }

    for (int i = 0; i < numThreads; ++i) {
        threads[i].join(); // Wait for threads to finish
    }

    return 0;
}
