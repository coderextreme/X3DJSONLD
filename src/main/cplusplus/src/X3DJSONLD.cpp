#include <string>
#include <istream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iterator>
#include <iosfwd>
#include <cmath>
#include <vector>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/dom/DOM.hpp>
#include "gason.h"

using namespace std;
using namespace xercesc_3_2;

#include "DOMPrint.h"
#include "DOMTreeErrorReporter.hpp"
#include "X3DJSONLD.h"

// ---------------------------------------------------------------------------
//  This is a simple class that lets us do easy (though not terribly efficient)
//  trancoding of char* data to XMLCh data.
// ---------------------------------------------------------------------------
class XStr
{
public :
    // -----------------------------------------------------------------------
    //  Constructors and Destructor
    // -----------------------------------------------------------------------
    XStr(const char* const toTranscode)
    {
        // Call the private transcoding method
        fUnicodeForm = XMLString::transcode(toTranscode);
    }
    XStr(char* toTranscode)
    {
        // Call the private transcoding method
        fUnicodeForm = XMLString::transcode(toTranscode);
    }

    ~XStr()
    {
        XMLString::release(&fUnicodeForm);
    }


    // -----------------------------------------------------------------------
    //  Getter methods
    // -----------------------------------------------------------------------
    const XMLCh* unicodeForm() const
    {
        return fUnicodeForm;
    }

private :
    // -----------------------------------------------------------------------
    //  Private data members
    //
    //  fUnicodeForm
    //      This is the Unicode XMLCh format of the string.
    // -----------------------------------------------------------------------
    XMLCh*   fUnicodeForm;
};

#define X(str) XStr(str).unicodeForm()

const XMLCh * X3DJSONLD::stripQuotes(const XMLCh * value) {
	if (value[0] == '"' && value[XMLString::stringLen(value)-1] == '"') {
		XMLCh * tempStr = new XMLCh[XMLString::stringLen(value)-1];
		// TODO check bool
		XMLString::copyNString(tempStr, value, XMLString::stringLen(value)-2);
		cerr << "Strip quotes " << StrX(tempStr) << endl;
		return tempStr;
	} else {
		cerr << "No strip quotes " <<  StrX(value) << endl;
		return value;
	}
}

void X3DJSONLD::elementSetVector(DOMElement * element, const char * key, vector<JsonValue> value) {
	ostringstream sb;
	cerr << "setting attribute " << key << " to vector ";
	for (unsigned int i = 0; i < value.size(); i++) {
		if (i > 0) {
			sb << " ";
			cerr << " ";
		}
		switch(value[i].getTag()) {
		case JSON_NUMBER:
			sb << value[i].toNumber();
			cerr << value[i].toNumber();
			break;
		case JSON_STRING:
			sb << '"' << value[i].toString() << '"';
			cerr << value[i].toString();
			break;
		case JSON_TRUE:
			sb << "TRUE";
			cerr << "TRUE";
			break;
		case JSON_FALSE:
			sb << "FALSE";
			cerr << "FALSE";
			break;
		case JSON_NULL:
			sb << "NULL";
			cerr << "FALSE";
			break;
		default:
			sb << "OOPS OBJECT";
			cerr << "OOPS OBJECT";
			break;
		}
	}
	cerr << endl;
	element->setAttribute(X(key), X(sb.str().c_str()));
}

JsonValue X3DJSONLD::get(JsonValue node, const char * i) {
	cerr << "key " << i;
	if (node.getTag() == JSON_OBJECT) {
		for (auto k : node) {
			cerr << " next key " << k->key;
			if (strcmp(k->key, i) == 0) {
				cerr << " value ";
				// dumpValue(k->value);
				return k->value;
			}
		}
		cerr << " object ";
	} else {
		cerr << " not object ";
	}
	// dumpValue(node);
	cerr << endl;
	return node;
}


void X3DJSONLD::elementSetAttribute(DOMElement * element, const char * key, const XMLCh * valueStr) {
	XMLCh keyStr[4000];
	XMLCh schemaStr[100];
	XMLCh encodingStr[100];

	cerr << "key " << key << endl;
	XMLString::transcode(key, keyStr, strlen(key));
	XMLString::transcode("SON schema", schemaStr, 99);
	XMLString::transcode("ncoding", encodingStr, 99);

	if (XMLString::equals(keyStr, schemaStr)) {
		// JSON Schema
		cerr << StrX(keyStr) << "=" <<  StrX(schemaStr) << endl;
	} else if (XMLString::equals(keyStr, encodingStr)) {
		// encoding, UTF-8
		cerr << StrX(keyStr) << "=" <<  StrX(encodingStr) << endl;
	} else {
		cerr << StrX(keyStr) << "=" <<  StrX(valueStr) << endl;
		element->setAttribute(keyStr, stripQuotes(valueStr));
	}
}


