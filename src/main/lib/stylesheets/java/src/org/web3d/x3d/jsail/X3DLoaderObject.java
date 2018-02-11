/*
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (http://www.web3D.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

package org.web3d.x3d.jsail;


import javax.xml.parsers.DocumentBuilder; 
import javax.xml.parsers.DocumentBuilderFactory;
import org.xml.sax.ErrorHandler;
import org.xml.sax.SAXException; 
import org.xml.sax.SAXParseException;
import org.w3c.dom.Document;

import java.io.File;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.lang.reflect.*;
import java.util.HashMap;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.xml.parsers.ParserConfigurationException;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.X3DException;
			
// fully specified when occurring:
// import org.w3c.dom.DocumentType;
// import org.w3c.dom.NamedNodeMap;
// import org.w3c.dom.Node;
// import org.w3c.dom.NodeList;


/**
 * Concrete class for loading an X3D graphics string, file or fragment encoded in XML, using the Document Object Model (DOM).
 * 
 * <br><br>
 * 
	@see <a href="https://docs.oracle.com/javase/tutorial/jaxp/dom/index.html">Java Tutorials: Document Object Model (DOM)</a>
	
	@see <a href="https://docs.oracle.com/javase/tutorial/jaxp/dom/readingXML.html">Java Tutorials: Reading XML Data into a DOM</a>

 * 

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class X3DLoaderObject
{
	private DocumentBuilderFactory documentBuilderFactory;
	private DocumentBuilder        documentBuilder;
	private Document               document;
	private boolean loadSuccess = false;
	private StringBuilder validationResult = new StringBuilder();
				
	/** Default dtdValidate value for documentBuilderFactory */
	public final boolean DEFAULT_DTD_VALIDATE = false;
	/** Default xsdValidate value for documentBuilderFactory */
	public final boolean DEFAULT_XSD_VALIDATE = false;
				
	private boolean dtdValidate = DEFAULT_DTD_VALIDATE;
	private boolean xsdValidate = DEFAULT_XSD_VALIDATE;
