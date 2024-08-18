//
// Created by serra on 7/4/2024.
//

#ifndef INTEREST_H
#define INTEREST_H



class Interest {
private:
    double principal;
    double annualInterestRate;
    double numYears;
public:
    Interest(double principal, double annualInterestRate, double numYears);

    double calculateInterest(double timeInvested);
    double calculateMonthlyInterest();
    double calculateQuarterlyInterest();
    double calculateSemiAnnualInterest();
    double calculateAnnualInterest();


    double getPrincipal();
    double getAnnualInterestRate();
    double getNumYears();

};



#endif //INTEREST_H
