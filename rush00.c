void ft_putchar(char);

void first_line(int x, int y)
{
    int i;

    i = 0;
    ft_putchar('/');
    while(i < x - 2)
    {
        ft_putchar('*');
        i++;
    }
    if(x > 1)
    {
        ft_putchar('\\');
    }
}

void middle_line(int x, int y)
{
    int i;

    i = 0;
    ft_putchar('*');
    while(i < x - 2)
    {
        ft_putchar(' ');
        i++;
    }
    if(x > 1)
    {
        ft_putchar('*');
    }
}

void last_line(int x, int y)
{
    int i;

    i = 0;
    ft_putchar('\\');
    while(i < x - 2)
    {
        ft_putchar('*');
        i++;
    }
    if(x > 1)
    {
        ft_putchar('/');
    }
}


void rush (int x, int y)
{
    int middle_line_count;

    middle_line_count = y - 2;
    if(x > 0 && y > 0)
    {
        first_line(x, y);
        while (middle_line_count > 0)
        {
            ft_putchar('\n');
            middle_line(x, y);
            middle_line_count = middle_line_count - 1;
        }
        ft_putchar('\n');
        if(y > 1)
            last_line(x, y);
    }
}