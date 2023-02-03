#include <stdio.h>
int main(void)
{
    printf("%5d\n", 123);     // 占位符的宽度至少显示5位
    printf("%-5d\n", 123);    // 默认输出的值右对齐，添加 - ，变为左对齐
    printf("%12f\n", 123.45); // 输出的浮点数最少要占据12位，小数默认显示精度是小数点6位
    printf("%+d\n", 12);
    printf("%+d\n", -12);
    printf("Number is %.2f\n", 0.5); // 保留两位小数
    printf("%6.2f\n", 0.5);          // 限定宽度占位符与保留两位小数结合使用，最小宽度为6，保留2位小数
    printf("%*.*f\n", 6, 2, 0.5);    // 通过 printf() 传入最小宽度、小数位数、值
    printf("%.3s\n", "hello world"); // 输出前3个字符，从左开始
    printf("%.*s\n", 5, "hello world");
    return 0;
}