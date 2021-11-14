/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
  void dfs(Node *u, set<Node*> &vis, unordered_map<Node*, Node*> &mp){
    vis.insert(u);
    Node *ucopy = new Node(u->val);
    mp[u] = ucopy;
    for(auto it : u->neighbors){
      if(vis.find(it) == vis.end())
        dfs(it, vis, mp);
    }
  }
    Node* cloneGraph(Node* node) {
        if(node == NULL) 
          return NULL;
      unordered_map<Node*, Node*> mp;
      set<Node*> vis;
      dfs(node, vis, mp);
      for(auto it : mp){
        for(auto ii : it.first->neighbors){
          it.second-> neighbors.push_back(mp[ii]);
        }
      }
      return mp[node];
    }
};
