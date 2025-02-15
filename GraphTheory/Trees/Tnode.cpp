#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>

using namespace std;

const int maxC = 4;

struct Tnode
{
    char node;
    int child[maxC];
};

typedef Tnode Tree[26];

void initTree(Tree &t1)
{
    for (int i = 0; i < 26; i++)
    {
        t1[i].node = '0';
        for (int j = 0; j < maxC; j++)
            t1[i].child[j] = 0; // Mark unassigned children
    }
}

void fillTree(Tree &t1, char c)
{
    for (int i = 0; i < 5; i++)
    {
        t1[i].node = c + i;
        // set<int> used;  // Track unique children
        printf("%c : ", (char)(c + i));
        for (int j = 0; j < maxC; j++)
        {
            /*
            int randChild;
            do {
                randChild = rand() % 26;  // Ensure valid child index
            } while (randChild == i || used.count(randChild));  // Avoid self-loops & duplicates
            */

            // t1[i].child[j] = randChild;
            printf("%d : ", j + 1);
            cin >> t1[i].child[j]; // i will enter 0 to indicate nothing 
            // used.insert(randChild);
        }
    }
}

void PrintTree(Tree t1)
{
    cout << "strict digraph {\n";
    // set<string> edges; // Track unique edges

    for (int i = 0; i < 5; i++)
    {
        if (t1[i].node != '0')
        {
            for (int j = 0; j < maxC; j++)
            {
                int childIdx = t1[i].child[j];
                if (childIdx != 0) // why it's print this relation node -> 0 ? i dosn't want this 
                {
                    string edge = string(1, t1[i].node) + " -> " + t1[childIdx].node;
                    cout << edge << "\n"; 
                }
                /*
                if (!edges.count(edge)) {  // Avoid duplicate edges
                cout << edge << "\n";
                edges.insert(edge);
            }
            */
            }
        }
    }
    cout << "}\n";
}

void PrintTree1(Tree t1)
{
    cout << "strict digraph {\n";

    for (int i = 0; i < 5; i++)
    {
        if (t1[i].node != '0')
        {
            bool hasChildren = false;
            for (int j = 0; j < maxC; j++)
            {
                int childIdx = t1[i].child[j];
                if (childIdx >= 0 && childIdx < 26 && t1[childIdx].node != '0')
                {
                    cout << t1[i].node << " -> " << t1[childIdx].node << ";\n";
                    hasChildren = true;
                }
            }
            if (!hasChildren)
            {
                cout << t1[i].node << ";\n"; // Ensure nodes without children are printed
            }
        }
    }
    cout << "}\n";
}
int main()
{
    srand(time(0)); // Seed random number generator once
    Tree t1;
    initTree(t1);
    fillTree(t1, 'A');
    // PrintTree(t1);
    PrintTree1(t1);
    return 0;
}
