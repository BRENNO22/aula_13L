int main() {
    int a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            
            printf("Triangulo equilatero\n");

        } else if (a == b || a == c || b == c) {
            printf("Triangulo isosceles\n");

        } else {
            printf("Triangulo escaleno\n");
        }
    } else {
        printf("Nao e um triangulo valido.\n");
    }

    return 0;
}