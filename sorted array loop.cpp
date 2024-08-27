#include<iostream> // Header file for input/output stream
#include<algorithm> // Header file for using algorithms like sort
using namespace std; // Using the standard namespace

// Function to find the smallest missing element in a sorted array
int smalest_missing_num(int nums[], int start_pos, int end_pos)
{
    // If start position is greater than end position, return the next possible smallest missing number
    if (start_pos > end_pos)
        return end_pos + 1;

    // If start position doesn't match the value at that index, return the start position itself
    if (start_pos != nums[start_pos])
        return start_pos;

    // Calculate the middle index
    int mid = (start_pos + end_pos) / 2;

    // If the value at mid index equals the index itself, continue searching in the right subarray
    if (nums[mid] == mid)
        return smalest_missing_num(nums, mid + 1, end_pos);

    // Otherwise, continue searching in the left subarray
    return smalest_missing_num(nums, start_pos, mid);
}

int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10}; // Declaration and initialization of an integer array
    int result; // Variable to store the result of the function
    int n = sizeof(nums) / sizeof(nums[0]); // Calculating the number of elements in the array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " "; // Outputting each element of the array
    result = smalest_missing_num(nums, 0, n - 1); // Finding the smallest missing element in the array
    cout << "\nSmallest missing element is " << result; // Outputting the smallest missing element
    return 0;
}