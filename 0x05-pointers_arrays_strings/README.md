## Pointers Array and Strings

_Pointer_

Pointer is a variable that contains the memory address of a variable.

_**Why Pointers**_

* Go to adress of a variable
* Retrieve data stored in the variable.

Everytime a variable is declared, the computer reserves memory for this variable.
The memory reserved with store the value of the variable. Amount of memory reserved
 depends on the type of the variable.

For example, on 64-bit architecture, these are the most common types

* char -> 1 byte <==> can hold 2^8 possible different values
* int -> 4 bytes <==> 2^32
* float -> 4 bytes <==> 2^32

```C

#include <stdio.h>
/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */


int main(void)
{
	int n;
	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of my  variable n on my computer: %lu bytes\n", sizeof(n));
	return (0);
}


```
When we assign a value to a variable, the computer will sore this value at its address.

**_Note:_** We do not control the address where the variable is stored. But inorder
to know what the address of a variable is, we use **_address-of unary operator &_** .

```C
#include <stdio.h>
/**
 * main - addresses of variables
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	int n;

	printf("Address of variable 'c': %p\n", &c);
	printf("address of variable 'n': %p\n", &n);

	return (0);
}

```

#### Recap

A pointer is the address of a piece of data in memory.

A pointer variable is a variable that stores the address of that piece of data.


_Declaring a Pointer variable_

General form is
```
	var_type *var;

```
* The * tells that the variable **var** is a pointer...
* .. that points to a var_type.
* the value of **var** will be a memory address holding a value of type var_type.

```
int *ptr

```

Here, **ptr** is the name of the variable of type "pointer to an integer".

**_Note:_** Anything that is on the left of the last * before the nameof the
variable will provide the type that the pointer points to.

On most 64 bits machine, the size of the pointers is 8 bytes.

```C
#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0.
 */

int main(void)
{
       int *p;

       printf("Size of pointer: %lu bytes\n", sizeof(p));
       return (0);
}

```

To get address where a pointer is stored, use the & operator. See below.

```C

#include <stdio.h>

/**
 * main - printing the address of a pointer
 *
 * Return: Always 0.
 */

int main(void)
{
      int *p;

      printf("Address of variable 'p': %p\n", &p);
      return (0);

}

```

**Example**

_Storing the address of a variable in a pointer

```C
int n;
int *p;

n = 98;
p = &n

```
_Note:_ **Bacause &n gives the address of the variable n, the variable p now holds
the address of the variable n: p pointsto n. If the variable n's address were 26,
then the value of our pointer p is also 26.

```C
#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
      	int *p;

  	n = 98;
   	p = &n;
      	printf("Address of 'n': %p\n", &n);
        printf("Value of 'p': %p\n", p);
	return (0);

}


```

_**Caution**_ The pointer can only point to a variable it is supposed to point to
 . This is incorrect.

```C

char c;
int *p;

p = &c

```

#### Dereferencing

The real power of pointers is that they can manipulate the values stored at the
memory address they point to.

Dereference operator * used.

```

#include <stdio.h>

/**
 * main - derefencing pointers
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
        int *p;

   	n = 98;
      	p = &n;
        printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	*p = 402;
	printf("Value of 'n': %d\n", n);
	return (0);

}

```
**_Walk Through_**

* int *p;: * is used in the declaration: p is a pointer to an integer, and so,
after dereferencing, *p is an integer.
* p = &n;: & takes the address of n. So now p == &n, so *p == n


### Arrays

Array in C are contiguous memory areas that hold a number of values of the same type.

**_Declaring array in C_**

```
	type var_name[number_of_elements];

```

**Example**

```
int t[5];

```

Here, we declare an array of 5 intgers. The computer will reserve a continuous
 space of 5 integers in memory.

