#include <iostream>
#include <cmath>
#include <iomanip>
#include <tuple>

// 二分法求解sqrt(2)
std::tuple<int, double, double> sqrt_binary_search(double left, double right, double tolerance){

    int terms = 0;
    std::cout << "Now using binary search to approximate sqrt(2)" << std::endl;
    std::cout << std::fixed << std::setprecision(10);


    while (right - left > tolerance){
        std::cout << "terms: " << terms++ << std::endl;
        double mid = (left + right) / 2;

        if (mid * mid > 2){
            std::cout << "left: " << left << " right: " << right << std::endl;
            right = (left + right) / 2;
        }
        else{
            std::cout << "left: " << left << " right: " << right << std::endl;
            left = (right + left) / 2;
        }

    }
    std::cout << "The value of sqrt(2) is " << (left + right) / 2 << std::endl;

    return std::make_tuple(terms, (left + right) / 2, std::abs((left + right) / 2 * (left + right) / 2 - 2));
}

// 巴比伦法求解sqrt(2)
std::tuple<int, double, double> sqrt_newton(double x, double tolerance){
    int terms = 0;
    std::cout << "Now using Babylonian Method to approximate sqrt(2)" << std::endl;
    std::cout << std::fixed << std::setprecision(10);

    while (std::abs(x * x - 2) > tolerance){
        std::cout << "terms: " << terms++ << std::endl;
        x = (x * x + 2) / (2 * x);
        std::cout << "x: " << x << std::endl;
    }
    std::cout << "The value of sqrt(2) is " << x << std::endl;

    return std::make_tuple(terms, x, std::abs(x * x - 2));
}

int main(){
    double left = 1.0;
    double right = 2.0;
    double tolerance = 0.001;
    int terms;
    double error;
    double sqrt_2;

    auto result = sqrt_binary_search(left, right, tolerance);
    terms = std::get<0>(result);
    sqrt_2 = std::get<1>(result);
    error = std::get<2>(result);

    std::cout << "The number of terms: " << terms << std::endl;
    std::cout << "The result is: " << sqrt_2 << std::endl;
    std::cout << "The error is: " << error << std::endl;

    auto result_newton = sqrt_newton(2, tolerance);
    terms = std::get<0>(result_newton);
    sqrt_2 = std::get<1>(result_newton);
    error = std::get<2>(result_newton);
    std::cout << "The number of terms: " << terms << std::endl;
    std::cout << "The result is: " << sqrt_2 << std::endl;
    std::cout << "The error is: " << error << std::endl;

    return 0;
}