#include <iostream>
#include <thread>
#include <mutex>

int myValue = 0;
std::mutex m;

void incr(){
 // m.lock();
 for (int i = 0; i < 100000; ++i) {
        myValue++;
    }
 // m.unlock();
}

int main() {
    std::thread t1(incr);
    std::thread t2(incr);

    t1.join();
    t2.join();
    
    std::cout << "Value: "<< myValue << std::endl;
    
    return 0;
}
