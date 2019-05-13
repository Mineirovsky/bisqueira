CC=gcc

IDIR=../include
ODIR=../obj
BDIR=../build

CFLAGS=-I$(IDIR) -std=c11

LIBS=-lm

# List all headers here
_DEPS=suits.h splash.h card_deck.h
DEPS=$(addprefix $(IDIR)/,$(_DEPS))

# List all modules here
_OBJ=main.o card_deck.o
OBJ=$(addprefix $(ODIR)/,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bisqueira: $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
