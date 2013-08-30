  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * Integer and Character pointers 
   */

#include <stdio.h>
int main()
{
	int a = 5;
	char c = 'H';
	
	int* p;
	char* q;
	
	printf("A : Address int : %u", &a);
	printf("\nC : Address char : %u", &c);
	
	p = &a;
	q = &c;
	
	printf("\n\nAddress int : %u", p);
	printf("\nAddress char : %u", q);
	
	//printf("\n\nInc Address int : %u", ++p);
	//printf("\nInc Address char : %u", ++q);
	
	printf("\nP : Address of pointer p : %u", &p);
	printf("\nQ : Address of pointer q : %u", &q);
	
	
	// Pointer to pointer
	int** r;
	r = &p;
	printf("\n%u", **r);
		
	return 0;
}
