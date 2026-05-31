#include "GraduateStudent.hpp"

GraduateStudent::GraduateStudent() : Student(), fullTime(false) {}

GraduateStudent::GraduateStudent(std::string name, double fines, double fees, bool ft) 
    : Student(name, fines, fees), fullTime(ft) {}

double GraduateStudent::MoneyOwed() const {
    if (fullTime) {
        return tuition_fees;  // Full-time graduate students pay only tuition
    } else {
        return Student::MoneyOwed();  // Part-time pays everything
    }
}
