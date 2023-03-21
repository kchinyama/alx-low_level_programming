char *_memcpy(char *dest, char *src, unsigned int n)
{
        int k = 0;
        int i = n;

        for (; k < i; k++)
        {
                dest[k] = src[k];
                n--;
        }
        return (dest);
}

