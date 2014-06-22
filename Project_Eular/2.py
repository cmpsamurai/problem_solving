#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Even Fibonacci numbers
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

def F(n):
    return int(((1+sqrt(5))**n-(1-sqrt(5))**n)/(2**n*sqrt(5)))
    
def get_sum_even_fibbs(n):
	i=0
	sum=0
	curr_fib=0
	while curr_fib<n:
		i=i+1
		if curr_fib%2==0:
			sum=sum+curr_fib
		curr_fib=F(i)
		
	return sum
		

def main():
	print get_sum_even_fibbs(4000000)
	return 0

if __name__ == '__main__':
	main()

