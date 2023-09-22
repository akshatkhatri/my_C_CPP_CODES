// author-akshat khatri
// date-24-08-2023
//  creating a struct of batting figures

#include <iostream>
#include <cmath>
#include <string>

struct cricketer
{
    std::string name;
    int runs;
    int innings;
    int not_out;
    float average;
};

int main()
{
    struct cricketer batter1, batter2, batter3;

    batter1 = {"sachin", 8430, 230, 18};

    batter2 = {"saurav", 4200, 130, 9};

    batter3 = {"rahul", 3350, 105, 11};

    batter1.average = (float)(batter1.runs) / (float)(batter1.innings);
    batter2.average = (float)(batter2.runs) / (float)(batter2.innings);
    batter3.average = (float)(batter3.runs) / (float)(batter3.innings);

    std::cout << "Name\tRuns\tInnings\tNot Out\tAverage" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << batter1.name << "\t" << batter1.runs << "\t" << batter1.innings << "\t" << batter1.not_out << "\t" << batter1.average << std::endl;
    std::cout << batter2.name << "\t" << batter2.runs << "\t" << batter2.innings << "\t" << batter2.not_out << "\t" << batter2.average << std::endl;
    std::cout << batter3.name << "\t" << batter3.runs << "\t" << batter3.innings << "\t" << batter3.not_out << "\t" << batter3.average << std::endl;
    // int array[]={20,30,40};
    // std::cout<<-array[2];

}
