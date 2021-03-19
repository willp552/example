#pragma once
#ifndef EXAMPLE_EXAMPLE_HPP
#define EXAMPLE_EXAMPLE_HPP

#include <cstdint>
#include <iostream>

namespace example {
    
    class MyClass
    {
    public:
        MyClass(const uint64_t size)
        : m_size(size)
        {

        }
        
        void hello_world()
        {
            std::cout<<"Hello World!\n";
        }
    private:
        uint64_t m_size;
    };

} // end namespace example


#endif // EXAMPLE_EXAMPLE_HPP