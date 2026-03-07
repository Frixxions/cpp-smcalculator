#include <iostream>
using namespace std;

int main() {
    int opGir;
    int gir1;
    int gir2;

    string firstTxt = "Enter The First Number: ";
    string secndTxt = "Enter The Second Number: ";

    cout << R"(
~~~ Simple Calculator ~~~
(Made By 13 Years Old Frixxions)
### Enter the numbers for operation ###

[1] +           \/
[2] -           \/
[3] x           \/
[4] ÷        \__\/__/
Your Choice: )" << endl;

    cin >> opGir;
    
    if (opGir == 1) { // +
        cout << firstTxt;
        cin >> gir1;
        cout << secndTxt;
        cin >> gir2;
        int plus = gir1 + gir2;
        cout << "Answer: " << plus << endl;
    }

    else if (opGir == 2) { // -
        cout << firstTxt;
        cin >> gir1;
        cout << secndTxt;
        cin >> gir2;
        int minus = gir1 - gir2;
        cout << "Answer: " << minus << endl;
    }
    
    else if (opGir == 3) { // x
        cout << firstTxt;
        cin >> gir1;
        cout << secndTxt;
        cin >> gir2;
        int xAns = gir1 * gir2;
        cout << "Answer: " << xAns << endl;
    }
    
    else if (opGir == 4) { // ÷
        cout << firstTxt;
        cin >> gir1;
        cout << secndTxt;
        cin >> gir2;
        
        if (gir2 == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
        } 
        else {
            double division = (double)gir1 / gir2;
            
            if (gir1 % gir2 == 0) {
                cout << "No Remains!" << endl << "Answer: " << division << endl;
            }
            else {
                cout << "This division have remains!" << endl << "Answer: " << division << endl;
            }
        }
    }

    else {
        cout << R"(Looks like you are entered wrong
Please enter number (1 - 4))" << endl;
    }

    return 0;
}
