#include <iostream>
#include <chrono>
#include <ctime>
#include <sstream>

int main() {
    // Get the user input
    std::cout << "Enter a time offset in days (e.g., '2 days ago'): ";
    std::string input;
    std::getline(std::cin, input);

    // Parse the input to extract the number of days
    int daysAgo = 0;
    std::istringstream iss(input);
    iss >> daysAgo;

    // Calculate the current time in GMT
    auto currentTime = std::chrono::system_clock::now();
    auto gmtTime = std::chrono::system_clock::to_time_t(currentTime);

    // Calculate the user local time that was X days ago
    std::tm localTimeInfo = *std::localtime(&gmtTime);
    localTimeInfo.tm_mday -= daysAgo; // Subtract days
    std::time_t localTime = std::mktime(&localTimeInfo);

    std::cout << "Local time " << daysAgo << " days ago: " << std::ctime(&localTime);

    return 0;
}

