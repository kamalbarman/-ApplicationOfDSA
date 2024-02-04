#include <stdio.h>

int main() {
    int arr[100];
    int n; 
    int search; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter your %d elements\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &search);

    int low = 0;         
    int high = n - 1;    

    while (low <= high) { 
        int mid = low + (high - low) / 2; 

        if (arr[mid] == search) {
            printf("Element %d found at index %d\n", search, mid);
            return 0;
        } else if (arr[mid] < search) { 
            low = mid + 1; 
        } else { 
            high = mid - 1; 
        }
    }

    printf("Element %d not found\n", search); 
    return 0;
}
