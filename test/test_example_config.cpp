#include <doctest.h>

#include "example/example.hpp"
#include "example/example_config.hpp"



TEST_SUITE_BEGIN("core");

TEST_CASE("check version"){

    #ifndef EXAMPLE_VERSION_MAJOR
        #error "EXAMPLE_VERSION_MAJOR is undefined"
    #endif
    

    #ifndef EXAMPLE_VERSION_MINOR
        #error "EXAMPLE_VERSION_MINOR is undefined"
    #endif


    #ifndef EXAMPLE_VERSION_PATCH
        #error "EXAMPLE_VERSION_PATCH is undefined"
    #endif

    CHECK_EQ(EXAMPLE_VERSION_MAJOR , 0);
    CHECK_EQ(EXAMPLE_VERSION_MINOR , 1);
    CHECK_EQ(EXAMPLE_VERSION_PATCH , 0);
}



TEST_SUITE_END(); // end of testsuite core
