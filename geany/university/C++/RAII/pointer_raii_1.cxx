/*
 * pointer_raii_1.cxx
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


#include <iostream>
using namespace std;

class pointer{
public:

  pointer(){
  
    int x(1);
    int* pointer_to_x(&x);
    int y(*pointer_to_x);
    y = 3;
    *pointer_to_x = 4;
      
    int* p(&x);
    p = &y;
    
    int j(*p);
    cout << j << endl;
  }
};

int main(int argc, char **argv)
{
	pointer lolCat;
  
	return 0;
}

