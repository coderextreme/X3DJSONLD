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

package org.web3d.x3d.jsail.Networking;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.*; // again making sure #2

import java.util.Arrays;
import org.web3d.x3d.sai.Core.*;  // making sure #3
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;

import org.web3d.x3d.jsail.fields.*; // making sure #4

/**
 * Functional summary: IMPORT provides ROUTE access to a node that has a corresponding EXPORT statement within an Inline scene. These connections allow event values to be exchanged via ROUTE statements between a parent model and a child Inline model. This concrete class represents an X3D IMPORT statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: IMPORT provides ROUTE access to a node that has a corresponding EXPORT statement within an Inline scene. These connections allow event values to be passed via ROUTE statements between a parent model and a child Inline model.
 * <ul>
 *  <li> <i>Hint:</i> it is good practice to place IMPORT statements next to corresponding Inline scenes for readability. </li> 
 *  <li> <i>Hint:</i> see EXPORT statement for corresponding functionality within the related Inline model. </li> 
 *  <li> <i>Warning:</i> corresponding parent-scene IMPORT and child Inline-scene EXPORT statements are necessary in order to ROUTE values between a parent model and a child Inline model. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification 4.4.6 Import/Export semantics <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#ImportExportsemantics" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#ImportExportsemantics</a> </li> 
 * </ul>
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#IMPORTSemantics" target="blank">X3D Abstract Specification: IMPORT</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IMPORT" target="_blank">X3D Tooltips: IMPORT</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#InlinesPrototypes" target="_blank">X3D Scene Authoring Hints: InlinesPrototypes</a>
 */
