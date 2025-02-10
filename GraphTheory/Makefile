CC = gcc
CFLAGS = -Wall -Wextra -std=c11
BIN = graph.exe
OBJ = main.o graph_adj_mat.o

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

vis: $(BIN)
	$(BIN) | dot -Tpdf > vis.pdf

clean:
	rm -f $(BIN) $(OBJ) *.dSYM vis.pdf
