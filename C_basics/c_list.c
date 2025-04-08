//C code to delete first instance of number in a list
#include <stdio.h>

int main() {
    int list[] = {5,12,44,22,55};
    int size = sizeof(list) / sizeof(list[0]);
    
    int num, i, j;
    int found = 0;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 0; i < size; i++){
        if(list[i]== num){
            printf("Found %d at index %d\n", num, i);
            
        for (j = i; j<size -1; j++){
            list[j]= list[j+1];
        }
        
        size --;
        found =1;
        break;
    }
    }
    
    if (!found){
        printf("Number %d not found in the list. \n", num);
    }else {
        printf("Updated list: ");
        for (i = 0; i<size; i++){
            printf("%d ", list[i]);
        }
        printf("\n");
    }
    
    
    return 0;
}