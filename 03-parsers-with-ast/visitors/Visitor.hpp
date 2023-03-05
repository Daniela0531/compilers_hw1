#pragma once

#include "forward_decl.hpp"


class Visitor {
 public:
    virtual void Visit(Program* program) = 0;
    virtual void Visit(Expression* expression) = 0;
    virtual void Visit(AddExpression* add_expression) = 0;
    virtual void Visit(DivExpression* div_expression) = 0;
    virtual void Visit(IdentExpression* ident_expression) = 0;
    virtual void Visit(SubstructExpression* sub_expression) = 0;
    virtual void Visit(StatementList* statement_list) = 0;
    virtual void Visit(Assignment* assignment) = 0;
};