//  private String schemaSource = null;
				
	protected String indentLevel = "  ";
	protected int lineBreakWidth = 100;
	private int lineLength = 0;
				
	// persistent object needed for toX3dObjectTree parse process
	private static X3DObject          loadedX3dObjectTree;	// only one at a time; TODO consider passing as recursive parameter
	
	private X3DConcreteElement holdCopyElementObject; // remember elementObject, trying to keep from falling out of scope
				
	private String  currentProtoNameValue = new String(); // remember name attribute for current ProtoDeclare element
	private boolean currentProtoNodeTypeFound = false;
	private Map<String,String> protoNameToNodeTypesHashMap = new HashMap<>();
	private Map<String,String> protoDEFtoNodeTypesHashMap = new HashMap<>();
	private Map<String,String> protoContainerFieldHashMap  = new HashMap<>();
	
	/** Default constructor to initialize X3DLoaderObject */
	public X3DLoaderObject ()
	{
		initialize();
	}

	private void initialize()
	{
		if (documentBuilderFactory == null) // singleton pattern
			documentBuilderFactory = DocumentBuilderFactory.newInstance();
		documentBuilderFactory.setNamespaceAware(true);
		documentBuilderFactory.setValidating(dtdValidate || xsdValidate);
		loadSuccess = false;
	}
				
	/** Load the XML X3D file using DOM, report whether successful.  Fails if file is empty.
	 * @param fileName path and name of .x3d or .xml file (XML encoding)
	 * @return whether successful
	 * @see #loadModelFromFileX3D(File)
	*/	
	public boolean loadModelFromFileX3D (String fileName)
	{
		if (!fileName.endsWith(X3DObject.FILE_EXTENSION_X3D) && !fileName.endsWith(X3DObject.FILE_EXTENSION_XML))
		{
			throw new X3DException("fileName " + fileName + " does not end with extension " +
                            "\"" + X3DObject.FILE_EXTENSION_X3D + "\" or " +
                            "\"" + X3DObject.FILE_EXTENSION_XML + "\"");
		}
		File x3dFile = new File(fileName);
		
		if (!x3dFile.exists())
		{
			throw new X3DException("fileName " + fileName + " does not exist and cannot be loaded, check path and filename.");
		}
		return loadModelFromFileX3D (x3dFile); // handoff
	}

	/** Load the XML X3D file using DOM, report success 
	 * @param x3dFile existing x3d file (XML encoding)
	 * @return whether successful
	 * @see #loadModelFromFileX3D(String)
	*/	
	public boolean loadModelFromFileX3D (File x3dFile)
	{
		try
		{
			documentBuilder = documentBuilderFactory.newDocumentBuilder();
			OutputStreamWriter errorWriter = new OutputStreamWriter(System.err, ConfigurationProperties.XML_ENCODING_DECLARATION_DEFAULT);
			documentBuilder.setErrorHandler(new MyErrorHandler (new PrintWriter(errorWriter, true)));
			document = documentBuilder.parse(x3dFile);
                        toX3dObjectTree(document);
		}
		catch (ParserConfigurationException parserConfigurationException)
		{
			Logger.getLogger(X3DLoaderObject.class.getName()).log(Level.SEVERE, null, parserConfigurationException);
                        loadSuccess = false;
                        return loadSuccess;
		}
		catch (SAXException saxException)
		{
			Logger.getLogger(X3DLoaderObject.class.getName()).log(Level.SEVERE, null, saxException);
                        loadSuccess = false;
                        return loadSuccess;
		}
		catch (IOException ioException)
		{
			Logger.getLogger(X3DLoaderObject.class.getName()).log(Level.SEVERE, null, ioException);
                        loadSuccess = false;
                        return loadSuccess;
		}
		loadSuccess = (document != null);
		return loadSuccess;
	}
	/**              
	 * Provide DOM document version of externally loaded X3D file
	 * @return the DOM document, if XML-encoded X3D file was successfully loaded
	 */
	public Document getDomDocument()
	{
		return document;
	}
	/**
	 * Convenience method, use DOM to create X3D string from a previously loaded document with default zero indent.
	 * X3D output is XML encoding.
	 * @param node DOM Node to process
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @return the loaded X3D document of interest, starting with regular <i>X3D</i> element headers or possibly a scene fragment
	 */
	public String toStringX3D(org.w3c.dom.Node node) {
		return toStringX3D(node, "");
	}

	/**
	 * Recursive method that uses DOM to create an X3D string from loaded document, where X3D output is in XML encoding.
	 * @param node DOM Node to process
	 * @return the previously loaded X3D document of interest, starting either with regular X3D headers or possibly a scene fragment
	 */
	private String toStringX3D(org.w3c.dom.Node node, String indent)
	{
		boolean nodeChildFound = false;
		StringBuilder result = new StringBuilder();

		switch (node.getNodeType())
		{
			case org.w3c.dom.Node.DOCUMENT_NODE:
				result.append("<?xml version=\"1.0\" encoding=\"").append(ConfigurationProperties.XML_ENCODING_DECLARATION_DEFAULT).append("\"?>").append("\n");
				org.w3c.dom.NodeList childNodeList = node.getChildNodes();	// recurse on children
				if (childNodeList != null)
				{
					for (int i = 0; i < childNodeList.getLength(); i++)
					{
						result.append(toStringX3D(childNodeList.item(i), ""));
					}
				}
				break;

			case org.w3c.dom.Node.DOCUMENT_TYPE_NODE:
				org.w3c.dom.DocumentType documentType = (org.w3c.dom.DocumentType) node;

				result.append("<!DOCTYPE ").append(documentType.getName());
				// first set X3D DOCTYPE to specified values
				if (documentType.getName().compareTo("X3D") == 0)
				{
					result.append(" PUBLIC \"ISO//Web3D//DTD X3D 3.3//EN\"");
					result.append(" \"http://www.web3d.org/specifications/x3d-3.3.dtd\"");
				}
				else if ((documentType.getPublicId() != null) && (documentType.getSystemId() != null))
				{
					result.append(" PUBLIC \"").append(documentType.getPublicId()).append("\"");
					result.append("        \"").append(documentType.getSystemId());
				}
				else if ((documentType.getPublicId() == null) && (documentType.getSystemId() != null))
				{
					result.append(" SYSTEM \"").append(documentType.getSystemId());
				}
				childNodeList = node.getChildNodes(); // recurse on children, e.g. CDATA and namespaces
				if (childNodeList != null)
				{
					for (int i = 0; i < childNodeList.getLength(); i++)
					{
						result.append(toStringX3D(childNodeList.item(i), ""));
					}
				}
				if ((documentType.getPublicId() != null) && (documentType.getSystemId() != null))
				{
					result.append(">").append("\n");
				}
				else if ((documentType.getPublicId() == null) && (documentType.getSystemId() != null))
				{
					result.append("\">").append("\n");
				}
				else
				{
					result.append(">").append("\n");
				}
				break;

			case org.w3c.dom.Node.ELEMENT_NODE:
				String name = node.getNodeName();
				result.append(indent).append("<").append(name);
				lineLength = name.length() + 2;
				org.w3c.dom.NamedNodeMap attributes = node.getAttributes(); // print attributes first

				for (int i = 0; i < attributes.getLength(); i++)
				{
					org.w3c.dom.Node current = attributes.item(i);
					String attributeValue = new String();
					if (current.getNodeValue() != null)
						attributeValue = current.getNodeValue();
					// looks like no conversion needed when reading from DOM!
//					if (attributeValue.contains("\\"))
//						attributeValue = attributeValue.replaceAll("\\\\","\\\\"); // replace literal \ with \\
//					if (attributeValue.contains("\""))
//						attributeValue = attributeValue.replaceAll("\"","\\\"");   // replace literal " with \"
//					if (attributeValue.contains("Immel")) // trace
//						System.out.println (attributeValue);
					result.append(" ").append(current.getNodeName()).append("=\'").append(attributeValue).append("\'");
				}

				// determine if any actual element child nodes are present
				org.w3c.dom.NodeList children = node.getChildNodes();
				for (int i = 0; i < children.getLength(); i++)
				{
					if (children.item(i).getNodeType() != org.w3c.dom.Node.TEXT_NODE)
					{
						nodeChildFound = true;
						break;
					}
				}
				// TODO confirm: handle CDATA text in Script (and Shader) nodes
				
				if (nodeChildFound == true) // recurse on each non-attribute child
				{
					result.append(">").append("\n");
				//	result.append ("<!-- iterating over children -->").append("\n"); // debug
					for (int i = 0; i < children.getLength(); i++)
					{
						result.append(toStringX3D(children.item(i), indent + indentLevel));
					}
					result.append(indent).append("</").append(name).append(">").append("\n"); // closing tag
				}
				else
				{
					result.append("/>").append("\n"); // singleton close
				}
				break;

			case org.w3c.dom.Node.TEXT_NODE:
				//	trim() removes leading and trailing whitespace
				result.append(node.getNodeValue().trim());
				break;

			case org.w3c.dom.Node.CDATA_SECTION_NODE:
				result.append(indent).append("<![CDATA[").append(node.getNodeValue()).append("]]>").append("\n");
				break;

			case org.w3c.dom.Node.COMMENT_NODE:
				result.append(indent).append("<!-- ").append(node.getNodeValue().trim()).append(" -->").append("\n");
				break;

			case org.w3c.dom.Node.PROCESSING_INSTRUCTION_NODE:
				// PROCESSING_INSTRUCTION_NODE typically unused; seems to repeat COMMENT_NODE, and so ignored
				// result.append(indent).append("<?").append(node.getNodeName()).append(" ")
				//		 .append(node.getNodeValue()).append("?>").append("\n");
				break;

			case org.w3c.dom.Node.ENTITY_REFERENCE_NODE:
				result.append("&").append(node.getNodeName()).append(";");
				break;
		}
		return result.toString();
	}

	/**
	 * Recursive method that uses DOM to create X3DJSAIL objects from a previously loaded document,
	 * taking advantage of Java Reflection and String-based field accessors with <i>protected</i> access that are not otherwise usable.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/reflect/index.html">Java Tutorials: Reflection API</a>
	 * @see <a href="https://www.manning.com/books/java-reflection-in-action">Java Reflection in Action</a>
	 * @param node DOM Node to process
	 * @return the loaded X3D objects of interest, starting with regular X3DObject or possibly a scene fragment
	 */
	public X3DConcreteElement toX3dObjectTree(org.w3c.dom.Node node)
	{
		toX3dObjectTree(node, null); // no parent
		return loadedX3dObjectTree;
	}

	/**
	 * Recursive method that uses DOM to create X3DJSAIL objects from a previously loaded document,
	 * taking advantage of Java Reflection and String-based field accessors with <i>protected</i> access that are not otherwise usable.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/reflect/index.html">Java Tutorials: Reflection API</a>
	 * @see <a href="https://www.manning.com/books/java-reflection-in-action">Java Reflection in Action</a>
	 * @param node DOM Node to process
	 * @param parentElement the parent of this scene object, if any
	 * @return the loaded X3D objects of interest, starting with regular X3DObject or possibly a scene fragment
	 */
	public X3DConcreteElement toX3dObjectTree(org.w3c.dom.Node node, X3DConcreteElement parentElement)
	{
		String indent = "  "; // TODO omit when refactored
		boolean   nodeChildFound = false;
		Class              elementClass;	
		X3DConcreteElement elementObject = null;
		String errorNotice;

		switch (node.getNodeType())
		{
			case org.w3c.dom.Node.DOCUMENT_NODE:
				// omit: ("<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
				org.w3c.dom.NodeList childNodeList = node.getChildNodes();	// recurse on children
				if (childNodeList != null)
				{
					for (int i = 0; i < childNodeList.getLength(); i++)
					{
						// recurse on children having elementObject as parent
						toX3dObjectTree(childNodeList.item(i), elementObject);
						// do not return from here, instead process all top-level nodes to completion
					}
				}
				break;

			case org.w3c.dom.Node.DOCUMENT_TYPE_NODE:
				// omit: org.w3c.dom.Node.DocumentType documentType = (org.w3c.dom.Node.DocumentType) node;
				childNodeList = node.getChildNodes();	// recurse on children, e.g. CDATA and namespaces
				if (childNodeList != null)
				{
					for (int i = 0; i < childNodeList.getLength(); i++)
					{
						// recurse on children having elementObject as parent
						toX3dObjectTree(childNodeList.item(i), elementObject);
						// do not return from here, instead process all top-level nodes to completion
					}
				}
				break;

			case org.w3c.dom.Node.ELEMENT_NODE:
				String                nodeName = node.getNodeName();			// DOM
				String             elementName = node.getNodeName() + "Object"; // X3DJSAIL class name
				String             packageName = X3DConcreteNode.getPackageName(elementName); // X3DJSAIL utility
				String	  elementSetMethodName;
				Method		  elementSetMethod;
					
				// http://stackoverflow.com/questions/7495785/java-how-to-instantiate-a-class-from-stringstring
				
				try // to create X3DObject and related X3DConcreteElement node/statement objects
				{
					elementClass  = Class.forName(packageName); // must be fully qualified packageName
					elementObject = (X3DConcreteElement) elementClass.newInstance();
					
					if ((elementObject instanceof org.web3d.x3d.jsail.Core.X3DObject) // remember root node of X3D model if found
						|| ((loadedX3dObjectTree == null) && (elementObject instanceof org.web3d.x3d.jsail.X3DConcreteNode))) // found fragment
					{
						loadedX3dObjectTree = (X3DObject) elementObject; // remember X3D root
						// starting a new scene, reset hash maps
						protoNameToNodeTypesHashMap.clear();
						protoDEFtoNodeTypesHashMap.clear();
						protoContainerFieldHashMap.clear();
					}
					if (elementObject instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject) // remember prototype declarations
					{
						// inspect DOM to find ProtoDeclare name
						currentProtoNameValue = node.getAttributes().getNamedItem("name").getNodeValue();
						currentProtoNodeTypeFound = false;
					}
				}
				catch (ClassNotFoundException cnfe)
				{
					// TODO logging
					errorNotice = "[X3DLoaderObject error] Fully qualified object package not found," +
                                            "\n   " + cnfe + " " + cnfe.getMessage();
                                        if ((cnfe.getCause()!= null) && !cnfe.getCause().getMessage().isEmpty())
                                            errorNotice += "\n   " + cnfe.getCause();
					validationResult.append(errorNotice).append("\n");
					System.err.println(errorNotice);
                                        return null; // draconian parse
				}
				catch (IllegalAccessException iae)
				{
					// TODO logging
					errorNotice = "[X3DLoaderObject error] Visibility of no-parameter constructor inaccessible," +
                                            "\n   " + iae + " " + iae.getMessage();
                                        if ((iae.getCause()!= null) && !iae.getCause().getMessage().isEmpty())
                                            errorNotice += "\n   " + iae.getCause();
					validationResult.append(errorNotice).append("\n");
					System.err.println(errorNotice);
                                        return null; // draconian parse
				}
				catch (InstantiationException ie)
				{
					// TODO logging
					errorNotice = "[X3DLoaderObject error] Failure occurred inside constructor," +
                                            "\n   " + ie + " " + ie.getMessage();
                                        if ((ie.getCause()!= null) && !ie.getCause().getMessage().isEmpty())
                                            errorNotice += "\n   " + ie.getCause();
					validationResult.append(errorNotice).append("\n");
					System.err.println(errorNotice);
                                        return null; // draconian parse
				}
						
				// determine if any actual element child nodes are present
				org.w3c.dom.NodeList children = node.getChildNodes();
				for (int i = 0; i < children.getLength(); i++)
				{
					if (children.item(i).getNodeType() != org.w3c.dom.Node.TEXT_NODE)
					{
						nodeChildFound = true;
						break;
					}
				}
				// recurse on each non-attribute child
				if (nodeChildFound == true)
				{
					// iterating over children, adding each child to current (parent) node using appropriate method.
					// n.b. assumes X3D scene is valid!
					for (int i = 0; i < children.getLength(); i++)
					{
						if ((children.item(i) == null) || (elementObject == null) ||
						    (children.item(i).getNodeType() == org.w3c.dom.Node.TEXT_NODE))
							continue; // break to end of loop, continue with next Node children.item(i)

						// recurse on children having elementObject as parent
						X3DConcreteElement childX3dElement = toX3dObjectTree(children.item(i), elementObject);
						if ((childX3dElement == null) || (childX3dElement.getElementName() == null))
							continue;
						String       childElementName = childX3dElement.getElementName();
						String childProtoInstanceName = new String();
						String childProtoInstanceUSE  = new String();
						String         containerField = new String();
						if (children.item(i).getAttributes().getNamedItem("containerField") != null)
						{
							containerField =
							children.item(i).getAttributes().getNamedItem("containerField").getNodeValue();
							if ((childX3dElement instanceof X3DConcreteNode) && !(containerField == null) && !containerField.isEmpty())
								 ((X3DConcreteNode)childX3dElement).setContainerFieldOverride(containerField);
						}
						String  protoInstanceNodeType = new String();
						String                    DEF = new String();
						
						try // adding this object to scene graph
						{
							// TODO better handling of prototypes is needed
							if      (nodeName.equals("ProtoBody"))
							{
								// remember ProtoDeclare type when found
								if (!currentProtoNodeTypeFound)
								{
									currentProtoNodeTypeFound = true;
									protoNameToNodeTypesHashMap.put(currentProtoNameValue, childElementName);
								}
							}
							else if (childElementName.equals("ProtoInstance"))
							{
								// use DOM to find name for this element
								if (children.item(i).getAttributes().getNamedItem("name") != null)
									childProtoInstanceName = children.item(i).getAttributes().getNamedItem("name").getNodeValue();
						        // containerField already found
								protoInstanceNodeType = protoNameToNodeTypesHashMap.get(currentProtoNameValue);
				
								if (children.item(i).getAttributes().getNamedItem("DEF") != null)			// DOM
								{
									// save node type for this ProtoInstance DEF so that ProtoInstance USE can find it later
									String childProtoInstanceDEF = children.item(i).getAttributes().getNamedItem("DEF").getNodeValue();
									protoDEFtoNodeTypesHashMap.put(childProtoInstanceDEF, protoInstanceNodeType);
									protoContainerFieldHashMap.put(childProtoInstanceDEF, containerField);
								}
								else if (children.item(i).getAttributes().getNamedItem("USE") != null)
								{
									// ProtoInstance USE syntax does not include name, must find it via original DEF
									childProtoInstanceUSE = children.item(i).getAttributes().getNamedItem("USE").getNodeValue();
									protoInstanceNodeType = protoDEFtoNodeTypesHashMap.get(childProtoInstanceUSE); // find it
									       containerField = protoContainerFieldHashMap.get(childProtoInstanceUSE); // find it
								}
								if (!containerField.equals("children"))
									((ProtoInstanceObject) childX3dElement).setContainerField(containerField);
								// diagnostics
								if ((childProtoInstanceUSE != null) && !childProtoInstanceUSE.isEmpty() &&
								    ((protoInstanceNodeType == null) ||  protoInstanceNodeType.isEmpty()))
								{
						
									// TODO logging
									errorNotice = "[X3DLoaderObject error] ProtoInstance " + childProtoInstanceName +
										" found with USE " + childProtoInstanceUSE + " but unable to find original ProtoInstance DEF node type, thus unable to add to scene graph";
									validationResult.append(errorNotice).append("\n");
									System.err.println(errorNotice);
									continue;
								}
								else if (((protoInstanceNodeType == null) || protoInstanceNodeType.isEmpty()) &&
								         ((       containerField == null) ||        containerField.isEmpty()))
								{
									// TODO logging
									errorNotice = "[X3DLoaderObject error] ProtoInstance " + childProtoInstanceName +
										" found but node type is unknown and " +
										"containerField is missing, unable to add to scene graph";
									validationResult.append(errorNotice).append("\n");
									System.err.println(errorNotice);
									continue;
								}
								else if ((protoInstanceNodeType == null) || protoInstanceNodeType.isEmpty())
								{
									// TODO logging
									errorNotice = "[X3DLoaderObject error] ProtoInstance " + childProtoInstanceName +
										" found but node type is unknown and " +
										"containerField is " + containerField + ", unable to add to scene graph";
									validationResult.append(errorNotice).append("\n");
									System.err.println(errorNotice);
									continue;
								}
								else if ((containerField == null) || containerField.isEmpty())
								{
									// TODO logging
									errorNotice = "[X3DLoaderObject error] ProtoInstance " + childProtoInstanceName +
										" found and node type is " + protoInstanceNodeType + " but " +
										"containerField is missing, unable to add to scene graph";
									validationResult.append(errorNotice).append("\n");
									System.err.println(errorNotice);
									continue;
								}
								/* no longer needed, using protoNodeTypeHashMap, wasn't yet connected by parse process anyway
								// must find node type of corresponding prototype in order to add it to current parent element
								ProtoDeclareObject protoDeclare = (ProtoDeclareObject) loadedX3dObjectTree.findElementByNameValue(childProtoInstanceName,ProtoDeclareObject.NAME);
								if (protoDeclare != null)
								{
								    protoInstanceNodeType = protoDeclare.getNodeType();
								}
								else // no protoDeclare found, look for externProtoDeclare
								{
									ExternProtoDeclareObject externProtoDeclare = (ExternProtoDeclareObject) loadedX3dObjectTree.findElementByNameValue(childProtoInstanceName,ExternProtoDeclareObject.NAME);
									if (externProtoDeclare != null)
										protoInstanceNodeType = externProtoDeclare.getNodeType();
								}
								*/
							}

							if      (childElementName.equals("head"))
									((X3DObject)elementObject).setHead ((headObject) childX3dElement);
							else if (childElementName.equals("component"))
									((headObject)elementObject).addComponent ((componentObject) childX3dElement);
							else if (childElementName.equals("meta"))
									((headObject)elementObject).addMeta ((metaObject) childX3dElement);
							else if (childElementName.equals("unit"))
									((headObject)elementObject).addUnit ((unitObject) childX3dElement);
							else if (childElementName.equals("Scene"))
									((X3DObject)elementObject).setScene ((SceneObject) childX3dElement);
							else if (nodeName.equals("Scene") && childElementName.startsWith("Metadata"))
									((SceneObject)elementObject).addChild ((X3DMetadataObject) childX3dElement);
							else if (nodeName.equals("Scene") && childElementName.equals("LayerSet"))
									((SceneObject)elementObject).addChild ((LayerSetObject) childX3dElement);
							else if (nodeName.equals("Scene"))
									((SceneObject)elementObject).addChild ((X3DChildNode) childX3dElement);
							// CommentsBlock handled by case org.w3c.dom.Node.COMMENT_NODE
					
							// proto and field handling begins here to avoid possible subsequent missteps
							else if (nodeName.equals("ProtoDeclare") && childElementName.equals("ProtoInterface"))
									((ProtoDeclareObject)elementObject).setProtoInterface((ProtoInterfaceObject) childX3dElement);
							else if (nodeName.equals("Script") && childElementName.equals("field"))
									((ScriptObject)elementObject).addField((fieldObject) childX3dElement);
							else if (nodeName.equals("ProtoInterface") && childElementName.equals("field"))
									((ProtoInterfaceObject)elementObject).addField((fieldObject) childX3dElement);
							else if (nodeName.equals("ExternProtoDeclare") && childElementName.equals("field"))
									((ExternProtoDeclareObject)elementObject).addField((fieldObject) childX3dElement);
							else if (nodeName.equals("ProtoBody"))
									((ProtoBodyObject)elementObject).addChildren ((X3DNode) childX3dElement); // note looser node type
							else if (childElementName.equals("ProtoBody"))
									((ProtoDeclareObject)elementObject).setProtoBody((ProtoBodyObject) childX3dElement);
							else if (nodeName.equals("field"))
									((fieldObject)elementObject).addChild ((X3DChildNode) childX3dElement);
							else if (nodeName.equals("fieldValue"))
									((fieldValueObject)elementObject).addChild ((X3DChildNode) childX3dElement);
							else if (childElementName.equals("fieldValue"))
									((ProtoInstanceObject)elementObject).setFieldValue((fieldValueObject) childX3dElement);
							else if (nodeName.equals("ShaderProgram") && childElementName.equals("field"))
									((ShaderProgramObject)elementObject).addField((fieldObject) childX3dElement);
							else if (nodeName.equals("ComposedShader") && childElementName.equals("field"))
									((ComposedShaderObject)elementObject).addField((fieldObject) childX3dElement);
							else if (nodeName.equals("PackagedShader") && childElementName.equals("field"))
									((PackagedShaderObject)elementObject).addField((fieldObject) childX3dElement);
					
							else if (nodeName.equals("Collision") && (containerField.equals("proxy")))
									((CollisionObject)elementObject).setProxy ((X3DChildNode) childX3dElement);
				// TODO what about ProtoInstance proxy?  unnecessary?
							else if (nodeName.equals("Collision") && (protoInstanceNodeType.equals("proxy")))
									((CollisionObject)elementObject).setProxy ((ProtoInstanceObject) childX3dElement);
							else if (nodeName.equals("MetadataSet") && childElementName.startsWith("Metadata") && (!containerField.equals("metadata")))
									((MetadataSetObject)elementObject).addValue ((X3DMetadataObject) childX3dElement);
							else if (childElementName.startsWith("Metadata"))
									((X3DConcreteNode)elementObject).setMetadata ((X3DMetadataObject) childX3dElement);
							else if (protoInstanceNodeType.equals("Metadata"))
									((X3DConcreteNode)elementObject).setMetadata ((ProtoInstanceObject) childX3dElement);
					
							else if (childElementName.equals("Appearance"))
									((ShapeObject)elementObject).setAppearance ((X3DAppearanceNode) childX3dElement);
							else if (protoInstanceNodeType.equals("Appearance"))
									((ShapeObject)elementObject).setAppearance ((ProtoInstanceObject) childX3dElement);
					
							else if (childElementName.equals("Material"))
									((AppearanceObject)elementObject).setMaterial ((MaterialObject) childX3dElement);
							else if (protoInstanceNodeType.equals("Material"))
									((AppearanceObject)elementObject).setMaterial ((ProtoInstanceObject) childX3dElement);
					
							else if (childElementName.equals("LineProperties"))
									((AppearanceObject)elementObject).setLineProperties ((LinePropertiesObject) childX3dElement);
							else if (protoInstanceNodeType.equals("LineProperties"))
									((AppearanceObject)elementObject).setLineProperties ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("Sound") && (childElementName.equals("AudioClip") || childElementName.equals("MovieTexture")))
									((SoundObject)elementObject).setSource ((X3DSoundSourceNode) childX3dElement);

							else if (childElementName.endsWith("Texture"))
									((AppearanceObject)elementObject).setTexture ((X3DTextureNode) childX3dElement);
							else if (protoInstanceNodeType.equals("Texture"))
									((AppearanceObject)elementObject).setTexture ((ProtoInstanceObject) childX3dElement);

							else if (childElementName.contains("TextureTransform"))
									((AppearanceObject)elementObject).setTextureTransform ((X3DTextureTransformNode) childX3dElement);
							else if (protoInstanceNodeType.equals("TextureTransform"))
									((AppearanceObject)elementObject).setTextureTransform ((ProtoInstanceObject) childX3dElement);

							else if (childElementName.contains("Shader"))
									((AppearanceObject)elementObject).addShaders ((X3DShaderNode) childX3dElement);
				// TODO		else if (protoInstanceNodeType.equals("Shader"))
				// fix				((AppearanceObject)elementObject).addShaders ((ProtoInstanceObject) childX3dElement);

							else if (childElementName.equals("Box") || childElementName.equals("Cone") || childElementName.equals("Cylinder") ||
									 childElementName.equals("Sphere") || childElementName.equals("Text") || childElementName.equals("IndexedFaceSet") ||
									 childElementName.equals("Arc2d") || childElementName.equals("ArcClose2d") || childElementName.equals("Circle2D") ||
									 childElementName.equals("Disk2D") || childElementName.equals("Polyline2D") || childElementName.equals("Polypoint2D") ||
									 childElementName.equals("Rectangle2D ") || childElementName.equals("TriangleSet2D") ||
									 childElementName.equals("ElevationGrid") || childElementName.equals("Extrusion") || childElementName.equals("GeoElevationGrid") ||
									 childElementName.equals("IndexedLineSet") || childElementName.equals("IndexedPointSet") || childElementName.equals("IndexedQuadSet") ||
									 childElementName.equals("LineSet") || childElementName.equals("PointSet") || childElementName.equals("QuadSet") ||
									 childElementName.equals("IndexedTriangleFanSet") || childElementName.equals("IndexedTriangleSet") || childElementName.equals("IndexedTriangleStripSet") ||
									 childElementName.equals("TriangleFanSet") || childElementName.equals("TriangleSet") || childElementName.equals("TriangleStripSet") ||
									 childElementName.equals("NurbsCurve") || childElementName.equals("NurbsSweptSurface") || childElementName.equals("NurbsSwungSurface")
									)
									((ShapeObject)elementObject).setGeometry ((X3DGeometryNode) childX3dElement);
							else if (protoInstanceNodeType.equals("Box") || protoInstanceNodeType.equals("Cone") || protoInstanceNodeType.equals("Cylinder") ||
									 protoInstanceNodeType.equals("Sphere") || protoInstanceNodeType.equals("Text") || protoInstanceNodeType.equals("IndexedFaceSet") ||
									 protoInstanceNodeType.equals("Arc2d") || protoInstanceNodeType.equals("ArcClose2d") || protoInstanceNodeType.equals("Circle2D") ||
									 protoInstanceNodeType.equals("Disk2D") || protoInstanceNodeType.equals("Polyline2D") || protoInstanceNodeType.equals("Polypoint2D") ||
									 protoInstanceNodeType.equals("Rectangle2D ") || protoInstanceNodeType.equals("TriangleSet2D") ||
									 protoInstanceNodeType.equals("ElevationGrid") || protoInstanceNodeType.equals("Extrusion") || protoInstanceNodeType.equals("GeoElevationGrid") ||
									 protoInstanceNodeType.equals("IndexedLineSet") || protoInstanceNodeType.equals("IndexedPointSet") || protoInstanceNodeType.equals("IndexedQuadSet") ||
									 protoInstanceNodeType.equals("LineSet") || protoInstanceNodeType.equals("PointSet") || protoInstanceNodeType.equals("QuadSet") ||
									 protoInstanceNodeType.equals("IndexedTriangleFanSet") || protoInstanceNodeType.equals("IndexedTriangleSet") || protoInstanceNodeType.equals("IndexedTriangleStripSet") ||
									 protoInstanceNodeType.equals("TriangleFanSet") || protoInstanceNodeType.equals("TriangleSet") || protoInstanceNodeType.equals("TriangleStripSet") ||
									 protoInstanceNodeType.equals("NurbsCurve") || protoInstanceNodeType.equals("NurbsSweptSurface") || protoInstanceNodeType.equals("NurbsSwungSurface")
									)
									((ShapeObject)elementObject).setGeometry ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("IndexedFaceSet") && childElementName.contains("Coordinate"))
									((IndexedFaceSetObject)elementObject).setCoord ((X3DCoordinateNode) childX3dElement);
							else if (nodeName.equals("IndexedFaceSet") && protoInstanceNodeType.contains("Coordinate"))
									((IndexedFaceSetObject)elementObject).setCoord ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("IndexedLineSet") && childElementName.contains("Coordinate"))
									((IndexedLineSetObject)elementObject).setCoord ((X3DCoordinateNode) childX3dElement);
							else if (nodeName.equals("IndexedLineSet") && protoInstanceNodeType.contains("Coordinate"))
									((IndexedLineSetObject)elementObject).setCoord ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("LineSet") && childElementName.contains("Coordinate"))
									((LineSetObject)elementObject).setCoord ((X3DCoordinateNode) childX3dElement);
							else if (nodeName.equals("LineSet") && protoInstanceNodeType.contains("Coordinate"))
									((LineSetObject)elementObject).setCoord ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("IndexedFaceSet") && childElementName.contains("Color"))
									((IndexedFaceSetObject)elementObject).setColor ((X3DColorNode) childX3dElement);
							else if (nodeName.equals("IndexedLineSet") && protoInstanceNodeType.contains("Color"))
									((IndexedFaceSetObject)elementObject).setColor ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("IndexedLineSet") && childElementName.contains("Color"))
									((IndexedLineSetObject)elementObject).setColor ((X3DColorNode) childX3dElement);
							else if (nodeName.equals("IndexedLineSet") && protoInstanceNodeType.contains("Color"))
									((IndexedLineSetObject)elementObject).setColor ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("LineSet") && childElementName.contains("Color"))
									((LineSetObject)elementObject).setColor ((X3DColorNode) childX3dElement);
							else if (nodeName.equals("LineSet") && protoInstanceNodeType.contains("Color"))
									((LineSetObject)elementObject).setCoord ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("ViewpointGroup") && childElementName.equals("Viewpoint"))
									((ViewpointGroupObject)elementObject).addChild ((ViewpointObject) childX3dElement);
							else if (nodeName.equals("ViewpointGroup") && protoInstanceNodeType.equals("Viewpoint"))
									((ViewpointGroupObject)elementObject).addChild ((ProtoInstanceObject) childX3dElement);

							else if (nodeName.equals("Text") && childElementName.equals("FontStyle"))
									((TextObject)elementObject).setFontStyle ((X3DFontStyleNode) childX3dElement);
							else if (nodeName.equals("Text") && protoInstanceNodeType.equals("FontStyle"))
									((TextObject)elementObject).setFontStyle ((ProtoInstanceObject) childX3dElement);

							else if (childElementName.equals("IS"))
									((X3DConcreteNode)elementObject).setIS ((ISObject) childX3dElement);
							// no prototype for IS or connect

							else if (nodeName.equals("IS") && childElementName.equals("connect"))
									((ISObject)elementObject).addConnect ((connectObject) childX3dElement);
							// no prototype for IS or connect

							// TODO more
					
							// default fallback works for majority of parent-child relationships but throws exception otherwise
							else	((X3DGroupingNode)elementObject).addChildren(new X3DNode[] { (X3DNode) childX3dElement } ); // default fallback
							// making it this far without exception means satisfactory parent-child relationship found
						}
						catch (Exception e)
						{
							// TODO logging
							errorNotice = "[X3DLoaderObject error] Incorrectly handled object construction, current elementObject=" + nodeName + 
										  " (" + elementObject.getElementName() + "), child=" + childElementName + ", " + e;
							validationResult.append(errorNotice).append("\n");
							System.err.println(errorNotice);
							e.printStackTrace(); // further diagnosis needed, DOM loader errors are tricky
							continue;
						}
					}
				}
				// properly handle contained CDATA text after child elements handled
				if      (nodeName.equals("Script") && !node.getTextContent().trim().isEmpty())
				{
					((ScriptObject)elementObject).setSourceCode (node.getTextContent().trim());
				}
				else if (nodeName.equals("ShaderProgram") && !node.getTextContent().trim().isEmpty())
				{
					(( ShaderProgramObject)elementObject).setSourceCode (node.getTextContent().trim());
				}
				else if (nodeName.equals("ShaderPart") && !node.getTextContent().trim().isEmpty())
				{
					(( ShaderPartObject)elementObject).setSourceCode (node.getTextContent().trim());
				}

				// handle attributes next, note that DOM includes all attributes (including those with default values)
					
				org.w3c.dom.NamedNodeMap attributes = node.getAttributes();
				for (int i = 0; i < attributes.getLength(); i++)
				{
					String				fieldObjectTypePrefix;
					String				fieldObjectName;
					Class				fieldObjectClass;
					X3DConcreteField	fieldObject;
					Method			 	fieldSetMethod;
					String			 	fieldSetMethodName = "setValueByString";

					org.w3c.dom.Node currentAttributeNode = attributes.item(i);
					String attributeName  = currentAttributeNode.getNodeName();
					String attributeValue = currentAttributeNode.getNodeValue();
					// http://www.regexplanet.com/advanced/java/index.html
					// https://www.regular-expressions.info/java.html see "backslash-mess"
					// https://docs.oracle.com/javase/tutorial/java/data/characters.html
					// looks like no conversion needed when reading from DOM!
//					if (attributeValue.contains("\\"))
//						attributeValue = attributeValue.replaceAll("\\\\","\\\\"); // replace literal \ with \\
//					if (attributeValue.contains("\""))
//						attributeValue = attributeValue.replaceAll("\"","\\\"");   // replace literal " with \"
//					if (attributeValue.contains("Immel")) // trace
//						System.out.println (attributeValue);

					// errorNotice prelude now gets predefined (in case needed later)
					errorNotice = "[X3DLoaderObject error] <" + nodeName + " " + attributeName + "='" + attributeValue + "'/> exception: ";
					
					// ignore unused attributes
					if      (attributeName.equals("containerField"))
					{
						 continue; // containerField not saved, instead handled by scene-graph structure during serialization
					}
					else if (attributeName.startsWith("xmlns:") || attributeName.startsWith("xsd:") || // X3D element
							 attributeName.contains  (":")) // also skip any qualified element name
					{
						// TODO logging, consider warning
						// errorNotice = nodeName + " attribute ignored: " + attributeName;
						// validationResult.append(errorNotice).append("\n");
						// System.err.println(errorNotice);
						continue;
					}
					
					String attributeType  = elementObject.getFieldType(attributeName); // X3DJSAIL utility
					elementSetMethodName  = "set";
					if (attributeName.equals("class"))
						elementSetMethodName += "Css";
					elementSetMethodName += attributeName.substring(0,1).toUpperCase() + 
											attributeName.substring(1); // setCamelCase

					// check for proper handling of SFString/MFString escape characters, particularly backslashed quotes
					String unescapedAttributeValue = attributeValue.replace("\\\\\"", "\\\""); // TODO regex needed for other cases of special character inputss?
					if   (!unescapedAttributeValue.equals(attributeValue))
					{
						// trace statement for debug use
						System.out.println ("*trace of X3DLoaderObject DOM import: attributeValue='" + attributeValue + 
								"', unescapedAttributeValue='" + unescapedAttributeValue + 
								"', attributeName='" + attributeName + 
								"', attributeType='" + attributeType + "'");
						attributeValue = unescapedAttributeValue;
					}
					// now add each attribute to element
					try // to first create corresponding field object, then invoke set method on parent node object
					{
						// first create field object, e.g. org.web3d.x3d.jsail.fields.SFFloatObject
						if   (attributeType.equals(SFStringObject.NAME))
						{
							// SFString attribute values are easy: set value directly on parent object
							elementSetMethod  = elementClass.getMethod(elementSetMethodName, new Class[] { String.class });
							elementSetMethod.invoke (elementObject, new Object[] { attributeValue });
						}
						else if (attributeType.equals(SFNodeObject.NAME) || attributeType.equals(MFNodeObject.NAME))
						{
							// TODO logging
							errorNotice = "[X3DLoaderObject error] Unexpectedly encountered " + attributeType + " type when parsing attribute" + 
											attributeName + ".";
							validationResult.append(errorNotice).append("\n");
							System.err.println(errorNotice);
							continue;
						}
						else // other SF* or MF* type: build corresponding fieldObject, then invoke set method on element
						{
							fieldObjectTypePrefix = "org.web3d.x3d.jsail.fields.";
							fieldObjectName       = fieldObjectTypePrefix + attributeType + "Object";
							fieldObjectClass      = Class.forName(fieldObjectName);
							// Class.newInstance() creates constructor using no parameters
							fieldObject           = (X3DConcreteField) fieldObjectClass.newInstance(); // default value
							fieldObject.initialize(); // make sure reset
							
							// Invoke protected fieldObject.setValueByString() to match
							// fieldObjectClass.getDeclaredMethods(); // debug use; must be Declared for protected visibility
							fieldSetMethod = fieldObjectClass.getDeclaredMethod(fieldSetMethodName, new Class[] { String.class });
							
							// https://docs.oracle.com/javase/8/docs/api/java/lang/reflect/AccessibleObject.html
							if (!!Modifier.isPublic(fieldSetMethod.getModifiers()))
							{
								// TODO logging
//								errorNotice = "[X3DLoaderObject error] Java reflection problem, class-protected " + fieldObjectName + "." +
//									fieldSetMethodName + "(\"" + attributeValue + "\") method not publicly accessible";
//								validationResult.append(errorNotice).append("\n");
//								System.err.println(errorNotice);
								// reason for this is not clear, but apparently it is necessary
								fieldSetMethod.setAccessible(true); // class-protected methods must be made accessible
							}
							// set value on org.web3d.x3d.jsail.fields.* fieldObject to reinitialize it
							fieldSetMethod.invoke (fieldObject, new Object[] { attributeValue });
							
							elementSetMethod  = elementClass.getMethod(elementSetMethodName, new Class[] { fieldObjectClass });
							elementSetMethod.invoke (elementObject, new Object[] { fieldObject });
							// element now has correct attribute value set  8)
						}
					}
					catch (ClassNotFoundException cnfe)
					{
						// TODO logging
						errorNotice = "[X3DLoaderObject error] Fully qualified object package not found," +
                                                    "\n   " + cnfe + " " + cnfe.getMessage();
						if ((cnfe.getCause()!= null) && !cnfe.getCause().getMessage().isEmpty())
                                                    errorNotice += "\n   " + cnfe.getCause();
						validationResult.append(errorNotice).append("\n");
						System.err.println(errorNotice);
						return null; // draconian parse
					}
					catch (IllegalAccessException iae)
					{
						// TODO logging
						errorNotice = "[X3DLoaderObject error] Visibility of no-parameter constructor inaccessible," +
                                                    "\n   " + iae + " " + iae.getMessage();
						if ((iae.getCause()!= null) && !iae.getCause().getMessage().isEmpty())
                                                    errorNotice += "\n   " + iae.getCause();
						validationResult.append(errorNotice).append("\n");
						System.err.println(errorNotice);
						return null; // draconian parse
					}
					catch (InstantiationException ie)
					{
						// TODO logging
						errorNotice = "[X3DLoaderObject error] Failure occurred inside constructor," +
                                                    "\n   " + ie + " " + ie.getMessage();
						if ((ie.getCause()!= null) && !ie.getCause().getMessage().isEmpty())
                                                    errorNotice += "\n   " + ie.getCause();
						validationResult.append(errorNotice).append("\n");
						System.err.println(errorNotice);
						return null; // draconian parse
					}
					catch (InvocationTargetException ite)
					{
						// TODO logging
						errorNotice = "[X3DLoaderObject error] Invoking " + nodeName + "." + elementSetMethodName + "(" + attributeValue + ") failed (likely due to illegal value)," +
                                                    "\n   " + ite + " " + ite.getMessage();
						if ((ite.getCause()!= null) && !ite.getCause().getMessage().isEmpty())
                                                    errorNotice += "\n   " + ite.getCause();
						validationResult.append(errorNotice).append("\n");
						System.err.println(errorNotice + "\n");
						return null; // draconian parse
					}
					catch (NoSuchMethodException nsme)
					{
						// TODO logging
						errorNotice = "[X3DLoaderObject error] Incorrectly constructed set method name," +
                                                    "\n   " + nsme + " " + nsme.getMessage();
						if ((nsme.getCause()!= null) && !nsme.getCause().getMessage().isEmpty())
                                                    errorNotice += "\n   " + nsme.getCause();
						validationResult.append(errorNotice).append("\n");
						System.err.println(errorNotice);
						return null; // draconian parse
					}
				}	// continue for each attribute until all are set
				
				break;

			case org.w3c.dom.Node.TEXT_NODE:
				//	trim() removes leading and trailing whitespace
				if (node.getNodeValue().trim().isEmpty())
				{
					// TODO logging
					errorNotice = "[X3DLoaderObject error] Unexpected plain text found: " + node.getNodeValue().trim();
					validationResult.append(errorNotice).append("\n");
					System.err.println(errorNotice);
				}
				break;

			case org.w3c.dom.Node.CDATA_SECTION_NODE:
				// CDATA content already handled by parent node (e.g. Script ShaderProgram ShaderPart above)
				break;

			case org.w3c.dom.Node.COMMENT_NODE:
				CommentsBlock commentsBlock = new CommentsBlock(node.getNodeValue());
				if (parentElement == null)
				{
					// TODO logging
					errorNotice = "[X3DLoaderObject error] CommentsBlock found without prior parent being saved; ignored.";
					errorNotice+= "<!-- " + node.getNodeValue() + " -->";
					validationResult.append(errorNotice).append("\n");
					System.err.println(errorNotice);
				}
				// TODO sort out X3D Unified Object Model (X3DUOM) to support
				else parentElement.addComments(commentsBlock);
				break;

			case org.w3c.dom.Node.PROCESSING_INSTRUCTION_NODE:
				// System.out.println(indent + "<?" + node.getNodeName() + " " + node.getNodeValue() + "?>");
				break;

			case org.w3c.dom.Node.ENTITY_REFERENCE_NODE:
				// System.out.print("&" + node.getNodeName() + ";");
				break;
		}
		// TODO what is this block for??
