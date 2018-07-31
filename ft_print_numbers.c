#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void ft_print_numbers(void){
    char ch = '0';
    while (ch <= '9'){
        ft_putchar(ch);
        ch++;
    }
}

int main(void)
{
    ft_print_numbers();
}