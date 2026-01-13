*This project has been created as part of the 42 curriculum by <migteixe>.*

# push_swap

## Description

The push_swap project consists of sorting a stack of integers using a limited set of operations, with the objective of producing the smallest possible number of moves.
This project aims to teach one the concept of code optimization, big O notation and space and time complexity, as well as to further develop problem solving and project management skills.

## Instructions

### Compilation

```bash
make
```

### Execution

```bash
./push_swap <list of integers>
```

## Allowed Operations

In this project, in order to organize the stack given by the user, we are constrained to a limited set of operations. Those being:

### switch (sa, sb and ss)
The switch operations just switch the positions of the top 2 nodes of said stack.

### push (pa and pb)
The push operations move the node on top of the opposite stack to the top of the current stack

### rotate (ra, rb, rr, rra, rrb and rrr)
The rotate operations shift every element of said stack one position upwards, while the reverse rotate operations do the opposite, shifting every element down one position.

## Algorithm & Technical Choices

For this project, I chose the radix sort sorting algorithm due to it's simplicity and efficiency. This sorting algorithm sorts the stack by analising every number in binary bit by bit and if said bit is 0 the number goes to stack B, when stack A has been fully rotated, then we push back every stack B element to stack A and repeat the same cycle for the next bit until we are out of bits to check.
This algorithm solves every stack of the same size with the same ammount of operations, no matter how randomly it is organized.

## Usage Examples

```bash
./push_swap 3 2 1
```

The expected push_swap behaviour is:
- when the stack is already sorted, the program should make no operations, since there are no operations necessary to solve it;
- when any error occurs, the program should display only "Error" followed by a '\n';
- when everything goes well, the project should display the name of every operation it performs to sort the stack.

## Performance

The time complexity of this sorting algorithm is O(n log(n)), and the expected operation count should be 1084 for any unsorted stack of 100 numbers and 6784 for every unsorted stack of 500 numbers. This happens because it compares once for every bit of every number bits and does not make comparisons based on the size of any other numbers besides the one being seen, so the number of operations must always be the same.

## Testing

This program was tested using the checker provided by the school and using some debug functions I wrote. I tested different types of inputs, memory leaks, supposed errors and so on until I thought this was good to submit.

## Resources

The only thing I really researched was the radix sort algorithm through this youtube video:
- https://www.youtube.com/watch?v=mVRHvZF8xtg&t=39s

### AI Usage

AI was used to help debug as well as solve solve some memory leaks by interpreting some program's error descriptions like valgrind (for example). It was also used to structure this README.md file.
