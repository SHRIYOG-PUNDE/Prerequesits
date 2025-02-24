#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void writeToFile(const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    file << "Cat\n";
    file << "dog\n";
    file << "bear\n";
    file << "hello\n";
    file << "elephant\n";
    file << "hello\n";
    file << "tiger\n";
    file << "hello\n";
    file << "horse\n";
    file.close();
    cout << "Contents written to file successfully.\n";
}

void removeHelloAndUpdate(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    vector<string> lines;
    string line;
    
    while (getline(file, line)) {
        if (line != "hello") {
            lines.push_back(line);
        }
    }
    file.close();

    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    for (const string& l : lines) {
        outFile << l << endl;
    }
    outFile.close();
    cout << "Updated file after removing 'hello'.\n";
}

void displayFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    cout << "Updated File Contents:\n";
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    string filename = "data.txt";

    writeToFile(filename);             
    removeHelloAndUpdate(filename);    
    displayFile(filename);             

    return 0;
}
