#include "hash_table.h"
#include <iostream>
#include <cmath>

using namespace std;

int midSquareHash (int key) {
        int square = key * key;
        int digits = static_cast<int>(log10(square))+1;
        int midDigit = (digits - 1) / 2;
        int hash = (square / static_cast<int>(pow(10,midDigit))) % 10;
        return hash % SIZE;
}

int linearProbing (int hash, int i) {
        return (hash + i) % SIZE;
}

bool insert(vector<int>& table, int key) { // insert function
    int hash = midSquareHash(key);
    for (int i = 0; i < SIZE; ++i) {
        int probe = linearProbing(hash, i);
        if (table[probe] == EMPTY || table[probe] == REMOVED) { // need to check if empty
            table[probe] = key;
            return true;
        }
    }
    cout << "Insert rejected due to collision strategy halting.\n";
    return false;
}

bool search(const vector<int>& table, int key) { // search function
    int hash = midSquareHash(key);
    for (int i = 0; i < SIZE; ++i) {
        int probe = linearProbing(hash, i);
        if (table[probe] == key) {
            cout << "Element " << key << " exists in the hash table.\n";
            return true;
        } else if (table[probe] == EMPTY) {
            break;
        }
    }
    cout << "Element " << key << " does not exist.\n";
    return false;
}

bool remove(vector<int>& table, int key) { // delete function
    int hash = midSquareHash(key);
    for (int i = 0; i < SIZE; ++i) {
        int probe = linearProbing(hash, i);
        if (table[probe] == key) {
            table[probe] = REMOVED;
            cout << "Element " << key << " exists and has been removed from the hash table.\n";
            return true;
        } else if (table[probe] == EMPTY) {
            break;
        }
    }
    cout << "Element " << key << " does not exist.\n";
    return false;
}

void output(const vector<int>& table) { // output option
    for (int i = 0; i < SIZE; ++i) {
        if (table[i] == EMPTY) {
            cout << "Index " << i << ": EMPTY\n";
        } else if (table[i] == REMOVED) {
            cout << "Index " << i << ": DELETED\n";
        } else {
            cout << "Index " << i << ": " << table[i] << "\n";
        }
    }
}
