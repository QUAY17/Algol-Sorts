# algo-sorts

Jennifer Quay Minnich
010/02/20
Lab 4

Purpose_
1) Creating simple sorting algorithms: bubble, merge, and insert
2) Analyzing logic/error checking of sorting algorithms

Conclusions_ 

Bubble Sort:
Repeatedly steps through the list, compares elements positioned next to each other and swaps them if they are in the wrong order. The stepping through the list is repeated until the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list.

Merge Sort:
A divide and conquer comparison-based alorithm that divides the unsorted list into sublists, until each contains one element (a list of one element is considered sorted). Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list.

Insert Sort:
A simple sorting algorithm that builds the final sorted array (or list) one item at a time. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there. It repeats until no input elements remain. At each array-position, it checks the value there against the largest value in the sorted list (which happens to be next to it, in the previous array-position checked). If larger, it leaves the element in place and moves to the next. If smaller, it finds the correct position within the sorted list, shifts all the larger values up to make a space, and inserts into that correct position.
