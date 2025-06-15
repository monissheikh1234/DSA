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
    Node* cloneGraph(Node* node) {
        if (node == nullptr) return nullptr;

        unordered_map<Node*, Node*> map; // maps original to cloned nodes
        queue<Node*> q;

        // Initialize: clone the first node
        q.push(node);
        map[node] = new Node(node->val, {});

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            for (Node* neighbor : current->neighbors) {
                if (map.find(neighbor) == map.end()) {
                    // Clone neighbor if not already cloned
                    map[neighbor] = new Node(neighbor->val, {});
                    q.push(neighbor);
                }
                // Link the cloned neighbor to the current cloned node
                map[current]->neighbors.push_back(map[neighbor]);
            }
        }

        return map[node];
    }
};
