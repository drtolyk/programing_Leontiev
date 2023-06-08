CC = cc
CFLAGS = -Wall -std=c99 -I/usr/local/include -Isrc
LDFLAGS = -L/usr/local/lib -lcheck -lm -lsubunit
OBJDIR = dist
SRCDIR = src
TESTDIR = test
ASSETSDIR = assets

OBJS = $(addprefix $(OBJDIR)/, lib.o test.o)
MAIN = $(SRCDIR)/main.c
TEST = $(TESTDIR)/test.c
INPUT = $(ASSETSDIR)/input.txt

.PHONY: all clean

all: check

check: $(OBJS)
	$(CC) -o $(OBJDIR)/$@ $^ $(LDFLAGS)

$(OBJDIR)/lib.o: $(SRCDIR)/lib.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR)/test.o: $(TEST) | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	mkdir -p $(OBJDIR)

compile: main.bin test.bin

main.bin: $(MAIN) $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

test.bin: $(TEST) $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -lcheck

test: clean prep compile
	LLVM_PROFILE_FILE="$(OBJDIR)/test.profraw" ./test.bin
	llvm-profdata merge -sparse $(OBJDIR)/test.profraw -o $(OBJDIR)/test.profdata
	llvm-cov report ./test.bin -instr-profile=$(OBJDIR)/test.profdata $(SRCDIR)/*.c
	llvm-cov show ./test.bin -instr-profile=$(OBJDIR)/test.profdata $(SRCDIR)/*.c --format html > $(OBJDIR)/coverage.html

clean:
	rm -rf $(OBJDIR)/*.o
	rm -f main.bin test.bin $(OBJDIR)/test.profraw $(OBJDIR)/test.profdata $(OBJDIR)/coverage.html

doxygen:
	doxygen
