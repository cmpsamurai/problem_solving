#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Largest prime factor
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

def factors(n):
    f, fs = 3, []
    while n % 2 == 0:
        fs.append(2)
        n /= 2
    while f * f <= n:
        while n % f == 0:
            fs.append(f)
            n /= f
        f += 2
    if n > 1: fs.append(n)
    return fs
            

def main():
	primes=factors(600851475143)
	print primes
	print primes[len(primes)-1]

if __name__ == '__main__':
	main()

