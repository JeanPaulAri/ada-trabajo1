#include <iostream>
using namespace std;

const int MaxSize = 100;
int gVect[MaxSize]; // Buffer to save the elements
int gnCount = 0;    // Counter to know the number of elements used

void Insert(int elem) {
    if (gnCount < MaxSize) {
        gVect[gnCount++] = elem; // Insert the element at the end
    }
}

int main() {
    // Inserting elements into the fixed-size vector
    Insert(10);
    Insert(20);
    Insert(30);

    // Displaying the elements
    cout << "Elements in the vector: ";
    for (int i = 0; i < gnCount; i++) {
        cout << gVect[i] << " ";
    }
    cout << endl;

    return 0;
}