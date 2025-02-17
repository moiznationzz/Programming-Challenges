#include <iostream>
using namespace std;

void arrayOfMultiples(int num, int length) {
	cout<<"arrayOfMultiples ("<<num<<","<<length<<") == ";
    for (int i = 1; i <= length; i++) {
        cout << num * i << " ";
    }
    cout << endl;
}

int main() {
    int num, length;
    cout << "Enter Number:";
    cin >> num;
    cout << "Enter Length:";
    cin >> length;
    
    arrayOfMultiples(num, length);
    
    return 0;
}
