// Program 6 : Finding percentage and grade of student
#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;
    }
};

class Result : public Student
{
private:
    float mark1, mark2, mark3;
    float total, percentage;
    char grade;

public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void calculate()
    {
        total = mark1 + mark2 + mark3;
        percentage = total / 3;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 50)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\n----- Student Result -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main()
{
    Result r;

    r.getDetails();
    r.getMarks();
    r.calculate();
    r.display();

    return 0;
}

