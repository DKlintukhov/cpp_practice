#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class IpFIlter {
public:
    IpFIlter() {
        std::vector<std::string> lines;
        for (std::string line; std::getline(std::cin, line);) {
            int spaceIdx = line.find('\t');
            lines.push_back(std::string(line).substr(0, spaceIdx));
        }

        std::sort(lines.begin(), lines.end());

        for (const auto& line : lines) {
            std::cout << line << std::endl;
        }
    }
};
