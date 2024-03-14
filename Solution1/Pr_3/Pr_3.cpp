#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


int linSearch(int arr[], int requiredKey, int size);
void showArr(int arr[], int size);

int main()
{
    setlocale(LC_ALL, "ukr");
    const int arrSize = 10;
    int arr[arrSize];
    int requiredKey = 0;
    int nElement = 0;
    srand(time(NULL));


    cout << "Введiть елементи масиву: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }



    showArr(arr, arrSize);

    int isPair = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] % 2 == 0) {
            isPair++;
        }
    }
    cout << "Кiлькiсть парних чисел масиву: " << isPair << endl;

    cout << "Яке число необхiдно знайти?: ";
    cin >> requiredKey;


    nElement = linSearch(arr, requiredKey, arrSize);

    if (nElement != -1)
    {

        cout << "Значення: " << requiredKey << " знаходиться в комiрцi з iндексом: " << nElement << endl;
    }
    else
    {

        cout << "В масивi немає такого значення" << endl;
    }

    return 0;
}

void showArr(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << setw(4) << arr[i];
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }

    }

}

int linSearch(int arr[], int requiredKey, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == requiredKey)
            return i;
    }
    return -1;
}
