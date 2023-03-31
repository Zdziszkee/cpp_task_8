#include <iostream>

template<typename T>
auto sum(const std::initializer_list<T> &arg) {
    T sum = 0;
    for (auto it = arg.begin(); it != arg.end(); ++it) {
        sum += *it;
    }
    return sum;
}

int main() {
    auto arg_int = {1, 2, 3};
    auto result_int = sum(arg_int);
    std::cout << "Sum of {1, 2, 3} = " << result_int << std::endl;

    auto arg_double = {1.0, 2.5, 3.8};
    auto result_double = sum(arg_double);
    std::cout << "Sum of {1.0, 2.5, 3.8} = " << result_double << std::endl;}

