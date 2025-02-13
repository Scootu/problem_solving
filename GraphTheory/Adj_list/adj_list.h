#define ADJ_LIST
#ifdef ADJ_LIST

typedef struct node
{
    int vertex;
    int weight;
    struct node *next;
} node_t;

typedef struct graph
{
    int num_vertices;
    node_t **adj_lists;
} graph_t;

node_t *create_node(int v, int weight);
graph_t *create_graph(int num_vertices);
void free_graph(graph_t *graph);
void add_edge(graph_t *graph, int src, int dest, int weight);
void print_graph(graph_t *graph);
int path_distance(graph_t *graph, int *path, int path_Length);

#endif