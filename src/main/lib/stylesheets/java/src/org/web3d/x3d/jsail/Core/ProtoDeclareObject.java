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
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * ProtoDeclare defines new Prototype nodes. Nested ProtoDeclares and ProtoInstances are allowed by the specification. This concrete class represents an X3D ProtoDeclare statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: ProtoDeclare is a Prototype Declaration, defining a new node made up of other node(s). ProtoDeclare contains ProtoInterface and ProtoBody statements.
 * <ul>
 *  <li> <i>Hint:</i> ProtoInterface contains field interfaces using the &amp;lt;field&amp;gt; tag, then ProtoBody contains the X3D nodes making up this prototype. </li> 
 *  <li> <i>Hint:</i> initial scene node in a ProtoDeclare/ProtoBody statement determines this prototype's node type. </li> 
 *  <li> <i>Hint:</i> ProtoDeclare is a definition only, add corresponding ProtoInstance nodes later in a scene to create new node instances. </li> 
 *  <li> <i>Hint:</i> Nested ProtoInstance and ProtoDeclare statements are allowed within a ProtoDeclare/ProtoBody. </li> 
 *  <li> <i>Warning:</i> a ProtoInstance node may not be instantiated inside its own ProtoDeclare or ExternProtoDeclare declaration (i.e. recursive prototypes are illegal). </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Inlines and Prototypes <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#InlinesPrototypes" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#InlinesPrototypes</a> </li> 
 * </ul>
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#PrototypeAndFieldDeclarationSyntax" target="blank">X3D Abstract Specification: ProtoDeclare</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ProtoDeclare" target="_blank">X3D Tooltips: ProtoDeclare</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#InlinesPrototypes" target="_blank">X3D Scene Authoring Hints: InlinesPrototypes</a>
 */
