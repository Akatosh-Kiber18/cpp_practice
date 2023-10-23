#include <iostream>
#include <thread>
#include <mutex>

int myValue = 0;
std::mutex m;

void incr(){
    // m.lock();
    ++myValue;
    // m.unlock();
}

int main() {
    int step = 1;
    while (step > 0) {
    std::thread t1(incr);
    std::thread t2(incr);
    std::thread t3(incr);
    std::thread t4(incr);
    std::thread t5(incr);
    std::thread t6(incr);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    
    std::cout << step << ": "<< myValue << std::endl;
    myValue = 0;
    step++;
    if (myValue == 5) {
        step = 0;
    }
    }
    return 0;
}
