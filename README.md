Lab Project 0: ASCII Printing
===================================
# Description
This demo code builds a program "asciidraw" that prints ASCII art.

The following are source files for asciidraw
- uimain.c: Main file with the UI to interact with the user. Given the user input, it prints the desired shape.
- draw_shapes.c: Defines functions to draw simple shapes (e.g. square, triangle)
- draw_chars.c: Defines functions to draw characters.
- 11x16font.c: Defines bitmap array of 11x16 font (11 rows, 16 cols).  Each col is stored as a bitmap of type short
- draw.h: Header file containing all the declarations of the relevant methods used in this demo.

You can compile this program using the command ::
    $ cc  -g -O3 -o asciidraw uimain.c draw_shapes.c draw_chars.c 11x16font.c
 
- This command is a nuisance to type.  
- The TAs will show you how the program *make* can more conveniently and efficiently compile asciidraw.
- Efficiency: due to only compiling those .c files whose source has been changed more recently than their .o files.
- Convenience: due to make reading a database called Makefile specifying dependencies among files.

The following command runs the program ::
    $ ./asciidraw

The following files are also provided for your convenience (but not presently used)
- 5x7font.c: defines the bitmaps of a 5x7 font (5 rows, 7 cols).  Each col is stored bitmap of type char
- 8x12font.c: defines the bitmaps of an 8x12 font (8 rows, 12 cols).  Each row is stored bitmap of types char.

# Please observe the following standard C practices
- Multiple related functions are defined in the same source file (e.g. draw_shapes.c).  
  Otherwise a project would contain an overwhelming number of files.
- Type definitions are collected in just a few (in this case one) include file (draw.h).
- Giant function and variable definitions are stored in their own files. 
  Otherwise the files containing them would be overwhelmingly long.

# Instructions

- The TAs will lead you through the process of adding a function to
  print arrows. This will require you to (1) define function
  print_arrow() in print_shapes.c, (2) Adding a declaration for
  print_arrow() to draw.h, and (3) add a command "t" to uimain.c.

- You will independently add another font to this project.  
  You are welcome to use either the 5x7 or 8x12 fonts we provide.  
  To reference the font file, you'll also need to modify the Makefile.

