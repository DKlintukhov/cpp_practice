#include <iostream>
#include <vector>
#include "./src/logging_allocator.cpp"


int main(int argc, char **argv)
{
    auto v = std::vector<Test, LoggingAllocator<Test>>(2);
    v.emplace_back(1, 2, 2.5);
    v.emplace_back(2, 3, 4.5);
    for (const auto &t : v)
    {
        std::cout << t << std::endl;
    }

    return 0;
}
