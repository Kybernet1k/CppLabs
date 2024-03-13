#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
int main()
{
    int choice;
    cout << "Enter tasks choice (1-6): ";
    cin >> choice;

    switch (choice) {
    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    case 5:
        ex5();
        break;
    case 6:
        ex6();
        break;
    default:
        std::cout << "Invalid choice" << endl;
        break;
    }
}

void ex1() {
    int num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= 1 && num1 <= 4) {
        cout << num1 << " belongs to the interval" << endl;
    }
    if (num2 >= 1 && num2 <= 4) {
        cout << num2 << " belongs to the interval" << endl;
    }
    if (num3 >= 1 && num3 <= 4) {
        cout << num3 << " belongs to the interval" << endl;
    }
}

void ex2() {
    int num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    int number;
    cout << "Enter number: ";
    cin >> number;

    int result;

    result = min({ num1, num2, num3 });
    cout << "Minimal number: " << result << endl;
}
void ex3() {
    int N;
    cout << "Quantity of elements: ";
    cin >> N;

    double sum = 0.0;
    double num = 1.0;

    for (double i = 0; i < N; i++) {
        cout << num << " ";
        sum += num;
        sum *= -0.5;
    }
    cout << "Sum: " << sum << endl;
}
void ex4() {
    int n;
    cout << "Enter your num(>=2): ";
    cin >> n;

    int i = 2;
    while (n % i != 0) {
        i++;
    }

    cout << "The smallest natural divisor other than 1: " << i << endl;

}
void ex5() {
    int n;
    cout << "Quantity of numbers: ";
    cin >> n;

    int firstNum = 0, secondNum = 1, nextNum;

    for (int i = 0; i < n; i++) {
        cout << firstNum << " ";
        nextNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNum;
    }
    cout << endl;

}
void ex6() {
    srand(time(0));

    int secretNumber = rand() % 21;
    int guessedNumber;
    int attempts = 0;

    while (true) {
        cout << "Enter a number from 0 to 20: ";
        cin >> guessedNumber;

        if (guessedNumber < 0 || guessedNumber > 20) {
            cout << "Invalid value!!!" << endl;
            continue;
        }

        attempts++;

        if (guessedNumber < secretNumber) {
            cout << "The guessed number is less than the secret number" << endl;
        }
        else if (guessedNumber > secretNumber) {
            cout << "The guessed number is greater than the secret number" << endl;
        }
        else {
            cout << "You guessed the number in " << attempts << " attempts" << endl;
            break;
        }
    }
}