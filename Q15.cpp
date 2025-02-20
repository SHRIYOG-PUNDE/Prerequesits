#include <iostream>
#include <fstream>
using namespace std;

void compareFiles(const string& file1, const string& file2) {
    ifstream f1(file1), f2(file2);
    string line1, line2;
    if (!f1 || !f2) {
        cout << "One or both files do not exist!" << endl;
        return;
    }
    while (getline(f1, line1) && getline(f2, line2)) {
        if (line1 != line2) {
            cout << "Files are different." << endl;
            return;
        }
    }
    cout << "Files are identical." << endl;
}

int main() {
    string file1, file2;
    cout << "Enter the first filename: ";
    cin >> file1;
    cout << "Enter the second filename: ";
    cin >> file2;

    compareFiles(file1, file2);

    return 0;
}
