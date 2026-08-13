//target to get 9 as output.by twosum DSA

#include <iostream>
using namespace std;

int* twoSum(int numbers[], int size, int target) {
    
    // Create a standard array dynamically to hold our 2 answers
    int* result = new int[2]; 

    // Using a for loop as requested
    for (int left = 0, right = size - 1; left < right; ) {
        
        int sum = numbers[left] + numbers[right];
        
        if (sum == target) {
            result[0] = left + 1;
            result[1] = right + 1;
            return result;
        } 
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
    
    return NULL; 
}

int main() {
    // Example of how to use it:
    int numbers[] = {7, 11, 2, 15};
    int size = 4;
    int target = 9;
    
    int* answer = twoSum(numbers, size, target);
    
    if (answer != NULL) {
        cout << "Index 1: " << answer[0] << ", Index 2: " << answer[1] << endl;
        
        // When using raw arrays with 'new', you must manually free the memory
        delete[] answer; 
    }
    
    return 0;
}