//		for (org.w3c.dom.Nodechild = node.getFirstChild(); child != null; child = child.getNextSibling())
//		{
//			// recurse on children having elementObject as parent
//			toX3dObjectTree(child, elementObject);
//		}
//		if (elementObject != null) // trace
//		{
//			holdCopyElementObject = elementObject; // remember elementObject, trying to keep from falling out of scope
//			System.out.print ("**************************************************\n" + holdCopyElementObject.toStringX3D()); // debug
//		}
		return elementObject; // TODO confirm complete
	}

	/** TODO javadoc */
	private static class MyErrorHandler implements ErrorHandler {
     
		private final PrintWriter out;

		MyErrorHandler(PrintWriter out)
		{
			this.out = out;
		}

		private String getParseExceptionInfo(SAXParseException spe)
		{
			String systemId = spe.getSystemId();
			if (systemId == null)
			{
				systemId = "null";
			}
			String info = "URI=" + systemId + " Line=" + spe.getLineNumber() +
						  ": " + spe.getMessage();
			return info;
		}
		@Override
		public void warning(SAXParseException spe) throws SAXException
		{
			String message = "Warning: " + getParseExceptionInfo(spe);
//			validationResult.append(message).append("\n");
			out.println(message);
		}
		@Override
		public void error(SAXParseException spe) throws SAXException
		{
			String message = "Error: " + getParseExceptionInfo(spe);
//			validationResult.append(message).append("\n");
			throw new SAXException(message);
		}
		@Override
		public void fatalError(SAXParseException spe) throws SAXException
		{
			String message = "Fatal Error: " + getParseExceptionInfo(spe);
//			validationResult.append(message).append("\n");
			throw new SAXException(message);
		}
	}
	/**
	 * Accessor method indicating whether DTD validation is performed when loading an X3D file
	 * @return whether XML DTD validation is performed when loading an X3D file
	 */
	public boolean isDtdValidationPerformed()
	{
		return dtdValidate;
	}
	/**
	 * Accessor method to set whether DTD validation is performed when loading an X3D file, reconfiguring documentBuilderFactory
	 * @param newDtdValidationValue whether DTD validation is performed
	 */
	public void setDtdValidationPerformed(boolean newDtdValidationValue)
	{
		dtdValidate = newDtdValidationValue;
		documentBuilderFactory.setValidating(dtdValidate || xsdValidate);
	}
	/**
	 * Accessor method indicating whether DTD validation is performed when loading an X3D file
	 * @return whether XML Schema validation is performed when loading an X3D file
	 */
	public boolean isXmlSchemaValidationPerformed()
	{
		return xsdValidate;
	}
	/**
	 * Accessor method to set whether XML Schema validation is performed when loading an X3D file, reconfiguring documentBuilderFactory
	 * @param newXmlSchemaValidationValue whether XML Schema validation is performed
	 */
	public void setXmlSchemaValidation(boolean newXmlSchemaValidationValue)
	{
		xsdValidate = newXmlSchemaValidationValue;
		documentBuilderFactory.setValidating(dtdValidate || xsdValidate);
	}
	/**
	 * Provide X3DJSAIL object tree if loading succeeds
	 * @return X3D object tree if loading was successful, null otherwise
	 */
	public X3DConcreteElement getX3dObjectTree()
	{
		return loadedX3dObjectTree;
	}

	/**
	 * Accessor method to indicate whether loading was successful and loaded X3dObjectTree is available
	 * @return whether loading was successful
	 */
	public boolean isLoadSuccessful()
	{
		return loadSuccess && (loadedX3dObjectTree != null);
	}

	/**
	 * Provide detailed log of validation results following loading and serialization
	 * @return validationResult log following loading and serialization
	 */
	public String getValidationResult()
	{
		return validationResult.toString();
	}
}
