#include<stdio.h>
#include<math.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    float P, a, b, c, s;
    printf("Unesite koordinate tacake x: \n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("Unesite koordinate tacake y: \n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    printf("Unesite koordinate tacake z: \n");
    scanf("%d", &x3);
    scanf("%d", &y3);
    a=sqrt(pow(x1-y1,2)+pow(x2-y2,2));
    b=sqrt(pow(x2-y2,2)+pow(x3-y3,2));
    c=sqrt(pow(x3-y3,2)+pow(x1-y1,2));
    s=(a+b+c)/2;
    P=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Povrsina paralelograma je %.2f", P);
    return 0;
}
