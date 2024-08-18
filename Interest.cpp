//
// Created by serra on 7/4/2024.
//

#include "Interest.h"

#include <cmath>

Interest::Interest(double principal, double annualInterestRate, double numYears) : principal(principal), annualInterestRate(annualInterestRate), numYears(numYears) {
    this -> principal = principal;
    this -> annualInterestRate = annualInterestRate;
    this -> numYears = numYears;
}

double Interest::calculateInterest(double timeInvested){
    return (principal * pow(1 + ((annualInterestRate / 100) / timeInvested), timeInvested)) - principal;
}

double Interest::calculateMonthlyInterest() {
    double timeInvested = numYears * 12;
    return calculateInterest(timeInvested);
}

double Interest::calculateQuarterlyInterest() {
    double timeInvested = numYears * 4;

    return calculateInterest(timeInvested);
}

double Interest::calculateSemiAnnualInterest() {
    double timeInvested = numYears * 2;

    return calculateInterest(timeInvested);
}

double Interest::calculateAnnualInterest() {
    double timeInvested = numYears * 1;

    return calculateInterest(timeInvested);
}

double Interest::getPrincipal() {
    return principal;
}

double Interest::getAnnualInterestRate() {
    return annualInterestRate;
}

double Interest::getNumYears() {
    return numYears;
}