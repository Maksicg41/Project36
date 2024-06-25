#include <iostream>
#include <time.h>
#include<Windows.h>
using namespace std;

bool numberCheck(int secretNumber, int userNumber);
bool validNumber(int number);



bool numberCheck(int secretNumber, int userNumber)
{
    
    if (!validNumber(userNumber))
    {
        return false;
    }
    
    if (secretNumber == userNumber)
    {
        std::cout << "YOU WIN";
        return true;
    }

    int user1000 = userNumber / 1000;
    int user100 = userNumber / 100 % 10;
    int user10 = userNumber / 10 % 10;
    int user1 = userNumber % 10;
    int secret1000 = secretNumber / 1000;
    int secret100 = secretNumber / 100 % 10;
    int secret10 = secretNumber / 10 % 10;
    int secret1 = secretNumber % 10;
    int rightNumbers = 0;
    int absolutNumbers = 0;

    if (secret1000 == user1 || secret1000 == user10 || secret1000 == user100 || secret1000 == user1000)
        rightNumbers++;
    if (secret100 == user1 || secret100 == user10 || secret100 == user100 || secret100 == user1000)
        rightNumbers++;
    if (secret10 == user1 || secret10 == user10 || secret10 == user100 || secret10 == user1000)
        rightNumbers++;
    if (secret1 == user1 || secret1 == user10 || secret1 == user100 || secret1 == user1000)
        rightNumbers++;
    if (user1 == secret1)
        absolutNumbers++;
    if (user10 == secret10)
        absolutNumbers++;
    if (user100 == secret100)
        absolutNumbers++;
    if (user1000 == secret1000)
        absolutNumbers++;

    std::cout << "Total guessed numbers: " << rightNumbers <<
        "What guessed and stands in its place: " << absolutNumbers;
    return false;
}

bool validNumber(int number)
{
    if (number < 0 || (number > 0 && number < 1000) || number > 9999)
    {
        std::cout << "uncorrect number(not 4 digits)" ;
        return false;
    }
    int main();
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int secretNumber = rand() % 9000 + 1000;
        int userNumber;
        int count = 0;

        

        do
        {
            std::cout << "Enter your number(4 digits) or enter 0 to exit: ";
            std::cin >> userNumber;
            count++;
        } while (!numberCheck(secretNumber, userNumber) && userNumber != 0);
        std::cout << "The number of attempts: " << count;
    }
 return 0 ;
}
   
