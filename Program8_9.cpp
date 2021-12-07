/*
Drivers License Exam
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/9/21
This program grades the test for a drivers license exam.
*/

#include <iostream>

using namespace std;

// function prototypes
void getInput();
void gradeResults(int score, int qMissed, int questionsMissed[]);

const int SIZE = 20;

// array and variable declaration.
string correctAnswers[SIZE] = {"B", "D", "A", "A", "C", "A", "B", "A", "C", "D", "B", "C", "D", "A", "D", "C", "C", "B", "D", "A"};
string answers[SIZE];
int questionsMissed[SIZE];
int qMissed;
int score;



int main()
{
    // call getInput function.
    getInput();

    // call gradeResults function.
    gradeResults(score, qMissed, questionsMissed);

    return 0;
}

// function definitions
void getInput()
{
    // for each increment prompt the user to enter data for answers.
    for (int i; i<SIZE; i++)
    {
        cout << "Enter the students answers: ";
        cin >> answers[i];
        cout << endl;

        // if the data in the index of answers is equal the data in the index of correct answers, increment the score.
        if (answers[i] == correctAnswers[i])
        {
            score++;
        }
        // if not, the data of questions missed is equal to the increment plus 1.
        // and qMissed is incremented by one.
        else
        {
            questionsMissed[qMissed] = i + 1;
            qMissed++;
        }
    }
}
void gradeResults(int score, int qMissed, int questionsMissed[])
{
    bool passed;

    // if the score is greater than or equal to 15. then display the student passed.
    if (score >= 15)
    {
        cout << "Student passed." << endl;
        cout << "Student  correctly answered " << score << "/20" << endl;
        cout << "Student missed " << qMissed << "/20" << endl;

    }
    // if the score is less than 15, display the student failed, how many questions were failed, and which questions were failed.
    if (score < 15)
    {
        cout << "Student failed." << endl;
        cout << "Student missed " << qMissed << "/20 questions" << endl;

        passed = false;

    }
    if (passed == false)
    {
        for (int x; x<qMissed; x++)
        {
            cout << "Student missed questions: " << questionsMissed[x] << endl;
        }
    }
}

