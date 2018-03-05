/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: DOMPrint.cpp 1801549 2017-07-11 00:18:21Z scantor $
 */

// ---------------------------------------------------------------------------
//  This sample program invokes the XercesDOMParser to build a DOM tree for
//  the specified input file. It then invokes DOMLSSerializer::write() to
//  serialize the resultant DOM tree back to XML stream.
//
//  Note:
//  Application needs to provide its own implementation of
//		   DOMErrorHandler (in this sample, the DOMPrintErrorHandler),
//		   if it would like to receive notification from the serializer
//		   in the case any error occurs during the serialization.
//
//  Application needs to provide its own implementation of
//		   DOMLSSerializerFilter (in this sample, the DOMPrintFilter),
//		   if it would like to filter out certain part of the DOM
//		   representation, but must be aware that thus may render the
//		   resultant XML stream invalid.
//
//  Application may choose any combination of characters as the
//		   end of line sequence to be used in the resultant XML stream,
//		   but must be aware that thus may render the resultant XML
//		   stream ill formed.
//
//  Application may choose a particular encoding name in which
//		   the output XML stream would be, but must be aware that if
//		   characters, unrepresentable in the encoding specified, appearing
//		   in markups, may force the serializer to terminate serialization
//		   prematurely, and thus no complete serialization would be done.
//
//  Application shall query the serializer first, before set any
//           feature/mode(true, false), or be ready to catch exception if this
//           feature/mode is not supported by the serializer.
//
//  Application needs to clean up the filter, error handler and
//		   format target objects created for the serialization.
//
//   Limitations:
//      1.  The encoding="xxx" clause in the XML header should reflect
//          the system local code page, but does not.
//      2.  Cases where the XML data contains characters that can not
//          be represented in the system local code page are not handled.
//
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include <xercesc/util/PlatformUtils.hpp>

#include <xercesc/dom/DOM.hpp>

#include <xercesc/framework/StdOutFormatTarget.hpp>
#include <xercesc/framework/LocalFileFormatTarget.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/util/XMLUni.hpp>

#include "../DOMPrint/DOMTreeErrorReporter.hpp"
#include "../DOMPrint/DOMPrintFilter.hpp"
#include "../DOMPrint/DOMPrintErrorHandler.hpp"
#include <xercesc/util/OutOfMemoryException.hpp>

#include <string.h>
#include <stdlib.h>

#include "DOMPrint.h"

// ---------------------------------------------------------------------------
//  Local data
//
//  gDoNamespaces
//      Indicates whether namespace processing should be done.
//
//  gDoSchema
//      Indicates whether schema processing should be done.
//
//  gSchemaFullChecking
//      Indicates whether full schema constraint checking should be done.
//
//  gDoCreate
//      Indicates whether entity reference nodes needs to be created or not
//      Defaults to false
//
//  gOutputEncoding
//      The encoding we are to output in. If not set on the command line,
//      then it is defaults to the encoding of the input XML file.
//
//  gSplitCdataSections
//      Indicates whether split-cdata-sections is to be enabled or not.
//
//  gDiscardDefaultContent
//      Indicates whether default content is discarded or not.
//
//  gValScheme
//      Indicates what validation scheme to use. It defaults to 'auto', but
//      can be set via the -v= command.
//
// ---------------------------------------------------------------------------
static bool                     gDoNamespaces          = false;
static bool                     gDoSchema              = false;
static bool                     gSchemaFullChecking    = false;
static bool                     gDoCreate              = false;

static char*                    gXPathExpression       = 0;

// options for DOMLSSerializer's features
static XMLCh*                   gOutputEncoding        = 0;

static bool                     gSplitCdataSections    = true;
static bool                     gDiscardDefaultContent = true;
static bool                     gFormatPrettyPrint     = false;
static bool                     gXMLDeclaration        = true;
static bool                     gWriteBOM              = false;

static XercesDOMParser::ValSchemes    gValScheme       = XercesDOMParser::Val_Auto;

