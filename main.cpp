#include <iomanip>
#include <iostream>

#include "Interest.h"
#include "Loan.h"
#include "Meal.h"

void calculateLoan();
void calculateInterest();
void calculateMealTotal();

int main() {

    char menuChoice;

    std::cout << "__________________________________Welome to the World Class Financial Calculator!__________________________________" << std::endl;

    do {

        std::cout << "I for Interest Calculator  \nL for Loan Calculator \nM for Meal Calculator \nE to Exit" << std::endl;

        std::cin >> menuChoice;
        menuChoice = toupper(menuChoice);

        switch (menuChoice) {

            case 'I':
                calculateInterest();
                break;

            case 'L':
                calculateLoan();
                break;

            case 'M':
                calculateMealTotal();
                break;

            default:
                std::cout << "\nThat is not a Valid Option, Please Try Again!" << "\n" << std::endl;

        }


    } while(menuChoice != 'E');

    return 0;
}

void calculateLoan() {
    double principal, rate, timeInYears;

    std::cout << "First, enter the Total Loan Value: " << std::endl;
    std::cin >> principal;

    std::cout << "Now, enter the Interest Rate of the Loan (Whole Numbers Only): " << std::endl;
    std::cin >> rate;

    std::cout << "Lastly, how many Years will the Loan be Financed: " << std::endl;
    std::cin >> timeInYears;

    Loan loan(principal, rate, timeInYears);

    double monthlyPayment = loan.calculateMonthlyPayment();

    std::cout << "Loan Summary: " << std::endl;
    std::cout << "Loan Principal: $" << std::fixed << std::setprecision(2) << loan.getPrincipal() << std::endl;
    std::cout << "Loan Interest Rate: " << std::fixed << std::setprecision(3) << loan.getAnnualInterestRate() << "%" << std::endl;
    std::cout << "Loan Time in Years: " << int(loan.getNumYears()) << std::endl;
    std::cout << "Your Monthly Loan Payment Would Be: $" << std::fixed << std::setprecision(2) << monthlyPayment << std::endl;

}

void calculateMealTotal() {
    double mealSub, tax, tip, mealTotal = 0.0;

    std::cout << "First, Enter the Total Cost of your Meal: " << std::endl;
    std::cin >> mealSub;

    std::cout << "Next, Enter your Local Area Sales Tax Percent (Whole Numbers Only): " << std::endl;
    std::cin >> tax;

    std::cout << "Lastly, Enter your Desired tip Percentage (Whole Numbers Only): " << std::endl;
    std::cin >> tip;

    Meal meal(mealSub, tax, tip);

    mealTotal = meal.calculateMealTotal();

    std::cout << "Meal Summary: " << std::endl;
    std::cout << "Meal Sub-Total: $" << std::fixed << std::setprecision(2) << meal.getMealSub() << std::endl;

    std::cout << "Meal Tax Percent is: " << std::fixed << std::setprecision(2) << meal.getTax() / 100.0 << "%" << std::endl;

    std::cout << "Meal Tip Percent is: " << std::fixed << std::setprecision(2) << meal.getTip() / 100.0 << "%" << std::endl;

    std::cout << "Meal Total: $" << std::fixed << std::setprecision(2) << mealTotal << std::endl;

}

void calculateInterest() {
    double principal, rate, timeInYears;
    char compound;

    std::cout << "First, enter the Total Amount to be Invested: " << std::endl;
    std::cin >> principal;

    std::cout << "Now, enter the Annual Interest Rate (Whole Numbers Only): " << std::endl;
    std::cin >> rate;

    std::cout << "Next, how many Years will you be Investing this?: " << std::endl;
    std::cin >> timeInYears;

    std::cout << "Lastly, how will the Interest be Compounded?: \nM for Monthly \nQ for Quarterly \nS for Semi-Annual \nA for Annual" << std::endl;
    std::cin >> compound;
    compound = toupper(compound);

    Interest interest(principal, rate, timeInYears);

    double amountEarned = 0.0;

    switch(compound) {

        case 'M':
            amountEarned = interest.calculateMonthlyInterest();
            break;

        case 'Q':
            amountEarned = interest.calculateQuarterlyInterest();
            break;

        case 'S':
            amountEarned = interest.calculateSemiAnnualInterest();
            break;

        case 'A':
            amountEarned = interest.calculateAnnualInterest();
            break;

        default:
            std::cout << "\nSorry that is not a Valid Option, Please Try Again! \n" <<std::endl;

    }

    std::string compoundType;
    if(compound == 'M') {
        compoundType = "Monthly";
    }
    if(compound == 'Q') {
        compoundType = "Quarterly";
    }
    if(compound == 'S') {
        compoundType = "Semi-Annually";
    }
    if(compound == 'A') {
        compoundType = "Annually";
    }

    std::cout << "\nCompound Interest Summary: " << std::endl;
    std::cout << "Principal: $" << std::fixed << std::setprecision(2) << interest.getPrincipal() << std::endl;
    std::cout << "Compound Interest Rate: " << std::fixed << std::setprecision(3) << interest.getAnnualInterestRate() << "%" << std::endl;
    std::cout << "Time Invested in Years: " << interest.getNumYears() << std::endl;
    std::cout << "Interest Compounded: " << compoundType << std::endl;
    std::cout << "Your Total Amount of Compounded Interest Earned is: $" << std::fixed << std::setprecision(2) << amountEarned << "\n" << std::endl;

}

