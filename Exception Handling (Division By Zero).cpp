// Exp - 16
// Siddhesh
// 25070123505 (A3)

#include <iostream>
using namespace std;

int main(void) {
    float a, b, ans;

    cout << "Enter the 1st Number :- ";
    cin >> a;
    
    cout << "Enter the 2nd Number :- ";
    cin >> b;

    try {
        if(b == 0) {
            throw b;
        } else {
            ans = (a/b);
            cout << ans << endl;
        }
    } catch (float c) {
        cout << "ERROR: Division by " << c << endl;
    }
    return 0;
}

Output :-
Enter the 1st Number :- 2
Enter the 2nd Number :- 0
ERROR: Division by 0


=== Code Execution Successful ===
