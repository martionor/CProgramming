//Using list with pointers to delete first occurence of number in it

#include <stdio.h>

int main() {
    int list[] = {5,7,8,12,15,5};
    int size = sizeof(list)/ sizeof(list[0]); // Correct calculation of the number of elements
    

    // Check to ensure the list isn't empty
    if (size == 0) {
        printf("The list is empty.\n");
        return 0;
    }


    int num, *ptr, *end;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    //Set the pointers to the beginning and end of the list
    ptr = list;
    end = list + size;
    
    //Iterate through the list using pinters
    int found = 0; //flag to check if number is found
    
    for (; ptr<end; ptr++){
        if (*ptr == num){
            printf("Found %d at index %ld\n", num, ptr-list);
            
        //Shift elements to the left to delete found number
        for (int *shift =ptr; shift<end-1; shift++){
            *shift= *(shift+1);
        }
        
        // Zero out the last element (previously duplicate after shift)
        *(end - 1) = 0;


        //Reduce the size of the array by 1
        size --;
        found=1;
        break;
        }
    }
        //Print updated list
        if (found){
            printf("Updated list: ");
            for (ptr = list; ptr<list +size; ptr++){
                printf("%d, ", *ptr);
                }
                printf("\n");
            
        }else {
                printf("Number %d not found in the list. \n", num);
            }
    
    return 0;
}
