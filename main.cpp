#include <iostream>

int calculateArea(int width, int height)
{
    return width * height;
}

int main()
{
    std::string a, b;

    a = "Hello";
    b = "There";

    std::string c = a + b;

    std::cout << c << std::endl;

    return 0;
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