public class IMPORTObject extends org.web3d.x3d.jsail.X3DConcreteStatement implements org.web3d.x3d.sai.Core.X3DChildNode
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String AS; // SFString

	private String importedDEF; // SFString

	private String inlineDEF; // SFString

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>IMPORT</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "IMPORT";

	/** Provides name of this element: <i>IMPORT</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>IMPORT</i> element: <i>Networking</i> */
	public static final String COMPONENT = "Networking";

	/** Defines X3D component for the <i>IMPORT</i> element: <i>Networking</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Networking</i> component level for this element: <i>3</i> */
	public static final int LEVEL = 3;

	/** Provides default X3D component level for this element: <i>3</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFString field named <i>AS</i> has default value equal to an empty string. */
	public static final String AS_DEFAULT_VALUE = "";

	/** SFString field named <i>importedDEF</i> has default value equal to an empty string. */
	public static final String IMPORTEDDEF_DEFAULT_VALUE = "";

	/** SFString field named <i>inlineDEF</i> has default value equal to an empty string. */
	public static final String INLINEDEF_DEFAULT_VALUE = "";

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_TYPE
	 * @return X3D type (SFvec3f etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE if not recognized
	 */
	@Override		
	public String getFieldType(String fieldName)
	{
		String result;

		switch (fieldName)
		{
			// String constants for exact field type values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing type-matching checks
											
			case "containerField":
				result = "SFString";
				break;
			case "AS":
				result = "SFString";
				break;
			case "importedDEF":
				result = "SFString";
				break;
			case "inlineDEF":
				result = "SFString";
				break;
			default:
			{
				// if fieldName has a prefix "set_" prepended (or a suffix "_changed" appended) then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getFieldType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getFieldType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Indicate accessType corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_ACCESSTYPE
	 * @return X3D accessType (inputOnly etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE if not recognized
	 */
	@Override
	public String getAccessType(String fieldName)
	{
		String result; // set by following checks
		switch (fieldName)
		{
			// String constants for field accessType values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing accessType-matching checks
			case "AS":
				result = "inputOutput";
				break;
			case "importedDEF":
				result = "inputOutput";
				break;
			case "inlineDEF":
				result = "inputOutput";
				break;
			default:
			{
				// if user has added a prefix "set_" or suffix "_changed" then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getAccessType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getAccessType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Constructor for IMPORTObject to initialize member variables with default values. */
	public IMPORTObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		AS = AS_DEFAULT_VALUE;
		importedDEF = IMPORTEDDEF_DEFAULT_VALUE;
		inlineDEF = INLINEDEF_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>AS</i>.
	 * <br><br>
	 * <i>Tooltip:</i> map importedDEF name AS a new name in current scene.
 * <ul>
 *  <li> <i> Hint:</i>  optional, default export is importedDEF node name. </li> 
 * </ul>
	 * @return value of AS field
	 */
	public String getAS()
	{
		return AS;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>AS</i>.
	 * <br><br>
	 * <i>Tooltip:</i> map importedDEF name AS a new name in current scene. Hint: optional, default export is importedDEF node name.
	 * @param newValue is new value for the AS field.
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IMPORTObject setAS(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to IMPORT
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IMPORT AS newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("IMPORT AS newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		AS = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString AS field, similar to {@link #setAS(String)}.
	 * @param newValue is new value for the AS field.
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IMPORTObject setAS(SFStringObject newValue)
	{
		setAS(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>importedDEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> importedDEF is DEF name of the node of interest that is contained in the remote inlineDEF scene.
 * <ul>
 *  <li> <i> Hint:</i>  required. </li> 
 * </ul>
	 * @return value of importedDEF field
	 */
	public String getImportedDEF()
	{
		return importedDEF;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>importedDEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> importedDEF is DEF name of the node of interest that is contained in the remote inlineDEF scene. Hint: required.
	 * @param newValue is new value for the importedDEF field.
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IMPORTObject setImportedDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to IMPORT
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IMPORT importedDEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("IMPORT importedDEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		importedDEF = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString importedDEF field, similar to {@link #setImportedDEF(String)}.
	 * @param newValue is new value for the importedDEF field.
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IMPORTObject setImportedDEF(SFStringObject newValue)
	{
		setImportedDEF(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>inlineDEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> inlineDEF is the DEF name of Inline node in the same scene as this IMPORT statement.
 * <ul>
 *  <li> <i> Warning:</i>  the inlineDEF Inline scene must similarly include a corresponding EXPORT statement. </li> 
 * </ul>
	 * @return value of inlineDEF field
	 */
	public String getInlineDEF()
	{
		return inlineDEF;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>inlineDEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> inlineDEF is the DEF name of Inline node in the same scene as this IMPORT statement. Warning: the inlineDEF Inline scene must similarly include a corresponding EXPORT statement.
	 * @param newValue is new value for the inlineDEF field.
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IMPORTObject setInlineDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to IMPORT
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IMPORT inlineDEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("IMPORT inlineDEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		inlineDEF = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString inlineDEF field, similar to {@link #setInlineDEF(String)}.
	 * @param newValue is new value for the inlineDEF field.
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IMPORTObject setInlineDEF(SFStringObject newValue)
	{
		setInlineDEF(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IMPORTObject addComments (String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IMPORTObject addComments (String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link IMPORTObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IMPORTObject addComments (CommentsBlock newCommentsBlock)
	{
		commentsList.addAll(newCommentsBlock.toStringList());
		return this;
	}
		
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see X3DObject#toStringXML()
	 * @see X3DObject#toFileXML(String)
	 * @see X3DObject#toFileX3D(String)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	@Override
	public String toStringX3D(int indentLevel)
	{
		boolean hasAttributes = true; // TODO check for non-default attribute values
		boolean      hasChild = !commentsList.isEmpty();

		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<IMPORT"); // start opening tag
		if (hasAttributes)
		{
			if ((!getAS().equals(AS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" AS='").append(new SFStringObject(getAS()).toStringX3D()).append("'");
			}
			if ((!getImportedDEF().equals(IMPORTEDDEF_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" importedDEF='").append(new SFStringObject(getImportedDEF()).toStringX3D()).append("'");
			}
			if ((!getInlineDEF().equals(INLINEDEF_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" inlineDEF='").append(new SFStringObject(getInlineDEF()).toStringX3D()).append("'");
			}
		}
		if ((hasChild)) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag


			// recursively iterate over child element
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</IMPORT>").append("\n"); // finish closing tag
		}
		else
		{
			stringX3D.append("/>").append("\n"); // otherwise finish singleton tag
		}
		return stringX3D.toString();
	}

	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	@Override
	public String toStringClassicVRML(int indentLevel)
	{
		StringBuilder stringClassicVRML = new StringBuilder();
		boolean hasAttributes = true; // TODO further refinement
		boolean      hasChild = !commentsList.isEmpty();
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		stringClassicVRML.append("IMPORT ");
		stringClassicVRML.append(getInlineDEF());
		if (getInlineDEF().equals(INLINEDEF_DEFAULT_VALUE))
		{
			stringClassicVRML.append("TODO_MISSING_INLINEDEF");
		}
		stringClassicVRML.append(".");
		stringClassicVRML.append(getImportedDEF());
		if (getImportedDEF().equals(IMPORTEDDEF_DEFAULT_VALUE))
		{
			stringClassicVRML.append("TODO_MISSING_IMPORTEDDEF");
		}
		if (!getAS().equals(AS_DEFAULT_VALUE))
		{
			stringClassicVRML.append(" AS ").append(SFStringObject.toString(getAS())).append(" ");
		}
		stringClassicVRML.append("\n").append(indent);
		
		return stringClassicVRML.toString();
	}

	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */
	@Override
	public String toStringVRML97(int indentLevel)
	{
		return toStringClassicVRML(indentLevel);
	}

	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue)
	{
		return findElementByNameValue(nameValue, ""); // empty string is wildcard, any element match is allowed
	}
								
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue, String elementName)
	{
		if ((nameValue == null) || nameValue.isEmpty())
		{
			String errorNotice = "findElementByNameValue(\"\", " + elementName + ") cannot use empty string to find a name attribute";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		// no name field available for this element
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node or statement with given name attribute is found, meaning both objects are attached to same scene graph.
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @see #findElementByNameValue(String, String)
	 * @return whether node is found
	 */
	public boolean hasElementByNameValue(String nameValue, String elementName)
	{
		return (findElementByNameValue(nameValue, elementName) != null);
	}

	/**
	 * Recursive method to provide object reference to node by DEF, if found as this node or in a contained node.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same DEF, this method does not handle that case.
	 * @see #findElementByNameValue(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found node, null otherwise
	 */
	@Override
	public X3DConcreteNode findNodeByDEF(String DEFvalue)
	{
		if ((DEFvalue == null) || DEFvalue.isEmpty())
		{
			String errorNotice = "findNodeByDEF(\"\") cannot use empty string to find a name";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node with DEFvalue is found, meaning both objects are attached to same scene graph.
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @see #findNodeByDEF(String)
	 * @return whether node is found
	 */
	public boolean hasNodeByDEF(String DEFvalue)
	{
		return (findNodeByDEF(DEFvalue) != null);
	}

		
	/**
	 * Recursive method to validate this element plus all contained nodes and statements.
	 * @return validation results (if any)
	 */
	@Override
	public String validate()
	{
		validationResult = new StringBuilder(); // prepare for updated results

		setAS(getAS()); // exercise field checks, simple types

		if (getImportedDEF().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " importedDEF field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setImportedDEF(getImportedDEF()); // exercise field checks, simple types

		if (getInlineDEF().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " inlineDEF field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setInlineDEF(getInlineDEF()); // exercise field checks, simple types

		// check IMPORT not overloading DEF name
		
		String errorNotice = new String();
		String IMPORT_description = "<IMPORT inlineDEF='" + inlineDEF + "' importedDEF='" + importedDEF + "' AS='" + AS + "'/>";
										
		if ((findAncestorSceneObject() == null) &&
			!ConfigurationProperties.isCreationConnectionValidationExceptionAllowed())
		{
			errorNotice = ConfigurationProperties.ERROR_NOT_CONNECTED_TO_SCENE_GRAPH + 
						   ": IMPORT is not currently connected to SceneObject scene graph and thus cannot get checked.";
			validationResult.append(IMPORT_description).append("\n").append(errorNotice).append("\n");
		}
		else
		{
			X3DConcreteNode          inlineDEFObject = findAncestorSceneObject().findNodeByDEF(  inlineDEF);
			X3DConcreteNode importedDEF_InlineObject = findAncestorSceneObject().findNodeByDEF(importedDEF);
			X3DConcreteNode          AS_InlineObject = findAncestorSceneObject().findNodeByDEF(         AS);
			
			if (inlineDEF.isEmpty())
			{
				errorNotice += "IMPORT error: no inlineDEF value defined. ";
			}
			else if (inlineDEFObject == null)
			{
				errorNotice += "IMPORT error: corresponding <Inline DEF='" + inlineDEF + "'/> not found. ";
			}
			if      (!AS.isEmpty() && (AS_InlineObject != null))
			{
				errorNotice += "IMPORT collision in parent scene: another " + AS_InlineObject.getElementName() + 
							   " node found with DEF value matching IMPORT AS value. ";
			}
			else if ( AS.isEmpty() && !importedDEF.isEmpty() && (importedDEF_InlineObject != null))
			{
				errorNotice += "IMPORT collision: another " + importedDEF_InlineObject.getElementName() + 
							   " node found with DEF value matching IMPORT importedDEF value. ";
			}					
			if (!errorNotice.isEmpty())
			{
				validationResult.append(IMPORT_description).append("\n").append(errorNotice).append("\n");
				throw new InvalidFieldValueException(IMPORT_description + "\n" + errorNotice);
			}
		}

		return validationResult.toString();
	}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @return null, this method is deprecated and has no effect */
@Deprecated
@Override
public X3DMetadataObject getMetadata()
{
return null;
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public IMPORTObject	setMetadata(X3DMetadataObject newValue)
{
return this; // No action
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public IMPORTObject setDEF(String newValue)
{
return this; // no action
}
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public IMPORTObject setUSE(String newValue)
{
return this; // no action
}
@Deprecated
@Override
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
public IMPORTObject setCssClass(String newValue)
{
return this; // no action
}
}