DOMElement * X3DJSONLD::CreateElement(DOMDocument * document, const char * key, const XMLCh * containerField) {
	DOMElement *child = document->createElement(X(key));
	if (containerField != 0 && !XMLString::equals(containerField, X("children"))) {
		elementSetAttribute(child, "containerField", containerField);
	}
	return child;
}

void X3DJSONLD::CDATACreateFunction(DOMDocument * document, DOMElement * element, JsonValue  value) {
	ostringstream sb;
	if (value.getTag() == JSON_ARRAY) {
		bool first = true;
		cerr << "array processing in CDATA" << endl;
		for (auto i : value) {
			if (!first) {
				sb << endl;
				cerr << endl;
			} else {
				first = false;
			}
			switch(i->value.getTag()) {
			case JSON_NUMBER:
				sb << i->value.toNumber();
				cerr << i->value.toNumber();
				break;
			case JSON_STRING:
				sb << i->value.toString();
				cerr << i->value.toString();
				break;
			case JSON_TRUE:
				sb << "TRUE";
				cerr << "TRUE";
				break;
			case JSON_FALSE:
				sb << "FALSE";
				cerr << "FALSE";
				break;
			case JSON_NULL:
				sb << "NULL";
				cerr << "NULL";
				break;
			default:
				sb << "OOPS CDATA OBJECT";
				cerr << "OOPS CDATA OBJECT";
				break;
			}
		}
	} else {
		cerr << "cdata not array" << endl;
	}
	const char * y = sb.str().c_str();
	cerr << "CDATA Replacing " << y << endl;
	const char * str = y;
	/*
	str = str
		.replaceAll("&lt;", "<")
		.replaceAll("&gt;", ">")
		.replaceAll("&amp;", "&")
		.replaceAll("&quot;", "\"")
		.replaceAll("'([^'\r\n]*)\n([^']*)'", "'$1\\n$2'");
	if (!str.equals(y)) {
	System.err.println("with            "+y);
	} else {
	// System.err.println("ok");
	}
	*/

	DOMCDATASection * cdata = document->createCDATASection(X(str));
	element->appendChild(cdata);
	cerr << "appending " << str << endl;
}


void X3DJSONLD::convertProperty(DOMDocument * document, const char * key, JsonValue  object, DOMElement * element, const char * containerField) {
	// if (object.getTag() == JSON_OBJECT && get(object, key).getTag() == JSON_OBJECT) {
		if (key[0] == '@') {
			convertJsonValue(document, get(object, key), key, element, containerField);
		} else if (key[0] == '-') {
			convertJsonValue(document, get(object, key), key, element, key+1);
		} else if (strcmp(key, "#comment") == 0) {
			if (object.getTag() == JSON_ARRAY) {
				JsonValue array = get(object, key);
				for (auto childkey : array) {
					DOMComment *child = document->createComment(CommentStringToXML(childkey->value.toString()));
					element->appendChild(child);
	cerr << "appending " << childkey->value.toString() << endl;
				}
			} else if (object.getTag() == JSON_STRING) {
				DOMComment *child = document->createComment(CommentStringToXML(object.toString()));
				element->appendChild(child);
	cerr << "appending " << object.toString() << endl;
			} else {
				cerr << "#comment is not an array or a string" << endl;
			}
		} else if (strcmp(key, "#sourceCode") == 0) {
			CDATACreateFunction(document, element, get(object, key));
		} else if (strcmp(key, "connect") == 0 || strcmp(key, "fieldValue") == 0 || strcmp(key, "field") == 0 || strcmp(key, "meta") == 0 || strcmp(key, "component") == 0 || strcmp(key, "unit") == 0) {
			convertJsonArray(document, get(object, key), key, element, containerField);
		} else {
			convertJsonValue(document, get(object, key), key, element, containerField);
		}
	// }
}

