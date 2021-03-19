#include <iostream>

#include "example/example.hpp"
#include "example/example_config.hpp"

int main(int argc, char *argv[]){
    std::cout<<"EXAMPLE_VERSION_MAJOR "<<EXAMPLE_VERSION_MAJOR<<"\n";
    std::cout<<"EXAMPLE_VERSION_MINOR "<<EXAMPLE_VERSION_MINOR<<"\n";
    std::cout<<"EXAMPLE_VERSION_PATCH "<<EXAMPLE_VERSION_PATCH<<"\n";
}