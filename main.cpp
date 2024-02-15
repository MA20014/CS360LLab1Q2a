#include <iostream>
using namespace std;

int main() {
    // Read in name and date
    string lastName, firstName, date;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter today's date (month:day:year): ";
    cin >> date;

    // Output information single spaced
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Date: " << date << endl;

    return 0;
}
