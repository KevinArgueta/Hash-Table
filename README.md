# Hash Table with Mid-Square Hashing and Linear Probing

## Overview

This C++ project implements a simple hash table using:

- **Mid-Square Hashing** for the hash function  
- **Linear Probing** for collision resolution  

The user interacts with the program via a console menu to insert, search, delete, and display keys in the hash table.

---

## Files

### `hash_table.h`

Declares the constants and functions for the hash table:
- `midSquareHash(int key)`  
- `linearProbing(int hash, int i)`  
- `insert(vector<int>& table, int key)`  
- `search(const vector<int>& table, int key)`  
- `remove(vector<int>& table, int key)`  
- `output(const vector<int>& table)`  

**Constants**:
- `SIZE = 10` – size of the hash table  
- `EMPTY = -1` – represents an empty slot  
- `REMOVED = -2` – represents a deleted slot  

---

### `hash_table.cpp`

Implements the logic for:

- **Hashing**: Mid-square method extracts a middle digit from the squared key  
- **Insertion**: Uses linear probing to find the next available slot  
- **Search**: Iteratively probes until key is found or table is exhausted  
- **Deletion**: Replaces a key with the `REMOVED` marker  
- **Output**: Displays all slots and their current state (value, EMPTY, or DELETED)  

---

### `main.cpp`

Contains the interactive menu and main program loop:

```
Menu:
1. Insert
2. Search
3. Delete
4. Output
5. Exit
```

Handles user input and calls the appropriate hash table functions.

---

## Compilation and Execution

### Compile
```bash
g++ main.cpp hash_table.cpp -o hash_table
```

### Run
```bash
./hash_table
```

---

## Example Interaction
```
Menu:
1. Insert
2. Search
3. Delete
4. Output
5. Exit
1
Enter the key to insert: 25

Menu:
4
Index 0: EMPTY
Index 1: EMPTY
Index 2: 25
...
```

---

## Notes

- The table has a fixed size of 10  
- Only supports integer keys  
- Collisions are resolved using simple linear probing  
- Deleted slots are marked and reused when possible  
