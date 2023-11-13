
// Generated from interpreter.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "interpreterParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by interpreterParser.
 */
class  interpreterListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(interpreterParser::ProgContext *ctx) = 0;
  virtual void exitProg(interpreterParser::ProgContext *ctx) = 0;

  virtual void enterStatement(interpreterParser::StatementContext *ctx) = 0;
  virtual void exitStatement(interpreterParser::StatementContext *ctx) = 0;

  virtual void enterExprStmt(interpreterParser::ExprStmtContext *ctx) = 0;
  virtual void exitExprStmt(interpreterParser::ExprStmtContext *ctx) = 0;

  virtual void enterPrintStmt(interpreterParser::PrintStmtContext *ctx) = 0;
  virtual void exitPrintStmt(interpreterParser::PrintStmtContext *ctx) = 0;

  virtual void enterAssignmentStmt(interpreterParser::AssignmentStmtContext *ctx) = 0;
  virtual void exitAssignmentStmt(interpreterParser::AssignmentStmtContext *ctx) = 0;

  virtual void enterFuncDef(interpreterParser::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(interpreterParser::FuncDefContext *ctx) = 0;

  virtual void enterParamList(interpreterParser::ParamListContext *ctx) = 0;
  virtual void exitParamList(interpreterParser::ParamListContext *ctx) = 0;

  virtual void enterSuite(interpreterParser::SuiteContext *ctx) = 0;
  virtual void exitSuite(interpreterParser::SuiteContext *ctx) = 0;

  virtual void enterFuncCall(interpreterParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(interpreterParser::FuncCallContext *ctx) = 0;

  virtual void enterArgList(interpreterParser::ArgListContext *ctx) = 0;
  virtual void exitArgList(interpreterParser::ArgListContext *ctx) = 0;

  virtual void enterReturnStmt(interpreterParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(interpreterParser::ReturnStmtContext *ctx) = 0;

  virtual void enterParens(interpreterParser::ParensContext *ctx) = 0;
  virtual void exitParens(interpreterParser::ParensContext *ctx) = 0;

  virtual void enterFunc(interpreterParser::FuncContext *ctx) = 0;
  virtual void exitFunc(interpreterParser::FuncContext *ctx) = 0;

  virtual void enterNum(interpreterParser::NumContext *ctx) = 0;
  virtual void exitNum(interpreterParser::NumContext *ctx) = 0;

  virtual void enterPow(interpreterParser::PowContext *ctx) = 0;
  virtual void exitPow(interpreterParser::PowContext *ctx) = 0;

  virtual void enterAddSub(interpreterParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(interpreterParser::AddSubContext *ctx) = 0;

  virtual void enterId(interpreterParser::IdContext *ctx) = 0;
  virtual void exitId(interpreterParser::IdContext *ctx) = 0;

  virtual void enterMulDiv(interpreterParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(interpreterParser::MulDivContext *ctx) = 0;


};

