.DEFAULT_GOAL = all
NAME	= learn.out
SDIR	= ./src
ODIR	= ./bin
SRCS	= $(shell find $(SDIR) -name '*.c')
OBJS	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(addsuffix .d, $(basename $(OBJS)))
CFLAGS	= -Wall -Wextra -g $(AFL)
LDFLAGS	= -Lsubmake/ -lft
CC		= gcc
.PHONY: all MK
all: MK $(NAME)
MK:
	$(MAKE) -C submake/
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ submake/libft.a
$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(LDFLAGS) -c -o $@ $< -MMD -MP
-include $(DEPS)
.PHONY: clean
clean:
	rm -rf $(NAME)
.PHONY: fclean
fclean: clean
	rm -rf $(ODIR)
