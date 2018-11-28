#include <stdio.h>
#include <math.h>

int main(void)
{
    typedef struct
    {
        float x;
        float y;
    }Punto;

    /*typedef struct
    {
        Punto p1;
        Punto p2;
    }Rettangolo;*/

    typedef struct
    {
        Punto centro;
        float raggio;
    }Cerchio;

    /*float x1,y1;
    float x2,y2;
    float perimetroR;
    float areaR;
    Rettangolo r;
    printf("Inserisci i 2 vertici opposti del rettangolo:\n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    Punto a = {x1,y1};
    Punto b = {x2,y2};
    r.p1 = a;
    r.p2 = b;
    perimetroR = (fabs(x2-x1) + fabs(y2-y1))*2;
    areaR = fabs(x2-x1) * fabs(y2-y1);
    printf("Perimetro rettangolo: %f\n", perimetroR);
    printf("Area rettangolo: %f\n", areaR);*/

    float x3,y3;
    float ray;
    float perimetroC;
    float areaC;
    Cerchio c;
    printf("Inserisci centro cerchio:\n");
    scanf("%f", &x3);
    scanf("%f", &y3);
    printf("INserisci raggio:\n");
    scanf("%f", &ray);
    Punto center = {x3,y3};
    c.centro = center;
    c.raggio = ray;
    perimetroC = 2 * M_PI * c.raggio;
    areaC = c.raggio * c.raggio * M_PI;
    printf("Perimetro cerchio: %f\n", perimetroC);
    printf("Area cerchio: %f\n", areaC);


    return 0;
}
