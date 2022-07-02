1 #include <stdio.h>
2
3 /**
4 * main - Entry point
5 *
6 * Return: Always 0 (Success)
7 */
8 int main(void)
9 {
10        int a;      		
11        long int b;
12	  long long int c;
13	  char d;
14        float f;
15
16        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
17        printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
18        printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
19        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
20        printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
21        return (0);
22 }
