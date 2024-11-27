#include <iostream>
#include "hash_table.h"
#include <vector>
#include <cmath>

using namespace std;

int main () { // menu and user input options
        vector<int> hashTable(SIZE,EMPTY);
        int choice, key;

        while (true) {
                cout << "\n Menu:\n";
                cout << "1. Insert\n";
                cout << "2. Search\n";
                cout << "3. Delete\n";
                cout << "4. Output\n";
                cout << "5. Exit\n";
                cin >> choice;

                switch (choice) {
                        case 1:
                                cout << "Enter the key to insert: ";
                                cin >> key;
                                insert (hashTable,key);
                                break;
                        case 2:
                                cout << "Enter the key to search: ";
                                cin >> key;
                                search (hashTable,key);
                                break;
                        case 3:
                                cout << "Enter the key to delete: ";
                                cin >> key;
                                remove(hashTable,key);
                                break;
                        case 4:
                                output(hashTable);
                                break;
                        case 5:
                                cout << "Exiting \n";
                                return 0;
                        default: cout << "Invalid choice, enter number 1 - 5. \n";
                                 break;
                }
        }
        return 0;
}
