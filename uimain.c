#include <stdio.h>
#include "draw.h"

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

    fputs("Select which shape you want to print (Triangle = t, Square = s, Arrow = a ,Chars = c), Manuel (5x7 font) = 'm', Manuel (8x12 font) = 'M', Manuel (11x16 font) = 'z' ,or 'q' to quit\n> ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:");
      for (char c = 'A'; c < 'G'; c++)
	print_char_11x16(c);
      break;
    case 'm':
      puts("You selected Manuel (5x7 font):");
      print_char_5x7('M');
      print_char_5x7('a');
      print_char_5x7('n');
      print_char_5x7('u');
      print_char_5x7('e');
      print_char_5x7('l');
      break;
    case 'M':
      puts("You selected Manuel (8x12 font):");
      print_char_8x12('M');
      print_char_8x12('a');
      print_char_8x12('n');
      print_char_8x12('u');
      print_char_8x12('e');
      print_char_8x12('l');
      break;
    case 'z':
      puts("You selected Manuel (11x16 font):");
      print_char_11x16('M');
      print_char_11x16('a');
      print_char_11x16('n');
      print_char_11x16('u');
      print_char_11x16('e');
      print_char_11x16('l');
      break;
    case 'a':
      puts("You selected arrow:");
      print_arrow();
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
