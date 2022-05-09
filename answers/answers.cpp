/**
 * TOPIC: GRAPHS
 *
 */

/**
 * QUESTIONS:
 * 1. What is the big-O *SIZE* complexity of:
 *      a. An adjacency list graph representation
 *      b. An adjacency matrix graph representation
 *
 * 2. What is the big-O *TIME* complexity of:
 *      a. Determining if two vertices are connected in
 *         an adjacency list
 *      b. Determining if two vertices are connected in
 *         an adjacency matrix
 *
 * 3. What are the runtime complexities of the following
 *    algorithms?
 *       a. Kruskal's
 *       b. DFS
 *       c. Primm's
 *       d. BFS
 *       e. Djikstra's
 *
 * 4. Explain *why* each of the above algorithms has the
 *    run-time complexity that it does.
 *
 *    NOTE: I do not include an answer for this question.
 *          Discuss it with group partners and/or refer
 *          to notes and/or online material.
 *
 *          My reasoning for this is that Prof Lewis likes
 *          to ask questions that require knowing *how* the
 *          algorithm functions, like the next question:
 *
 * 5. Take a maximally dense graph for example. In BFS, at each
 *    step we add all adjacent nodes to the processing queue.
 *    If this is the case, why *isn't* BFS O(V^2)?
 *
 * 6. In what graph types can Djikstra's algorthm be used to find
 *    shortest paths from a single vertex?
 *
 * 7. Given a graph G = {V, E}, how many vertices are in any given
 *    minimum spanning tree of G?
 *
 * 8. Given any connected graph G = {V, E}, under what conditions could
 *    one determine the sum of some MST edges in O(E) time?
 *
 *    NOTE: This is a really tough question, feel free to ask for
 *          a hint
 *
 * 9. Which MST algorithm:
 *       a. Uses a min-heap of edge weights
 *       b. Uses sets of connected/disconnected vertices
 *       c. Jumps around the graph in order of edge weight
 *
 *
 * 10. What are the balance-factors for each node in the
 *     following tree:
 *                         ┌─┐
 *                         │ │
 *              ┌──────────┴─┴───────────┐
 *              │                        │
 *             ┌┴┐                      ┌┴┐
 *             │ │                      │ │
 *        ┌────┴─┘               ┌──────┴─┘
 *        │                      │
 *        │                      │
 *       ┌┴┐                    ┌┴┐
 *       │ │                    │ │
 *  ┌────┴─┘                    └─┴────┐
 *  │                                  │
 *  │                                  │
 * ┌┴┐                                ┌┴┐
 * │ │                                │ │
 * └─┘                                └─┘
 *
 * 11. What kind of information is in an AVL node?
 *
 * 12. What are the big-O time complexities of
 *     the standard operations on an AVL tree?
 *     What about the tree's structure influences
 *     the runtime? How is this different from
 *     a BST?
 *
 * ANSWERS:
 * 1. Sizes:
 *       a. O(V+E) -- the list stores all of the vertices
 *         and the actual edges between vertices.
 *       b O(V^2) -- the matrix stores all possible connections
 *        between verticies, taking up more space.
 *
 * 2. Time:
         a. O(V) -- A vertex's adjacency list must be traversed looking
           for the other vertex, and that list could have V items.
         b. O(1) -- If vertices (A, B, C) are mapped to (0, 1, 2), one
           could check for a connection between A and B by checking the
           matrix location (0, 1) in constant time.
 *
 * 3. Time Complexities:
 *       a. Kruskal's   -- O(ElogV)
 *       b. DFS         -- O(E + V)
 *       c. Prim's      -- O(ElogV) with fib heaps
 *       d. BFS         -- O(E + V)
 *       e. Djikstra's  -- O((E + V) log V)
 *
 * 4. Runtime Explanations:
 *       NOTE: Discuss with groups and/or refer to online/class material.
 *             I'm happy to talk through the algorithms with you, but
 *             you'll understand them *best* if you can explain them
 *             to somebody else!
 *
 * 5. In BFS we add all adjacent nodes that *haven't been encountered yet*
 *    to the queue. Therefore, a maximum number of V nodes will be encountered.
 *    If we added all nodes (including the encountered ones) it would be O(V^2).
 *
 * 6. Djikstra's can be used on:
 *       a. Directed graphs
 *       b. Undirected graphs
 *       c. Weighted graphs
 *       d. Unweighted graphs,
 *       e. Cyclic graphs,
 *       f. Acyclic graphs,
 *       g. NON-NEGATIVE WEIGHTED graphs
 *
 * 7. The number of nodes in the MST it is ALWAYS |V| since
 *    the MST connects all nodes in the graph, regardless of
 *    the number of nodes in G.
 *
 * 8. If the graph is minimally sparse (as few edges as possible),
 *    there can only be one minimum spanning tree. Since there is
 *    only one MST, you can calculate the sum by adding all the
 *    edge weights together.
 *
 * 9. Components:
 *       a. Prim's uses a min-heap of edge weights
 *       b. Kruskal's uses sets of vertices
 *       c. Both do this. Prim's adds edges if both nodes it
 *          connects to are not in the MST, Kruskal's adds
 *          the edge if the sets it connects to are different.
 *
 * 10. Balance factors:
 *
 *                         ┌─┐
 *                         │0│
 *              ┌──────────┴─┴───────────┐
 *              │                        │
 *             ┌┴┐                      ┌┴┐
 *             │2│                      │2│
 *        ┌────┴─┘               ┌──────┴─┘
 *        │                      │
 *        │                      │
 *       ┌┴┐                    ┌┴┐
 *       │1│                    │1│
 *  ┌────┴─┘                    └─┴────┐
 *  │                                  │
 *  │                                  │
 * ┌┴┐                                ┌┴┐
 * │0│                                │0│
 * └─┘                                └─┘
 *
 * 11. Information in an AVL node:
 *      a. Left/Right child pointers
 *      b. Height/Balance factor
 *      c. Parent pointer
 *      d. Data
 *
 * 12. Inserting/Deleting/Finding in an AVL tree
 *     are all O(logn) operations. This is the case
 *     because the height of the tree is guaranteed
 *     to be at most logn by our balancing factor.
 *
 *     This is different from a BST because a BST
 *     could have a maximum height of N (a straight line).
* /
