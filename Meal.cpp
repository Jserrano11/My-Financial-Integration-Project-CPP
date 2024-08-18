//
// Created by serra on 7/8/2024.
//

#include "Meal.h"

Meal::Meal(double mealSub, double tax, double tip) : mealSub(mealSub), tax(tax), tip(tip) {
    this->mealSub = mealSub;
    this->tax = tax;
    this->tip = tip;
}

double Meal::calculateMealTotal() {
    double mealTotal = 0.0, mealTax = 0.0, mealTip = 0.0;
    mealTip = (tip / 100) * mealSub;
    mealTax = (tax / 100) * mealSub;
    mealTotal = mealSub + mealTip + mealTax;

}

double Meal::getMealSub() {
    return mealSub;
}

double Meal::getTip() {
    return tip;
}

double Meal::getTax() {
    return tax;
}