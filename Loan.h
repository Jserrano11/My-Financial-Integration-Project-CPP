//
// Created by serra on 7/4/2024.
//

#ifndef LOAN_H
#define LOAN_H



class Loan {
private:
    double principal;
    double annualInterestRate;
    double numYears;

public:
    Loan(double principal, double annualInterestRate, double numYears);

    double calculateMonthlyPayment();
    double getPrincipal();
    double getAnnualInterestRate();
    double getNumYears();


};



#endif //LOAN_H
