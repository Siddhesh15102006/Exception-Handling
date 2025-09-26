// Exp - 16
// Siddhesh
// 25070123505 (A3)

#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
    int age;

    cout << "Enter your Age :- ";

    try
    {
        if (!(cin >> age) || cin.peek()!= '\n')
        {
            throw runtime_error("Invalid input");
        }
        if (age < 18)
        {
            throw age;
        }
        else
        {
            cout << "You are Eligible for Voting" << endl;
        }
    }
    catch (int a)
    {
        cout << "You are NOT Eligible for Voting" << endl;
    }
    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}

Output :-
Enter your Age :- 15
You are NOT Eligible for Voting


=== Code Execution Successful ===


Enter your Age :- 19
You are Eligible for Voting


=== Code Execution Successful ===
