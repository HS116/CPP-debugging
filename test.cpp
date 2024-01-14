#include <iostream>
#include <string>
#include <vector>

int main(void) {
    std::string str = "hello world";

    std::cout << str << std::endl;

    std::vector<std::string> vec = {"a", "b", "c"};

    for (std::string str : vec) {
        std::cout << str << std::endl;
    }
}