#include <bits/stdc++.h>

using namespace std;

int Guess;
int Total;

class Question
{
private:
    string Question_text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;

    int Correct_Option;
    int Question_Score;

public:
    Question()
    {
        Total = 0;
    }
    void setValues(string Question, string Option1, string Option2, string Option3, string Option4, int Correct, int Score);
    void askQuestion();
};

int main()
{
    cout << "Press Enter to start quiz...";
    cin.get();

    string Name;
    int Age;
    cout << "Enter your name: ";
    cin >> Name;
    char Response;
    cout << "\nAre you ready to take the quiz, " << Name << "?(Y/N) ";
    cin >> Response;
    if (Response == 'Y' || Response == 'y')
    {
        cout << "Good Luck!" << endl;
    }
    else
    {
        cout << "Ok:(" << endl
             << "Bye!" << endl;
        return 0;
    }

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;

    q1.setValues("How are you?", "Fine", "Good", "BAD", "NOOOO", 2, 30);
    q2.setValues("What is the capital city of India?", "Mumbai", "Chennai", "New Delhi", "Calcutta", 3, 15);
    q3.setValues("What is the name of the largest ocean in the world?", "Atlantic Ocean", "Indian Ocean", "Pacific Ocean", "None of these", 3, 15);
    q4.setValues("What is the name of the smallest country in the world by area?", "Vatican City", "Maldives", "Italy", "Liechtenstein", 1, 15);
    q5.setValues("What is the name of the most visited country in the world?", "United States", "Switzerland", "India", "France", 4, 15);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();

    cout << "Your final score is " << Total << endl;
    cout << "\n";
    if(Total==90)
    {
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "---------------------------You got a perfect score:)--------------------------------" << endl;
        cout << "---------------------------------Yay, you win!--------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
    }
    else if (Total >= 45)
    {
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "---------------------------------Yay, you win!--------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
    }
    else
    {
        cout << "You lost:(" << endl;
    }

    return 0;
}

void Question::setValues(string Question, string Option1, string Option2, string Option3, string Option4, int Correct, int Score)
{
    Question_text = Question;
    Answer_1 = Option1;
    Answer_2 = Option2;
    Answer_3 = Option3;
    Answer_4 = Option4;
    Correct_Option = Correct;
    Question_Score = Score;
}

void Question::askQuestion()
{
    cout << Question_text << endl;
    cout << "1. " << Answer_1 << "      2. " << Answer_2 << "       3. " << Answer_3 << "      4. " << Answer_4 << endl;
    cout << "Answer this question for " << Question_Score << " points\n";
    cout << "Enter your answer: ";
    cin >> Guess;
    if (Guess == Correct_Option)
    {
        cout << "CORRECT!!" << endl;
        cout << "\n";
        Total += Question_Score;
    }
    else
    {
        cout << "WRONG ANSWER" << endl;
        cout << "\n";
    }
}