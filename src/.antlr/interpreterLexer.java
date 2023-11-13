// Generated from /Users/lishundong/Code/AntlrIntro/g4Demo/src/interpreter.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class interpreterLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, MUL=4, DIV=5, ADD=6, SUB=7, LBR=8, RBR=9, POW=10, 
		COMMA=11, COLON=12, EQU=13, ID=14, INT=15, LINE_COMMENT=16, BLOCK_COMMENT=17, 
		WS=18;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "MUL", "DIV", "ADD", "SUB", "LBR", "RBR", "POW", 
			"COMMA", "COLON", "EQU", "ID", "INT", "NonDigit", "Digit", "LINE_COMMENT", 
			"BLOCK_COMMENT", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'print'", "'def'", "'return'", "'*'", "'/'", "'+'", "'-'", "'('", 
			"')'", "'^'", "','", "':'", "'='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, "MUL", "DIV", "ADD", "SUB", "LBR", "RBR", "POW", 
			"COMMA", "COLON", "EQU", "ID", "INT", "LINE_COMMENT", "BLOCK_COMMENT", 
			"WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public interpreterLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "interpreter.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0012\u0084\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0007"+
		"\u0001\u0007\u0001\b\u0001\b\u0001\t\u0001\t\u0001\n\u0001\n\u0001\u000b"+
		"\u0001\u000b\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0005\rR\b\r\n\r"+
		"\f\rU\t\r\u0001\u000e\u0001\u000e\u0001\u000f\u0004\u000fZ\b\u000f\u000b"+
		"\u000f\f\u000f[\u0001\u0010\u0004\u0010_\b\u0010\u000b\u0010\f\u0010`"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0005\u0011g\b\u0011"+
		"\n\u0011\f\u0011j\t\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0005\u0012t\b\u0012"+
		"\n\u0012\f\u0012w\t\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0013\u0004\u0013\u007f\b\u0013\u000b\u0013\f\u0013"+
		"\u0080\u0001\u0013\u0001\u0013\u0002hu\u0000\u0014\u0001\u0001\u0003\u0002"+
		"\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013"+
		"\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0000!\u0000"+
		"#\u0010%\u0011\'\u0012\u0001\u0000\u0003\u0003\u0000AZ__az\u0001\u0000"+
		"09\u0003\u0000\t\n\r\r  \u0088\u0000\u0001\u0001\u0000\u0000\u0000\u0000"+
		"\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000"+
		"\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b"+
		"\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001"+
		"\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001"+
		"\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001"+
		"\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000\u001b\u0001"+
		"\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000\u0000#\u0001\u0000"+
		"\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000\u0000"+
		"\u0000\u0001)\u0001\u0000\u0000\u0000\u0003/\u0001\u0000\u0000\u0000\u0005"+
		"3\u0001\u0000\u0000\u0000\u0007:\u0001\u0000\u0000\u0000\t<\u0001\u0000"+
		"\u0000\u0000\u000b>\u0001\u0000\u0000\u0000\r@\u0001\u0000\u0000\u0000"+
		"\u000fB\u0001\u0000\u0000\u0000\u0011D\u0001\u0000\u0000\u0000\u0013F"+
		"\u0001\u0000\u0000\u0000\u0015H\u0001\u0000\u0000\u0000\u0017J\u0001\u0000"+
		"\u0000\u0000\u0019L\u0001\u0000\u0000\u0000\u001bN\u0001\u0000\u0000\u0000"+
		"\u001dV\u0001\u0000\u0000\u0000\u001fY\u0001\u0000\u0000\u0000!^\u0001"+
		"\u0000\u0000\u0000#b\u0001\u0000\u0000\u0000%o\u0001\u0000\u0000\u0000"+
		"\'~\u0001\u0000\u0000\u0000)*\u0005p\u0000\u0000*+\u0005r\u0000\u0000"+
		"+,\u0005i\u0000\u0000,-\u0005n\u0000\u0000-.\u0005t\u0000\u0000.\u0002"+
		"\u0001\u0000\u0000\u0000/0\u0005d\u0000\u000001\u0005e\u0000\u000012\u0005"+
		"f\u0000\u00002\u0004\u0001\u0000\u0000\u000034\u0005r\u0000\u000045\u0005"+
		"e\u0000\u000056\u0005t\u0000\u000067\u0005u\u0000\u000078\u0005r\u0000"+
		"\u000089\u0005n\u0000\u00009\u0006\u0001\u0000\u0000\u0000:;\u0005*\u0000"+
		"\u0000;\b\u0001\u0000\u0000\u0000<=\u0005/\u0000\u0000=\n\u0001\u0000"+
		"\u0000\u0000>?\u0005+\u0000\u0000?\f\u0001\u0000\u0000\u0000@A\u0005-"+
		"\u0000\u0000A\u000e\u0001\u0000\u0000\u0000BC\u0005(\u0000\u0000C\u0010"+
		"\u0001\u0000\u0000\u0000DE\u0005)\u0000\u0000E\u0012\u0001\u0000\u0000"+
		"\u0000FG\u0005^\u0000\u0000G\u0014\u0001\u0000\u0000\u0000HI\u0005,\u0000"+
		"\u0000I\u0016\u0001\u0000\u0000\u0000JK\u0005:\u0000\u0000K\u0018\u0001"+
		"\u0000\u0000\u0000LM\u0005=\u0000\u0000M\u001a\u0001\u0000\u0000\u0000"+
		"NS\u0003\u001f\u000f\u0000OR\u0003\u001f\u000f\u0000PR\u0003!\u0010\u0000"+
		"QO\u0001\u0000\u0000\u0000QP\u0001\u0000\u0000\u0000RU\u0001\u0000\u0000"+
		"\u0000SQ\u0001\u0000\u0000\u0000ST\u0001\u0000\u0000\u0000T\u001c\u0001"+
		"\u0000\u0000\u0000US\u0001\u0000\u0000\u0000VW\u0003!\u0010\u0000W\u001e"+
		"\u0001\u0000\u0000\u0000XZ\u0007\u0000\u0000\u0000YX\u0001\u0000\u0000"+
		"\u0000Z[\u0001\u0000\u0000\u0000[Y\u0001\u0000\u0000\u0000[\\\u0001\u0000"+
		"\u0000\u0000\\ \u0001\u0000\u0000\u0000]_\u0007\u0001\u0000\u0000^]\u0001"+
		"\u0000\u0000\u0000_`\u0001\u0000\u0000\u0000`^\u0001\u0000\u0000\u0000"+
		"`a\u0001\u0000\u0000\u0000a\"\u0001\u0000\u0000\u0000bc\u0005/\u0000\u0000"+
		"cd\u0005/\u0000\u0000dh\u0001\u0000\u0000\u0000eg\t\u0000\u0000\u0000"+
		"fe\u0001\u0000\u0000\u0000gj\u0001\u0000\u0000\u0000hi\u0001\u0000\u0000"+
		"\u0000hf\u0001\u0000\u0000\u0000ik\u0001\u0000\u0000\u0000jh\u0001\u0000"+
		"\u0000\u0000kl\u0005\n\u0000\u0000lm\u0001\u0000\u0000\u0000mn\u0006\u0011"+
		"\u0000\u0000n$\u0001\u0000\u0000\u0000op\u0005/\u0000\u0000pq\u0005*\u0000"+
		"\u0000qu\u0001\u0000\u0000\u0000rt\t\u0000\u0000\u0000sr\u0001\u0000\u0000"+
		"\u0000tw\u0001\u0000\u0000\u0000uv\u0001\u0000\u0000\u0000us\u0001\u0000"+
		"\u0000\u0000vx\u0001\u0000\u0000\u0000wu\u0001\u0000\u0000\u0000xy\u0005"+
		"*\u0000\u0000yz\u0005/\u0000\u0000z{\u0001\u0000\u0000\u0000{|\u0006\u0012"+
		"\u0000\u0000|&\u0001\u0000\u0000\u0000}\u007f\u0007\u0002\u0000\u0000"+
		"~}\u0001\u0000\u0000\u0000\u007f\u0080\u0001\u0000\u0000\u0000\u0080~"+
		"\u0001\u0000\u0000\u0000\u0080\u0081\u0001\u0000\u0000\u0000\u0081\u0082"+
		"\u0001\u0000\u0000\u0000\u0082\u0083\u0006\u0013\u0000\u0000\u0083(\u0001"+
		"\u0000\u0000\u0000\b\u0000QS[`hu\u0080\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}