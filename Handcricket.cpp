#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void FcomputerbatPlayerbowl(int player, int computer)
{
    player = -1, computer = 0;
    int target, runCount = 0;
    while (computer != player)
    {
        runCount += computer;
        cout << "You are bowling, type your number ";
        cin >> player;
        if (player > 6)
        {
            while (player > 6)
            {
                cout << "invalid input!! please enter a number between 0 to 6" << endl;
                cin >> player;
            }
        }
        computer = (rand() % 7);
        cout << computer << " ";
    }
    target = runCount + 1;
    cout << "Your target is" << target << endl;
    player = 0, computer = 2;
    runCount = 0;
    while (computer != player)
    {
        runCount += player;
        if (runCount >= target)
        {
            cout << "You won congrats" << endl;
            break;
        }
        cout << "You are batting, type your number " << endl;
        cin >> player;
        if (player > 6)
        {
            while (player > 6)
            {
                cout << "invalid input!! please enter a number between 0 to 6" << endl;
                cin >> player;
            }
        }
        computer = (rand() % 7);
        cout << computer << " ";
    }
    if (runCount < target)
    {
        if (runCount + 1 == target)
        {
            cout << "Its a Draw! Well played" << endl;
        }
        else
            cout << "You lost! Better luck next time" << endl;
    }
}
void FcomputerbowlPlayerbat(int player, int computer)
{
    player = 0, computer = 2;
    int runCount = 0;
    int target = 0;
    while (computer != player)
    {
        runCount += player;
        cout << "You are batting, type your number " << endl;
        cin >> player;
        if (player > 6)
        {
            while (player > 6)
            {
                cout << "invalid input!! please enter a number between 0 to 6" << endl;
                cin >> player;
            }
        }
        computer = (rand() % 7);
        cout << computer << " ";
    }
    target = runCount + 1;
    cout << "Your total run is " << runCount << endl;
    cout << "Target of computer is " << target << endl;
    player = -1, computer = 0;
    runCount = 0;
    while (computer != player)
    {
        runCount += computer;
        if (runCount >= target)
        {
            cout << "Computer won! Better luck next time" << endl;
            break;
        }
        cout << "You are bowling, type your number ";
        cin >> player;
        if (player > 6)
        {
            while (player > 6)
            {
                cout << "invalid input!! please enter a number between 0 to 6" << endl;
                cin >> player;
            }
        }
        computer = (rand() % 7);
        cout << computer << " ";
    }
    if (runCount < target)
    {
        if (runCount + 1 == target)
        {
            cout << "Its a Draw! Well played" << endl;
        }
        else
            cout << "You Won! Congrats" << endl;
    }
}
int main()
{
    cout << "Hand Cricket : You always have to choose a number between 0 to 6 and according to that the results will differ" << endl;
    srand(time(0));
    int computer, player, pick;
    cout << "TOSS :-> (if the addition of the number chosen by you and the system is odd then its head and if even then its tail)" << endl;
    char ch;
    cout << "Choose--> 'h' for heads and 't' for tails :- ";
    cin >> ch;
    computer = (rand() % 7);
    cout << "type your number " << endl;
    cin >> player;
    if (player > 6)
    {
        while (player > 6)
        {
            cout << "invalid input!! please enter a number between 0 to 6" << endl;
            cin >> player;
        }
    }
    int win = computer + player;

    cout << win << endl;
    if (ch == 't')
    {
        if (win % 2 == 0)
        {
            cout << "You Won" << endl;
            cout << "What do you want to do, '1' for bat and '2' for bowl" << endl;
            int choose;
            cin >> choose;
            if (choose == 1)
            {
                FcomputerbowlPlayerbat(player, computer);
            }
            else if (choose == 2)
            {
                FcomputerbatPlayerbowl(player, computer);
            }
        }
        else
        {
            cout << "Computer won" << endl;
            pick = (rand() % 2);
            if (pick == 0)
            {
                cout << "Computer chose to bat";
                FcomputerbatPlayerbowl(player, computer);
            }
            else if (pick == 1)
            {
                cout << "Computer chose to bowl" << endl;
                FcomputerbowlPlayerbat(player, computer);
            }
        }
    }
    else if (ch == 'h')
    {
        if (win % 2 != 0)
        {
            cout << "You Won" << endl;
            cout << "What do you want to do, '1' for bat and '2' for bowl" << endl;
            int choose;
            cin >> choose;
            if (choose == 1)
            {
                FcomputerbowlPlayerbat(player, computer);
            }
            else if (choose == 2)
            {
                FcomputerbatPlayerbowl(player, computer);
            }
        }
        else
        {
            cout << "Computer won" << endl;
            pick = (rand() % 2);
            if (pick == 0)
            {
                cout << "Computer chose to bat";
                FcomputerbatPlayerbowl(player, computer);
            }
            else if (pick == 1)
            {
                cout << "Computer chose to bowl" << endl;
                FcomputerbowlPlayerbat(player, computer);
            }
        }
    }
    return 0;
}
