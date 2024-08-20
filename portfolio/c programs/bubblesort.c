#include<stdio.h>
void main()
{
    int a[100], n, i;
    printf("How Many elements in array");
    scanf("%d", &n);
    for(i=0; i<=n; i++);
    {
        scanf("%d", & a[i]);
    }
    bubble-sort(a,n);
    printf("sorted line is as follows");
    for(i=0; i<n; i++)
    printf("%d", a[i]);
}
void bubble-sort(int a[], int n)
{
    int temp, i, j;
    for (i = 0; i < n ; i++)
    {
        for (j=0; i<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
