#include "adj_list.h"
#include "stdio.h"
#include "stdlib.h"

node_t *create_node(int v, int weight)
{
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->vertex = v;
    new_node->weight = weight;
    new_node->next = NULL;
    return new_node;
}

graph_t *create_graph(int num_vertices)
{
    graph_t *graph = new graph_t;
    graph->num_vertices = num_vertices;
    // graph->adj_lists = malloc(num_vertices * sizeof(node_t*));
    graph->adj_lists = new node_t *[num_vertices];
    for (int i = 0; i < num_vertices; i++)
    {
        graph->adj_lists[i] = NULL;
    }
    return graph;
}

void add_edge(graph_t *graph, int src, int dest, int weight)
{
    node_t *new_node = create_node(dest, weight);
    new_node->next = graph->adj_lists[src];
    graph->adj_lists[src] = new_node;
}

void print_graph(graph_t *graph)
{
    for (int i = 0; i < graph->num_vertices; i++)
    {
        node_t *curr = graph->adj_lists[i];
        if (curr == NULL)
            continue;
        printf("Adjacency list of vertex %d: ", i);
        while (curr != NULL)
        {
            printf("(%d, %d) -> ", curr->vertex, curr->weight);
            curr = curr->next;
        }
        printf("NULL \n");
    }
}

int path_distance(graph_t *graph, int *path, int path_Length)
{
    int distance = 0;
    for (int i = 0; i < path_Length - 1; i++)
    {
        int src = path[i];
        int dest = path[i + 1];
        node_t *curr = graph->adj_lists[src];
        while (curr != NULL)
        {
            if (curr->vertex == dest)
            {
                printf("Found path(%d, %d) with weight: %d.\n", src, dest, curr->weight);
                distance += curr->weight;
                break;
            }
            curr = curr->next;
        }
        if (curr == NULL)
        {
            printf("Error: Path (%d %d) not found in graph\n", src, dest);
            return -1;
        }
    }
    return distance;
}
void free_graph(graph_t *graph)
{
    for (int i = 0; i < graph->num_vertices; i++)
    {
        node_t *curr = graph->adj_lists[i];
        while (curr != NULL)
        {
            node_t *temp = curr;
            curr = curr->next;
            free(temp);
        }
    }
    free(graph->adj_lists);
    free(graph);
}
