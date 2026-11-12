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
    unordered_map<Node*,Node*>um;
    Node* cloneGraph(Node* node) {
        if(node==nullptr)return nullptr;
        if(um.count(node))return um[node];
        Node* ans=new Node(node->val);
        um[node]=ans;
        for(auto &i:node->neighbors){
            ans->neighbors.push_back(cloneGraph(i));
        }
        return ans;
    }
};