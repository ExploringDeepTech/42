#include <unistd.h>

int ft_putchar(char x)
{
    write(1, &x, 1);
    return 0;
}

void ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;

    a = '0';
    b = '0';
    c = '0';
    d = '1';

    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    
                    if (a == '9' && b == '8' && c == '9' && d == '9')
                    {
                        ft_putchar(a);
                        ft_putchar(b);
                        ft_putchar(' ');
                        ft_putchar(c);
                        ft_putchar(d);
                    }
                    else 
                    {
                        ft_putchar(a);
                        ft_putchar(b);
                        ft_putchar(' ');
                        ft_putchar(c);
                        ft_putchar(d);
                        ft_putchar(',');
                        ft_putchar(' ');
                    }    
                    d++;
                }
                if (d == ':')
                {
                    c++;
                    d = '0';
                }
            }
            if (c == ':' && d == '0')
            {
                b++;
                c = a;
                if (b == ':')
                {
                    c = a++;
                    b = '0';
                }
                d = b + 1;
            }
        }
    }
}

int main(void)
{
    ft_print_comb2();
	//write(1, "\n", 1);
}