

all :	
	gcc -Wall -Werror -Wextra ./*c -L.. -lft -lbsd -o test
	./test all

test : 
	gcc -Wall -Werror -Wextra ./*c -L.. -lft -lbsd -o test
	./test

fclean :
	rm -f test

.PHONY: test all fclean
