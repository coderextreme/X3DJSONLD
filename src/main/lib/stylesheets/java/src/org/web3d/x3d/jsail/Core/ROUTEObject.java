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

package org.web3d.x3d.jsail.Core;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.*; // again making sure #2

import java.util.Arrays;
import org.web3d.x3d.sai.Core.*;  // making sure #3
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;

import org.web3d.x3d.jsail.fields.*; // making sure #4

/**
 * ROUTE connects output fields of event-producing nodes to input fields of event-consuming nodes. This concrete class represents an X3D ROUTE statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: ROUTE connects output fields of event-producing nodes to input fields of event-consuming nodes.
 * <ul>
 *  <li> <i>Warning:</i> each ROUTE must follow the DEF definition of both event-source and event-target nodes. </li> 
 *  <li> <i>Warning:</i> strongly typed event checking means that data type (SFInt32, MFVec3f, etc.) must match identically for both event-source and event-target fields. </li> 
 *  <li> <i>Warning:</i> event-source fields can have accessType outputOnly or inputOutput, while event-target nodes can have accessType inputOnly or inputOutput. </li> 
 *  <li> <i>Hint:</i>  event tracing supports animation debugging <br> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07-EventAnimationInterpolation/Chapter07-EventAnimationInterpolation-EventTracing.pdf" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07-EventAnimationInterpolation/Chapter07-EventAnimationInterpolation-EventTracing.pdf</a> </li> 
 * </ul>
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#ModifyingObjectsRoutes" target="blank">X3D Abstract Specification: ROUTE</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ROUTE" target="_blank">X3D Tooltips: ROUTE</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class ROUTEObject extends org.web3d.x3d.jsail.X3DConcreteStatement implements org.web3d.x3d.sai.Core.X3DChildNode
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String fromField; // SFString

	private String fromNode; // SFString

	private String toField; // SFString

	private String toNode; // SFString

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>ROUTE</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "ROUTE";

	/** Provides name of this element: <i>ROUTE</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>ROUTE</i> element: <i>Core</i> */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for the <i>ROUTE</i> element: <i>Core</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Core</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFString field named <i>fromField</i> has default value equal to an empty string. */
	public static final String FROMFIELD_DEFAULT_VALUE = "";

	/** SFString field named <i>fromNode</i> has default value equal to an empty string. */
	public static final String FROMNODE_DEFAULT_VALUE = "";

	/** SFString field named <i>toField</i> has default value equal to an empty string. */
	public static final String TOFIELD_DEFAULT_VALUE = "";

	/** SFString field named <i>toNode</i> has default value equal to an empty string. */
	public static final String TONODE_DEFAULT_VALUE = "";

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
			case "fromField":
				result = "SFString";
				break;
			case "fromNode":
				result = "SFString";
				break;
			case "toField":
				result = "SFString";
				break;
			case "toNode":
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
			case "fromField":
				result = "inputOutput";
				break;
			case "fromNode":
				result = "inputOutput";
				break;
			case "toField":
				result = "inputOutput";
				break;
			case "toNode":
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

	/** Constructor for ROUTEObject to initialize member variables with default values. */
	public ROUTEObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		fromField = FROMFIELD_DEFAULT_VALUE;
		fromNode = FROMNODE_DEFAULT_VALUE;
		toField = TOFIELD_DEFAULT_VALUE;
		toNode = TONODE_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>fromField</i>.
	 * <br><br>
	 * <i>Tooltip:</i> fromField is the field name in the source node which is originating an event.
 * <ul>
 *  <li> <i>Hint:</i> if (and only if) corresponding field has accessType inputOutput, author has option to append "_changed" suffix to field name - both forms are functionally equivalent. </li> 
 *  <li> <i>Warning:</i> do not define an event connection using DEF, USE, class or containerField as literal values, since they are not fields in a node that can be modified by events at run time. </li> 
 *  <li> <i>Warning:</i> if corresponding field has accessType outputOnly or inputOnly, do not modify the set_ prefix or the _changed suffix on the field name. </li> 
 *  <li> <i>Hint:</i> X3D Abstract Specification 4.4.2.2 Field Semantics <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#FieldSemantics" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#FieldSemantics</a> </li> 
 *  <li> <i>Hint:</i>  X3D Compressed Binary Encoding, 4.2.3 X3D Canonical Form <br> <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm" target="_blank">http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm</a> </li> 
 * </ul>
	 * @return value of fromField field
	 */
	public String getFromField()
	{
		return fromField;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>fromField</i>.
	 * <br><br>
	 * <i>Tooltip:</i> fromField is the field name in the source node which is originating an event. Hint: if (and only if) corresponding field has accessType inputOutput, author has option to append "_changed" suffix to field name - both forms are functionally equivalent. Warning: do not define an event connection using DEF, USE, class or containerField as literal values, since they are not fields in a node that can be modified by events at run time. Warning: if corresponding field has accessType outputOnly or inputOnly, do not modify the set_ prefix or the _changed suffix on the field name. Hint: X3D Abstract Specification 4.4.2.2 Field Semantics http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#FieldSemantics Hint: X3D Compressed Binary Encoding, 4.2.3 X3D Canonical Form http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm
	 * @param newValue is new value for the fromField field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setFromField(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ROUTE
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ROUTE fromField newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ROUTE fromField newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		fromField = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString fromField field, similar to {@link #setFromField(String)}.
	 * @param newValue is new value for the fromField field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setFromField(SFStringObject newValue)
	{
		setFromField(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>fromNode</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  fromNode is the DEF name of the node originating an event.  * <br>

	 * @return value of fromNode field
	 */
	public String getFromNode()
	{
		return fromNode;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>fromNode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> fromNode is the DEF name of the node originating an event.
	 * @param newValue is new value for the fromNode field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setFromNode(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ROUTE
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ROUTE fromNode newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ROUTE fromNode newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		fromNode = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString fromNode field, similar to {@link #setFromNode(String)}.
	 * @param newValue is new value for the fromNode field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setFromNode(SFStringObject newValue)
	{
		setFromNode(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>toField</i>.
	 * <br><br>
	 * <i>Tooltip:</i> toField is the field name in the destination node which is receiving an event.
 * <ul>
 *  <li> <i>Hint:</i> if (and only if) corresponding field has accessType inputOutput, author has option to prepend "set_" prefix to field name - both forms are functionally equivalent. </li> 
 *  <li> <i>Warning:</i> do not define an event connection using DEF, USE, class or containerField as literal values, since they are not fields in a node that can be modified by events at run time. </li> 
 *  <li> <i>Warning:</i> if corresponding field has accessType outputOnly or inputOnly, do not modify the set_ prefix or the _changed suffix on the field name. </li> 
 *  <li> <i>Hint:</i> X3D Abstract Specification 4.4.2.2 Field Semantics <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#FieldSemantics" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#FieldSemantics</a> </li> 
 *  <li> <i>Hint:</i>  X3D Compressed Binary Encoding, 4.2.3 X3D Canonical Form <br> <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm" target="_blank">http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm</a> </li> 
 * </ul>
	 * @return value of toField field
	 */
	public String getToField()
	{
		return toField;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>toField</i>.
	 * <br><br>
	 * <i>Tooltip:</i> toField is the field name in the destination node which is receiving an event. Hint: if (and only if) corresponding field has accessType inputOutput, author has option to prepend "set_" prefix to field name - both forms are functionally equivalent. Warning: do not define an event connection using DEF, USE, class or containerField as literal values, since they are not fields in a node that can be modified by events at run time. Warning: if corresponding field has accessType outputOnly or inputOnly, do not modify the set_ prefix or the _changed suffix on the field name. Hint: X3D Abstract Specification 4.4.2.2 Field Semantics http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#FieldSemantics Hint: X3D Compressed Binary Encoding, 4.2.3 X3D Canonical Form http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm
	 * @param newValue is new value for the toField field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setToField(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ROUTE
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ROUTE toField newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ROUTE toField newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		toField = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString toField field, similar to {@link #setToField(String)}.
	 * @param newValue is new value for the toField field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setToField(SFStringObject newValue)
	{
		setToField(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>toNode</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  toNode is the DEF name of the destination node receiving an event.  * <br>

	 * @return value of toNode field
	 */
	public String getToNode()
	{
		return toNode;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>toNode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> toNode is the DEF name of the destination node receiving an event.
	 * @param newValue is new value for the toNode field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setToNode(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ROUTE
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ROUTE toNode newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ROUTE toNode newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		toNode = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString toNode field, similar to {@link #setToNode(String)}.
	 * @param newValue is new value for the toNode field.
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ROUTEObject setToNode(SFStringObject newValue)
	{
		setToNode(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ROUTEObject addComments (String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ROUTEObject addComments (String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link ROUTEObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ROUTEObject addComments (CommentsBlock newCommentsBlock)
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

		stringX3D.append(indent).append("<ROUTE"); // start opening tag
		if (hasAttributes)
		{
			if ((!getFromField().equals(FROMFIELD_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" fromField='").append(new SFStringObject(getFromField()).toStringX3D()).append("'");
			}
			if ((!getFromNode().equals(FROMNODE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" fromNode='").append(new SFStringObject(getFromNode()).toStringX3D()).append("'");
			}
			if ((!getToField().equals(TOFIELD_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" toField='").append(new SFStringObject(getToField()).toStringX3D()).append("'");
			}
			if ((!getToNode().equals(TONODE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" toNode='").append(new SFStringObject(getToNode()).toStringX3D()).append("'");
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
			stringX3D.append(indent).append("</ROUTE>").append("\n"); // finish closing tag
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

		stringClassicVRML.append("ROUTE ").append(fromNode).append(".").append(fromField)
			.append(" TO ").append(toNode).append(".").append(toField).append("\n").append(indent);
		
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

		if (getFromField().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " fromField field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setFromField(getFromField()); // exercise field checks, simple types

		if (getFromNode().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " fromNode field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setFromNode(getFromNode()); // exercise field checks, simple types

		if (getToField().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " toField field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setToField(getToField()); // exercise field checks, simple types

		if (getToNode().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " toNode field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setToNode(getToNode()); // exercise field checks, simple types

		// NMTOKEN checks for allowed characters and no whitespace are provided when
		// setting name of fromNode, fromField, toNode, toField

		// Now check ROUTE node-type validity; note that each ROUTE must already be connected to scene graph
		
		String errorNotice = new String();
		String ROUTE_description = "<ROUTE fromNode='" + fromNode + "' fromField='" + fromField + 
										  "' toNode='" +   toNode +   "' toField='" +   toField + "'/>";
		
		X3DConcreteNode fromNodeObject = null;
		X3DConcreteNode   toNodeObject = null;	
													
		if ((findAncestorSceneObject() == null) && (findAncestorProtoBody() == null) &&
			!ConfigurationProperties.isCreationConnectionValidationExceptionAllowed())
		{
			errorNotice = ConfigurationProperties.ERROR_NOT_CONNECTED_TO_SCENE_GRAPH + 
						   ", ROUTE is not currently connected to scene graph and thus fromNode/toNode fields cannot be checkedmust first be connected to scene graph in order to get checked. ";
			validationResult.append(ROUTE_description).append("\n").append(errorNotice).append("\n");
		}
		if (getFromField().isEmpty())
		{
			errorNotice = " ROUTE has no DEF value for source node since fromNode value is empty. ";
			validationResult.append(errorNotice).append("\n");
		}
		else if (findAncestorProtoBody() != null) // look only within ProtoBody, if appropriate
		{
			fromNodeObject = findAncestorProtoBody().findNodeByDEF(getFromNode());
			if (fromNodeObject == null)
			{
				errorNotice = " ROUTE fromNode='" + getFromNode() + "' was not found within connected ProtoBody. ";
				validationResult.append(errorNotice).append("\n");
			}
		}
		else if (findAncestorSceneObject() != null) // otherwise look within Scene
		{
			fromNodeObject = findAncestorSceneObject().findNodeByDEF(getFromNode());
			if (fromNodeObject == null)
			{
				errorNotice = " ROUTE fromNode='" + getFromNode() + "' was not found in connected scene graph. ";
				validationResult.append(errorNotice).append("\n");
			}
		}
		if (getToField().isEmpty())
		{
			errorNotice = " ROUTE has no DEF value for target node since toNode value is empty. ";
			validationResult.append(errorNotice).append("\n");
		}
		else if (findAncestorProtoBody() != null) // look only within ProtoBody, if appropriate
		{
			toNodeObject = findAncestorProtoBody().findNodeByDEF(getToNode());
			if (toNodeObject == null)
			{
				errorNotice = " ROUTE toNode='" + getToNode() + "' was not found within connected ProtoBody. ";
				validationResult.append(errorNotice).append("\n");
			}
		}
		else if (findAncestorSceneObject() != null) // otherwise look within Scene
		{
			toNodeObject = findAncestorSceneObject().findNodeByDEF(getToNode());
			if (toNodeObject == null)
			{
				errorNotice = " ROUTE toNode='" + getToNode() + "' was not found in connected scene graph. ";
				validationResult.append(errorNotice).append("\n");
			}
		}
		if (fromNode.equals(toNode) && fromField.equals(toField)) // self-ROUTE check
		{
			errorNotice = " ROUTE source and destination are identical. ";
			validationResult.append(errorNotice).append("\n");
		}
		if (!errorNotice.isEmpty() || (fromNodeObject == null) || (toNodeObject == null))
		{
			validationResult.append(ROUTE_description).append("\n");
		}
		else // further checking
		{
			String  fromNodeType, toNodeType, fromFieldType, toFieldType, fromFieldAccessType, toFieldAccessType = new String();

			 fromNodeType = fromNodeObject.getClass().getSimpleName().split("Object")[0]; // substring-before Object
			   toNodeType =   toNodeObject.getClass().getSimpleName().split("Object")[0]; // substring-before Object

			      fromFieldType = fromNodeObject.getFieldType (fromField);
			        toFieldType =   toNodeObject.getFieldType (  toField);
			fromFieldAccessType = fromNodeObject.getAccessType(fromField);
			  toFieldAccessType =   toNodeObject.getAccessType(  toField);
										
			ROUTE_description = "ROUTE details: FROM " + 
				fromNode + "." + fromField + " [" + fromNodeType + "," + fromFieldType + "," + fromFieldAccessType + "] TO " +
				  toNode + "." +   toField + " [" +   toNodeType + "," +   toFieldType + "," +   toFieldAccessType + "]";

			if (!fromFieldType.equals(toFieldType))
			{
				errorNotice = " ROUTE has source-destination type mismatch, " + 
							   "fromField='" + fromField + "' source and toField='" + toField + "' destination have different types. ";
			}
			if (!fromFieldAccessType.equals(fieldObject.ACCESSTYPE_INPUTOUTPUT) &&
				!fromFieldAccessType.equals(fieldObject.ACCESSTYPE_OUTPUTONLY))
			{
				errorNotice = " ROUTE fromField (source) event can only have accessType='inputOutput' or accessType='outputOnly'. ";
			}
			if (  !toFieldAccessType.equals(fieldObject.ACCESSTYPE_INPUTOUTPUT) &&
				  !toFieldAccessType.equals(fieldObject.ACCESSTYPE_INPUTONLY))
			{
				errorNotice = " ROUTE toField (destination) event can only have accessType='inputOutput' or accessType='inputOnly'. ";
			}
			if (!errorNotice.isEmpty())
			{
				validationResult.append(errorNotice).append("\n").append(ROUTE_description).append("\n");
				throw new InvalidFieldValueException(ROUTE_description + "\n" + errorNotice);
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
public ROUTEObject	setMetadata(X3DMetadataObject newValue)
{
return this; // No action
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public ROUTEObject setDEF(String newValue)
{
return this; // no action
}
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public ROUTEObject setUSE(String newValue)
{
return this; // no action
}
@Deprecated
@Override
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
public ROUTEObject setCssClass(String newValue)
{
return this; // no action
}
}
