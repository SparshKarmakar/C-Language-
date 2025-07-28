//b) To display pass class, second-class, distinction according to the marks.
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks >= 75)
        printf("Frist class\n");
    else if(marks >= 60)
        printf("Second Class\n");
    else if(marks >= 50)
        printf("Third Class\n");
    else if(marks >= 35)
        printf("Pass Class\n");
    else
        printf("Fail\n");
    return 0;
}
