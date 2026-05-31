#include "GraduateStudent.hpp"

GraduateStudent::GraduateStudent() : Student(), fullTime(false) {}

GraduateStudent::GraduateStudent(std::string name, double fines, double fees, bool ft) 
    : Student(name, fines, fees), fullTime(ft) {}

double GraduateStudent::MoneyOwed() const {
    return GetLibraryFines();  // Graduate students do not pay tuition fees
}
