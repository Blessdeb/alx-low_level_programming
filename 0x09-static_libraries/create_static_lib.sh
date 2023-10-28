#!/bin/bash
for d in *.c; do gcc -c $d; done
for t in *.o; do ar -rcs liball.a $t; done

