    #include<iostream>
    #include <fstream>
    using namespace std;
    // Check if a file exists and write to it
    void checkAndWriteFile(const string& filename) {
        ifstream infile(filename);
        ofstream file;
        if (infile.good()) {
            cout << "File exists. Writing 'Hello World' to file...\n";
            file.open(filename, ios::app);
        } else {
            cout << "File does not exist. Creating file and writing 'Hello World'...\n";
            file.open(filename, ios::out);
        }
        file << "Hello World" << endl;
        file.close();
        cout << "Operation completed." << endl;
        ifstream readFile(filename);
        string line;
        cout << "\nFile Contents:\n";
        while (getline(readFile, line)) {
            cout << line << endl;
        }
    readFile.close();
    }
    int main() {
        string filename;
        cout << "Enter the filename: ";
        cin >> filename;
    
        checkAndWriteFile(filename);
    
        return 0;
    }
