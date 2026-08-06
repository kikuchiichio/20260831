# Instructions to the project collaborators



To run Jupyter notebooks uploaded in this repository, you need to install SINGULAR on your LINUX system.

You also need to place “mybrnoeth.lib” "myprocs.txt" "AinV.cpp" (customized libraries of SINGULAR) in the same directory where you try to run Jupyter notebooks. 

Also, you need to place “AT_ALL_SUBMAT.txt” there: this file is a template for SINGULAR computation and is used as a rewritable gene in the genetic algorithm.  (In fact, this file is a special version of the template. The standard template has already been prepared in each notebook.)



To distinguish the different (or newer) versions, we use the following naming rule.



QAGCC3.ipynb → QGCC3.0.ipynb   → QEGCC3.0.1.ipynb  

             |

QAGCC3.ipynb  → QEGC3.2.ipynb



Note that QAGCC3.2 is NOT on the line of QEGCC3.0.1.*, but a direct decendant of QAGCC3.



To be precise, we distinguish forks or major (minor) changes by appending periods and integers to prefixes of the filenames.



There are two lines of development.

(LINE.3) QAGCC3.*.*.ipynb 

(LINE.7) QAGCC7.*.*.ipynb



 (LINE.3) first determines the divisor, then the rational points for computing codes, and finally adjusts the degree of the divisor with the sizes of the rational points.

 (LINE.7) first determines the rational points, then the divisor.  

The functions in (LINE.3) and (LINE.7) might not be exchangeable even if they have the same names.

Relevant changes are commented (maybe imperfectly) in each notebook.



 
