TARGET	= libft.a
SRCS	= ft_pwr2.c
OBJS	= $(patsubst %.c, %.o, $(SRCS))
DEPS	= $(addsuffix .d, $(basename $(SRCS)))
.PHONY: all
all: $(TARGET)
$(TARGET): $(OBJS)
	ar rcs $@ $^
%.o: %.c
	gcc -c -o $@ $< -MMD
-include $(DEPS)
.PHONY: clean
clean:
	rm -rf $(NAME)
.PHONY: fclean
fclean: clean
	rm -rf $(ODIR)