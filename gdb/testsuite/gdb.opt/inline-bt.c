/* Copyright (C) 2008 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

int x, y;
volatile int result;

void bar(void);

inline int func1(void)
{
  bar ();
  return x * y;
}

inline int func2(void)
{
  return x * func1 ();
}

int main (void)
{
  int val;

  x = 7;
  y = 8;
  bar ();

  val = func1 ();
  result = val;

  val = func2 ();
  result = val;

  return 0;
}
