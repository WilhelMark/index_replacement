#include <iostream>  // Include necessary header for input/output operations

// Function to swap values pointed to by two integer pointers
void swap(int* ptr1, int* ptr2) {
    // Store the value pointed to by ptr1 in a temporary variable
    int temp = *ptr1;
    
    // Assign the value pointed to by ptr2 to the location pointed by ptr1
    *ptr1 = *ptr2;
    
    // Assign the stored temporary value to the location pointed by ptr2
    *ptr2 = temp;
}

int main() {
    int a = 10;
    int b = 20;

    std::cout << "Before swap: " << a << " " << b << std::endl;  // Output: 10 20
    
    // Pass addresses of a and b to the swap function
    swap(&a, &b);
    
    std::cout << "After swap: " << a << " " << b << std::endl;   // Output: 20 10
    
    return 0;
}
