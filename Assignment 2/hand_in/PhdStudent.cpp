#include "PhdStudent.hpp"

PhdStudent::PhdStudent(std::string name, double fines, double fees, bool ft) 
    : GraduateStudent(name, fines, fees, ft) {}

double PhdStudent::MoneyOwed() const {
    return 0;  // PhD students pay nothing
}
