#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int input_integer = 0;
    double input_double = 0;
    string input_string = "";
    std::cin >> input_integer;
    std::cin >> input_double;
    cin.ignore();
    getline(std::cin, input_string);
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
   
    // Print the sum of both integer variables on a new line.
    std::cout <<input_integer + i <<std::endl;
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + input_value);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    std::cout <<s <<input_string;
    return 0;

    
   