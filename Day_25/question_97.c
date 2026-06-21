#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter sizes of 1st and 2nd sorted arrays: ");
    scanf("%d %d", &n1, &n2);

    int a[n1], b[n2], res[n1 + n2];
    printf("Enter sorted elements for Array 1: ");
    for(int i=0; i<n1; i++) scanf("%d", &a[i]);
    printf("Enter sorted elements for Array 2: ");
    for(int i=0; i<n2; i++) scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while(i < n1) res[k++] = a[i++];
    while(j < n2) res[k++] = b[j++];

    printf("Merged Sorted Array: ");
    for(int i=0; i < n1+n2; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}