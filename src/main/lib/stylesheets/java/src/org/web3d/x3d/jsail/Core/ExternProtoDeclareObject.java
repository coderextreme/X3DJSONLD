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
import java.util.Arrays;

/**
 * ExternProtoDeclare refers to a ProtoDeclare node declaration provided in another file. ExternProtoDeclare interfaces are defined by field statements (and without IS/connect statements). This concrete class represents an X3D ExternProtoDeclare statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: ExternProtoDeclare refers to a ProtoDeclare node declaration provided in another file. ExternProtoDeclare interfaces are defined by &amp;lt;field&amp;gt; statements (without IS/connect statements).
 * <ul>
 *  <li> <i>Hint:</i> ExternProtoDeclare is a definition only, add corresponding ProtoInstance nodes to create new instances. </li> 
 *  <li> <i>Hint:</i> ExternProtoDeclare url is of the form <br> <a href="http://www.web3d.org/x3d/someWorld.x3d#ProtoName" target="_blank">http://www.web3d.org/x3d/someWorld.x3d#ProtoName</a> </li> 
 *  <li> <i>Hint:</i> X3D Scene Authoring Hints, Inlines and Prototypes <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#InlinesPrototypes" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#InlinesPrototypes</a> </li> 
 *  <li> <i>Warning:</i> do not include a &amp;lt;ProtoInterface&amp;gt; element. </li> 
 *  <li> <i>Warning:</i>  setting a value is not allowed for ExternProtoDeclare field declarations, since original ProtoDeclare initializations or local ProtoInstance fieldValue initializations take precedence. </li> 
 * </ul>
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Externalprototypesemantics" target="blank">X3D Abstract Specification: ExternProtoDeclare</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ExternProtoDeclare" target="_blank">X3D Tooltips: ExternProtoDeclare</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class ExternProtoDeclareObject extends org.web3d.x3d.jsail.X3DConcreteStatement implements org.web3d.x3d.sai.Core.X3DChildNode
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String appinfo; // SFString

	private String documentation; // SFString

	private ArrayList<fieldObject> fieldList = new ArrayList<>(); // MFNode acceptable node types: field

	private String name; // SFString

	private ArrayList<String> url = new ArrayList<>(); // MFString

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>ExternProtoDeclare</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "ExternProtoDeclare";

	/** Provides name of this element: <i>ExternProtoDeclare</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>ExternProtoDeclare</i> element: <i>Core</i> */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for the <i>ExternProtoDeclare</i> element: <i>Core</i>
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

	/** MFString field named <i>url</i> has default value equal to an empty list. */
	public static final ArrayList<String> URL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

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
			case "field":
				result = "MFNode";
				break;
			case "name":
				result = "SFString";
				break;
			case "url":
				result = "MFString";
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
			case "field":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "url":
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

	/** Constructor for ExternProtoDeclareObject to initialize member variables with default values. */
	public ExternProtoDeclareObject()
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
		fieldList = new ArrayList<>();
		name = NAME_DEFAULT_VALUE;
		url = new ArrayList<>(URL_DEFAULT_VALUE);

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
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setAppinfo(String newValue)
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
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setAppinfo(SFStringObject newValue)
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
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setDocumentation(String newValue)
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
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setDocumentation(SFStringObject newValue)
	{
		setDocumentation(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of fieldObject results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>field</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to field.
	 * @see org.web3d.x3d.jsail.Core.fieldObject
	 * @return value of field
	 */
	public ArrayList<fieldObject> getFieldList()
	{
		return fieldList;
	}

	/**
	 * Assign fieldObject array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>field</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to field.
	 * @param newValue is new value for the field field.
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setFieldList(ArrayList<fieldObject> newValue)
	{
		fieldList = newValue;
		for (fieldObject arrayElement : fieldList)
		{			// No value is allowed within field having parent ExternProtoDeclare
			if ((!arrayElement.getValue().isEmpty() || !arrayElement.getChildren().isEmpty()) && arrayElement.hasChildrenElements())
			{
				String foundValue;
				if (!arrayElement.getValue().isEmpty())
					 foundValue = arrayElement.getValue();
				else foundValue = arrayElement.getChildren().toString();
			
				throw new InvalidProtoException("ExternProtoDeclare name='" + name +
					"' with field name='" + arrayElement.getName() +
					"' cannot have any initial value (found \"" + foundValue + 
					"\"). Instead use ProtoInstance fieldValue to override the original default ProtoDeclare field value.");
			}

			((X3DConcreteElement) arrayElement).setParentObject(this); // parentTest11
		}
		return this;
	}

	/**
	 * Set single child field node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to field.
	 * @param newValue is new node for the field field (restricted to field)
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setField(fieldObject newValue)
	{
		if (newValue == null)
		{
			fieldList.clear(); // newValueNullClearsFieldReturnThis
			return this;
		}
		// No value is allowed within field having parent ExternProtoDeclare
		if ((!newValue.getValue().isEmpty() || !newValue.getChildren().isEmpty()) && newValue.hasChildrenElements())
		{
			String foundValue;
			if (!newValue.getValue().isEmpty())
				 foundValue = newValue.getValue();
			else foundValue = newValue.getChildren().toString();
			
			throw new InvalidProtoException("ExternProtoDeclare name='" + name +
					"' with field name='" + newValue.getName() +
					"' cannot have any initial value (found \"" + foundValue + 
					"\"). Instead use ProtoInstance fieldValue to override the original default ProtoDeclare field value.");
		}
		for (fieldObject element : fieldList)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		fieldList.clear();
		fieldList.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest7

		return this;
}

	/**
	 * Utility method to clear MFNode value of fieldList field.
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public ExternProtoDeclareObject clearField()
	{
		for (fieldObject element : fieldList)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		fieldList.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>fieldList</i>.
	 * @return whether a concrete statement array or CommentsBlock is available.
	 * @see #getFieldList()
	 */
	public boolean hasField()
	{
		return (fieldList.isEmpty() == false);
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> name of the ExternProtoDeclare (External Prototype Declaration) being referenced.
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
	 * <i>Tooltip:</i> name of the ExternProtoDeclare (External Prototype Declaration) being referenced. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public final ExternProtoDeclareObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ExternProtoDeclare
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ExternProtoDeclare name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ExternProtoDeclare name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of String results from inputOutput MFString field named <i>url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Location and filename of ProtoDeclare source declaration of interest. Multiple locations are more reliable, and including a Web address lets e-mail attachments work.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i> can replace embedded blank(s) in url queries with %20 for each blank character. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, urls <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls</a> </li> 
 * </ul>
	 * @return value of url field
	 */
	public String[] getUrl()
	{
		final String[] valuesArray = new String[url.size()];
		int i = 0;
		for (String arrayElement : url) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Location and filename of ProtoDeclare source declaration of interest. Multiple locations are more reliable, and including a Web address lets e-mail attachments work. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Hint: X3D Scene Authoring Hints, urls http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls
	 * @param newValue is new value for the url field.
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		url.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			url.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString url field, similar to {@link #setUrl(String[])}.
	 * @param newValue is new value for the url field.
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExternProtoDeclareObject setUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Utility method to clear MFString value of url field.
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public ExternProtoDeclareObject clearUrl()
	{
		url.clear(); // reset
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Utility constructor that assigns ExternProtoDeclareObject name after initializing member variables with default values.
	 * @param prototypeName initial name for this ExternProtoDeclareObject statement
	 */
	public ExternProtoDeclareObject (String prototypeName)
	{
		initialize();
		setName(prototypeName); // apply checks
	}

	/**
	 * (<i>Warning:</i> not yet supported in ExternProtoDeclareObject implementation, TODO) Inspect first node within ProtoDeclare ProtoBody to determine node type of corresponding ProtoInstance.
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#PROTOdefinitionsemantics">X3D Abstract Specification: 4.4.4.3 PROTO definition semantics</a>
	 * @see ProtoDeclareObject#getNodeType()
	 * @see ProtoBodyObject#getNodeType()
	 * @see ProtoInstanceObject#getNodeType()
	 * @see SceneObject
		 
	 * @return name of X3D node corresponding to node type for this ExternProtoDeclareObject statement
	 */
	public String getNodeType()
	{
		String errorNotice = new String();
		if ((findAncestorSceneObject() == null) &&
			!ConfigurationProperties.isCreationConnectionValidationExceptionAllowed())
		{
			errorNotice = ConfigurationProperties.ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE + ": " +
						   "ExternProtoDeclare name='" + getName() + "' must first be connected to SceneObject scene graph in order to get checked.";
			validationResult.append(errorNotice).append("\n");
			return errorNotice; // node type not found
		}
		// TODO contained-comment convention for noting node type
		// TODO remote loading of external ProtoDeclare lookup of type
		errorNotice = ConfigurationProperties.ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE + ": " +
					   "ExternProtoDeclare name='" + getName() + "' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.";
		validationResult.append(errorNotice).append("\n");
		return errorNotice; // node type not found
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ExternProtoDeclareObject addComments (String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ExternProtoDeclareObject addComments (String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ExternProtoDeclareObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (!fieldList.isEmpty()) || !commentsList.isEmpty();

		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<ExternProtoDeclare"); // start opening tag
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
			if (((getUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" url='").append(new MFStringObject(getUrl()).toStringX3D()).append("'");
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
			for (fieldObject element : fieldList)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</ExternProtoDeclare>").append("\n"); // finish closing tag
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
		boolean      hasChild = (!fieldList.isEmpty()) || !commentsList.isEmpty();
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		stringClassicVRML.append("EXTERNPROTO ").append(name).append(" [").append("\n").append(indent);
		
		if (!getAppinfo().equals(APPINFO_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
		{
			stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter);
			stringClassicVRML.append(" # [appinfo] ").append("\"").append(SFStringObject.toString(getAppinfo())).append("\"");
		}
		if (!getDocumentation().equals(DOCUMENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
		{
			stringClassicVRML.append("\n").append(indent).append(indentCharacter);
			stringClassicVRML.append("# [documentation] ").append("\"").append(SFStringObject.toString(getDocumentation())).append("\"").append("\n").append(indent).append(indentCharacter);
		}
		if (getUrl().length > 0)
		{
			stringClassicVRML.append("\n").append(indent).append(indentCharacter);
			stringClassicVRML.append("url ").append("[ ").append(MFStringObject.toString(getUrl())).append(" ]");
		}
				
		// recursively iterate over child elements
		for (fieldObject element : fieldList)
		{
			stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel));
		}
		if (!commentsList.isEmpty())
		{
			CommentsBlock commentsBlock = new CommentsBlock(commentsList);
			stringClassicVRML.append(commentsBlock.toStringClassicVRML(indentLevel));
		}
		stringClassicVRML.append("]").append("\n").append(indent);
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
		for (fieldObject element : fieldList)
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if ((referenceElement != null))
					return referenceElement;
			}
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

		
		setUrl(getUrl()); // exercise field checks, simple types

		for (fieldObject element : fieldList) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setFieldList(getFieldList()); // also test getter/setter validation

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

	/**
	 * Add field to fieldList for this ExternProtoDeclareObject
	 * @param newField is field to add
	 * @return {@link ExternProtoDeclareObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public ExternProtoDeclareObject addField (fieldObject newField)
	{
		String errorNotice = new String();
		for (fieldObject priorField : fieldList) // check for field with duplicate name
		{
			if (priorField.getName().equals(newField.getName()))
			{
				errorNotice = "Illegal addField() invocation for ExternProtoDeclareObject  name='" + getName() +
					"', trying to add field with duplicate name='" + newField.getName() + "'";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice);
			}
		}
		String fieldValidationResult = newField.validate();
		if (!fieldValidationResult.trim().isEmpty())
		{
			errorNotice = "Illegal addField() invocation for ExternProtoDeclareObject  name='" + getName() +
					"', newField.validation() failure: " + fieldValidationResult;
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldException(errorNotice);
		}
		fieldList.add(newField);
		newField.setParentObject(this);
		return this;
	}
		
	/**
	 * Find contained field statement by name, if present.
	 * @param fieldName is name attribute for field of interest
	 * @return fieldObject reference of interest, null otherwise
	 */
	public fieldObject findFieldByName (String fieldName)
	{
		for (fieldObject element : fieldList)
		{
			 if (element.getName().equalsIgnoreCase(fieldName))
				 return element;
		}
		return null;
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
public ExternProtoDeclareObject	setMetadata(X3DMetadataObject newValue)
{
return this; // No action
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public ExternProtoDeclareObject setDEF(String newValue)
{
return this; // no action
}
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public ExternProtoDeclareObject setUSE(String newValue)
{
return this; // no action
}
@Deprecated
@Override
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
public ExternProtoDeclareObject setCssClass(String newValue)
{
return this; // no action
}
}
