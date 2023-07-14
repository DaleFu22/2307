#PP=main.o add.o sub.o mul.o div.o
SRC=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SRC))
MYAPP=main
RM=rm -rf
GCC=gcc

$(MYAPP):$(OBJ)
	$(GCC) $^ -o $@
%.o:%.c
	$(GCC) -c $< -o $@
#伪目标
.PHONY:clean cleanall
clean:
	$(RM) *.o
cleanall:
	$(RM) *.o $(MYAPP)
