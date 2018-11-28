#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define VERO 1
#define FALSO 0

typedef int boolean;

typedef struct
{
    float x;
    float y;
}punto;

typedef struct
{
    punto p1;
    punto p2;
}rettangolo;

rettangolo *build(punto p1, punto p2);
void stampa(rettangolo *r);
float area(rettangolo *r);
punto centro(rettangolo *r);
rettangolo *trasl(rettangolo *r, float oriz, float vert);
boolean appartiene(rettangolo *r, punto a);

int main(void)
{
    punto p1;
    punto p2;
    p1.x = 2;
    p1.y = 3;
    p2.x = 4;
    p2.y = 1;
    rettangolo *r = build(p1,p2);
    stampa(r);
    printf("Area: %f\n", area(r));
    punto centre = centro(r);
    printf("Il centro ha coordinate: (%f, %f)\n", centre.x, centre.y);
    r = trasl(r, 2,1);
    printf("Il rettangolo traslato:");
    stampa(r);

    punto g;
    g.x = 55;
    g.y = 33;
    if (appartiene(r, g) == VERO)
        printf("g appartiene a r\n");
    else
        printf("g non appartiene a r\n");
    return 0;
}

rettangolo *build(punto p1, punto p2)
{
    rettangolo *r = malloc(sizeof(rettangolo));
    r -> p1 = p1;
    r -> p2 = p2;
    return r;
}

void stampa(rettangolo *r)
{
    printf("Rettangolo di vertici (%f, %f) e (%f, %f)\n", r -> p1.x, r -> p1.y, r -> p2.x, r -> p2.y);
}

float area(rettangolo *r)
{
    return fabs((((r -> p2.x) - (r -> p1.x)) * ((r -> p1.y) - (r -> p2.y))));
}

punto centro(rettangolo *r)
{
    punto centre;
    centre.x = fabs((r -> p2.x - r -> p1.x) / 2) + fminf(r -> p1.x, r -> p2.x);
    centre.y = fabs((r -> p2.y - r -> p1.y) / 2) + fminf(r -> p1.y, r -> p2.y);
    return centre;
}

rettangolo *trasl(rettangolo *r, float oriz, float vert)
{
    rettangolo *q = malloc(sizeof(rettangolo));
    q -> p1.x = r -> p1.x + oriz;
    q -> p2.x = r -> p2.x + oriz;
    q -> p1.y = r -> p1.y + vert;
    q -> p2.y = r -> p2.y + vert;
    return q;
}

boolean appartiene(rettangolo *r, punto a)
{
    if (a.x > fmin(r -> p1.x, r -> p2.x) && a.x < fmax(r -> p1.x, r -> p2.x) && a.y > fmin(r -> p1.y, r -> p2.y) && a.y < fmax(r -> p1.y, r -> p2.y))
    {
        return VERO;
    }
    else
        return FALSO;
}
