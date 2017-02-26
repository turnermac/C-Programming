#include <stdarg.h>


char* convert(unsigned int, int); /*convert integer to hexadecimal or octal*/
void Turner(char*, ...); /*owr own printf function*/

void Turner(char* format, ...){

  char* traverse;
  unsigned int i;
  char* s;
  
  /*Module 1: Initializing Turner's arguments*/
  va_list arg;
  va_start(arg, format);

    for(traverse=format; *traverse != '\0'; traverse++){
      while (*traverse != '%'){
        putchar (*traverse);
        traverse++;
      }
      
      traverse++;
      
      /*Module 2: Fetching and executing arguments.*/
      switch(*traverse){
        case 'c' : i = va_arg(arg, int);          /*Fetch an argument*/
                    putchar(i);
                    break;
        case 'd' : i = va_arg(arg, int);          /*Fetch decimal / integer argument*/
                    if (i<0){
                      i = -i;
                      putchar('-');
                    }
                    puts(convert(i, 10));
                    break;
        case 'o' : i = va_arg(arg, unsigned int); /*Fetch octal representation*/
                    puts(convert(i, 8));
                    break;
        case 's' : s = va_arg(arg, char*);          /*Fetch string*/
                    puts(s);
                    break;
        case 'x' : i = va_arg(arg, unsigned int);          /*Fetch hexadecimal representation*/
                    puts(convert(i, 16));
                    break;
      }
    }
    /*Module 3: Closing argument list to necessary clean-up*/
    va_end(arg);
}

char* convert(unsigned int num, int base){

  static char Representation[] = "0123456789ABCDEF";
  static char buffer[50];
  char* ptr;
  
  ptr = &buffer[49];
  *ptr = '\0';
  
  do{
  
    *--ptr = Representation[num % base];
    num /= base;
    
  } while (num != 0);
  
  return(ptr);
}
s
