#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Smallest multiple
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

def get_smallest_multiple(n):
	found=False
	i=n
	l=[11,13,14,16,17,18,19,20]
	while not found:
		if i%2>1:
			i=i+1
			continue
		for j in l:
			if i%j>0:
				break
			if j==n:
				found=True
				return i
		i=i+10

				
            

def main():
	print get_smallest_multiple(20)

if __name__ == '__main__':
	main()

