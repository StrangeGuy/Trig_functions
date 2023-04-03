
#include <iostream>
#include <cmath>

int main()
{
    std::string greeting{ "/* \n 1. Calculate cos() \n 2.Calculate sin(). \n 3.Exit. \n */" };
    std::cout << greeting<<std::endl;
    int function;
    double value;
    double output;
    std::cin >> function >> value;
    switch (function) {
    case 1:
        output = cos(value);
        std::cout << "The cosine of " << value << " radians is: " << output<<"."<<std::endl;
        break;
    case 2:
        output = sin(value);
        std::cout << "The sine of " << value << " radians is: " << output << "." << std::endl;
        break;
    case 3:
        std::cout << "Goodbye!";
        break;
    default:
        std::cout << "Something went terribly wrong!";
    }

}

