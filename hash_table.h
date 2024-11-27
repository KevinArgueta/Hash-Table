#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <vector>
using namespace std;

const int SIZE = 10;
const int EMPTY = -1;
const int REMOVED = -2;

int midSquareHash(int key);
int linearProbing(int hash, int i);

bool insert(vector<int>& table, int key);
bool search(const vector<int>& table, int key);
bool remove(vector<int>& table, int key);
void output(const vector<int>& table);

#endif // HASH_TABLE_H

~
~
~
~
