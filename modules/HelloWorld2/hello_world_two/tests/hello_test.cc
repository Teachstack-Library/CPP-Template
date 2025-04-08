#include <gtest/gtest.h>
#include <iostream>
#include <sstream>

namespace local {
    #include "../exercise/main.cc"
}

namespace Test {
    TEST(HelloTestTwo, HelloWorldTwo) {
        std::stringstream buffer;
        std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());  // Redirect cout

        local::main();
        
        std::cout.rdbuf(oldCout);  // Restore original cout
        std::string output = buffer.str();

        ASSERT_EQ(output, "Hello World!\n")
            << "Program output should contain 'Hello World!'. Actual output:\n" << output;
    }
}