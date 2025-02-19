#include <iostream>
#include <fstream>
using namespace std;

// Read and display a file line by line
void readFile(const string& filename) {
    ifstream file(filename);
    string line;
    if (!file) {
        cout << "File not found!" << endl;
        return;
    }
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    string filename;
    cout << "Enter the filename to read: ";
    cin >> filename;

    readFile(filename);

    return 0;
}
