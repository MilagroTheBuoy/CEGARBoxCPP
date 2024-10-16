
// Generated from kspclauses.g4 by ANTLR 4.13.0


#include "kspclausesLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct KspclausesLexerStaticData final {
  KspclausesLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KspclausesLexerStaticData(const KspclausesLexerStaticData&) = delete;
  KspclausesLexerStaticData(KspclausesLexerStaticData&&) = delete;
  KspclausesLexerStaticData& operator=(const KspclausesLexerStaticData&) = delete;
  KspclausesLexerStaticData& operator=(KspclausesLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag kspclauseslexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
KspclausesLexerStaticData *kspclauseslexerLexerStaticData = nullptr;

void kspclauseslexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (kspclauseslexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(kspclauseslexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KspclausesLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "SECTION_NAME", 
      "INT", "NOT", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "','", "')'", "'['", "'].'", "'=>'", "'box'", "'|'", "", 
      "", "'~'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "SECTION_NAME", "INT", "NOT", 
      "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,13,167,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,3,8,139,8,8,1,9,4,9,142,8,9,11,9,12,9,143,1,10,1,10,1,11,3,
  	11,149,8,11,1,11,3,11,152,8,11,1,11,1,11,5,11,156,8,11,10,11,12,11,159,
  	9,11,1,12,4,12,162,8,12,11,12,12,12,163,1,12,1,12,0,0,13,1,1,3,2,5,3,
  	7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,1,0,4,1,0,48,57,2,
  	0,65,90,97,122,3,0,48,57,65,90,97,122,2,0,9,10,32,32,175,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,1,27,1,0,0,0,3,29,1,0,0,0,5,31,1,0,0,0,7,33,1,0,0,0,9,35,
  	1,0,0,0,11,38,1,0,0,0,13,41,1,0,0,0,15,45,1,0,0,0,17,138,1,0,0,0,19,141,
  	1,0,0,0,21,145,1,0,0,0,23,148,1,0,0,0,25,161,1,0,0,0,27,28,5,40,0,0,28,
  	2,1,0,0,0,29,30,5,44,0,0,30,4,1,0,0,0,31,32,5,41,0,0,32,6,1,0,0,0,33,
  	34,5,91,0,0,34,8,1,0,0,0,35,36,5,93,0,0,36,37,5,46,0,0,37,10,1,0,0,0,
  	38,39,5,61,0,0,39,40,5,62,0,0,40,12,1,0,0,0,41,42,5,98,0,0,42,43,5,111,
  	0,0,43,44,5,120,0,0,44,14,1,0,0,0,45,46,5,124,0,0,46,16,1,0,0,0,47,48,
  	5,85,0,0,48,49,5,115,0,0,49,50,5,97,0,0,50,51,5,98,0,0,51,52,5,108,0,
  	0,52,53,5,101,0,0,53,54,5,58,0,0,54,55,5,32,0,0,55,56,5,76,0,0,56,57,
  	5,105,0,0,57,58,5,116,0,0,58,59,5,101,0,0,59,60,5,114,0,0,60,61,5,97,
  	0,0,61,62,5,108,0,0,62,63,5,32,0,0,63,64,5,67,0,0,64,65,5,108,0,0,65,
  	66,5,97,0,0,66,67,5,117,0,0,67,68,5,115,0,0,68,69,5,101,0,0,69,139,5,
  	115,0,0,70,71,5,83,0,0,71,72,5,111,0,0,72,73,5,83,0,0,73,74,5,58,0,0,
  	74,75,5,32,0,0,75,76,5,76,0,0,76,77,5,105,0,0,77,78,5,116,0,0,78,79,5,
  	101,0,0,79,80,5,114,0,0,80,81,5,97,0,0,81,82,5,108,0,0,82,83,5,32,0,0,
  	83,84,5,67,0,0,84,85,5,108,0,0,85,86,5,97,0,0,86,87,5,117,0,0,87,88,5,
  	115,0,0,88,89,5,101,0,0,89,139,5,115,0,0,90,91,5,83,0,0,91,92,5,111,0,
  	0,92,93,5,83,0,0,93,94,5,58,0,0,94,95,5,32,0,0,95,96,5,77,0,0,96,97,5,
  	111,0,0,97,98,5,100,0,0,98,99,5,97,0,0,99,100,5,108,0,0,100,101,5,32,
  	0,0,101,102,5,67,0,0,102,103,5,108,0,0,103,104,5,97,0,0,104,105,5,117,
  	0,0,105,106,5,115,0,0,106,107,5,101,0,0,107,139,5,115,0,0,108,109,5,68,
  	0,0,109,110,5,101,0,0,110,111,5,108,0,0,111,112,5,101,0,0,112,113,5,116,
  	0,0,113,114,5,101,0,0,114,115,5,100,0,0,115,116,5,32,0,0,116,117,5,99,
  	0,0,117,118,5,108,0,0,118,119,5,97,0,0,119,120,5,117,0,0,120,121,5,115,
  	0,0,121,122,5,101,0,0,122,123,5,115,0,0,123,139,5,58,0,0,124,125,5,76,
  	0,0,125,126,5,101,0,0,126,127,5,97,0,0,127,128,5,114,0,0,128,129,5,110,
  	0,0,129,130,5,116,0,0,130,131,5,32,0,0,131,132,5,67,0,0,132,133,5,108,
  	0,0,133,134,5,97,0,0,134,135,5,117,0,0,135,136,5,115,0,0,136,137,5,101,
  	0,0,137,139,5,115,0,0,138,47,1,0,0,0,138,70,1,0,0,0,138,90,1,0,0,0,138,
  	108,1,0,0,0,138,124,1,0,0,0,139,18,1,0,0,0,140,142,7,0,0,0,141,140,1,
  	0,0,0,142,143,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,20,1,0,0,0,
  	145,146,5,126,0,0,146,22,1,0,0,0,147,149,5,95,0,0,148,147,1,0,0,0,148,
  	149,1,0,0,0,149,151,1,0,0,0,150,152,5,36,0,0,151,150,1,0,0,0,151,152,
  	1,0,0,0,152,153,1,0,0,0,153,157,7,1,0,0,154,156,7,2,0,0,155,154,1,0,0,
  	0,156,159,1,0,0,0,157,155,1,0,0,0,157,158,1,0,0,0,158,24,1,0,0,0,159,
  	157,1,0,0,0,160,162,7,3,0,0,161,160,1,0,0,0,162,163,1,0,0,0,163,161,1,
  	0,0,0,163,164,1,0,0,0,164,165,1,0,0,0,165,166,6,12,0,0,166,26,1,0,0,0,
  	7,0,138,143,148,151,157,163,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  kspclauseslexerLexerStaticData = staticData.release();
}

}

kspclausesLexer::kspclausesLexer(CharStream *input) : Lexer(input) {
  kspclausesLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *kspclauseslexerLexerStaticData->atn, kspclauseslexerLexerStaticData->decisionToDFA, kspclauseslexerLexerStaticData->sharedContextCache);
}

kspclausesLexer::~kspclausesLexer() {
  delete _interpreter;
}

std::string kspclausesLexer::getGrammarFileName() const {
  return "kspclauses.g4";
}

const std::vector<std::string>& kspclausesLexer::getRuleNames() const {
  return kspclauseslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& kspclausesLexer::getChannelNames() const {
  return kspclauseslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& kspclausesLexer::getModeNames() const {
  return kspclauseslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& kspclausesLexer::getVocabulary() const {
  return kspclauseslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView kspclausesLexer::getSerializedATN() const {
  return kspclauseslexerLexerStaticData->serializedATN;
}

const atn::ATN& kspclausesLexer::getATN() const {
  return *kspclauseslexerLexerStaticData->atn;
}




void kspclausesLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  kspclauseslexerLexerInitialize();
#else
  ::antlr4::internal::call_once(kspclauseslexerLexerOnceFlag, kspclauseslexerLexerInitialize);
#endif
}
