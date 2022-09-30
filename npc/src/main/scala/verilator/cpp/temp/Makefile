CC = gcc
sources = $(wildcard *.c)
target  = a
objs	= $(sources:.c=.o)

include $(sources:.c=.d)

test:
	@echo $$
	@echo $$$$
%.d: %.c
	@set -e; echo update $@;\
        $(CC) -MM $(CFLAGS) $< > $@.$$$$; \
        sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@;\
	rm -f $@.$$$$

a:$(objs)
	@$(CC) -o $(target) $(objs)

clean:
	-rm *.d *.o $(target)
