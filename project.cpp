#include <iostream>
#include <ctime>
using namespace std;
char choice;
char spLetter[4]; // 35 38 
char Number[10]; // 48 57
char cLetter[26]; // 65 90
char sLetter[26]; // 97 122
int funNum[10];

void start();

int main(){
    start();
    cout << "See ya later.";
    return 0;
}

void start(){
    system("clear");
    srand(time(0));
    cout << "Password Level [1-3]: ";
    cin >> choice;
    if (choice == '1')
    {
        cout << "Level 1 Password: ";
        for (int i = 0; i < 8; i++)
        {
            funNum[i] = (rand() % 122) + 1;
            if (funNum[i] >= 48 && funNum[i] <= 57 || funNum[i] >= 97 && funNum[i] <= 122)
            {
                Number[i] = funNum[i];
                cout << Number[i];
            }
            else
            {
                --i;
            }            
        }
        cout << endl;
        cout << "Try Again [y/n]: ";
        cin >> choice;
        if (choice == 'y')
        {
            start();
        }
    }
    else if (choice == '2')
    {
        cout << "Level 2 Password: ";
        for (int i = 0; i < 10; i++)
        {
            funNum[i] = (rand() % 122) + 1;
            if (funNum[i] >= 48 && funNum[i] <= 57 || funNum[i] >= 65 && funNum[i] <= 90 || funNum[i] >= 97 && funNum[i] <= 122)
            {
                Number[i] = funNum[i];
                cout << Number[i];
                if (i == 4)
                {
                    cout << "-";
                }
            }
            else
            {
                --i;
            }            
        }
        cout << endl;
        cout << "Try Again [y/n]: ";
        cin >> choice;
        if (choice == 'y')
        {
            start();
        }
    }
    else if (choice == '3')
    {
        cout << "Level 3 Password: ";
        for (int i = 0; i < 16; i++)
        {
            funNum[i] = (rand() % 122) + 1;
            if (funNum[i] >= 35 && funNum[i] <= 38 || funNum[i] >= 48 && funNum[i] <= 57 || funNum[i] >= 65 && funNum[i] <= 90 || funNum[i] >= 97 && funNum[i] <= 122)
            {
                Number[i] = funNum[i];
                cout << Number[i];
                if (i == 3 || i == 7 || i == 11)
                {
                    cout << "-";
                }
            }
            else
            {
                --i;
            }            
        }
        cout << endl;
        cout << "Try Again [y/n]: ";
        cin >> choice;
        if (choice == 'y')
        {
            start();
        }
    }
    else
    {
        cout << "Error!\n";
        start();
    }
}
