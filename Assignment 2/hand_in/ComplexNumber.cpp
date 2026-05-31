#include "ComplexNumber.hpp"
#include <cmath>

ComplexNumber::ComplexNumber() : mRealPart(0), mImaginaryPart(0) {}

ComplexNumber::ComplexNumber(double x, double y) : mRealPart(x), mImaginaryPart(y) {}

ComplexNumber::ComplexNumber(double real) : mRealPart(real), mImaginaryPart(0) {}

ComplexNumber::ComplexNumber(const ComplexNumber& z) : mRealPart(z.mRealPart), mImaginaryPart(z.mImaginaryPart) {}

double ComplexNumber::CalculateModulus() const {
    return std::sqrt(mRealPart * mRealPart + mImaginaryPart * mImaginaryPart);
}

double ComplexNumber::CalculateArgument() const {
    return std::atan2(mImaginaryPart, mRealPart);
}

ComplexNumber ComplexNumber::CalculatePower(double n) const {
    double r = CalculateModulus();
    double theta = CalculateArgument();
    double r_n = std::pow(r, n);
    double theta_n = n * theta;
    return ComplexNumber(r_n * std::cos(theta_n), r_n * std::sin(theta_n));
}

ComplexNumber ComplexNumber::CalculateConjugate() const {
    return ComplexNumber(mRealPart, -mImaginaryPart);
}

void ComplexNumber::SetConjugate() {
    mImaginaryPart = -mImaginaryPart;
}

double ComplexNumber::GetRealPart() const {
    return mRealPart;
}

double ComplexNumber::GetImaginaryPart() const {
    return mImaginaryPart;
}

double RealPart(const ComplexNumber& z) {
    return z.GetRealPart();
}

double ImaginaryPart(const ComplexNumber& z) {
    return z.GetImaginaryPart();
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& z) {
    mRealPart = z.mRealPart;
    mImaginaryPart = z.mImaginaryPart;
    return *this;
}

ComplexNumber ComplexNumber::operator-() const {
    return ComplexNumber(-mRealPart, -mImaginaryPart);
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& z) const {
    return ComplexNumber(mRealPart + z.mRealPart, mImaginaryPart + z.mImaginaryPart);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& z) const {
    return ComplexNumber(mRealPart - z.mRealPart, mImaginaryPart - z.mImaginaryPart);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& z) const {
    double real = mRealPart * z.mRealPart - mImaginaryPart * z.mImaginaryPart;
    double imag = mRealPart * z.mImaginaryPart + mImaginaryPart * z.mRealPart;
    return ComplexNumber(real, imag);
}

std::ostream& operator<<(std::ostream& output, const ComplexNumber& z) {
    output << z.GetRealPart() << " + " << z.GetImaginaryPart() << "i";
    return output;
}