// ---------------------------------------------------------------------------
//
//  main
//
// ---------------------------------------------------------------------------
void DOMPrint::main(DOMDocument *doc, const char* goutputfile = 0)
{
    int retval = 0;

    // Initialize the XML4C2 system
    try
    {
        XMLPlatformUtils::Initialize();
    }

    catch(const XMLException &toCatch)
    {
        XERCES_STD_QUALIFIER cerr << "Error during Xerces-c Initialization.\n"
             << "  Exception message:"
             << StrX(toCatch.getMessage()) << XERCES_STD_QUALIFIER endl;
        return;
    }

        try
        {
            // get a serializer, an instance of DOMLSSerializer
            XMLCh tempStr[3] = {chLatin_L, chLatin_S, chNull};
            DOMImplementation *impl          = DOMImplementationRegistry::getDOMImplementation(tempStr);
            DOMLSSerializer   *theSerializer = ((DOMImplementationLS*)impl)->createLSSerializer();
            DOMLSOutput       *theOutputDesc = ((DOMImplementationLS*)impl)->createLSOutput();

            // set user specified output encoding
            theOutputDesc->setEncoding(gOutputEncoding);

            // plug in user's own error handler
            DOMErrorHandler *myErrorHandler = new DOMPrintErrorHandler();
            DOMConfiguration* serializerConfig=theSerializer->getDomConfig();
            serializerConfig->setParameter(XMLUni::fgDOMErrorHandler, myErrorHandler);

            // set feature if the serializer supports the feature/mode
            if (serializerConfig->canSetParameter(XMLUni::fgDOMWRTSplitCdataSections, gSplitCdataSections))
                serializerConfig->setParameter(XMLUni::fgDOMWRTSplitCdataSections, gSplitCdataSections);

            if (serializerConfig->canSetParameter(XMLUni::fgDOMWRTDiscardDefaultContent, gDiscardDefaultContent))
                serializerConfig->setParameter(XMLUni::fgDOMWRTDiscardDefaultContent, gDiscardDefaultContent);

            if (serializerConfig->canSetParameter(XMLUni::fgDOMWRTFormatPrettyPrint, gFormatPrettyPrint))
                serializerConfig->setParameter(XMLUni::fgDOMWRTFormatPrettyPrint, gFormatPrettyPrint);

            if (serializerConfig->canSetParameter(XMLUni::fgDOMWRTBOM, gWriteBOM))
                serializerConfig->setParameter(XMLUni::fgDOMWRTBOM, gWriteBOM);
            
            if (serializerConfig->canSetParameter(XMLUni::fgDOMXMLDeclaration, gXMLDeclaration))
                serializerConfig->setParameter(XMLUni::fgDOMXMLDeclaration, gXMLDeclaration);

            //
            // Plug in a format target to receive the resultant
            // XML stream from the serializer.
            //
            // StdOutFormatTarget prints the resultant XML stream
            // to stdout once it receives any thing from the serializer.
            //
            XMLFormatTarget *myFormTarget;
            if (goutputfile)
                myFormTarget=new LocalFileFormatTarget(goutputfile);
            else
                myFormTarget=new StdOutFormatTarget();
            theOutputDesc->setByteStream(myFormTarget);

            // get the DOM representation
            // DOMDocument *doc = parser->getDocument();

            //
            // do the serialization through DOMLSSerializer::write();
            //
            if(gXPathExpression!=NULL)
            {
                XMLCh* xpathStr=XMLString::transcode(gXPathExpression);
                DOMElement* root = doc->getDocumentElement();
                try
                {
                    DOMXPathNSResolver* resolver=doc->createNSResolver(root);
                    DOMXPathResult* result=doc->evaluate(
                      xpathStr,
                      root,
                      resolver,
                      DOMXPathResult::ORDERED_NODE_SNAPSHOT_TYPE,
                      NULL);

                    XMLSize_t nLength = result->getSnapshotLength();
                    for(XMLSize_t i = 0; i < nLength; i++)
                    {
                      result->snapshotItem(i);
                      theSerializer->write(result->getNodeValue(), theOutputDesc);
                    }

                    result->release();
                    resolver->release ();
                }
                catch(const DOMXPathException& e)
                {
                    XERCES_STD_QUALIFIER cerr << "An error occurred during processing of the XPath expression. Msg is:"
                        << XERCES_STD_QUALIFIER endl
                        << StrX(e.getMessage()) << XERCES_STD_QUALIFIER endl;
                    retval = 4;
                }
                catch(const DOMException& e)
                {
                    XERCES_STD_QUALIFIER cerr << "An error occurred during processing of the XPath expression. Msg is:"
                        << XERCES_STD_QUALIFIER endl
                        << StrX(e.getMessage()) << XERCES_STD_QUALIFIER endl;
                    retval = 4;
                }
                XMLString::release(&xpathStr);
            }
            else
                theSerializer->write(doc, theOutputDesc);

            theOutputDesc->release();
            theSerializer->release();

            //
            // Filter, formatTarget and error handler
            // are NOT owned by the serializer.
            //
            delete myFormTarget;
            delete myErrorHandler;

        }
        catch (const OutOfMemoryException&)
        {
            XERCES_STD_QUALIFIER cerr << "OutOfMemoryException" << XERCES_STD_QUALIFIER endl;
            retval = 5;
        }
        catch (const DOMLSException& e)
        {
            XERCES_STD_QUALIFIER cerr << "An error occurred during serialization of the DOM tree. Msg is:"
                << XERCES_STD_QUALIFIER endl
                << StrX(e.getMessage()) << XERCES_STD_QUALIFIER endl;
            retval = 4;
        }
        catch (const XMLException& e)
        {
            XERCES_STD_QUALIFIER cerr << "An error occurred during creation of output transcoder. Msg is:"
                << XERCES_STD_QUALIFIER endl
                << StrX(e.getMessage()) << XERCES_STD_QUALIFIER endl;
            retval = 4;
        }

    XMLString::release(&gOutputEncoding);

    // And call the termination method
    XMLPlatformUtils::Terminate();
}
