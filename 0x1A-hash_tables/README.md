# C - Hash Tables

This repository contains a C implementation of hash tables, including various functionalities for creating, managing, and sorting hash tables. Hash tables are fundamental data structures used in computer science and programming for efficient key-value pair storage and retrieval. This project demonstrates the implementation of hash tables from scratch in the C programming language.

## Table of Contents

1. [Introduction](#introduction)
2. [File Descriptions](#file-descriptions)
3. [Usage](#usage)
4. [Sorted Hash Tables](#sorted-hash-tables)
5. [Contributing](#contributing)
6. [License](#license)

## Introduction

Hash tables are data structures that provide fast and efficient data retrieval by using a hash function to map keys to specific locations within an array. This project includes various C files, each responsible for a specific aspect of hash tables.

### File Descriptions

1. **0-hash_table_create.c**: This file contains a function that creates a hash table of a specified size.

2. **1-djb2.c**: Implements the djb2 hash function, which is used to hash strings efficiently.

3. **2-key_index.c**: Provides a function to find the index for a given key within the hash table.

4. **3-hash_table_set.c**: Includes a function to add or update an element in the hash table.

5. **4-hash_table_get.c**: Contains a function to retrieve a value associated with a key from the hash table.

6. **5-hash_table_print.c**: Implements a function to print the contents of the hash table in the order they appear.

7. **6-hash_table_delete.c**: Provides a function to delete a hash table, freeing up allocated memory.

### Usage

To use these functions, include the necessary header files and link the C files with your project. You can create a hash table, add, retrieve, and delete key-value pairs using these functions.

## Sorted Hash Tables

In addition to the basic hash table operations, this project also introduces sorted hash tables. Sorted hash tables maintain a sorted linked list of key-value pairs, allowing efficient retrieval and traversal of data.

### Sorted Hash Table Structures

The sorted hash table includes the following structures:

#### shash_node_t

- `char *key`: The key (string).
- `char *value`: The value corresponding to a key.
- `struct shash_node_s *next`: A pointer to the next node of the list.
- `struct shash_node_s *sprev`: A pointer to the previous element of the sorted linked list.
- `struct shash_node_s *snext`: A pointer to the next element of the sorted linked list.

#### shash_table_t

- `unsigned long int size`: The size of the array.
- `shash_node_t **array`: An array of size `size`, each cell pointing to the first node of a linked list.
- `shash_node_t *shead`: A pointer to the first element of the sorted linked list.
- `shash_node_t *stail`: A pointer to the last element of the sorted linked list.

### Sorted Hash Table Functions

- `shash_table_create`: Creates a sorted hash table of a specified size.
- `shash_table_set`: Adds a key-value pair to the sorted list at the right place (sorted by ASCII value).
- `shash_table_get`: Retrieves the value associated with a key in the sorted hash table.
- `shash_table_print`: Prints the sorted hash table by traversing the sorted linked list.
- `shash_table_print_rev`: Prints the sorted hash table in reverse order using the sorted linked list.
- `shash_table_delete`: Deletes a sorted hash table, freeing allocated memory.
