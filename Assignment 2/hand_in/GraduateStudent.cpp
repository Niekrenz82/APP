#include "GraduateStudent.hpp"

GraduateStudent::GraduateStudent() : Student(), fullTime(false) {}

GraduateStudent::GraduateStudent(std::string name, double fines, double fees, bool ft) 
    : Student(name, fines, fees), fullTime(ft) {}

double GraduateStudent::MoneyOwed() const {
    double total = Student::MoneyOwed();
    if (fullTime) {
        return total * 0.5;  // fullTime grad students pay 50%
    } else {
        return total;  // partTime grad students pay 100%
    }
}
