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
* /
