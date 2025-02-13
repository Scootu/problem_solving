#include <iostream>
#include "adj_list.h"

int main()
{
    graph_t *g1 = create_graph(5);

    add_edge(g1, 0, 1, 5);
    add_edge(g1, 0, 2, 3);
    add_edge(g1, 1, 2, 2);
    add_edge(g1, 2, 3, 7);

    print_graph(g1);
    int path[3] = {0, 2, 3};
    printf("Total Distance: %d\n", path_distance(g1, path, 3));
    free_graph(g1);
    return 0;
}