                                            STL
A vector is a dynamic array
-
>Vector Functions
1. push_back( )
Adds an element at the end of the vector.

2. pop_back( )
Removes the last element.

3. size( )
Returns number of elements.

4. capacity( )
Returns allocated memory size.

5. at( )
Access element safely using index.

6. front( )
Returns first element.

7. back( )
Returns last element.

8. clear( )
Removes all elements.

9. empty( )
Returns true if vector is empty.

10. insert( )
Inserts element at a given position.

11. erase( )
Deletes element from a position or range.

12. resize( )
Changes size of vector.

13. reserve( )
Allocates memory in advance.

14. swap( )
Swaps contents of two vectors.

-> Vector Iterator

An iterator is an object that is used to access and move through elements of a vector like a pointer.
1. begin()
Points to first element.

2. end()
Points just after the last element.

3. rbegin()
Points to last element (reverse).

4. rend()
Points before first element.

-------------------------------------------------------------------------------///------------------------------------------------------------------
List in C++ is a container provided by the Standard Template Library (STL) that stores elements in the form of a doubly linked list.

1. push_front( )
Inserts element at the beginning.

2. push_back( )
Inserts element at the end.

3. pop_front( )
Deletes first element.

4. pop_back( )
Deletes last element.

5. front( )
Returns first value.

6. back( )
Returns last value.

7. size( )
Returns number of elements.

8. empty( )
Checks if list is empty.

9. clear( )
Deletes all elements.

10. insert( )
Adds element at given position.

11. erase( )
Removes element or range.

12. remove( )
Deletes all occurrences of value.

13. sort( )
Sorts list.

14. reverse( )
Reverses list.

15. merge( )
Merges two sorted lists.

-------------------------------------------------------------------------------------////---------------------------------------------------------------------------
A deque (Double Ended Queue) is a container in C++ STL that allows insertion and deletion of elements from both the front and the back

push_front() – add element at front

push_back() – add element at back

pop_front() – remove front element

pop_back() – remove back element

front() – access first element

back() – access last element

size() – number of elements

empty() – check if deque is empty

clear() – remove all elements

--------------------------------------------------------------------------------------------------////---------------------------------------------------------------
pair in C++ is a container that stores two values together as a single unit
---------------------------------------------------------------///---------------------------------------------------

A stack is a container in C++ STL that follows the principle of LIFO
push() – insert element

pop() – remove top element

top() – access top element

size() – number of elements

empty() – check if stack is empty
--------------------------------------------------------------------------------------------------////---------------------------------------------------------------
A queue is a container in C++ STL that follows the principle of FIFO
push() – insert element

pop() – remove front element

front() – access first element

back() – access last element

size() – number of elements

empty() – check if queue is empty
--------------------------------------------------------------------------------------------------////---------------------------------------------------------------
A priority queue is a special type of queue in C++ STL in which elements are processed based on their priority instead of the order of insertion
push() – insert element

pop() – remove highest priority element

top() – access highest priority element

size() – number of elements

empty() – check if empty
--------------------------------------------------------------------------------------------------////---------------------------------------------------------------
A map is an associative container in C++ STL that stores data in the form of key and value pairs
key is unique and it can sort in ascending order
insert() – add key-value pair

erase() – remove element by key

find() – search element

count() – checks existence of key

size() – number of elements

clear() – remove all elements

empty() – check if empty
--------------------------------------------------------------------------------------------------////---------------------------------------------------------------
A multimap is similar to a map in C++ STL, but it allows multiple values for the same key

An unordered map is an associative container in C++ STL that stores data in the form of key-value pairs, but unlike map, the elements are not stored in sorted order. It uses hashing to store data, which makes searching, insertion, and deletion very fast.

--------------------------------------------------------------------------------------------------////---------------------------------------------------------------

set is an associative container in C++ STL that stores only unique elements
insert() – add element

erase() – remove element

find() – search element

count() – checks if element exists

size() – number of elements

clear() – delete all

empty() – check empty

lower_bound() - return min value or closest high value

upper_bound() - return greater key
--------------------------------------------------------------------------------------------------////---------------------------------------------------------------
--------------------------------------------------------------------------------------------------////---------------------------------------------------------------

