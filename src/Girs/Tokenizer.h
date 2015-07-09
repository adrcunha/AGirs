#ifndef _TOKENIZER_H
#define _TOKENIZER_H

class Tokenizer {
private:
    int index;
    String& payload;
public:
    Tokenizer(String& str) : index(0), payload(str) {};
    String getToken();
    String getRest();
    long getInt();
};

#endif // _TOKENIZER_H