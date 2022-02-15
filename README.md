# 0x1B. C - Sorting algorithms & Big O

```
oooooooooo.  ooooo   .oooooo.         .oooooo.   
`888'   `Y8b `888'  d8P'  `Y8b       d8P'  `Y8b  
 888     888  888  888              888      888 
 888oooo888'  888  888              888      888 
 888    `88b  888  888     ooooo    888      888 
 888    .88P  888  `88.    .88'     `88b    d88' 
o888bood8P'  o888o  `Y8bood8P'       `Y8bood8P'  
```

## Learning Objectives

### General

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Big O Asinthotic notation in time complexity

### Format used for O notation

- O(1)
- O(n)
- O(n!)
- n square -> O(n^2)
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
- n + k -> O(n+k)

The “short” notation (don’t use constants). Example: O(nk) or O(wn) will be written O(n).

### About O files

In each line will contain the following big O notation about time complexity

- in the best case
- in the average case
- in the worst case


- Language: C

- OS: Ubuntu 20.04 LTS

- Editor: VIM 8.1.2269

- Compiler: gcc 9.3.0
  - flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`

- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

- Compilation: to compile all the algorithms use `./compile_all.sh` with sudo privileges


## Tasks

### 0. Bubble sort

Function that sorts an array of integers in ascending order using the  [Bubble sort](https://intranet.hbtn.io/rltoken/fCItpIfgmE07fFbHBUToeg "Bubble sort")  algorithm

-   Prototype:  `void bubble_sort(int *array, size_t size);`
-   Print the  `array`  after each time a swap occurs.
The file  `0-O`, contains the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:


### 1. Insertion sort
Function that sorts a doubly linked list of integers in ascending order using the  [Insertion sort](https://intranet.hbtn.io/rltoken/4ueB1I1MkNypoTBXR0YX3g "Insertion sort")  algorithm

-   Prototype:  `void insertion_sort_list(listint_t **list);`
-   It is not allowed to modify the integer  `n`  of a node.
-   The  `list` will be printed after each timea swap occurs 
The file  `1-O` contains the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:


### 2. Selection sort
Function that sorts an array of integers in ascending order using the  [Selection sort](https://intranet.hbtn.io/rltoken/_DodgdySm5bPerpQm1LhwQ "Selection sort")  algorithm

-   Prototype:  `void selection_sort(int *array, size_t size);`
-  The  `array` will be printed after each time a swap occurs 

The file  `2-O` contains the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:


### 3. Quick sort

Function that sorts an array of integers in ascending order using the  [Quick sort](https://intranet.hbtn.io/rltoken/VoeZ2Hwp4Q0piTJ3OODY3w "Quick sort")  algorithm

-   Prototype:  `void quick_sort(int *array, size_t size);`
-   The  `Lomuto`  partition scheme is implemented.
-   The pivot should always be the last element of the partition being sorted.
-   The  `array` will be printed after each time a swap occurs.

The file  `3-O` contains the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:


### 4. Shell sort - Knuth Sequence

Function that sorts an array of integers in ascending order using the  [Shell sort](https://intranet.hbtn.io/rltoken/n1R5L9_ySu3ZE7JqIqIM0Q "Shell sort")  algorithm, using the  `Knuth sequence`

-   Prototype:  `void shell_sort(int *array, size_t size);`
-   The following sequence of intervals (a.k.a the Knuth sequence) is used:
    -   `n+1 = n * 3 + 1`
    -   `1, 4, 13, 40, 121, ...`
-   The  `array` will be printed each time the interval decreases.


## Authors

```
Eric Altez and Lucila Mociulsky
```
