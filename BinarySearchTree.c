#include <stdio.h>

int factorial(int n)
{
int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
 
    return fact;
}

int numOfBST(int key) {    
        int catalanNumber = factorial(2 * key)/(factorial(key + 1) * factorial(key));    
        return catalanNumber;    
}    

int main() {
    printf("Total number of possible Binary Search Trees with given key: %d", numOfBST(5));
}