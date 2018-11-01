#include <iostream>
using namespace std;

int main () {
    for (int i = 0; i < 5; i++)
      cout << "Happy HacktoberFest!" << endl;
    char input = 'i';
    cout << "To exit, press 'exit' then the 'Enter' key." << endl;
    cin  >> input;
    while(input != 'exit') {
        cout << "what did you enter? this: '" << input << "'. "
             << "If you want to exit, type 'exit'." << endl;
        cin  >> input;
    }
    cout << "Thank you!....." << endl;
    return 0;
}
