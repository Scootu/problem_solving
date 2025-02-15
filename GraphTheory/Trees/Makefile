CC = g++
CFLAGS = -Wall -Wextra -std=c++11
BIN = Tnode.exe
OBJ = Tnode.o

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

vis: $(BIN)
	./$(BIN) | dot -Tpdf > vis.pdf

clean:
	rm -f $(BIN) $(OBJ) *.dSYM vis.pdf