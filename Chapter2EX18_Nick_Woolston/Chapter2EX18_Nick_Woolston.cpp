/* Title: Chapter 2 Exerise 18 - Energy Drink Consumption
File Name : Chapter2EX18_Nick_Woolston.cpp
Programmer : Nicholas Woolston
Date : 27 / 10 / 2024
Requirements:
A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of customers that were surveyed
*/

#include <iostream>
using namespace std;
const int surveyTotal = 16500;
const double totalBuyers = 0.15;
const double citrusLovers = 0.58;


int main()
{
    cout << "A recent survey from a drink company which surveyed a total of 16,500 people found that of those participants 15% of them, or " << surveyTotal * totalBuyers << " people, bought energy drinks specifically on a weekly basis.\nFurther more, of those " << surveyTotal * totalBuyers << " people, " << surveyTotal * totalBuyers * citrusLovers << " prefer citrus-flavored energy drinks.";
    
   

}

