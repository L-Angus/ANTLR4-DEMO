
// Generated from interpreter.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "interpreterParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by interpreterParser.
 */
class  interpreterVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by interpreterParser.
   */
    virtual antlrcpp::Any visitProg(interpreterParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitStatement(interpreterParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitExprStmt(interpreterParser::ExprStmtContext *context) = 0;

    virtual antlrcpp::Any visitPrintStmt(interpreterParser::PrintStmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(interpreterParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitFuncDef(interpreterParser::FuncDefContext *context) = 0;

    virtual antlrcpp::Any visitParamList(interpreterParser::ParamListContext *context) = 0;

    virtual antlrcpp::Any visitSuite(interpreterParser::SuiteContext *context) = 0;

    virtual antlrcpp::Any visitFuncCall(interpreterParser::FuncCallContext *context) = 0;

    virtual antlrcpp::Any visitArgList(interpreterParser::ArgListContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(interpreterParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitParens(interpreterParser::ParensContext *context) = 0;

    virtual antlrcpp::Any visitFunc(interpreterParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitNum(interpreterParser::NumContext *context) = 0;

    virtual antlrcpp::Any visitPow(interpreterParser::PowContext *context) = 0;

    virtual antlrcpp::Any visitAddSub(interpreterParser::AddSubContext *context) = 0;

    virtual antlrcpp::Any visitId(interpreterParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitMulDiv(interpreterParser::MulDivContext *context) = 0;


};

