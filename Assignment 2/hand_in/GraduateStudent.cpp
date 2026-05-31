#include "GraduateStudent.hpp"

GraduateStudent::GraduateStudent() : Student(), fullTime(false) {}

GraduateStudent::GraduateStudent(std::string name, double fines, double fees, bool ft) 
    : Student(name, fines, fees), fullTime(ft) {}

double GraduateStudent::MoneyOwed() const {
    double total = Student::MoneyOwed();  // tuition_fees + library_fines
    if (fullTime) {
        return total * 0.5;  // Full-time graduate students pay 50% discount
    } else {
        return total;  // Part-time graduate students pay full amount
    }
}
