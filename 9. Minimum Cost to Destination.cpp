#include<bits/stdc++.h>

typedef pair<int, pair<int, int>> PP;

int drow[4] = {0, 0, -1, 1};

int dcol[4] = {-1, 1, 0, 0};

 

// Optimised:O(n*m) from O(n*m*lg(n*m))

int minCostToDestination(int **matrix, int n, int m, int x, int y)

{

    //  Write your code here

    if(matrix[0][0]==0) return -1;

    queue<PP> pq;

    pq.push({0, {0, 0}});

    vector<vector<int>> minCost(n, vector<int>(m, 1e9));

    while(!pq.empty()){

        auto it = pq.front();

        pq.pop();

        int cost = it.first;

        int row = it.second.first;

        int col = it.second.second;

        // if(row==x && col==y) return cost;

        for(int i=0; i<4; i++){

            int nrow = row+drow[i];

            int ncol = col+dcol[i];

            if(nrow<0 || nrow>=n || ncol<0 || ncol>=m || matrix[nrow][ncol]==0) continue;

            if(i<=1 && minCost[nrow][ncol]>cost){

                minCost[nrow][ncol] = cost;

                pq.push({cost, {nrow, ncol}});

            }

            else if(i>1 && minCost[nrow][ncol]>1+cost){

                minCost[nrow][ncol] = 1+cost;

                pq.push({cost + 1, {nrow, ncol}});

            }

        }

    }

    return minCost[x][y]==1e9 ? -1 : minCost[x][y];

}

