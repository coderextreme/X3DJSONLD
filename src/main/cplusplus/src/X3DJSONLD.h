#pragma once
#include "gason.h"

#ifndef X3DJSON_H
#define X3DJSON_H


class X3DJSONLD {
public:
	const XMLCh * stripQuotes(const XMLCh * value);
	void elementSetVector(DOMElement *element, const char * key, vector<JsonValue> value);
	void elementSetAttribute(DOMElement *element, const char * key, const XMLCh * value);
	DOMElement *CreateElement(DOMDocument *document, const char * key, const XMLCh * containerField);
	void CDATACreateFunction(DOMDocument *document, DOMElement *element, JsonValue value);
	void convertProperty(DOMDocument *document, const char * key, JsonValue object, DOMElement *element, const char * containerField);
	const XMLCh * CommentStringToXML(const char * str);
	const XMLCh * JSONStringToXML(const char * str);
	const XMLCh * fixXML(const char * str, const char * version);
	void convertJsonObject(DOMDocument *document, JsonValue object, const char * parentkey, DOMElement *element, const char * containerField);
	void convertJsonArray(DOMDocument *document, JsonValue array, const char * parentkey, DOMElement *element, const char * containerField);
	DOMElement *convertJsonValue(DOMDocument *document, JsonValue object, const char * parentkey, DOMElement *element, const char * containerField);
	DOMDocument *loadJsonIntoDocument(JsonValue jsobj);
	const XMLCh * getX3DVersion(JsonValue jsobj);
	void serializeDOM(const XMLCh * x3dVersion, DOMDocument * document, const char *goutputfile);
	JsonValue get(JsonValue v, const char *k);
};

#endif
