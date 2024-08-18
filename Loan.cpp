//
// Created by serra on 7/4/2024.
//

#include "Loan.h"

#include <cmath>

Loan::Loan(double principal, double annualInterestRate, double numYears) : principal(principal), annualInterestRate(annualInterestRate), numYears(numYears) {
    this -> principal = principal;
    this -> annualInterestRate = annualInterestRate;
    this -> numYears = numYears;
}

double Loan::calculateMonthlyPayment(){
    double monthlyInterestRate = ((getAnnualInterestRate() / 12.0) / (100.0));

    double numPayments = getNumYears() * 12.0;

    double monthlyPayment = (getPrincipal() * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -numPayments));

    return monthlyPayment;

}

double Loan::getPrincipal(){
    return principal;
}

double Loan::getAnnualInterestRate(){
    return annualInterestRate;
}

double Loan::getNumYears(){
    return numYears;
}
