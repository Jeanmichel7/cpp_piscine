#!/bin/bash

make re
make
make fclean
g++ -std=c++98 -Wall -Wextra -Werror Convert.cpp main.cpp -o convert


# INT
printf "\n\033[0;31m TYPE INT \n\033[0m"
printf "\n\033[0;34m./convert 0 \n\033[0m"
./convert 0
printf "\n\033[0;34m./convert 46 \n\033[0m"
./convert 46
printf "\n\033[0;34m./convert -123\n\033[0m"
./convert -123
printf "\n\033[0;34m./convert 15235415\n\033[0m"
./convert 15235415

#BAD INT


#CHAR
printf "\n\033[0;31m TYPE CHAR \n\033[0m"
printf "\n\033[0;34m./convert a\n\033[0m"
./convert a
printf "\n\033[0;34m./convert z\n\033[0m"
./convert z
printf "\n\033[0;34m./convert ;\n\033[0m"
./convert ';'

#FLOAT
printf "\n\033[0;31m TYPE FLOAT \n\033[0m"

printf "\n\033[0;34m./convert 42.024f\n\033[0m"
./convert 42.024f;
printf "\n\033[0;34m./convert -45.123543f\n\033[0m"
./convert -45.123543f;
printf "\n\033[0;34m./convert 134567.951354f\n\033[0m"
./convert 134567.951354f;
printf "\n\033[0;34m./convert 1f\n\033[0m"
./convert 1f;
printf "\n\033[0;34m./convert 0f\n\033[0m"
./convert 0f;



#DOUBLE
printf "\n\033[0;31m TYPE DOUBLE \n\033[0m"
printf "\n\033[0;34m./convert -999999999999\n\033[0m"
./convert -999999999999
printf "\n\033[0;34m./convert 45.014\n\033[0m"
./convert 45.014;
printf "\n\033[0;34m./convert 45654654654654654654654654654654654\n\033[0m"
./convert 45654654654654654654654654654654654;
printf "\n\033[0;34m./convert 0.461325551343134135\n\033[0m"
./convert 0.461325551343134135;
printf "\n\033[0;34m./convert 4645646546464646464646546465465445654654654654654654654654654654654\n\033[0m"
./convert 4645646546464646464646546465465445654654654654654654654654654654654;

#ERROR
printf "\n\033[0;31m ERROR STRING \n\033[0m"

printf "\n\033[0;34m./convert nan\n\033[0m"
./convert       nan;
printf "\n\033[0;34m./convert sdfsdf\n\033[0m"
./convert       sdfsdf;
printf "\n\033[0;34m./convert 456..5\n\033[0m"
./convert       456..5;
printf "\n\033[0;34m./convert f456\n\033[0m"
./convert       f456;
printf "\n\033[0;34m./convert 456..\n\033[0m"
./convert       456..;
printf "\n\033[0;34m./convert -f456\n\033[0m"
./convert       -f456;
printf "\n\033[0;34m./convert 49-5\n\033[0m"
./convert                     49-5;


printf "\n\033[0;34m./convert \n\033[0m"
./convert                     ;