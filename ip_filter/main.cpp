#include "src/ip_filter.cpp"

int main(int argc, char const *argv[]) {
    try {
        IpFIlter();

    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
