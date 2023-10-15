#include <iostream>
#include <string>
#include <vector>
#include <sstream>

double add(double value1, double value2);

double subtraction(double value1, double value2);

double multiplication(double value1, double value2);

double division(double value1, double value2);

std::vector<std::string> splitString(const std::string &line, char symbol);

int main() {

    std::string line;
    char symbol;
    getline(std::cin, line);

    std::vector<std::string> inputParts;

    if (line.find('+') != std::string::npos) {
        symbol = '+';
        inputParts = splitString(line, symbol);

        std::cout << add(std::stod(inputParts[0]), std::stod(inputParts[1]));
    } else if (line.find('-') != std::string::npos) {
        symbol = '-';
        inputParts = splitString(line, symbol);

        std::cout << subtraction(std::stod(inputParts[0]), std::stod(inputParts[1]));
    } else if (line.find('*') != std::string::npos) {
        symbol = '*';
        inputParts = splitString(line, symbol);

        std::cout << multiplication(std::stod(inputParts[0]), std::stod(inputParts[1]));
    } else if (line.find('/') != std::string::npos) {
        symbol = '/';
        inputParts = splitString(line, symbol);

        std::cout << division(std::stod(inputParts[0]), std::stod(inputParts[1]));
    }

    return 0;
}

double add(double value1, double value2) {
    return value1 + value2;
}

double subtraction(double value1, double value2) {
    return value1 - value2;
}

double multiplication(double value1, double value2) {
    return value1 * value2;
}

double division(double value1, double value2) {
    return value1 / value2;
}

std::vector<std::string> splitString(const std::string &line, char symbol) {
    std::vector<std::string> parts;
    std::istringstream ss(line);
    std::string token;

    while (std::getline(ss, token, symbol)) {
        parts.push_back(token);
    }

    return parts;
}

//Hello World with User Input:
//Write a program that takes the user's name as input and then prints a personalized greeting.

//#include <iostream>
//#include <string>
//
//void helloWorld(std::string name)
//{
//    std::cout << "Hello " << name << "!" << std::endl;
//}
//
//int main()
//{
//    std::string name;
//
//    std::cout << "Hi! What is your name?" << std::endl;
//    getline(std::cin, name);
//    helloWorld(name);
//
//    return 0;
//}

//Calculate Area of a Rectangle:
//Create a program that calculates and displays the area of a rectangle. Prompt the user to enter the length and width of the rectangle.

//#include <iostream>
//
//int calculateArea(int width, int height)
//{
//    return width * height;
//}
//
//int main()
//{
//    int width, height;
//
//    std::cout << "Hi! Enter the size of rectangle sides" << std::endl;
//    std::cout << "Enter the width:" << std::endl;
//    std::cin >> width;
//    std::cout << "Enter the height:" << std::endl;
//    std::cin >> height;
//    int area = calculateArea(width, height);
//
//    std::cout << "Rectangle area size is: " << area << std::endl;
//
//    return 0;
//}

//Temperature Conversion:
//Build a program that converts temperatures between Fahrenheit and Celsius. Ask the user for a temperature in one unit and display the equivalent temperature in the other unit.
//double convertTemperature(int temperature, int convertingFlag)
//{
//    if (convertingFlag == 1)
//    {
//        return static_cast<double>(temperature) * 1.8 + 32.0;
//    }
//    else
//    {
//        return (static_cast<double>(temperature) - 32.0) / 1.8;
//    }
//}
//
//int main()
//{
//    int convertingFlag;
//    int temperature;
//
//    std::cout << "Hey there! I can convert temperature for you." << std::endl;
//    std::cout << "Here are your options: \n" << std::endl;
//    std::cout << "0 - Convert from Fahrenheit to Celsius (ºF to ºC)" << std::endl;
//    std::cout << "1 - Convert from Celsius to Fahrenheit (ºC to ºF)\n" << std::endl;
//
//    std::cin >> convertingFlag;
//    int attempts = 3;
//
//    while (attempts > 0 && (convertingFlag != 0 && convertingFlag != 1))
//    {
//        std::cout << "You entered an invalid option. Please try again:" << std::endl;
//        std::cin >> convertingFlag;
//        attempts--;
//    }
//
//    if (attempts == 0)
//    {
//        std::cout << "Exceeded maximum attempts. Exiting." << std::endl;
//        return 1;
//    }
//
//    std::cout << "Enter the temperature value: " << std::endl;
//    std::cin >> temperature;
//
//    if (convertingFlag == 0)
//    {
//        double result = convertTemperature(temperature, 0);
//        std::cout << "Temperature in Celsius (ºC): " << result << std::endl;
//    }
//    else
//    {
//        double result = convertTemperature(temperature, 1);
//        std::cout << "Temperature in Fahrenheit (ºF): " << result << std::endl;
//    }
//
//    return 0;
//}
//
//Simple Calculator:
//Implement a basic calculator that can perform addition, subtraction, multiplication, and division. Take input from the user for two numbers and an operator (+, -, *, /) and display the result.
//
//Factorial Calculation:
//Write a program that calculates the factorial of a given positive integer using both iterative and recursive methods. Allow the user to input the number.
//
//Guess the Number Game:
//Create a simple number guessing game. Generate a random number between 1 and 100 and ask the user to guess it. Provide feedback on whether the guess is too high or too low until the user guesses correctly.
//
//Array Operations:
//Work with arrays. Prompt the user to enter a list of numbers and then perform operations like finding the sum, average, maximum, and minimum value of the entered numbers.
//
//String Manipulation:
//Experiment with string operations. Take a sentence as input and perform tasks like counting the number of words, reversing the string, or converting it to uppercase.
//
//File I/O:
//Practice reading and writing files. Create a program that reads data from a text file, manipulates it in some way (e.g., sort it), and writes the results back to another file.
//
//Classes and Objects:
//Start working with classes. Design a simple class (e.g., a "Person" class) with attributes and methods. Create instances of the class and demonstrate how to use them.
//
//Data Structures (Optional):
//If you're feeling more ambitious, try implementing simple data structures like a linked list or a stack in C++.