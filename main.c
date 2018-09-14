//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>
//------------------------------------PERIMETER FUNCTIONS--------------------------------------------------------------
double Square_Perimeter(){
    double side,perimeter; //Declaration of variables
    printf("\n");
    printf("Gimme the value of one side of the square");
    scanf("%lf",&side); //Variable request
    perimeter=side*4; //Operation of the square perimeter
    printf("\n\nThe perimeter of the Square is %lf",perimeter); //Output

}

double Rectangle_Perimeter(){
    double length,width,perimeter; //Declaration of variables
    printf("\n");
    printf("Gimme the value of the length");
    scanf("%lf",&length); //Variable request
    printf("\nGimme the value of the width");
    scanf("%lf",&width); //Variable request
    perimeter=(length*2)+(width*2); //Operation of the rectangle perimeter
    printf("\n\nThe perimeter of the Rectangle is %lf",perimeter); //Output
}
double Triangle_Perimeter(){
        double side1,side2,side3,perimeter; //Declaration of variables
        printf("\n");
        printf("Gimme the value of the first side");
        scanf("%lf",&side1); //Variable request
        printf("\nGimme the value of the second side");
        scanf("%lf",&side2); //Variable request
        printf("\nGimme the value of the third side");
        scanf("%lf",&side3); //Variable request
        perimeter=side1+side2+side3; //Operation of the triangle perimeter
        printf("\n\nThe perimeter of the Triangle is %lf",perimeter); //Output
}


double Perimeter(){
    char option; //Declaration of variables

    do { //This do-while has te function to helps the user to select a valid option
        printf("\n");
        printf("Select a shape to calculate the perimeter");
        printf("\nPlease, select an option. Enter the option in capital letter");
        printf("\nA. Square");
        printf("\nB. Rectangle");
        printf("\nC. Triangle");
        printf("\nX. Exit\n");

        scanf(" %c",&option); //Variable request
        switch (option){
            case 'A':
                Square_Perimeter(); //Function Square_Perimeter(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'B':
                Rectangle_Perimeter(); //Function Rectangle_Perimeter(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'C':
                Triangle_Perimeter(); //Function Triangle_Perimeter(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'X':

                break;
            default:
                printf("This is not an option, select another one");
                break;
        }
        printf("\n");

    }while(option!='X');
}

//------------------------------------AREA FUNCTIONS--------------------------------------------------------------

double Square_Area(){
    double side,Area; //Declaration of variables
    printf("\n");
    printf("Gimme the value of one side of the square");
    scanf("%lf",&side); //Variable request
    Area=side*side; //Operation of the square area
    printf("\n\nThe Area of the Square is %lf",Area); //Output
}

double Rectangle_Area(){
    double length,width,area; //Declaration of variables
    printf("\n");
    printf("Gimme the value of the length");
    scanf("%lf",&length); //Variable request
    printf("\nGimme the value of the width");
    scanf("%lf",&width); //Variable request
    area=length*width; //Operation of the rectangle area
    printf("\n\nThe Area of the Rectangle is %lf",area); //Output
}

double Triangle_Area(){
    double area,base, height; //Declaration of variables
    printf("\n");
    printf("Gimme the value of the base");
    scanf("%lf",&base); //Variable request
    printf("\nGimme the value of the height");
    scanf("%lf",&height); //Variable request
    area=(base*height)/2; //Operation of the triangle area
    printf("\n\nThe Area of the Triangle is %lf",area); //Output
}

double Area(){
    char option; //Declaration of variables

    do { //This do-while has te function to helps the user to select a valid option
        printf("\n");
        printf("Select a shape to calculate the Area");
        printf("\nPlease, select an option. Enter the option in capital letter");
        printf("\nA. Square");
        printf("\nB. Rectangle");
        printf("\nC. Triangle");
        printf("\nX. Exit\n");

        scanf(" %c",&option); //Variable request
        switch (option){
            case 'A':
                Square_Area(); //Function Square_Area(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'B':
                Rectangle_Area(); //Function Rectangle_Area(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'C':
                Triangle_Area(); //Function Triangle_Area(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'X':
                break;
            default:
                printf("This is not an option, select another one");
                break;
        }
        printf("\n");

    }while(option!='X');

}

//------------------------------------VOLUME FUNCTIONS--------------------------------------------------------------


double Cube_Volume(){
    double side,volume; //Declaration of variables
    printf("\n");
    printf("Gimme the value of one side of the Cube");
    scanf("%lf",&side); //Variable request
    volume=side*side*side; //Operation of the cube volume
    printf("\n\nThe Volume of the Square is %lf",volume); //Output

}

double RectangularPrism_Volume(){
    double length,width,height,volume; //Declaration of variables
    printf("\n");
    printf("Gimme the value of the length");
    scanf("%lf",&length); //Variable request
    printf("\nGimme the value of the width");
    scanf("%lf",&width); //Variable request
    printf("\nGimme the value of the height");
    scanf("%lf",&height); //Variable request
    volume=length*width*height; //Operation of the rectangular prism volume
    printf("\n\nThe Volume of the Rectangular Prism is %lf",volume); //Output
}

double TriangularPyramid_Volume(){
    double volume,length,width,height; //Declaration of variables
    printf("\n");
    printf("Gimme the value of the base length");
    scanf("%lf",&length); //Variable request
    printf("\nGimme the value of the base width");
    scanf("%lf",&width); //Variable request
    printf("\nGimme the value of the height");
    scanf("%lf",&height); //Variable request
    volume=(((length*width)/2)*height)/3; //Operation of the triangular pyramid volume
    printf("\n\nThe Volume of the Triangular Pyramid is %lf",volume); //Output
}

double Volume(){
    char option; //Declaration of variables

    do { //This do-while has te function to helps the user to select a valid option
        printf("Select a body to calculate the Volume");
        printf("\nPlease, select an option. Enter the option in capital letter");
        printf("\nA. Cube");
        printf("\nB. Rectangular prism");
        printf("\nC. Triangular Pyramid");
        printf("\nX. Exit\n");

        scanf(" %c",&option); //Variable request

        switch (option){
            case 'A':
                Cube_Volume(); //Function Cube_Volume(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'B':
                RectangularPrism_Volume(); //Function RectangularPrism_Volume(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'C':
                TriangularPyramid_Volume(); //Function TriangularPyramid_Volume(); call
                printf("\n");
                main(); //return to Main();
                break;
            case 'X':
                break;
            default:
                printf("This is not an option, select another one");
                break;
        }
        printf("\n");
    }while(option!='X');
}


//------------------------------------MAIN FUNCTION--------------------------------------------------------------
int main() {
    char option; //Declaration of variables


    printf("Welcome to this awesome program.\n"); //Presentation of the program
    printf("This program will help you to get the perimeter, area or volume of 3 different kinds of shapes (or bodies)\n");

    do { //This do-while has te function to helps the user to select a valid option
        printf("\nPlease, select an option. Enter the option in capital letter");
        printf("\nA. Perimeter");
        printf("\nB. Area");
        printf("\nC. Volume");
        printf("\nX. Exit\n");

        scanf(" %c",&option); //Variable request

        printf("\n");
        switch (option){
            case 'A':
                Perimeter(); //Function Perimeter(); call
                break;
            case 'B':
                Area(); //Function Area(); call
                break;
            case 'C':
                Volume(); //Function Volume(); call
                break;
            case 'X':
                printf("Bye bye");
                break;
            default:
                printf("This is not an option, select another one");
                break;
        }
        printf("\n");
    }while(option!='X');
    return 0;
}