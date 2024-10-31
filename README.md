Search Range
Easy
30
Given a sorted array and a number key, find the index of the first and last occurrence of the key in the array.

If the key is not present, return [-1, -1].

Expected Time Complexity: O(log n)

Examples
Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 3
Answer: [2, 4]
Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 5
Answer: [7, 7]
Array: [1, 2, 3, 3, 3, 4, 4, 5]
Number: 6
Answer: [-1, -1]
Testing
Input Format
First-line contains an integer ‘T’ denoting the number of test cases.

For each test case the input has two lines:

Two space-separated integers ‘n’ and 'key' denoting the length of the array and the number to be searched respectively.
n space-separated integers denoting the elements of the array.
Output Format
T lines each contain two integers denoting the indices of the first and last occurrence of the key in the array for each test case.

Sample Input
2
8 3
1 2 3 3 3 4 4 5
8 6
1 2 3 3 3 4 4 5
Expected Output
2 4
-1 -1