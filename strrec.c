#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
    float area;
};

int main() {
    int n;
    printf("Enter the number of rectangles: ");
    scanf("%d",&n);

    struct Rectangle rectangles[n];

    
    for (int i=0;i<n;i++) {
        printf("\nEnter length and breadth of rectangle %d: ",i+1);
        scanf("%f %f", &rectangles[i].length, &rectangles[i].breadth);
        rectangles[i].area=rectangles[i].length*rectangles[i].breadth;
    }
 int x=0;
    for (int i=1;i<n;i++) {
        if (rectangles[i].area>rectangles[x].area) {
        x=i;
        }
    }
printf("\nall rectangles:\n");
    for (int i=0; i < n; i++) {
        printf("Rectangle %d: Length = %f, Breadth = %f, Area = %f\n",
               i+1,rectangles[i].length,rectangles[i].breadth,rectangles[i].area);
    }
    printf("\nlargest area rectangle :\n");
    printf("Rectangle %d: Length = %f, Breadth = %f, Area = %f\n",
           x+1, rectangles[x].length,rectangles[x].breadth,rectangles[x].area);

    return 0;
}
