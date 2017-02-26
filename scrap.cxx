/*
 * scrap.cxx
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

class machin{

public:
        double x;
        double y;
  
private:
        double largeur = 20.11;
        double hauteur = 52.15;
        
public:
  double surface() const; /*prototype*/
    
    machin(){
      cout << "machin budule" << endl;
      cout << largeur << endl;
      cout << hauteur << endl;
    }
    
    int print(int lolCat){
      /*param needed as not within scope of class*/
      return lolCat * 10;
    }
  };
  
  double machin::surface() const { 
    /*declaration out of class*/
    /*params not needed as are within scope of class*/
      return x * y;
  }

int main(int argc, char **argv)
{
	machin bid;
  
  bid.x = 2.23;
  bid.y = 45.1;
  
  cout << bid.x << endl;
  cout << bid.y << endl;

  
  machin magicPony;
  
  int rainB=44;
  
  int fedora = magicPony.print(rainB);
  
  cout << fedora << endl;
  
  return 0;
}

