// Given an undirected graph that consists of N nodes and M edges as well as Q queries 
// with each query containing two nodes (u, v), your task is to find, for each pair of Q query, 
// the total number of edges found in the newly connected component after connecting
//  between u and v.

// Input
// First line contains a number N, M (1 ≤ N ≤ 100), (1 ≤ M ≤ (N * (N - 1)) / 2).
// The next M lines contains two numbers (u, v), representing an undirected edge between u and v.
// Next line contains an integer Q (1 ≤ Q ≤ 300).
// The next Q lines contains two numbers (u, v).

// Output
// Print Q lines containing the total number of edges found for each query.