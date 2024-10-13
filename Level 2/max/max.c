int		max(int* tab, unsigned int len)
{
    int max_value = tab[0];
    unsigned int    i = 1;
    
    if (len == 0)
    {
        return (0);
    }

    while (i < len)
    {
        if (max_value < tab[i])
        {
            max_value = tab[i];
        }
        i++;
    }
    return (max_value);
}
