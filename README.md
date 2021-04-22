# push_swap

## Description

Push_swap is a C algorithm project for 42Madrid. It consists of two programs (`./push_swap` and `./checker`).

### PUSH_SWAP

This program will take an indeterminate amount of numbers, place them in a stack and display in the `STDOUT` the necessary instructions to order the stack.

You have at your disposal a set of instructions and two stacks (A and B):

* `sa`: swap the first two arguments on stack A
* `sb`: swap the first two arguments on stack B
* `ss` : sa and sb at the same time.
* `pa` : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty. 
* `pb` : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.
* `ra` : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
* `rb` : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.
* `rr` : ra and rb at the same time.
* `rra` : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.
* `rrb` : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.
* `rrr` : rra and rrb at the same time.

### CHECKER

The checker program recieves the numbers and places them in a stack. Then, it reads from the `STDIN` the instructions to order the stack, provided from the `push_swap` or by writing them.

When there are no more instructions, it checks if the stack is ordered or not and displays `OK!` or `KO`respectively.

In case of error on any one of the programs, they will display `Error`.

### Objectives

* Sorting algorithms
* Battery concept and handling elements
* Algorithm implementation

### Skills
* Imperative programming
* Rigor
* Unix
* Algorithms & AI

## The way I´ve done it

In order to create and treat the satcks I have used [DOUBLY CIRCULAR LINKED LIST](https://www.geeksforgeeks.org/doubly-circular-linked-list-set-1-introduction-and-insertion/).

I followed [this article](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a) to start the algorithm. For stacks of 3 numbers I just see the different cases and order them with `if´s`. For stacks up to 5 numbers, I pass the minimum and the maximum number to B, order A with the 3 algorithm and then pass the ones in B to A by insertion.

Lastly, to order big stacks, I divide the stack in 8 parts, pass from smaller to bigger the numbers to B. And the passing them ordered to A. So, I used a mix of [QUICKSORT](https://en.wikipedia.org/wiki/Quicksort) and [INSERTION SORT](https://en.wikipedia.org/wiki/Insertion_sort) methods.

![](ps.gif)

## USE

#### Compile
	make

#### Try

	ARG=$(ruby -e "puts (0..100).to_a.shuffle.join(' ')");  ./push_swap $ARG | ./checker $ARG
