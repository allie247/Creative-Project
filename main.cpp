#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void is_user_ready();
void get_answer_from_user(string question, string answerA, string answerB, string answerC, string explanationA, string explanationB, string explanationC, string correctAnswer);

int main() {
    is_user_ready();
    get_answer_from_user("prompt", "answer a", "answer b", "answer c", "explanation a", "explanation b", "explanation c", "a" );
    return 0;
}

void is_user_ready() {
    string ready = "no";
    bool flag = true;
    cout << "Welcome to my quiz! Let's see if you've got what it takes to be a man in ancient Rome. Are you ready? Enter yes to begin: "; //prompts user for input
    while (flag) {
        getline(cin, ready); //assigns input to string ready
        if (ready.length() == 0) { //no input
            cout << "No input. Enter yes to begin: ";
        } else if (ready != "yes") { //if input does not equal yes
            cout << "Invalid input. Enter yes to begin: ";
            ready = "no";
        } else {
            flag = false;
        }
    }
}

    void get_answer_from_user(string question, string answerA, string answerB, string answerC, string explanationA, string explanationB, string explanationC, string correctAnswer) {
        cout << question << endl;
        cout << "a: " + answerA << endl;
        cout << "b: " + answerB << endl;
        cout << "c: " + answerC << endl;
        string answer = "";
        bool flag = true;
        cout << "Enter your answer: "; //prompts user for input
        while (flag) {
            getline(cin, answer); //assigns input to string answer
            if (answer.length() == 0) { //no input
                cout << "No input. Enter a, b, or c: ";
            } else if (answer != "a" && answer != "b" && answer != "c") { //if input does not equal a, b, or c
                cout << "Invalid input. Enter a, b, or c: ";
                answer = "Retry";
            } else if (answer == "a") {
                cout << explanationA << endl;
            } else if (answer == "b") {
                cout << explanationB << endl;
            } else {
                cout << explanationC << endl;
            }
            if (correctAnswer == answer) {
                flag = false;
            }
            else {
                cout << "Try again: ";
            }
        }
    }