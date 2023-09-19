#include "pch.h"

// author
// gendloop
// author-end

// brief
// This is a test file example
// brief-end

// include
// c++
#include <string>
#include <vector>
// include-end

// code
TEST(Example, Case1) {
  DEBUG << "Example: Case1" << std::endl;
  
  INFO << "group_name: Example; case_name: Case1" << std::endl;
}

TEST(Example, Case2) {
  DEBUG << "Example: Case2" << std::endl;
  
  INFO << "group_name: Example; case_name: Case2" << std::endl;
}
// code-end