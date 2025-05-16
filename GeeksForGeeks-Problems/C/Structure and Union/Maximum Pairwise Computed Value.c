//User function Template for C


// Define the struct Height


// Function to find the maximum height from the given array
int findMax(struct Height arr[], int n) {
    // Initialize the maximum height to a minimum value
    int max_height = -1;
    
    // Iterate through the array
    for (int i = 0; i < n; i++) {
        // Calculate the height in inches for the current element
        int height_inches = arr[i].feet * 12 + arr[i].inches;
        
        // Update the maximum height if needed
        if (height_inches > max_height) {
            max_height = height_inches;
        }
    }
    
    // Return the maximum height
    return max_height;
}