```C
#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0.
 */

int main(void)
{

	int a[5];

   	a[0] = 98;
      	a[1] = 198;
        a[2] = 298;
	a[3] = 398;
	a[4] = 498;
	printf("Value of a[0]: %d\n", a[0]);
	printf("Value of a[1]: %d\n", a[1]);
	printf("Value of a[2]: %d\n", a[2]);
	printf("Value of a[3]: %d\n", a[3]);
	printf("Value of a[4]: %d\n", a[4]);
	printf("Address of 'a[0]': %p\n", &(a[0]));
	printf("Address of 'a[1]': %p\n", &(a[1]));
	printf("Address of 'a[2]': %p\n", &(a[2]));
	printf("Address of 'a[3]': %p\n", &(a[3]));
	printf("Address of 'a[4]': %p\n", &(a[4]));
	return (0);

}


```

**_Method used in solving My Coding Problems_**

1. Understanding the Problem

   * What are the inputs
   * What are the outputs
   * Create some basic examples
   * Create complex examples

2. Device a plan for solving the problem

   * Use pseudocode

3. Carry out the plan (solve the problem!)

   * Follow the pseudocode to code out the solution

4. Look back over what you've done.

#### Solutions:
0. Write a function that takes a pointer to an int as parameter and updates the
value it points to to 98.

_My Approach_

**_inputs:_** a pointer to an int
**_return:_** void
**_output:_** the pointer points to 98

**Explanation:** the pointer *n initially points to int, say, n, and now we want
the pointer *n to point to 98 instead.

thus,

```


```

1. Write a function that swaps the values of two integers.

_My Approach_

**_inputs_** pointers to ints a and b;
**_return_** void
**_outputs_** pointer to int a to point to int b and pointer to int b to point to int a

Explanation** It wont make sence if we say *a = *b and *b = *a. Therefore we need to introduce
another variable, say temp which will store *b before we assign it to *a. Therefore,

pseudocode:

* var temp will hold *b, now temp = *b; *b = *b; *a = *a;
* *b = *a, now temp = *b; *b = *a; *a = *a;
* *a = temp; now temp = *a; *b = *a; *a = *b;
* Swap completed.


```C
#include "holberton.h"

/**
 * swap_int - func to swap the values of two ints given address
 *
 * @a: int params a
 * @b: int params b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
        int temp;

        temp = *b;
	*b = *a;
	*a = temp;

}

```

2. Write a function that returns the length of a string.

_My Approach_

**_intput:_** A string
**_output_** Length of the string

I have to unlearn python and learn c. I thinking of iterating through the string
until i reach NULL then return the total count of iterations. I think this will work.

I will implement it using while loop.

* First, we initialize s_len = 0;
* then, we iterate over s until s[i] in NULL or '\0' while increasing s_len by 1 each loop
* s_len = will be the length of the string.

```C


```

3. Write a function that prints a string, followed by a new line, to stdout

_My Approach_

**_input_** The function expects a point variable to a string *str
**_output_** prints the string with a newline at the end.

I think I may traverse the string and use our own _putchar() function to print each
character till we hit a NULL. Since we wont use standard library then we need to imitate
the function puts(S)

* Initialize  the first index of the string as int i = 0;
* Traverse through the string with while loop printing each character
* Stop when loop reaches a NULL  or '\0';

```C



```

4. Write a function that prints a string, in reverse, followed by a new line

_My Approach_

_**input**_ A point variable to a str
_**output**_  The same str in reverse followed by newline.

I am thinking of traversing to the end of the str and use _putchar() to print each character
from the last.

I am gonna use while loop to get the size of the str and another while loop to print the
 characters in reverse.

* Initialize the last character in the string s[i] == '\0';
* After reaching the end, print it until you reach i = 0;
* Let's code.
```C



```

5. Write a function that reverses a string

_My Approach_

_**variables**_ introduced 3 variables; len for length of str, i for index and temp for swapping
_**input**_ a pointer to a string


_output_ a string in reverse

* Find the length of the string
* Swap the position of elements using loop

```


```

6. Write a function that prints every other character of a string, starting with
the first character, followed by a new line.

_My Approach_

7. Write a function that prints half of a string, followed by a new line.

* Prototype: void puts_half(char *str);
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n chara
 cters of the string, where n = (length_of_the_string - 1) / 2

