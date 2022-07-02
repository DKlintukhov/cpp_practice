#pragma once

#include <iostream>

namespace headerOnly
{
    class HeaderOnly
    {
    private:
        /* data */
    public:
        HeaderOnly();
        ~HeaderOnly() = default;
    };
    HeaderOnly::HeaderOnly()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
}
