#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  1_Multiples_of_3_and_5.py
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

def get_sum_multiples(n,numbers):
	sum=0
	for i in range(n):
		for num in numbers:
			if i%num==0:
				sum=sum+i
				break
	return sum
		

def main():
	print get_sum_multiples(1000,[3,5])
	return 0

if __name__ == '__main__':
	main()

