#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void readComplex(struct Complex *c) {
    printf("Enter real part: ");
    scanf("%f", &c->real);
    printf("Enter imaginary part: ");
    scanf("%f", &c->imag);
}

void writeComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum, diff;

    printf("Enter first complex number:\n");
    readComplex(&num1);

    printf("Enter second complex number:\n");
    readComplex(&num2);

    sum = addComplex(num1, num2);
    diff = subtractComplex(num1, num2);

    printf("First complex number: ");
    writeComplex(num1);

    printf("Second complex number: ");
    writeComplex(num2);

    printf("Sum: ");
    writeComplex(sum);

    printf("Difference: ");
    writeComplex(diff);

    return 0;
}