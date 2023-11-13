
// Generated from interpreter.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "interpreterListener.h"


/**
 * This class provides an empty implementation of interpreterListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  interpreterBaseListener : public interpreterListener {
public:

  virtual void enterProg(interpreterParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(interpreterParser::ProgContext * /*ctx*/) override { }

  virtual void enterStatement(interpreterParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(interpreterParser::StatementContext * /*ctx*/) override { }

  virtual void enterExprStmt(interpreterParser::ExprStmtContext * /*ctx*/) override { }
  virtual void exitExprStmt(interpreterParser::ExprStmtContext * /*ctx*/) override { }

  virtual void enterPrintStmt(interpreterParser::PrintStmtContext * /*ctx*/) override { }
  virtual void exitPrintStmt(interpreterParser::PrintStmtContext * /*ctx*/) override { }

  virtual void enterAssignmentStmt(interpreterParser::AssignmentStmtContext * /*ctx*/) override { }
  virtual void exitAssignmentStmt(interpreterParser::AssignmentStmtContext * /*ctx*/) override { }

  virtual void enterFuncDef(interpreterParser::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(interpreterParser::FuncDefContext * /*ctx*/) override { }

  virtual void enterParamList(interpreterParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(interpreterParser::ParamListContext * /*ctx*/) override { }

  virtual void enterSuite(interpreterParser::SuiteContext * /*ctx*/) override { }
  virtual void exitSuite(interpreterParser::SuiteContext * /*ctx*/) override { }

  virtual void enterFuncCall(interpreterParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(interpreterParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterArgList(interpreterParser::ArgListContext * /*ctx*/) override { }
  virtual void exitArgList(interpreterParser::ArgListContext * /*ctx*/) override { }

  virtual void enterReturnStmt(interpreterParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(interpreterParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterParens(interpreterParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(interpreterParser::ParensContext * /*ctx*/) override { }

  virtual void enterFunc(interpreterParser::FuncContext * /*ctx*/) override { }
  virtual void exitFunc(interpreterParser::FuncContext * /*ctx*/) override { }

  virtual void enterNum(interpreterParser::NumContext * /*ctx*/) override { }
  virtual void exitNum(interpreterParser::NumContext * /*ctx*/) override { }

  virtual void enterPow(interpreterParser::PowContext * /*ctx*/) override { }
  virtual void exitPow(interpreterParser::PowContext * /*ctx*/) override { }

  virtual void enterAddSub(interpreterParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(interpreterParser::AddSubContext * /*ctx*/) override { }

  virtual void enterId(interpreterParser::IdContext * /*ctx*/) override { }
  virtual void exitId(interpreterParser::IdContext * /*ctx*/) override { }

  virtual void enterMulDiv(interpreterParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(interpreterParser::MulDivContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