public class ProtoDeclareObject extends org.web3d.x3d.jsail.X3DConcreteStatement implements org.web3d.x3d.sai.Core.X3DChildNode
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String appinfo; // SFString

	private String documentation; // SFString

	private String name; // SFString

	private ProtoBodyObject ProtoBody; // SFNode acceptable node types: ProtoBody

	private ProtoInterfaceObject ProtoInterface; // SFNode acceptable node types: ProtoInterface

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>ProtoDeclare</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "ProtoDeclare";

	/** Provides name of this element: <i>ProtoDeclare</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>ProtoDeclare</i> element: <i>Core</i> */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for the <i>ProtoDeclare</i> element: <i>Core</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Core</i> component level for this element: <i>2</i> */
	public static final int LEVEL = 2;

	/** Provides default X3D component level for this element: <i>2</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFString field named <i>appinfo</i> has default value equal to an empty string. */
	public static final String APPINFO_DEFAULT_VALUE = "";

	/** SFString field named <i>documentation</i> has default value equal to an empty string. */
	public static final String DOCUMENTATION_DEFAULT_VALUE = "";

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

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
			case "appinfo":
				result = "SFString";
				break;
			case "documentation":
				result = "SFString";
				break;
			case "name":
				result = "SFString";
				break;
			case "ProtoBody":
				result = "SFNode";
				break;
			case "ProtoInterface":
				result = "SFNode";
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
		// now check author-defined fields
		fieldObject fieldDeclaration = this.findFieldByName(fieldName);
		if (fieldDeclaration != null)
			result = fieldDeclaration.getType(); // found it!
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
			case "appinfo":
				result = "inputOutput";
				break;
			case "documentation":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "ProtoBody":
				result = "inputOutput";
				break;
			case "ProtoInterface":
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
		// now check author-defined fields
		fieldObject fieldDeclaration = this.findFieldByName(fieldName);
		if (fieldDeclaration != null)
			result = fieldDeclaration.getAccessType(); // found it!
		return result;
	}

	/** Constructor for ProtoDeclareObject to initialize member variables with default values. */
	public ProtoDeclareObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		appinfo = APPINFO_DEFAULT_VALUE;
		documentation = DOCUMENTATION_DEFAULT_VALUE;
		name = NAME_DEFAULT_VALUE;
		ProtoBody = null; // clear out any prior node
		ProtoInterface = null; // clear out any prior node

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>appinfo</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Application information to provide simple description usable as a tooltip, similar to XML Schema appinfo tag.  * <br>

	 * @return value of appinfo field
	 */
	public String getAppinfo()
	{
		return appinfo;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>appinfo</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Application information to provide simple description usable as a tooltip, similar to XML Schema appinfo tag.
	 * @param newValue is new value for the appinfo field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ProtoDeclareObject setAppinfo(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		appinfo = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString appinfo field, similar to {@link #setAppinfo(String)}.
	 * @param newValue is new value for the appinfo field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ProtoDeclareObject setAppinfo(SFStringObject newValue)
	{
		setAppinfo(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>documentation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Documentation url for further information, similar to XML Schema documentation tag.  * <br>

	 * @return value of documentation field
	 */
	public String getDocumentation()
	{
		return documentation;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>documentation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Documentation url for further information, similar to XML Schema documentation tag.
	 * @param newValue is new value for the documentation field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ProtoDeclareObject setDocumentation(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		documentation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString documentation field, similar to {@link #setDocumentation(String)}.
	 * @param newValue is new value for the documentation field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ProtoDeclareObject setDocumentation(SFStringObject newValue)
	{
		setDocumentation(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> name of this prototype being declared.
 * <ul>
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> name of this prototype being declared. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public final ProtoDeclareObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ProtoDeclare
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ProtoDeclare name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ProtoDeclare name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ProtoDeclareObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide ProtoBodyObject instance (using a properly typed node) from inputOutput SFNode field <i>ProtoBody</i>.
	 * @return value of ProtoBody field
	 */
	public ProtoBodyObject getProtoBody()
	{
		return ProtoBody;
	}

	/**
	 * Assign ProtoBodyObject instance (using a properly typed node) to inputOutput SFNode field <i>ProtoBody</i>.
	 * @param newValue is new value for the ProtoBody field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ProtoDeclareObject setProtoBody(ProtoBodyObject newValue)
	{
		ProtoBody = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) ProtoBody).setParentObject(this); // parentTest15
		}
		return this;
	}

	/**
	 * Utility method to clear SFNode value of ProtoBody field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ProtoDeclareObject clearProtoBody()
	{
		((X3DConcreteElement) ProtoBody).clearParentObject(); // remove references to facilitate Java memory management
		ProtoBody = null; // reset SFNode field
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>ProtoBody</i>.
	 * @return whether a concrete statement or CommentsBlock is available.
	 * @see #getProtoBody()
	 */
	public boolean hasProtoBody()
	{
		return (ProtoBody != null);
	}
	/**
	 * Provide ProtoInterfaceObject instance (using a properly typed node) from inputOutput SFNode field <i>ProtoInterface</i>.
	 * @return value of ProtoInterface field
	 */
	public ProtoInterfaceObject getProtoInterface()
	{
		return ProtoInterface;
	}

	/**
	 * Assign ProtoInterfaceObject instance (using a properly typed node) to inputOutput SFNode field <i>ProtoInterface</i>.
	 * @param newValue is new value for the ProtoInterface field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ProtoDeclareObject setProtoInterface(ProtoInterfaceObject newValue)
	{
		ProtoInterface = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) ProtoInterface).setParentObject(this); // parentTest15
		}
		return this;
	}

	/**
	 * Utility method to clear SFNode value of ProtoInterface field.
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ProtoDeclareObject clearProtoInterface()
	{
		((X3DConcreteElement) ProtoInterface).clearParentObject(); // remove references to facilitate Java memory management
		ProtoInterface = null; // reset SFNode field
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>ProtoInterface</i>.
	 * @return whether a concrete statement or CommentsBlock is available.
	 * @see #getProtoInterface()
	 */
	public boolean hasProtoInterface()
	{
		return (ProtoInterface != null);
	}

	// Additional utility methods for this class ==============================

	/**
	 * Utility constructor that assigns ProtoDeclareObject name after initializing member variables with default values.
	 * @param prototypeName initial name for this ProtoDeclareObject statement
	 */
	public ProtoDeclareObject (String prototypeName)
	{
		initialize();
		setName(prototypeName); // apply checks
	}

	/**
	 * Inspect first node within ProtoDeclare ProtoBody to determine node type of corresponding ProtoInstance, local copy maintained in ProtoBody <i>primaryNode</i>.
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#PROTOdefinitionsemantics">X3D Abstract Specification: 4.4.4.3 PROTO definition semantics</a>
	 * @see ProtoBodyObject#getNodeType()
	 * @see ExternProtoDeclareObject#getNodeType()
	 * @see ProtoInstanceObject#getNodeType()
	 * @see SceneObject
		 
	 * @return name of X3D node corresponding to node type for this ProtoDeclareObject statement
	 */
	public String getNodeType()
	{
		String errorNotice = new String();
		if (ProtoBody != null)
			 return ProtoBody.getNodeType();
		else 
		{
			errorNotice = ConfigurationProperties.ERROR_UNKNOWN_PROTODECLARE_NODE_TYPE + ": " +
						   "ProtoDeclare name='" + getName() + "' has no ProtoBody and thus has no node type yet.";
			validationResult.append(errorNotice).append("\n");
			return errorNotice; // node type not found
		}
	}

	/**
	 * Find contained field statement by name, if present in contained ProtoInterface.
	 * @param fieldName is name attribute for field of interest
	 * @return fieldObject reference of interest, null otherwise
	 */
	public fieldObject findFieldByName (String fieldName)
	{
		if  (hasProtoInterface())
			 return getProtoInterface().findFieldByName(fieldName);
		else return null;
	}
	/**
	 * Determine if field statement is present in contained ProtoInterface.
	 * @param fieldName is name attribute for field of interest
	 * @return whether field is found
	 */
	public boolean hasField (String fieldName)
	{
		return (findFieldByName(fieldName) != null);
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ProtoDeclareObject addComments (String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ProtoDeclareObject addComments (String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link ProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ProtoDeclareObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (ProtoBody != null) || (ProtoInterface != null) || !commentsList.isEmpty();

		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<ProtoDeclare"); // start opening tag
		if (hasAttributes)
		{
			if (!getName().equals(NAME_DEFAULT_VALUE))
			{
				stringX3D.append(" name='").append(SFStringObject.toString(getName())).append("'");
			}
			
			if ((!getAppinfo().equals(APPINFO_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" appinfo='").append(new SFStringObject(getAppinfo()).toStringX3D()).append("'");
			}
			if ((!getDocumentation().equals(DOCUMENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" documentation='").append(new SFStringObject(getDocumentation()).toStringX3D()).append("'");
			}
		}
		if ((hasChild)) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag


			// recursively iterate over child elements
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			if      (ProtoInterface != null)
			{
				stringX3D.append(((X3DConcreteElement)ProtoInterface).toStringX3D(indentLevel + indentIncrement));
			}
			if      (ProtoBody != null)
			{
				stringX3D.append(((X3DConcreteElement)ProtoBody).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</ProtoDeclare>").append("\n"); // finish closing tag
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
		boolean      hasChild = (ProtoBody != null) || (ProtoInterface != null) || !commentsList.isEmpty();
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		stringClassicVRML.append("PROTO ").append(name).append(" [").append("\n").append(indent);
		
		if (!getAppinfo().equals(APPINFO_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
		{
			stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter);
			stringClassicVRML.append(" # [appinfo] ").append("\"").append(SFStringObject.toString(getAppinfo())).append("\"");
		}
		if (!getDocumentation().equals(DOCUMENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
		{
			stringClassicVRML.append("\n").append(indent).append(indentCharacter).append(indentCharacter);
			stringClassicVRML.append("# [documentation] ").append("\"").append(SFStringObject.toString(getDocumentation())).append("\"").append("\n").append(indent).append(indentCharacter);
		}
				
		// recursively iterate over child elements
		if (ProtoInterface != null)
		{
			stringClassicVRML.append("\n").append(indent).append(indentCharacter).append(indentCharacter);
			stringClassicVRML.append(ProtoInterface.toStringClassicVRML(indentLevel + indentIncrement));
			for (fieldObject nextField : ProtoInterface.getFieldList())
			{
				stringClassicVRML.append(nextField.toStringClassicVRML(indentLevel + indentIncrement));
			}
		}
		if (!commentsList.isEmpty())
		{
			CommentsBlock commentsBlock = new CommentsBlock(commentsList);
			stringClassicVRML.append(commentsBlock.toStringClassicVRML(indentLevel));
		}
		stringClassicVRML.append("] {").append("\n").append(indent);
					
		if (ProtoBody != null)
		{
			stringClassicVRML.append("\n").append(indent).append(indentCharacter).append(indentCharacter);
			stringClassicVRML.append(ProtoBody.toStringClassicVRML(indentLevel + indentIncrement));
			stringClassicVRML.append("\n").append(indent).append(indentCharacter).append(indentCharacter);
			for (X3DNode element : ProtoBody.getChildren())
			{
				stringClassicVRML.append(((X3DConcreteElement) element).toStringClassicVRML(indentLevel + indentIncrement));
			}
		}
		stringClassicVRML.append("}").append("\n").append(indent);

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
		if (elementName == null)
			elementName = "";
		if (getName().equals(nameValue) &&
			(elementName.isEmpty() || elementName.equals(getElementName())))
			return this;
		X3DConcreteElement referenceElement;
		if (ProtoBody != null)
		{
			referenceElement = ((X3DConcreteElement) ProtoBody).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (ProtoInterface != null)
		{
			referenceElement = ((X3DConcreteElement) ProtoInterface).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
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
		X3DConcreteNode referenceNode;
		if (ProtoBody != null)
		{
			referenceNode = ((X3DConcreteElement) ProtoBody).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (ProtoInterface != null)
		{
			referenceNode = ((X3DConcreteElement) ProtoInterface).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
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

		setAppinfo(getAppinfo()); // exercise field checks, simple types

		setDocumentation(getDocumentation()); // exercise field checks, simple types

		if (getName().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " name field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setName(getName()); // exercise field checks, simple types

		if (ProtoBody != null)
		{
			setProtoBody(getProtoBody());
			((X3DConcreteElement) ProtoBody).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) ProtoBody).getValidationResult());
		}
		if (ProtoInterface != null)
		{
			setProtoInterface(getProtoInterface());
			((X3DConcreteElement) ProtoInterface).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) ProtoInterface).getValidationResult());
		}
		if (findAncestorSceneObject().findElementByNameValue (getName(), ProtoInstanceObject.NAME) == null)
		{
			String warningNotice = ConfigurationProperties.WARNING_PROTOINSTANCE_NOT_FOUND + 
									", " + NAME + " " + getName() + " has no corresponding " +
									ProtoInstanceObject.NAME + " attached to the scene graph. ";
			validationResult.append(warningNotice).append("\n");
		}
		// TODO pass through allowed containerField values array?

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
public ProtoDeclareObject	setMetadata(X3DMetadataObject newValue)
{
return this; // No action
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public ProtoDeclareObject setDEF(String newValue)
{
return this; // no action
}
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public ProtoDeclareObject setUSE(String newValue)
{
return this; // no action
}
@Deprecated
@Override
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
public ProtoDeclareObject setCssClass(String newValue)
{
return this; // no action
}
}
