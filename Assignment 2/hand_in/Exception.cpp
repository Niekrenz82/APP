#include "Exception.hpp"
#include <iostream>

Exception::Exception(std::string tagString, std::string probString) 
    : mTag(tagString), mProblem(probString) {}

void Exception::PrintDebug() const {
    std::cout << "Exception [" << mTag << "]: " << mProblem << std::endl;
}
