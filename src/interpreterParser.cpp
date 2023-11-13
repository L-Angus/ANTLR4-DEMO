
// Generated from interpreter.g4 by ANTLR 4.9.3


#include "interpreterVisitor.h"

#include "interpreterParser.h"


using namespace antlrcpp;
using namespace antlr4;

interpreterParser::interpreterParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

interpreterParser::~interpreterParser() {
  delete _interpreter;
}

std::string interpreterParser::getGrammarFileName() const {
  return "interpreter.g4";
}

const std::vector<std::string>& interpreterParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& interpreterParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

interpreterParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<interpreterParser::StatementContext *> interpreterParser::ProgContext::statement() {
  return getRuleContexts<interpreterParser::StatementContext>();
}

interpreterParser::StatementContext* interpreterParser::ProgContext::statement(size_t i) {
  return getRuleContext<interpreterParser::StatementContext>(i);
}


size_t interpreterParser::ProgContext::getRuleIndex() const {
  return interpreterParser::RuleProg;
}


antlrcpp::Any interpreterParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::ProgContext* interpreterParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, interpreterParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << interpreterParser::T__0)
      | (1ULL << interpreterParser::T__1)
      | (1ULL << interpreterParser::T__2)
      | (1ULL << interpreterParser::LBR)
      | (1ULL << interpreterParser::ID)
      | (1ULL << interpreterParser::INT))) != 0)) {
      setState(24);
      statement();
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

interpreterParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

interpreterParser::ExprStmtContext* interpreterParser::StatementContext::exprStmt() {
  return getRuleContext<interpreterParser::ExprStmtContext>(0);
}

interpreterParser::PrintStmtContext* interpreterParser::StatementContext::printStmt() {
  return getRuleContext<interpreterParser::PrintStmtContext>(0);
}

interpreterParser::AssignmentStmtContext* interpreterParser::StatementContext::assignmentStmt() {
  return getRuleContext<interpreterParser::AssignmentStmtContext>(0);
}

interpreterParser::FuncDefContext* interpreterParser::StatementContext::funcDef() {
  return getRuleContext<interpreterParser::FuncDefContext>(0);
}

interpreterParser::FuncCallContext* interpreterParser::StatementContext::funcCall() {
  return getRuleContext<interpreterParser::FuncCallContext>(0);
}

interpreterParser::ReturnStmtContext* interpreterParser::StatementContext::returnStmt() {
  return getRuleContext<interpreterParser::ReturnStmtContext>(0);
}


size_t interpreterParser::StatementContext::getRuleIndex() const {
  return interpreterParser::RuleStatement;
}


antlrcpp::Any interpreterParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::StatementContext* interpreterParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, interpreterParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(30);
      exprStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(31);
      printStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(32);
      assignmentStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(33);
      funcDef();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(34);
      funcCall();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(35);
      returnStmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprStmtContext ------------------------------------------------------------------

interpreterParser::ExprStmtContext::ExprStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

interpreterParser::ExprContext* interpreterParser::ExprStmtContext::expr() {
  return getRuleContext<interpreterParser::ExprContext>(0);
}


size_t interpreterParser::ExprStmtContext::getRuleIndex() const {
  return interpreterParser::RuleExprStmt;
}


antlrcpp::Any interpreterParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::ExprStmtContext* interpreterParser::exprStmt() {
  ExprStmtContext *_localctx = _tracker.createInstance<ExprStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, interpreterParser::RuleExprStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStmtContext ------------------------------------------------------------------

interpreterParser::PrintStmtContext::PrintStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

interpreterParser::ExprContext* interpreterParser::PrintStmtContext::expr() {
  return getRuleContext<interpreterParser::ExprContext>(0);
}


size_t interpreterParser::PrintStmtContext::getRuleIndex() const {
  return interpreterParser::RulePrintStmt;
}


antlrcpp::Any interpreterParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::PrintStmtContext* interpreterParser::printStmt() {
  PrintStmtContext *_localctx = _tracker.createInstance<PrintStmtContext>(_ctx, getState());
  enterRule(_localctx, 6, interpreterParser::RulePrintStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(interpreterParser::T__0);
    setState(41);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStmtContext ------------------------------------------------------------------

interpreterParser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<interpreterParser::ExprContext *> interpreterParser::AssignmentStmtContext::expr() {
  return getRuleContexts<interpreterParser::ExprContext>();
}

interpreterParser::ExprContext* interpreterParser::AssignmentStmtContext::expr(size_t i) {
  return getRuleContext<interpreterParser::ExprContext>(i);
}

tree::TerminalNode* interpreterParser::AssignmentStmtContext::EQU() {
  return getToken(interpreterParser::EQU, 0);
}


size_t interpreterParser::AssignmentStmtContext::getRuleIndex() const {
  return interpreterParser::RuleAssignmentStmt;
}


antlrcpp::Any interpreterParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::AssignmentStmtContext* interpreterParser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, interpreterParser::RuleAssignmentStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    expr(0);
    setState(44);
    antlrcpp::downCast<AssignmentStmtContext *>(_localctx)->op = match(interpreterParser::EQU);
    setState(45);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

interpreterParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interpreterParser::FuncDefContext::ID() {
  return getToken(interpreterParser::ID, 0);
}

tree::TerminalNode* interpreterParser::FuncDefContext::LBR() {
  return getToken(interpreterParser::LBR, 0);
}

tree::TerminalNode* interpreterParser::FuncDefContext::RBR() {
  return getToken(interpreterParser::RBR, 0);
}

tree::TerminalNode* interpreterParser::FuncDefContext::COLON() {
  return getToken(interpreterParser::COLON, 0);
}

interpreterParser::ParamListContext* interpreterParser::FuncDefContext::paramList() {
  return getRuleContext<interpreterParser::ParamListContext>(0);
}

std::vector<interpreterParser::SuiteContext *> interpreterParser::FuncDefContext::suite() {
  return getRuleContexts<interpreterParser::SuiteContext>();
}

interpreterParser::SuiteContext* interpreterParser::FuncDefContext::suite(size_t i) {
  return getRuleContext<interpreterParser::SuiteContext>(i);
}


size_t interpreterParser::FuncDefContext::getRuleIndex() const {
  return interpreterParser::RuleFuncDef;
}


antlrcpp::Any interpreterParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::FuncDefContext* interpreterParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 10, interpreterParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(interpreterParser::T__1);
    setState(48);
    match(interpreterParser::ID);
    setState(49);
    match(interpreterParser::LBR);
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == interpreterParser::ID) {
      setState(50);
      paramList();
    }
    setState(53);
    match(interpreterParser::RBR);
    setState(54);
    match(interpreterParser::COLON);
    setState(58);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(55);
        suite(); 
      }
      setState(60);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

interpreterParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> interpreterParser::ParamListContext::ID() {
  return getTokens(interpreterParser::ID);
}

tree::TerminalNode* interpreterParser::ParamListContext::ID(size_t i) {
  return getToken(interpreterParser::ID, i);
}

std::vector<tree::TerminalNode *> interpreterParser::ParamListContext::COMMA() {
  return getTokens(interpreterParser::COMMA);
}

tree::TerminalNode* interpreterParser::ParamListContext::COMMA(size_t i) {
  return getToken(interpreterParser::COMMA, i);
}


size_t interpreterParser::ParamListContext::getRuleIndex() const {
  return interpreterParser::RuleParamList;
}


antlrcpp::Any interpreterParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::ParamListContext* interpreterParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 12, interpreterParser::RuleParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(interpreterParser::ID);
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == interpreterParser::COMMA) {
      setState(62);
      match(interpreterParser::COMMA);
      setState(63);
      match(interpreterParser::ID);
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuiteContext ------------------------------------------------------------------

interpreterParser::SuiteContext::SuiteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

interpreterParser::StatementContext* interpreterParser::SuiteContext::statement() {
  return getRuleContext<interpreterParser::StatementContext>(0);
}


size_t interpreterParser::SuiteContext::getRuleIndex() const {
  return interpreterParser::RuleSuite;
}


antlrcpp::Any interpreterParser::SuiteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitSuite(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::SuiteContext* interpreterParser::suite() {
  SuiteContext *_localctx = _tracker.createInstance<SuiteContext>(_ctx, getState());
  enterRule(_localctx, 14, interpreterParser::RuleSuite);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallContext ------------------------------------------------------------------

interpreterParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interpreterParser::FuncCallContext::ID() {
  return getToken(interpreterParser::ID, 0);
}

tree::TerminalNode* interpreterParser::FuncCallContext::LBR() {
  return getToken(interpreterParser::LBR, 0);
}

tree::TerminalNode* interpreterParser::FuncCallContext::RBR() {
  return getToken(interpreterParser::RBR, 0);
}

interpreterParser::ArgListContext* interpreterParser::FuncCallContext::argList() {
  return getRuleContext<interpreterParser::ArgListContext>(0);
}


size_t interpreterParser::FuncCallContext::getRuleIndex() const {
  return interpreterParser::RuleFuncCall;
}


antlrcpp::Any interpreterParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::FuncCallContext* interpreterParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 16, interpreterParser::RuleFuncCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(interpreterParser::ID);
    setState(72);
    match(interpreterParser::LBR);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << interpreterParser::LBR)
      | (1ULL << interpreterParser::ID)
      | (1ULL << interpreterParser::INT))) != 0)) {
      setState(73);
      argList();
    }
    setState(76);
    match(interpreterParser::RBR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

interpreterParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<interpreterParser::ExprContext *> interpreterParser::ArgListContext::expr() {
  return getRuleContexts<interpreterParser::ExprContext>();
}

interpreterParser::ExprContext* interpreterParser::ArgListContext::expr(size_t i) {
  return getRuleContext<interpreterParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> interpreterParser::ArgListContext::COMMA() {
  return getTokens(interpreterParser::COMMA);
}

tree::TerminalNode* interpreterParser::ArgListContext::COMMA(size_t i) {
  return getToken(interpreterParser::COMMA, i);
}


size_t interpreterParser::ArgListContext::getRuleIndex() const {
  return interpreterParser::RuleArgList;
}


antlrcpp::Any interpreterParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::ArgListContext* interpreterParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 18, interpreterParser::RuleArgList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    expr(0);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == interpreterParser::COMMA) {
      setState(79);
      match(interpreterParser::COMMA);
      setState(80);
      expr(0);
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

interpreterParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

interpreterParser::ExprContext* interpreterParser::ReturnStmtContext::expr() {
  return getRuleContext<interpreterParser::ExprContext>(0);
}


size_t interpreterParser::ReturnStmtContext::getRuleIndex() const {
  return interpreterParser::RuleReturnStmt;
}


antlrcpp::Any interpreterParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::ReturnStmtContext* interpreterParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, interpreterParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(interpreterParser::T__2);
    setState(87);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

interpreterParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t interpreterParser::ExprContext::getRuleIndex() const {
  return interpreterParser::RuleExpr;
}

void interpreterParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

tree::TerminalNode* interpreterParser::ParensContext::LBR() {
  return getToken(interpreterParser::LBR, 0);
}

interpreterParser::ExprContext* interpreterParser::ParensContext::expr() {
  return getRuleContext<interpreterParser::ExprContext>(0);
}

tree::TerminalNode* interpreterParser::ParensContext::RBR() {
  return getToken(interpreterParser::RBR, 0);
}

interpreterParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any interpreterParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncContext ------------------------------------------------------------------

interpreterParser::FuncCallContext* interpreterParser::FuncContext::funcCall() {
  return getRuleContext<interpreterParser::FuncCallContext>(0);
}

interpreterParser::FuncContext::FuncContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any interpreterParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumContext ------------------------------------------------------------------

tree::TerminalNode* interpreterParser::NumContext::INT() {
  return getToken(interpreterParser::INT, 0);
}

interpreterParser::NumContext::NumContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any interpreterParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowContext ------------------------------------------------------------------

std::vector<interpreterParser::ExprContext *> interpreterParser::PowContext::expr() {
  return getRuleContexts<interpreterParser::ExprContext>();
}

interpreterParser::ExprContext* interpreterParser::PowContext::expr(size_t i) {
  return getRuleContext<interpreterParser::ExprContext>(i);
}

tree::TerminalNode* interpreterParser::PowContext::POW() {
  return getToken(interpreterParser::POW, 0);
}

interpreterParser::PowContext::PowContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any interpreterParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<interpreterParser::ExprContext *> interpreterParser::AddSubContext::expr() {
  return getRuleContexts<interpreterParser::ExprContext>();
}

interpreterParser::ExprContext* interpreterParser::AddSubContext::expr(size_t i) {
  return getRuleContext<interpreterParser::ExprContext>(i);
}

tree::TerminalNode* interpreterParser::AddSubContext::ADD() {
  return getToken(interpreterParser::ADD, 0);
}

tree::TerminalNode* interpreterParser::AddSubContext::SUB() {
  return getToken(interpreterParser::SUB, 0);
}

interpreterParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any interpreterParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* interpreterParser::IdContext::ID() {
  return getToken(interpreterParser::ID, 0);
}

interpreterParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any interpreterParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<interpreterParser::ExprContext *> interpreterParser::MulDivContext::expr() {
  return getRuleContexts<interpreterParser::ExprContext>();
}

interpreterParser::ExprContext* interpreterParser::MulDivContext::expr(size_t i) {
  return getRuleContext<interpreterParser::ExprContext>(i);
}

tree::TerminalNode* interpreterParser::MulDivContext::MUL() {
  return getToken(interpreterParser::MUL, 0);
}

tree::TerminalNode* interpreterParser::MulDivContext::DIV() {
  return getToken(interpreterParser::DIV, 0);
}

interpreterParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any interpreterParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interpreterVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}

interpreterParser::ExprContext* interpreterParser::expr() {
   return expr(0);
}

interpreterParser::ExprContext* interpreterParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  interpreterParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  interpreterParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, interpreterParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(90);
      match(interpreterParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(91);
      match(interpreterParser::ID);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(92);
      match(interpreterParser::LBR);
      setState(93);
      expr(0);
      setState(94);
      match(interpreterParser::RBR);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(96);
      funcCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(110);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(108);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(99);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(100);
          antlrcpp::downCast<PowContext *>(_localctx)->op = match(interpreterParser::POW);
          setState(101);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(102);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(103);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == interpreterParser::MUL

          || _la == interpreterParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(104);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(105);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(106);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == interpreterParser::ADD

          || _la == interpreterParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(107);
          expr(6);
          break;
        }

        default:
          break;
        } 
      }
      setState(112);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool interpreterParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 11: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool interpreterParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> interpreterParser::_decisionToDFA;
