//
// Created by serra on 7/8/2024.
//

#ifndef MEAL_H
#define MEAL_H



class Meal {
private:
    double mealSub;
    double tip;
    double tax;

public:
    Meal(double mealSub, double tax, double tip);

    double calculateMealTotal();

    double getMealSub();
    double getTip();
    double getTax();

};



#endif //MEAL_H
