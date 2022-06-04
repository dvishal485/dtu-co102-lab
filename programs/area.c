/* This program is written by Vishal Das
(2K21/A8/24) on June 02, 2022 02:00 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    char shape;
    float area;
    printf("Please input the shape of figure :\n\tT - Triangle\n\tS - Square\n\tR - Rectangle\n\tC - Circle\n");
    scanf("%c", &shape);
    printf("\n");
    switch(shape){
    case 'T':
        float b, h;
        printf("Base Length and Height of Triangle : ");
        scanf("%f %f", &b, &h);
        area = 0.5 * b * h;
        break;
    case 'S':
        float side;
        printf("Side length of Square : ");
        scanf("%f", &side);
        area = side * side;
        break;
    case 'R':
        float l, w;
        printf("Base Length and Width of Rectangle : ");
        scanf("%f %f", &l, &w);
        area = l * w;
        break;
    case 'C':
        float r;
        printf("Radius of Circle : ");
        scanf("%f", &r);
        area = 3.1415 * r * r;
        break;
    default:
        printf("Invalid shape");
        return 0;
    }
    printf("\nArea of given figure is %f\n", area);
    return 0;
}
