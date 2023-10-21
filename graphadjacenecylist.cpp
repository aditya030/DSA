#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;


class graph{
public: 
        unordered_map<int,list<int,int> >adjlist;


        void addedge(int u , int v , int weight,bool direction){

            adjlist[u].push_back(v,weight);
            if(direction == 0){
                adjlist[v].push_back(u),weight;
            }

        
        }

        void printadjacencylist(){
            for(auto i:adjlist){
                cout<<i.first<<"->";
                for(auto neighoirse:i.second){
                    cout<<neighoirse.first<<" "<<neighoirse.second;
                }
                cout<<endl;
            }
        }

        void bfs(int src){
            queue<int> q;
            unordered_map<int,bool>visited;


            q.push(src);
            visited[src]=true;

            while(!q.empty()){
                int frontnode = q.front();
                q.pop();
                cout<<frontnode<<" ";

                // inseret neighours

                for(auto neighoirse:adjlist[frontnode]){
                    if(!visited(neighour)){
                        q.push(neighour);
                        visited[neighour] = true;
                    }
                }
            }
        }

        void dfs(int src,unordered_map<int,bool>visited){
            cout<<src<<" ";
            visited[src]=true;

            for(auto neighoirse : adjlist[src]){
                if(!visited[neighoirse]){
                    dfs(neighoirse,visted);
                }
            }
        }

        bool checkcyclicbfs(int src,unordered_map<int,bool>& visited){
            queue<int> q;
            unordered_map<int,int> parent;
            q.push(src);
            visited[src] = true;
            parent[src] = -1;

            while(!q.empty()){
                int frontnode = q.front();
                q.pop();

                for(auto nbr: adjlist[frontnode]){
                    if(!visited){
                        q.push(nbr);
                        visited[nbr] = true;
                        parent[nbr] = frontnode;
                    }
                    else{
                        // already visited
                       if(visited[nbr] && nbr!=parent[frontnode]){
                           return true;
                       }

                    }
                }
            }

            return false;

        }

        void checkcyclicusingdfs(int src , unordered_map<int,bool>$ visited,int parent){
             visisted[src] = true;
             for auto nbr: adjlist[src]{
                 if(!visited){
                     bool checkcyclians = checkcyclicusingdfs(nbr,visited,src);
                     if(checkcyclians == true){
                         return true;
                     }

                     if(visisted[nbr] && nbr!=parent){
                         return true;
                     }
                 }

                 return false;
             }
        }

        bool checkcyclicdirectedusingdfs(int src,unordered_map<int,bool>visited,unordered_map<int,bool> dfsvisted,int parent){
            visisted[src] = true;
            dfsvisted[src] = true;

            for(auto nbr: adjlist[src]){
                if(!visisted[nbr]){
                    bool aagekaans = checkcyclicdirectedusingdfs(nbr,visisted,dfsvisted,src);
                    if(aagekaans == true){
                        return true;
                    }
                    if(visisted[nbr] == true && dfsvisted[nbr]==true){
                        return true;
                    }
                }
                return false;
            }
        }

    void topologicalsortdfs(int src, unordered_map<int,bool>& visited,stack<int>& ans){
        visited[src] = true;

        for(auto neighour : adjlist[src]){
            if(!visisted[neighour]{
                topologicalsort(neighour,visisted,ans);
            })
        }

        ans.push(src);
    }

    void toposortbfs(int n){
        queue<int> q;
        unordered_map<int,int> indegree;

        // indegree calculation
        for(auto i:adjlist){
            int src = i.first;
            for(auto nbr:i.second){
                indegree[nbr]++;
            }
        }

        // put all nodes insid queue which has indegree = 0
        for(int i = 0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int fnode = q.front();
            q.pop();

            ans.push_back(fnode);
            for(auto nbr: adjlist[fnode]){

                indegree[nbr]--;

                if(indegree[nbr] == 0){
                    q.push(nbr);
                }
            }

        }


    }

};


int main(){
    // int n;
    // cout<< "enter the number of nodes: "<<endl;
    // cin>>n;

    // int e;
    // cout<<"enter the number of edges: ";
    // cin>>e;


    // //undirected graph

    graph g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(0,2,0);

    g.printadjacencylist();
// visited wla yaha use krna
    for(int i = 0i<=7;i++){
        if(!visited[i]){
            g.bfs(i);
        }
    }


    for(int i = 0i<=7;i++){
        if(!visited[i]){
            g.dfs(i);
        }
    }
       
    bool ans = false;
    unordered_map<int,bool> visited;
    for(int i =0;i<n;i++){
        if(!visited[i]){
            bool ans = checkcyclicbfs();
            if(ans == true){
                break;
            }
        }

        if(ans == true){
            cout<<"cyclic";
        }else{
            cout<<"acyclic";
        }
    }

    bool ansdfs = false;
    unordered_map<int,bool> visiteddfs;
    for(int i =0;i<n;i++){
        if(!visiteddfs[i]){
            bool ansdfs = checkcyclicbfs();
            if(ansdfs == true){
                break;
            }
        }

        if(ansdfs == true){
            cout<<"cyclic";
        }else{
            cout<<"acyclic";
        }
    }


    unordered_map<int,bool> visisted;
    stack<int> ans;

    for(int i =0;i<n;i++){
        if(!visisted[i]){
            g.topologicalsort(i,visisted,ans);
        }
    }

    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }

}