/*A sorting algorithm is an algorithm that makes arrange in a certain order. 
The fundamental task is to put the items in the desired order so that the 
records are re-arranged for making searching easier

->Why Sorting Algorithms are Important?
Since they can often reduce the complexity of a problem, sorting algorithms 
are very important in computer science. These algorithms have direct applications
in searching algorithms, database algorithms, divide and conquer methods,
data structure algorithms, and many more.


->Some of the most common sorting algorithms are:

1.Selection sort->
Selection Sort is one of the simplest sorting algorithms. This algorithm gets its name from the way
it iterates through the array: it selects the current smallest element, and swaps it into place.

Algo:
a.Find the smallest element in the array and swap it with the first element.
b.Find the second smallest element and swap with with the second element in the array.
c.Find the third smallest element and swap wit with the third element in the array.
d.Repeat the process of finding the next smallest element and swapping it into the correct position until the entire array is sorted.

Properties
Space Complexity:  O(n)
Time Complexity:  O(n2)
Sorting in Place:  Yes
Stable:  No

2.Bubble sort->
Just like the way bubbles rise from the bottom of a glass, bubble sort is a simple algorithm 
that sorts a list, allowing either lower or higher values to bubble up to the top. The algorithm 
traverses a list and compares adjacent values, swapping them if they are not in the correct order.

Properties
Space complexity: O(1)
Best case performance: O(n)
Average case performance: O(n*n)
Worst case performance: O(n*n)
Stable: Yes

3.Insertion sort-> 
In Insertion sort, you compare the key element with the previous elements. If the previous elements 
are greater than the key element, then you move the previous element to the next position.

Properties:
Space Complexity: O(1)
Time Complexity: O(n), O(n* n), O(n* n) for Best, Average, Worst cases respectively.
Best Case: array is already sorted
Average Case: array is randomly sorted
Worst Case: array is reversely sorted.
Sorting In Place: Yes
Stable: Yes

4.Merge sort->
Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the 
two halves and then merges the two sorted halves. The major portion of the algorithm is given two sorted 
arrays, and we have to merge them into a single sorted array. The whole process of sorting an array of N 
integers can be summarized into three steps-

a.Divide the array into two halves.
b.Sort the left half and the right half using the same recurring algorithm.
c.Merge the sorted halves.

Properties:
Space Complexity: O(n)
Time Complexity: O(n*log(n)). The time complexity for the Merge Sort might not be obvious from the first glance. The log(n) factor that comes in is because of the recurrence relation we have mentioned before.
Sorting In Place: No in a typical implementation
Stable: Yes



5.Quick sort->
Quick sort is an efficient divide and conquer sorting algorithm. Average case time complexity of Quick
Sort is O(nlog(n)) with worst case time complexity being O(n^2) depending on the selection of the pivot 
element, which divides the current array into two sub arrays.

The steps involved in Quick Sort are:

a.Choose an element to serve as a pivot, in this case, the last element of the array is the pivot.
b.Partitioning: Sort the array in such a manner that all elements less than the pivot are to the left, 
and all elements greater than the pivot are to the right.
c.Call Quicksort recursively, taking into account the previous pivot to properly subdivide the left and 
right arrays. (A more detailed explanation can be found in the comments below)

Properties:
Time Complexity:Best, average, worst, memory: n log(n)n log(n)n 2log(n).
Stable:No
Sorting In Place:Yes

6.Heap sort->
Heapsort is an efficient sorting algorithm based on the use of max/min heaps. A heap is a tree-based 
data structure that satisfies the heap property – that is for a max heap, the key of any node is less 
than or equal to the key of its parent (if it has a parent).

The best, worst and average case time complexity of Heapsort is O(nlogn). Although heapsort has a better 
worse-case complexity than quicksort, a well-implemented quicksort runs faster in practice. This is a 
comparison-based algorithm so it can be used for non-numerical data sets insofar as some relation (heap 
property) can be defined over the elements.


7.Counting sort->
The counting sort algorithm works by first creating a list of the counts or occurrences of each unique 
value in the list. It then creates a final sorted list based on the list of counts.

Properties
Space complexity: O(k)
Best case performance: O(n+k)
Average case performance: O(n+k)
Worst case performance: O(n+k)
Stable: Yes (k is the range of the elements in the array)


8.Radix Sort->
The idea is to extend the CountSort algorithm to get a better time complexity when k goes O(n2). Here comes the idea of Radix Sort.

The Algorithm:
For each digit i where i varies from the least significant digit to the most significant digit of a number, sort input array using countsort algorithm according to ith digit. We used count sort because it is a stable sort.
*/
