#include <iostream>

template <typename T>
struct LoggingAllocator
{
    using value_type = T;
    LoggingAllocator() = default;

    T *allocate(size_t n)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        void *p = std::malloc(n * sizeof(T));
        if (!p)
        {
            throw std::bad_alloc();
        }

        return reinterpret_cast<T *>(p);
    }

    void deallocate(T *p, size_t n)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        std::free(p);
    }
    template <typename U, typename... Args>
    void construct(U *p, Args &&...args)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        new (p) U(std::forward<Args>(args)...);
    }

    void destroy(T *p)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        p->~T();
    }
};

struct Test
{
    int a = 1;
    int b = 2;
    double c = 3;
    Test() = default;
    Test(const Test &other) noexcept
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        a = other.a;
        b = other.b;
        c = other.c;
    }
    Test(Test &&other) noexcept
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        a = other.a;
        b = other.b;
        c = other.c;
    }
    ~Test()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    Test(int a, int b) : a(a), b(b) {}
    Test(int a, int b, double c) : a(a), b(b), c(c) {}
    double calc() const noexcept { return a + b + c; }
    friend std::ostream &operator<<(std::ostream &os, const Test &t);
};

std::ostream &operator<<(std::ostream &os, const Test &t)
{
    os << t.a << "+" << t.b << "+" << t.c << "=" << t.calc() << std::endl;
    return os;
}
