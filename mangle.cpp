#include <iostream>
#include <typeinfo>
#include <cxxabi.h> // Include this header for __cxa_demangle

template <typename T>
std::string get_mangled_type_name() {
    int status;
    char* demangled = abi::__cxa_demangle(typeid(T).name(), nullptr, nullptr, &status);
    std::string result = demangled ? demangled : typeid(T).name();
    std::free(demangled);
    return result;
}

int main() {
    auto decimal = 49.22;

    std::cout << "Size of 'decimal': " << sizeof(decimal) << " bytes" << std::endl;

    // Printing the mangled name of the type using typeid and std::cout
    std::cout << "Variable 'decimal' has mangled type name: " << get_mangled_type_name<decltype(decimal)>() << std::endl;

    return 0;
}
