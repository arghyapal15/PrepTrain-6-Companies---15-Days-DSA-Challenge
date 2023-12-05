vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){

    

    vector<vector<int>> adj(n+1);

    vector<int> vis(n+1,0),par(n+1,0),ans;

    for(auto i:edges) {

        adj[i.first].push_back(i.second);

        adj[i.second].push_back(i.first);

    }

    queue<int> q;

    q.push(s);

    par[s] = -1;

    vis[s] = 1;

    while(!q.empty()) {

        int front = q.front();

        q.pop();

        for(auto j:adj[front]) {

            if(vis[j]==0) {

                par[j] = front;

                vis[j] = 1;

                q.push(j);

            }

        }

    }

 

    int x=t;

    ans.push_back(t);

    while(par[x]!=-1) {

        ans.push_back(par[x]);

        x = par[x];

    }

    reverse(ans.begin(),ans.end());

    return ans;

    

}
