#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Sum square difference
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

def get_sum_of_squares(n):
	m=n**3/3 + n**2/2 +n/6+1
	return m
	
def get_square_of_sum(n):
	sum=0;
	for i in range(n+1):
		sum=sum+i
	return sum**2
	
				
            

def main():
	print get_square_of_sum(100)-get_sum_of_squares(100)

if __name__ == '__main__':
	main()

