#include <iostream>
#include <map>
#include <fstream>
using namespace std;

class StudentRecord {
    map<int, string> records;

public:
    void addRecord() {
        int roll;
        string name;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        records[roll] = name;
    }

    void displayRecords() {
        if (records.empty()) {
            cout << "No records found\n";
            return;
        }
        for (auto it : records) {
            cout << "Roll No: " << it.first << " Name: " << it.second << endl;
        }
    }

    void saveToFile() {
        ofstream file("students.txt");
        for (auto it : records) {
            file << it.first << " " << it.second << endl;
        }
        file.close();
        cout << "Records saved to file\n";
    }
};

int main() {
    StudentRecord obj;
    int choice;

    do {
        cout << "\n1. Add Record\n2. Display Records\n3. Save to File\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.addRecord();
                break;
            case 2:
                obj.displayRecords();
                break;
            case 3:
                obj.saveToFile();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}