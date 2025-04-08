Hash Table with Mid-Square Hashing and Linear Probing
Overview
This project implements a simple hash table in C++ using:

Mid-Square Hashing for the hash function.

Linear Probing for collision resolution.

Users can interact with the hash table through a console-based menu to insert, search, delete, and display elements.

Files
main.cpp
Contains the main() function, which provides a user interface to interact with the hash table. Options include:

Insert a key

Search for a key

Delete a key

Output the table contents

Exit the program

hash_table.h
Defines constants and declares functions for hashing, probing, and manipulating the hash table:

midSquareHash(int key)

linearProbing(int hash, int i)

insert(vector<int>& table, int key)

search(const vector<int>& table, int key)

remove(vector<int>& table, int key)

output(const vector<int>& table)

hash_table.cpp
Implements the functions declared in hash_table.h.
Key features:

Hashing: Squares the key, extracts a middle digit, and reduces it to a table index.

Insertion: Uses linear probing to find an open slot.

Deletion: Marks removed keys with a special flag (REMOVED).

Search: Scans through probes to find the key or conclude absence.

Output: Prints each index with its value or a status (EMPTY/DELETED).

Constants
SIZE = 10: Hash table size.

EMPTY = -1: Represents an empty slot.

REMOVED = -2: Represents a deleted slot.

Compilation and Usage
To Compile:
bash
Copy
Edit
g++ main.cpp hash_table.cpp -o hash_table
To Run:
bash
Copy
Edit
./hash_table
Follow the prompts in the menu to test different hash table operations.

Example Session
mathematica
Copy
Edit
Menu:
1. Insert
2. Search
3. Delete
4. Output
5. Exit
1
Enter the key to insert: 25
Element inserted.

Menu:
4
Index 0: EMPTY
Index 1: EMPTY
Index 2: 25
...
Notes
Designed for educational purposes to demonstrate basic hashing and probing.

Limited to integer keys and a fixed-size table (10 slots).
