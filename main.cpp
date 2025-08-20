#include <iostream>
#include <ctime>
using namespace std;

char GetUserChoice();
char GetComputerchoice();
void ShowChoice(char choice);
void ChooseWinner(char player, char computer);
int main()
{
    char player;
    char computer;

    player = GetUserChoice();
    cout << "your choice:";
    ShowChoice(player);

    computer = GetComputerchoice();
    cout << "computer choice: ";
    ShowChoice(computer);

    ChooseWinner(player, computer);

    return 0;
}
char GetUserChoice()
{

    char player;
    cout << "Rock-paper-scissors game \n";
    do
    {
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissor\n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char GetComputerchoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}
void ShowChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "rock\n";
        break;
    case 'p':
        cout << "paper\n";
        break;
    case 's':
        cout << "scissor\n";
        break;
    }
}
void ChooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "its a tie\n";
        }
        else if (computer == 'p')
        {
            cout << "you loose\n";
        }
        else
        {
            cout << "you win\n";
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            cout << "its a tie\n";
        }
        else if (computer == 's')
        {
            cout << "you loose\n";
        }
        else
        {
            cout << "you win\n";
        }
        break;
    case 's':
        if (computer == 's')
        {
            cout << "its a tie\n";
        }
        else if (computer == 'r')
        {
            cout << "you loose\n";
        }
        else
        {
            cout << "you win\n";
        }
        break;
    }
}