atn::PredictionContextCache interpreterParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN interpreterParser::_atn;
std::vector<uint16_t> interpreterParser::_serializedATN;

std::vector<std::string> interpreterParser::_ruleNames = {
  "prog", "statement", "exprStmt", "printStmt", "assignmentStmt", "funcDef", 
  "paramList", "suite", "funcCall", "argList", "returnStmt", "expr"
};

std::vector<std::string> interpreterParser::_literalNames = {
  "", "'print'", "'def'", "'return'", "'*'", "'/'", "'+'", "'-'", "'('", 
  "')'", "'^'", "','", "':'", "'='"
};

std::vector<std::string> interpreterParser::_symbolicNames = {
  "", "", "", "", "MUL", "DIV", "ADD", "SUB", "LBR", "RBR", "POW", "COMMA", 
  "COLON", "EQU", "ID", "INT", "LINE_COMMENT", "BLOCK_COMMENT", "WS"
};

dfa::Vocabulary interpreterParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> interpreterParser::_tokenNames;

interpreterParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x14, 0x74, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 
       0x2, 0x7, 0x2, 0x1c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1f, 0xb, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
       0x3, 0x27, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x36, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x7, 0x7, 0x3b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x3e, 0xb, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x43, 0xa, 0x8, 0xc, 
       0x8, 0xe, 0x8, 0x46, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x5, 0xa, 0x4d, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x54, 0xa, 0xb, 0xc, 0xb, 0xe, 
       0xb, 0x57, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x5, 0xd, 0x64, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x6f, 
       0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x72, 0xb, 0xd, 0x3, 0xd, 0x2, 0x3, 
       0x18, 0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
       0x18, 0x2, 0x4, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 0x8, 0x9, 0x2, 0x78, 
       0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x26, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x28, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0xc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3f, 0x3, 
       0x2, 0x2, 0x2, 0x10, 0x47, 0x3, 0x2, 0x2, 0x2, 0x12, 0x49, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0x50, 0x3, 0x2, 0x2, 0x2, 0x16, 0x58, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1c, 0x5, 0x4, 0x3, 0x2, 
       0x1b, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x3, 
       0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x27, 0x5, 
       0x6, 0x4, 0x2, 0x21, 0x27, 0x5, 0x8, 0x5, 0x2, 0x22, 0x27, 0x5, 0xa, 
       0x6, 0x2, 0x23, 0x27, 0x5, 0xc, 0x7, 0x2, 0x24, 0x27, 0x5, 0x12, 
       0xa, 0x2, 0x25, 0x27, 0x5, 0x16, 0xc, 0x2, 0x26, 0x20, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0x21, 0x3, 0x2, 0x2, 0x2, 0x26, 0x22, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0x23, 0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 
       0x26, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x5, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x29, 0x5, 0x18, 0xd, 0x2, 0x29, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
       0x7, 0x3, 0x2, 0x2, 0x2b, 0x2c, 0x5, 0x18, 0xd, 0x2, 0x2c, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x18, 0xd, 0x2, 0x2e, 0x2f, 0x7, 
       0xf, 0x2, 0x2, 0x2f, 0x30, 0x5, 0x18, 0xd, 0x2, 0x30, 0xb, 0x3, 0x2, 
       0x2, 0x2, 0x31, 0x32, 0x7, 0x4, 0x2, 0x2, 0x32, 0x33, 0x7, 0x10, 
       0x2, 0x2, 0x33, 0x35, 0x7, 0xa, 0x2, 0x2, 0x34, 0x36, 0x5, 0xe, 0x8, 
       0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 
       0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x7, 0xb, 0x2, 0x2, 0x38, 
       0x3c, 0x7, 0xe, 0x2, 0x2, 0x39, 0x3b, 0x5, 0x10, 0x9, 0x2, 0x3a, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 
       0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0xd, 0x3, 
       0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x44, 0x7, 0x10, 
       0x2, 0x2, 0x40, 0x41, 0x7, 0xd, 0x2, 0x2, 0x41, 0x43, 0x7, 0x10, 
       0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 
       0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 
       0x45, 0xf, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 
       0x48, 0x5, 0x4, 0x3, 0x2, 0x48, 0x11, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 
       0x7, 0x10, 0x2, 0x2, 0x4a, 0x4c, 0x7, 0xa, 0x2, 0x2, 0x4b, 0x4d, 
       0x5, 0x14, 0xb, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 
       0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 
       0xb, 0x2, 0x2, 0x4f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x50, 0x55, 0x5, 0x18, 
       0xd, 0x2, 0x51, 0x52, 0x7, 0xd, 0x2, 0x2, 0x52, 0x54, 0x5, 0x18, 
       0xd, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x3, 0x2, 0x2, 
       0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 
       0x56, 0x15, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x59, 0x7, 0x5, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x18, 0xd, 0x2, 0x5a, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x8, 0xd, 0x1, 0x2, 0x5c, 0x64, 
       0x7, 0x11, 0x2, 0x2, 0x5d, 0x64, 0x7, 0x10, 0x2, 0x2, 0x5e, 0x5f, 
       0x7, 0xa, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x18, 0xd, 0x2, 0x60, 0x61, 
       0x7, 0xb, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x64, 0x5, 
       0x12, 0xa, 0x2, 0x63, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x63, 0x5d, 0x3, 
       0x2, 0x2, 0x2, 0x63, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 
       0x2, 0x2, 0x64, 0x70, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0xc, 0x9, 0x2, 
       0x2, 0x66, 0x67, 0x7, 0xc, 0x2, 0x2, 0x67, 0x6f, 0x5, 0x18, 0xd, 
       0x9, 0x68, 0x69, 0xc, 0x8, 0x2, 0x2, 0x69, 0x6a, 0x9, 0x2, 0x2, 0x2, 
       0x6a, 0x6f, 0x5, 0x18, 0xd, 0x9, 0x6b, 0x6c, 0xc, 0x7, 0x2, 0x2, 
       0x6c, 0x6d, 0x9, 0x3, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x18, 0xd, 0x8, 
       0x6e, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6e, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 
       0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x19, 0x3, 
       0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1d, 0x26, 0x35, 
       0x3c, 0x44, 0x4c, 0x55, 0x63, 0x6e, 0x70, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

interpreterParser::Initializer interpreterParser::_init;
