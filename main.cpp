#include <iostream>

using namespace std;

int main() {
    int favNumber;
    cout << "Enter your favourite number between 1 and 100: ";
    cin >> favNumber;

    cout << "Amazing!! That's my favourite number." << std::endl;
    cout << "No really!! " << favNumber << " is really my favourite number." << std::endl;
    return 0;
}