#include <iostream>

using namespace std;

static int Mult(int num1, int num2) {
    return num1 * num2;
}

int main()
{
    int num1 = 0, num2 = 0;

    printf("値1を入力 > ");
    cin >> num1;
    printf("値2を入力 > ");
    cin >> num2;

    printf("%d * %d = %d\n", num1, num2, Mult(num1, num2));
}