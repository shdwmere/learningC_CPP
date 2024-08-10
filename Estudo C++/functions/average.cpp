#include <iostream>
#include <vector>

// média
double average(double num1, double num2, double num3, double num4, double num5) {

    std::vector<double> numbers = {num1, num2, num3, num4, num5};

    double sum = 0;

    for(int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    return sum / numbers.size();

}

int main() {
  
  std::cout << "Average: " << average(42.0, 24.0, 40.00, 13.00, 20.00) << "\n";
  
}