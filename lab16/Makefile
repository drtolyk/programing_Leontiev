CC = cc
CFLAGS = -Wall -std=c99 -I/usr/local/include -Isrc
LDFLAGS = -L/usr/local/lib -lcheck -lm -lsubunit
OBJDIR = dist
SRCDIR = src
TESTDIR = test
ASSETSDIR = assets

OBJS = $(addprefix $(OBJDIR)/, entity.o list.o test.o)

.PHONY: all clean

all: check

check: $(OBJS)
	$(CC) -o $(OBJDIR)/$@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: $(TESTDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)/*.o $(OBJDIR)/check

doxygen:
	doxygen
