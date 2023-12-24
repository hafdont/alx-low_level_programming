# Hash Tables Project

This project involves implementing various functions related to hash tables in the C programming language. The tasks include creating a hash table, implementing the djb2 hash function, writing functions to set, get, print, and delete elements from the hash table, and more.

## Table of Contents

- [Files](#files)
- [Tasks](#tasks)
- [Compilation](#compilation)
- [Usage](#usage)

## Files

- [0-hash_table_create.c](./0-hash_table_create.c): Function to create a hash table.
- [1-djb2.c](./1-djb2.c): Implementation of the djb2 hash function.
- [2-key_index.c](./2-key_index.c): Function to get the index of a key in the hash table.
- [3-hash_table_set.c](./3-hash_table_set.c): Function to add an element to the hash table.
- [4-hash_table_get.c](./4-hash_table_get.c): Function to retrieve a value associated with a key.
- [5-hash_table_print.c](./5-hash_table_print.c): Function to print the contents of a hash table.
- [6-hash_table_delete.c](./6-hash_table_delete.c): Function to delete a hash table.
- [hash_tables.h](./hash_tables.h): Header file with struct and function prototypes.
- [main.c](./main.c): Example program demonstrating the usage of hash table functions.

## Tasks

### 1. hash_table_create

Create a hash table.

**Description**: Implement a function that creates an empty hash table.

**Solution Overview**: Allocate memory for the hash table struct and initialize its components.

### 2. hash_djb2

Implement the djb2 hash function.

**Description**: Implement the djb2 hash function for generating hash values from input keys.

**Solution Overview**: Implement the djb2 algorithm to produce hash values.

### 3. key_index

Get the index of a key.

**Description**: Implement a function to calculate the index of a key in the hash table array.

**Solution Overview**: Use the djb2 hash function to calculate the hash value and map it to a valid index.

### 4. hash_table_set

Add an element to the hash table.

**Description**: Implement a function to add a key-value pair to the hash table.

**Solution Overview**: Calculate the index using the key, create a new node, and handle collisions using chaining.

### 5. hash_table_get

Retrieve a value associated with a key.

**Description**: Implement a function to find and return the value associated with a given key.

**Solution Overview**: Use the djb2 hash function and handle collisions while traversing the linked list at the calculated index.

### 6. hash_table_print

Print the contents of a hash table.

**Description**: Implement a function to print the key-value pairs in the hash table.

**Solution Overview**: Iterate through the array and linked lists, printing each key-value pair.

### 7. hash_table_delete

Delete a hash table.

**Description**: Implement a function to free the memory used by the hash table and its elements.

**Solution Overview**: Traverse the array and linked lists, freeing nodes and then free the array and hash table struct.

