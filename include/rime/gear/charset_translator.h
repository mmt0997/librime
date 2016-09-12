//
// Copyright RIME Developers
// Distributed under the BSD License
//
// 2016-09-08 osfans <waxaca@163.com>
//
#ifndef RIME_CHARSET_TRANSLATOR_H_
#define RIME_CHARSET_TRANSLATOR_H_

#include <rime/translator.h>

namespace rime {

class TranslatorOptions;

class CharsetTranslator : public Translator {
 public:
  CharsetTranslator(const Ticket& ticket);

  virtual an<Translation> Query(const string& input,
                                        const Segment& segment);

 protected:
  void Initialize();

  string tag_;
  bool initialized_ = false;
  string prefix_;
  string suffix_;
  string tips_;
  string charset_;
};

}  // namespace rime

#endif  // RIME_CHARSET_TRANSLATOR_H_
