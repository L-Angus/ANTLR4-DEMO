
// Generated from interpreter.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "interpreterVisitor.h"


/**
 * This class provides an empty implementation of interpreterVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  interpreterBaseVisitor : public interpreterVisitor {
public:

  virtual antlrcpp::Any visitProg(interpreterParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(interpreterParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprStmt(interpreterParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintStmt(interpreterParser::PrintStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStmt(interpreterParser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDef(interpreterParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamList(interpreterParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuite(interpreterParser::SuiteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncCall(interpreterParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgList(interpreterParser::ArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(interpreterParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParens(interpreterParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(interpreterParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNum(interpreterParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPow(interpreterParser::PowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSub(interpreterParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(interpreterParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDiv(interpreterParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }


};

