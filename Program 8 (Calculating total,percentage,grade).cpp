// Program 8 : Calculating total, percentage and grade of 5 subjects of a student
#include <iostream>
using namespace std;

int main()
{
    float marks[5], total = 0, percentage;
    char grade;

    cout << "Enter marks of 5 subjects:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];

        total = total + marks[i];
    }

    percentage = total / 5;

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 75)
        grade = 'B';
    else if(percentage >= 60)
        grade = 'C';
    else if(percentage >= 50)
        grade = 'D';
    else
        grade = 'F';

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}


