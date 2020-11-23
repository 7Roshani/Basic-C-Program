#include<stdio.h>
#include<conio.h>
void main()
{
float  radius,area,pi=3.14,side1,side2,base,height,V;
clrscr();
/* Here is only area calculation formula*/

printf("Following are the way to find Area of Fig.\n");
printf("To find area of circle, please enter radius of circle\n");
scanf("%f",&radius);
area=pi*radius*radius;
printf("area of circle=%f \n",area);
printf("To find area of rectangle, please enter two side of rectangle\n");
scanf("%f%f",&side1,&side2);
area=side1*side2;
printf("area of rectangle is  %f\n ",area);
printf("To find area of trangle, please enter base and height of trangle\n");
scanf("%f%f",&base,&height);
area=(1/2)*base*height;
printf("area of trangle is  %f \n",area);
printf("To find area of Parallelogram, please enter base and height of Parallelogram\n");
scanf("%f%f",&base,&height);
area=base*height;
printf("area of Parallelogrm is %f \n", area);
printf("to find area of square, please enter light of side of square");
scanf("%f",&side1);
area=side1*side1;
printf("area of square id %f\n",area);
printf("to find area of trapezoid, please enter lenghts of the parallel sides and distance between parallels side");
scanf("%f%f%f",&side1,&side2,&height);
area=(side1+side2)/2*height;
printf("area of trapezoid is %f \n",area);
printf("To find area of ecllipse, please enter horizontal and vertical radius of ecllipse \n");
scanf("%f%f",&radius,&height);
area=pi*radius*/*here height is nothing but the vertical readius */height;
printf("area of ecllipse id %f\n", area);

/* here is only fomula calculation of volume */

printf("to find volume of cube, please enter lenght of the side\n");
scanf("%f",&side1);
V=side1*side1*side1;
printf("volume of cube is %f \n",V);
printf("To find volume of Right Rectangular Prism, please enter lenght, width and height of RR Prism");
scanf("%f%f%f",&side1,&base,&height);
V=side1*base*height;
printf("volume of RR prism is %f \n",V);
printf("To find volume of Sphere, please enter radius of sphere \n");
scanf("%f",&radius);
V=(4/3)*pi*radius*radius*radius;
printf("volume of Shere is %f \n",V);
printf("To find volume of cone,we need to first find out area of cone, so for area of cone, please enter radius and height of cone\n");
scanf("%f%f",&radius,&height);
/* area=pi*radius(radius+(height*height+radius*radius)/2); */
printf("Now to find volume of cone, please enter height of cone");
scanf("%f",&height);
V=(1/3)*area*height;
printf("volume of cone %f \n",V);
printf("To find volume of Cylinder, first we need to calculate area of cylinder, so for the area of cylider please enter radius and height of cylinder\n");
scanf("%f%f",&radius,&height);
area=2*pi*radius*height+2*pi*radius*radius;
printf("Now area of cylinder is %d \n",area);
printf("To find volume of cylinder please enter height of cylinder %f\n");
scanf("%f",&height);
V=area*height;
printf("Now vlume of cylinder is %f\n",V);
getch();
}