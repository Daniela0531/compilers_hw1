#pragma once

#include "TreeNode.hpp"
#include "Statement.hpp"

class StatementList : public TreeNode {
 public:
  StatementList() = default;
  StatementList(Statement* head, StatementList* tail) : head_(head), tail_(tail) {}

  void Accept(Visitor* visitor) override {
      visitor->Visit(this);
  }

  Statement* GetHead() const {
      return head_;
  }

  StatementList* GetTail() const {
      return tail_;
  }

 private:
    Statement* head_ = nullptr;
    StatementList* tail_ = nullptr;
};
