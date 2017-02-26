/*
 * pointer_to_x.c
 * 
 * Copyright 2016 Marc J. Turner <raman.bahrat@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x = 12;
  int* pointer_to_x = &x;
  
  int* y = pointer_to_x;
  
  printf("%d\n", *y);
  
  *pointer_to_x = 5;
    
  printf("%d", x);
  pointer_to_x = NULL;
  y = NULL;
  
	return 0;
}

