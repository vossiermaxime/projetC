CC = gcc
CFLAGS = -IHeaders
SRCS =  ./projet_0.c

OBJS = $(SRCS:.c=.o)
EXEC = Executable

all: $(EXEC)
$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)
clean :
	@echo "On efface les fichiers objets"
	rm $(OBJS)
