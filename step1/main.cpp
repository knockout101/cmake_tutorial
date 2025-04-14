#include <iostream>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        std::cerr << "Invalid CLI arguments" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "Hello " << argv[1] << std::endl;
    return 0;
}