const XMLCh * X3DJSONLD::CommentStringToXML(const char * str) {
	/*
	char * y = str;
	System.err.println("X3DJSONLD comment replacing "+ y);
	str = stripQuotes(y);
	str = " "+str+" ";
	char * x;
	do {
		x = str;
		str = x.replaceAll("(.*)\\\\\"(.*)\\\\\"(.*)", "$1\"$2\"$3");
	} while (!x.equals(str));
	do {
		x = str;
		str = x.replaceAll("(.*)\\\\\"(.*)", "$1\"$2");
	} while (!x.equals(str));
	do {
		x = str;
		str = x.replaceAll("\"\"", "\" \"");
	} while (!x.equals(str));
	if (!y.equals(str)) {
	System.err.println("with                        "+ str);
	} else {
	System.err.println("ok");
	}*/
	return X(str);
}

const XMLCh * X3DJSONLD::JSONStringToXML(const char * str) {
	/*
	char * y = str;
	// System.err.println("X3DJSONLD jsonstring replacing "+ y);
	if (!y.equals(str)) {
	System.err.println("with                           "+ str);
	} else {
	// System.err.println("ok");
	}*/
	return X(str);
}

const XMLCh * X3DJSONLD::fixXML(const char * str, const char * version) {
	/*
	char * y = str;
	System.err.println("fixXML replacing "+ y);
	str = str.replace("?>", "?>\n<!DOCTYPE X3D PUBLIC \"ISO//Web3D//DTD X3D "+version+"//EN\" \"http://www.web3d.org/specifications/x3d-"+version+".dtd\">\n");
	if (!y.equals(str)) {
	System.err.println("with             "+ str);
	} else {
	System.err.println("ok");
	}*/
	return X(str);
}

void X3DJSONLD::convertJsonObject(DOMDocument * document, JsonValue object, const char * parentkey, DOMElement * element, const char * containerField) {
	bool kii;
	cerr << "object convert, parent key " << parentkey << endl;
	try {
		int i = stoi(parentkey); // TODO 11x is legal
		kii = true;
	} catch (const std::invalid_argument& ia) {
		kii = false;
	} catch (const std::out_of_range& oor) {
		kii = false;
	}
	DOMElement * child;
	if (kii || parentkey[0] == '-') {
		child = element;
	} else {
		child = CreateElement(document, parentkey, X(containerField));
	}

	if (object.getTag() == JSON_OBJECT) {
		for (auto keyiter : object) {
			const char * key = keyiter->key;
			cerr << "object loop " << key << endl;
			JsonValue ok = keyiter->value;
			// System.err.println(key+"= O "+ok);
			switch(ok.getTag()) {
			case JSON_OBJECT:
				if (key[0] == '@') {
					convertProperty(document, key, ok, child, containerField);
				} else if (key[0] == '-') {
					convertJsonObject(document, ok, key, child, key+1);
				} else {
					convertJsonObject(document, ok, key, child, containerField);
				}
				break;
			case JSON_ARRAY:
				convertJsonArray(document, ok, key, child, containerField);
				break;
			case JSON_NUMBER: {
				double num = ok.toNumber();
				string str = to_string(num);
				elementSetAttribute(child, key+1, X(str.c_str()));
					  }
				break;
			case JSON_STRING: {
				char * str = ok.toString();
				cerr << "Setting " << key+1 << " to " << str << endl;
				// elementSetAttribute(child, key+1, X(str));
				if (strcmp(key, "#comment") == 0) {
					DOMComment *comment = document->createComment(CommentStringToXML(str));
					child->appendChild(comment);
	cerr << "appending " << str << endl;
				} else {
					// ordinary string attributes
					// elementSetAttribute(child, key+1, JSONStringToXML(str));
					elementSetAttribute(child, key+1, X(str));
				}
					  }
				break;
			case JSON_TRUE:
				elementSetAttribute(child, key+1, X("TRUE"));
				break;
			case JSON_FALSE:
				elementSetAttribute(child, key+1, X("FALSE"));
				break;
			case JSON_NULL:
				elementSetAttribute(child, key+1, X("NULL"));
				break;
			}
			++keyiter;
		}
	} else {
		cerr << "object passed is not an object, parent key " << parentkey << endl;
	}
	if (!kii && parentkey[0] != '-') {
		element->appendChild(child);
	cerr << "appending " << parentkey << endl;
		// element->appendChild(document->createTextNode("\n"));
	}
}

