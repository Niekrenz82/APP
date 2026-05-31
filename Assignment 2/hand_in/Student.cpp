#include "Student.hpp"

Student::Student() : name(""), tuition_fees(0), library_fines(0) {}

Student::Student(std::string n, double fines, double fees) 
    : name(n), tuition_fees(fees), library_fines(fines) {}

double Student::MoneyOwed() const {
    return library_fines + tuition_fees;
}

void Student::SetLibraryFines(double amount) {
    library_fines = amount;
}

double Student::GetLibraryFines() const {
    return library_fines;
}
