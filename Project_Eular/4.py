#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Largest palindrome product
#  
#  Copyright 2014 Moustafa <moustafa@cmpsamurai.com>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  

from math import *

def get_largest_palindrome(numdigits):
	maximum=10**numdigits
	max_palindrome=1
	for i in range(1,maximum):
		for j in range(i,maximum):
			num=i*j
			strnum=str(num)
			if strnum==strnum[::-1] and num >max_palindrome :
				max_palindrome=num
	return max_palindrome
				
            

def main():
	print get_largest_palindrome(3)

if __name__ == '__main__':
	main()

