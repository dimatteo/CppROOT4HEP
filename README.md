CppROOT4HEP
===========

This is a very skinny tutorial for C++ and ROOT for High Energy Physicists
(and future ones :) ).
The best thing to do is to install ROOT on your preferred machine and start
playing with these examples. They are intended as a starting point for your
future scientific endeavours.

Chapter 0: The "G" rule
===========

Scripting, coding and programming very often transcend science and logic, 
and fall into the realm of the arts. 
"No!" you would think, "this is all governed by 0s and 1s", so how can it be?
Well in fact a very good programmer, that has a vast understanding of all 
the basics and subtleties of computer science, with years of experience, will
approach these subjects very rationally.
Unfortunately, my friend, we have to deal with the fact that we have to use
these super advanced tools without this background, and we have to learn fast,
as our brain and time is filled with other appealing interests.

So how do you code without having a proper formation?
Well it would be easier if there was a huge information database which you could 
access to for free and which would give you an answer in no time, wouldn't it?
Surprise surprise : www.google.com  
That is the "G" rule, and that rule is going to help you forever.

Chapter 1: ROOT Installation
===========

To install ROOT simply follow the instructions here:
http://root.cern.ch/drupal/

You will know that you are all set when you are able to open a terminal, type in
the word "root" followed by the key "enter" (or "return") and see a message like
this appearing:

    *******************************************
    *                                         *
    *        W E L C O M E  to  R O O T       *
    *                                         *
    *   Version   5.32/00   2 December 2011   *
    *                                         *
    *  You are welcome to visit our Web site  *
    *          http://root.cern.ch            *
    *                                         *
    *******************************************

If you want to exit from the root console just type ".q" and press "enter" (or "return").

Chapter 2: ROOT basic macros
===========

ROOT is an object oriented program language written in C++.
There are two ways of using ROOT:
1) via the command line interpreter "CINT"
2) via a standard C++ compiler

1) Is usually good for fast testing, short macros, cosmetics (make a nice plot).
Unfortunately executing 1) is relatively slow.  
2) Is better both from a code point of view (CINT allows for incredible stuff to happen
without noticing until it is too late...) and performance wise.

**/Basics**   
contains two semi-identical macros, used to print simple variables on screen.
To use them:

	cd Basics
	root hello.C
This command will execute the lines, one-by-one, of hello.C using the CINT interpreter.

	cd Basics
	root hello.cxx+
This command (notice the "+" in the end!) will first compile hello.cxx and make a dynamic 
library which is then loaded in the execution.

Chapter 3: ROOT macros calling functions
===========

As ROOT is written in C++, constructing and calling functions in a ROOT macro is done
as it is done in an usual C++ main program.

**/Functions**   
contains two semi-identical macros, used to make a very simple repeated function 
(a doubling operation) in two different ways:
- using a function which takes a variable in input
- using a function which takes in input a reference to a variable (address to that variable).  
It is interesting to notice the different behavior of the two functions, which apparently
are implementing the same operations. Try to think about the difference!

To execute those examples:

Interpreted:

	cd Functions
	root functions.C

Compiled:

	cd Functions
	root functions.cxx+

	