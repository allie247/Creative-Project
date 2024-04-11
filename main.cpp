#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void is_user_ready();
void get_answer_from_user(string question, string answerA, string answerB, string answerC, string explanationA, string explanationB, string explanationC, string correctAnswer);

int main() {
    is_user_ready();
    cout << "\nQuestion 1:\n" << endl;
    get_answer_from_user("A girl you are interested in rejects you. What should you do?",
                         "Take detours in order to follow her and mimic her actions.",
                         "Respect that she is not interested in you and leave her alone.",
                         "Keep writing letters to her even though she is not responding to your previous \nletters.",
                         "Correct! Don’t feel ashamed to fritter away your time at her whim, to show her \nthat she should not be allowed to exist without you.",
                         "Incorrect. She wants what she doesn’t ask for, and so you must continue to \npersist, regardless of her attempts to reject you.",
                         "Incorrect. You just need to make sure she keeps reading your sweet nothings, and \neventually she will write back. Don’t force it.",
                         "a" ); //question 1
    cout << "\nQuestion 2:\n" << endl;
    get_answer_from_user("You see a woman that you find attractive at a sporting event. What should you do",
                         "Sit down next to her and brush away the absence of specks on her bosom.",
                         "Allow the man behind her to press his knee into her soft back.",
                         "Applaud for a different horse than she is cheering for.",
                         "Correct! The conditions are such that you have to touch her, regardless of \nwhether or not there is reason to. Nobody is stopping you, so find any way to do so.",
                         "Incorrect. In allowing this behavior, you would be allowing another man to \nassert dominance over you, considering the girl is your territory.",
                         "Incorrect. Instead, you must applaud for the horse that she is rooting \nfor, regardless of whether or not you care about the race.",
                         "a"); //question 2
    cout << "\nQuestion 3:\n" << endl;
    get_answer_from_user("You attend a dinner party and notice a pretty girl. What should you do?",
                         "Drink a lot of wine to give yourself courage.",
                         "Wait until you are able to consult the daylight to see if she is actually pretty.",
                         "Approach her in the lamplight and express your interest in her.",
                         "Incorrect. It is important to have a fixed measure when drinking alcohol in \norder for your mind and body to continue functioning and to make sure a quarrel is not spurred on.",
                         "Correct! Wait until you are able to judge her accurately. You do not want a \nwoman who deceives you, but a woman who is submissive to you.",
                         "Incorrect. The lamplight is treacherous, wreaking havoc on judgements of \nbeauty. She will deceive you if you do this.",
                         "b"); //question 3
    cout << "\nQuestion 4:\n" << endl;
    get_answer_from_user("You want to prove your manliness to the woman that interests you. What should you \ndo?",
                         "Swing weights that are heavy, but not too heavy, in front of her.",
                         "Wolf down sixteen meatballs in front of her.",
                         "Perform oral sex on her.",
                         "Correct! This will show her that you are able to assert control over your \nactions and regulate your own levels of masculinity.",
                         "Incorrect. You must show her that you are able to control your body through \nthe regulation of your consumption.",
                         "Incorrect. Performing oral sex on a woman is the equivalent of being eaten by \nher vagina. If you engage in this act, you will be allowing yourself to be dominated by a woman and her genitals.",
                         "a"); //question 4
    cout << "\nQuestion 5:\n" << endl;
    get_answer_from_user("Your wife doesn’t want to have sex with you. What should you do?",
                         "Have her eat the seed of a willow tree.",
                         "Respect her decision to not want to have sex.",
                         "Place a southernwood sprig under the pillow.",
                         "Incorrect. This remedy is for individuals seeking an abortion, considering it \nwas known as the medicine of barrenness. You never want your wife to have an abortion!",
                         "Incorrect. You should never allow a woman to assert dominance over you and your \ndesires.",
                         "Correct! This remedy can be used to influence your wife’s sexual desires \nwithout her knowledge, and make her more eager to have sex.",
                         "c"); //question 5
    cout << "\nQuestion 6:\n" << endl;
    get_answer_from_user("Your wife does not want to have children. What should you do?",
                         "Respect her decision to not want to have children.",
                         "Take hairs from the tail of a female mule while she is having intercourse and \nweave them together during sex.",
                         "Have sex with her while she is menstruating.",
                         "Incorrect. You must preserve your bloodline through the production of \nlegitimate heirs in order to show your loyalty to the state of Rome.",
                         "Correct! This remedy will force your wife to conceive regardless of whether or \nnot she is willing.",
                         "Incorrect. NEVER DO THIS. IT WILL KILL YOU.",
                         "b"); //question 6
    cout << "\nQuestion 7:\n" << endl;
    get_answer_from_user("After a night of drinking, you stumble upon your mistress, who is asleep. What \nshould you do?",
                         "Leave her to sleep in peace and continue on with your night.",
                         "Play with her loose hair and slide apples into her hands.",
                         "Wake her up and inevitably quarrel with her.",
                         "Incorrect. She is at your disposal to use as an object for your entertainment. \nIndulge in your fantasies while you can.",
                         "Correct! Her body is under your control. Use it as if it is a piece of art to be \narranged.",
                         "Incorrect. In waking her up, she will no longer be an object, and you will be \nunable to impose your desires onto her. You want her to be asleep for as long as possible.",
                         "b"); //question 7
    cout << "\nQuestion 8:\n" << endl;
    get_answer_from_user("You are infatuated with a woman you just met, but you have a family. What should \nyou do?",
                         "Follow her to a foreign place and abandon your wife and children for a more \nluxurious lifestyle.",
                         "Dress up in a slave-woman’s outfit in public in order to entertain her.",
                         "Control your desires and stay with your family.",
                         "Incorrect. Indulging in luxury is dangerous for the development of courage and \ngood character in men, and you must never let your decisions be influenced by a woman.",
                         "Incorrect. You must never use your body as a form of entertainment for others, \nespecially women. In doing so, you would be relinquishing control of your body to them.",
                         "Correct! In doing this, you will be practicing control over your desires, which \nis the most masculine thing a man can do.",
                         "c"); //question 8
    return 0;
}

//method to see if the user is ready to begin the quiz
void is_user_ready() {
    string ready = "no";
    bool flag = true;
    cout << "Welcome to my quiz: How To Deal With Women In Ancient Rome: The Ultimate Guide for Men. Let's see if \nyou've got what it takes to be the best male citizen in Ancient Rome. Are you ready? Enter yes to begin: "; //introduces quiz, prompts user for input
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

//method to display questions and have the user answer
void get_answer_from_user(string question, string answerA, string answerB, string answerC, string explanationA, string explanationB, string explanationC, string correctAnswer) {
    cout << question << endl; //prints questions and possible answers
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
        } else if (answer == "a") { //if they answer a
            cout << explanationA << endl;
        } else if (answer == "b") {
            cout << explanationB << endl; //if they answer b
        } else {
            cout << explanationC << endl; //if they answer c
        }
        if (correctAnswer == answer) { //checks if the user's answer was the correct answer
            flag = false;
        }
        else {
            cout << "Try again: ";
        }
    }
}