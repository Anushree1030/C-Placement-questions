#include <stdio.h>

int main(){
    int arr[100],n, temp;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

//Reversing the array in place
for (int i=0; i<n/2; i++){
    temp = arr[i];
    arr[i]= arr[n-i-1];
    arr[n-i-1]=temp;
}

printf("Reversed array:\n");
for(int i=0; i<n; i++){
    printf("%d",arr[i]);
}
return 0;
}
