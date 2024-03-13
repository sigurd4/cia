#include <iostream>

#include "cia.hpp"

template<typename A, typename B>
void assert_eq(const A& a, const B& b)
{
    if(!(a == b) || a != b)
    {
        throw "Unequal";
    }
}

template<typename T>
void test()
{
    for(T a {std::numeric_limits<T>::min()}; a != std::numeric_limits<T>::max(); ++a)
    {
        for(T b {std::numeric_limits<T>::min()}; b != std::numeric_limits<T>::max(); ++b)
        {
            (void)sss::cia::checked_add(a, b);
            (void)sss::cia::checked_sub(a, b);
            (void)sss::cia::checked_rem(a, b);
            (void)sss::cia::checked_mul(a, b);
            (void)sss::cia::checked_div(a, b);
        }
    }
}

int main()
{
    test<char>();
    test<unsigned char>();
    /*test<short>();
    test<unsigned short>();
    test<int>();
    test<unsigned int>();
    test<long>();
    test<unsigned long>();
    test<long long>();
    test<unsigned long long>();*/
}