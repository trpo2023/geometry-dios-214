#include <libgeometry/parser.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define pi 3.14

int main()
{
    char input[100];
    int a;
    

    const char* input_f = "InputGeometry.txt";
    FILE* file = fopen(input_f, "r");
    if (file == NULL) {
        printf("Error: can't open input file:\n");
        printf("%s\n", input_f);
        fscanf(file, "%d", &a);
        
       

        return 1;
    }
    while (!feof(file)) {
        fgets(input, 100, file);
        input[strcspn(input, "\n")] = '\0';
        //printf("area: %d\n", area_check((char*)input));
        int radius = area_check((char*)input);
        printf("radius= %d \n", radius);
        int ar = area(radius);
        printf("area = %d \n", ar);
        int peri = per(radius);
        printf("perimetr= %d \n", peri);
        
        if (check_input(input)) {
            return 1;
        }
    }
    //double ar = area((char*)input);
    
    //check_circle((char*)input);

    fclose(file);
    printf("%d", a);
    return 0;
}
