#ifndef ASTAR_SPEED_PLANNING_NODE_H
#define ASTAR_SPEED_PLANNING_NODE_H

#include <iostream>
#include <vector>
#include <cmath>
#include <memory>

enum State
{
    None = 0,
    Open = 1,
    Close = 2,
};

class Node
{
public:
    Node(const double s,
         const double t,
         const double v,
         const double goal_s,
         Node* Parent = nullptr);

    double getScore() { return actual_cost_+heuristic_cost_; }
    bool isGoal(const double goal_s);

    double s_;
    double t_;
    double v_;
    double actual_cost_;
    double heuristic_cost_;
    Node* parent_node_;
};


#endif //ASTAR_SPEED_PLANNING_NODE_H
