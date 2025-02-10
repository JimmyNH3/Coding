#include <stdio.h>
struct Complex {
    int real;
    int imag;
};
void add_complex(struct Complex var1, struct Complex var2, struct Complex *var3);
int main() {
    struct Complex var1, var2, var3;
    scanf("%d %d", &var1.real, &var1.imag);
    scanf("%d %d", &var2.real, &var2.imag);
    add_complex(var1, var2, &var3);
    printf("%d %d", var3.real, var3.imag);
}
void add_complex(struct Complex var1, struct Complex var2, struct Complex *var3){
    var3->real = var1.real + var2.real;
    var3->imag = var1.imag + var2.imag;
}