void X3DJSONLD::convertJsonArray(DOMDocument * document, JsonValue array, const char * parentkey, DOMElement * element, const char * containerField) {
	vector<JsonValue> localArray;
	int key = 0;
	if (array.getTag() == JSON_ARRAY) {
		for (auto keyiter : array) {
			JsonValue ok = keyiter->value;
			string keyStr = to_string(key);
			const char *str = keyStr.c_str();
			cerr << endl << "array loop " << str << endl;
			if (ok.getTag() == JSON_OBJECT) {
				bool kii = true; // yes this is an array with indices
				if (!(parentkey[0] == '-') && kii) {
					convertJsonValue(document, ok, parentkey, element, containerField);
				} else {
					convertJsonValue(document, ok, str, element, parentkey+1);
				}
			} else if (ok.getTag() == JSON_ARRAY) {
				convertJsonValue(document, ok, str, element, containerField);
			} else {
				cerr << "adding" << endl;
				localArray.push_back(ok); // strings go here too
			}
			key++;
		}
	} else {
		cerr << "array passed is not an array, parent key " << parentkey << endl;
	}
	if (parentkey[0] == '@') {
		elementSetVector(element, parentkey+1, localArray);
	} else if (strcmp(parentkey, "#sourceCode") == 0) {
		CDATACreateFunction(document, element, array);
	}
}

DOMElement * X3DJSONLD::convertJsonValue(DOMDocument * document, JsonValue object, const char * parentkey, DOMElement * element, const char * containerField) {
	if (object.getTag() == JSON_ARRAY) {
		convertJsonArray(document, object, parentkey, element, containerField);
	} else {
		convertJsonObject(document, object, parentkey, element, containerField);
	}
	return element;
}

DOMDocument * X3DJSONLD::loadJsonIntoDocument(JsonValue jsobj) {
	DOMImplementation * impl = DOMImplementationRegistry::getDOMImplementation(X("Core"));
	cerr << "impl" << impl << endl;
	DOMDocument *document = impl->createDocument(0, X("X3D"), 0);
	cerr << "document" << document << endl;
	DOMElement *element = document->getDocumentElement();
	cerr << "element" << element << endl;
	elementSetAttribute(element,  "xmlns:xsd",  X("http://www.w3.org/2001/XMLSchema-instance"));
	// dumpValue(jsobj);
	convertJsonObject(document, get(jsobj, "X3D"), "-", element, 0);
	/*
	// convertProperty(document, "X3D", get(jsobj, "X3D"), element, 0);
	*/
	return document;
}

void X3DJSONLD::serializeDOM(const XMLCh * x3dVersion, DOMDocument * document, const char *goutputfile = 0) {
	DOMPrint::main(document, goutputfile);
}

int main(int argc, char **argv) {
	// Initialize the XML4C2 system.
	try
	{
		XMLPlatformUtils::Initialize();
	}

	catch (const XMLException& toCatch)
	{
		char *pMsg = XMLString::transcode(toCatch.getMessage());
		XERCES_STD_QUALIFIER cerr << "Error during Xerces-c Initialization.\n"
			<< "  Exception message:"
			<< pMsg;
		XMLString::release(&pMsg);
		return 1;
	}

	X3DJSONLD loader;

	// read in JSON
	ostringstream oss;
	char c;
	char *endptr;
	JsonValue jsobj;
	JsonAllocator allocator;

  	ifstream ifs(argv[1]);
	if (ifs.fail())
	{
		cerr << "Error opening file" << endl;
	}

	ostringstream str_stream{};
	ifs >> str_stream.rdbuf();

	if (ifs.fail() && !ifs.eof())
	{
		cerr << "Error reading file" << endl;
	}

    	string results = str_stream.str();

	const char * source = results.c_str();
	char * sourcecopy = strdup(source);

	int status = jsonParse(sourcecopy, &endptr, &jsobj, allocator);
	if (status != JSON_OK) {
		fprintf(stderr, "%s at %zd\n", jsonStrError(status), endptr - sourcecopy);
		exit(EXIT_FAILURE);
	}

	// convert JSON
	DOMDocument *document = loader.loadJsonIntoDocument(jsobj);

	// find version
	const char *version = "4.0";
	const XMLCh *ver = loader.stripQuotes(X(version));
	cerr << "version is " << version << endl;
	cerr << "ver is " << StrX(ver) << endl;
	if (jsobj.getTag() == JSON_OBJECT) {
		JsonValue x3d = loader.get(jsobj, "X3D");
		JsonValue v = loader.get(x3d, "@version");
		if (v.getTag() == JSON_STRING) {
			ver = loader.stripQuotes(X(v.toString()));
			cerr << "version is " << v.toString() << endl;
			cerr << "ver is " << StrX(ver) << endl;
		}
	} else {
		cerr << "Top tag is not an object" << endl;
	}
	// dumpValue(jsobj);

	loader.serializeDOM(ver, document, "output.x3d");
	XMLPlatformUtils::Terminate();
}
