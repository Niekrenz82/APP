#include "PhdStudent.hpp"

PhdStudent::PhdStudent(std::string name, double fines, double fees, bool ft) 
    : GraduateStudent(name, fines, fees, ft) {}

double PhdStudent::MoneyOwed() const {
    double total = Student::MoneyOwed();
    return total * 0.1;  // PhD students pay 10% of total
}
