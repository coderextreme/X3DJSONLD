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
 * Functional summary: a fieldValue statement re-initializes the default value of a field in a ProtoInstance. Each fieldValue statement can contain either attribute-value or node content. This concrete class represents an X3D fieldValue statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: A fieldValue statement re-initializes the default value of a field in a parent ProtoInstance. Note that a field statement with a matching name must be already defined by the corresponding ProtoDeclare or ExternProtoDeclare statement.
 * <ul>
 *  <li> <i>Hint:</i> first add a parent ProtoInstance node before defining a new fieldValue. </li> 
 *  <li> <i>Warning:</i> fieldValue content type must match the content type defined in the corresponding ProtoDeclare or ExternProtoDeclare field statement. </li> 
 *  <li> <i>Hint:</i>  in addition to defining a simple-type value attribute, a fieldValue statement can alternatively hold initializing SFNode/MFNode values as contained node(s). </li> 
 * </ul>
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#ProtoInstanceAndFieldValueStatement" target="blank">X3D Abstract Specification: fieldValue</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class fieldValueObject extends org.web3d.x3d.jsail.X3DConcreteStatement
{
	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private ArrayList<X3DNode> children = new ArrayList<>(); // MFNode acceptable node types: X3DNode

	private String name; // SFString

	private String value; // SFString

	/** Default boolean value for this field type is an empty array. */
	private static final boolean[] DEFAULT_VALUE_BOOLEAN = new boolean[0]; // initialize as empty array

	/** boolean array, typed value holder */
	private boolean[] valueArrayBoolean;

	/** Default integer value for this field type is an empty array. */
	private static final int[] DEFAULT_VALUE_INTEGER = new int[0]; // initialize as empty array

	/** int array, typed value holder */
	private int[] valueArrayInteger;

	/** Default float value for this field type is an empty array. */
	private static final float[] DEFAULT_VALUE_FLOAT = new float[0]; // initialize as empty array
								
	/** float array, typed value holder */	
	private float[] valueArrayFloat;
									
	/** Default double value for this field type is an empty array. */
	private static final double[] DEFAULT_VALUE_DOUBLE = new double[0]; // initialize as empty array
									
	/** double array, typed value holder */	
	private double[] valueArrayDouble;


	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>fieldValue</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "fieldValue";

	/** Provides name of this element: <i>fieldValue</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>fieldValue</i> element: <i>Core</i> */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for the <i>fieldValue</i> element: <i>Core</i>
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

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

	/** SFString field named <i>value</i> has default value equal to an empty string. */
	public static final String VALUE_DEFAULT_VALUE = "";

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
			case "children":
				result = "MFNode";
				break;
			case "name":
				result = "SFString";
				break;
			case "value":
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
			case "children":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "value":
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

	/** Constructor for fieldValueObject to initialize member variables with default values. */
	public fieldValueObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		children = new ArrayList<>();
		name = NAME_DEFAULT_VALUE;
		value = VALUE_DEFAULT_VALUE;

		valueArrayBoolean = java.util.Arrays.copyOf(DEFAULT_VALUE_BOOLEAN, DEFAULT_VALUE_BOOLEAN.length); // must be separate copy
		valueArrayInteger = java.util.Arrays.copyOf(DEFAULT_VALUE_INTEGER, DEFAULT_VALUE_INTEGER.length); // must be separate copy
		valueArrayFloat   = java.util.Arrays.copyOf(DEFAULT_VALUE_FLOAT,   DEFAULT_VALUE_FLOAT.length  ); // must be separate copy
		valueArrayDouble  = java.util.Arrays.copyOf(DEFAULT_VALUE_DOUBLE,  DEFAULT_VALUE_DOUBLE.length ); // must be separate copy
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNode.
	 * @see org.web3d.x3d.sai.Core.X3DNode
	 * @return value of children field
	 */
	public ArrayList<X3DNode> getChildren()
	{
		return children;
	}

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNode.
	 * @param newValue is new value for the children field.
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public fieldValueObject setChildren(ArrayList<X3DNode> newValue)
	{
		children = newValue;
		for (X3DNode arrayElement : children)
		{
			((X3DConcreteElement) arrayElement).setParentObject(this); // parentTest11
		}
		return this;
	}

	/**
	 * Add single children node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNode.
	 * @param newValue is new value to be appended the children field.	 */
	public void addChildren(X3DNode newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		children.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
	}


	/**
	 * Utility method to add single child element to contained list of existing children nodes (if any).
	 * @param newValue is new node value to be appended the children field.	 
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	*/
	public fieldValueObject addChild(X3DNode newValue)
	{
		if (newValue == null)
		{
			clearChildren(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		children.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest3
		return this;
	}
	/**
	 * Add array of children nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNode.
	 * @param newValue is new value array to be appended the children field.
	 */
	public void addChildren(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				children.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single children node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DNode.
	 * @param newValue is new node for the children field (restricted to X3DNode)
	 */
	public void setChildren(X3DNode newValue)
	{
		if (newValue == null)
		{
			children.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DNode)
		{
			for (X3DNode element : children)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			children.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			children.add(newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of children field.
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public fieldValueObject clearChildren()
	{
		for (X3DNode element : children)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		children.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>children</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getChildren()
	 */
	public boolean hasChildren()
	{
		return (!children.isEmpty());
	}

	/**
	 * Add comment as CommentsBlock to children field
	 * @param newComment initial value
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public fieldValueObject addComments (String newComment)
	{
		if (newComment == null) return this;
		children.add(new CommentsBlock (newComment));
		return this;
	}
	/**
	 * Add comments as String[] array to children field
	 * @param newComments array of comments
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public fieldValueObject addComments (String[] newComments)
	{
		if (newComments == null) return this;
		children.add(new CommentsBlock (newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to children field
	 * @param newCommentsBlock block of comments to add
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public fieldValueObject addComments (CommentsBlock newCommentsBlock)
	{
		if (newCommentsBlock == null) return this;
		children.add(newCommentsBlock);
		return this;
	}
											/**
	 * Provide String value from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Name of the ProtoInstance field being re-initialized (corresponding to field name already defined in ProtoDeclare or ExternProtoDeclare).
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
	 * <i>Tooltip:</i> Name of the ProtoInstance field being re-initialized (corresponding to field name already defined in ProtoDeclare or ExternProtoDeclare). Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public final fieldValueObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to fieldValue
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("fieldValue name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("fieldValue name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public fieldValueObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>value</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial value for this field (overrides default initialization value in original ProtoDeclare).
 * <ul>
 *  <li> <i> Hint:</i>  initialize SFNode/MFNode field value using contained content element(s), instead of a simple attribute value. </li> 
 * </ul>
	 * @return value of value field
	 */
	public String getValue()
	{

		String valueType = getType();
		// alternatives for return typed value
		if ((valueArrayBoolean != null) && (valueArrayBoolean.length > 0))
		{
			if      (valueType.equals(fieldObject.TYPE_SFBOOL)) return SFBoolObject.toString(valueArrayBoolean[0]);
			else if (valueType.equals(fieldObject.TYPE_MFBOOL)) return MFBoolObject.toString(valueArrayBoolean);
		}
		else if ((valueArrayInteger != null) && (valueArrayInteger.length > 0))
		{
			if      (valueType.equals(fieldObject.TYPE_SFINT32)) return SFInt32Object.toString(valueArrayInteger[0]);
			else if (valueType.equals(fieldObject.TYPE_MFINT32)) return MFInt32Object.toString(valueArrayInteger);
			else if (valueType.equals(fieldObject.TYPE_SFIMAGE)) return SFImageObject.toString(valueArrayInteger);
			else if (valueType.equals(fieldObject.TYPE_MFIMAGE)) return MFImageObject.toString(valueArrayInteger);
		}
		else if ((valueArrayFloat != null) && (valueArrayFloat.length > 0))
		{
			if      (valueType.equals(fieldObject.TYPE_SFFLOAT))     return SFFloatObject.toString(valueArrayFloat[0]);
			else if (valueType.equals(fieldObject.TYPE_MFFLOAT))     return MFFloatObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_SFCOLOR))     return SFColorObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFCOLOR))     return MFColorObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_SFCOLORRGBA)) return SFColorRGBAObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFCOLORRGBA)) return MFColorRGBAObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_SFROTATION))  return SFRotationObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFROTATION))  return MFRotationObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_SFVEC2F))     return SFVec2fObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_SFVEC3F))     return SFVec3fObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_SFVEC4F))     return SFVec4fObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFVEC2F))     return MFVec2fObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFVEC3F))     return MFVec3fObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFVEC4F))     return MFVec4fObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFMATRIX3F))  return MFMatrix3fObject.toString(valueArrayFloat);
			else if (valueType.equals(fieldObject.TYPE_MFMATRIX4F))  return MFMatrix4fObject.toString(valueArrayFloat);
		}
		else if ((valueArrayDouble != null) && (valueArrayDouble.length > 0))
		{
			if      (valueType.equals(fieldObject.TYPE_SFDOUBLE))    return SFDoubleObject.toString(valueArrayDouble[0]);
			else if (valueType.equals(fieldObject.TYPE_MFDOUBLE))    return MFDoubleObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_SFTIME))      return SFTimeObject.toString(valueArrayDouble[0]);
			else if (valueType.equals(fieldObject.TYPE_MFTIME))      return MFTimeObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_SFVEC2D))     return SFVec2dObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_SFVEC3D))     return SFVec3dObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_SFVEC4D))     return SFVec4dObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_MFVEC2D))     return MFVec2dObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_MFVEC3D))     return MFVec3dObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_MFVEC4D))     return MFVec4dObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_MFMATRIX3D))  return MFMatrix3dObject.toString(valueArrayDouble);
			else if (valueType.equals(fieldObject.TYPE_MFMATRIX4D))  return MFMatrix4dObject.toString(valueArrayDouble);
		}
		else if (value != null)
		{
			if      (valueType.equals(fieldObject.TYPE_SFSTRING) ||
					 valueType.equals(ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE)) // matches XML default; might not be connected yet
				return new SFStringObject(value).toString();
			else if (valueType.equals(fieldObject.TYPE_MFSTRING))
				return new MFStringObject(value).toString();
		}
		// TODO error handling
		if (value == null)
		{
			return "";
		}
		else return value;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>value</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial value for this field (overrides default initialization value in original ProtoDeclare). Hint: initialize SFNode/MFNode field value using contained content element(s), instead of a simple attribute value.
	 * @param newValue is new value for the value field.
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public fieldValueObject setValue(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		// check for legal type
		String valueType = getType();
		if (valueType.equals(ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE))
			valueType = fieldObject.TYPE_SFSTRING; // same as default found in file encodings, must recheck later

		if ((valueType.equals(fieldObject.TYPE_SFNODE) || valueType.equals(fieldObject.TYPE_MFNODE)) &&
			(newValue.length() > 0))
		{
			throw new InvalidProtoException("field name='" + getName() + "' with type='" + valueType +
					"' cannot have any simple-type value (newValue='" + newValue + "').  Use setChildren() method instead.");
		}
		else if (valueType.equals(fieldObject.TYPE_SFSTRING) || valueType.equals(fieldObject.TYPE_MFSTRING))
		{
			value = newValue;
		}
		else if (valueType.equals(fieldObject.TYPE_SFBOOL))
		{
			valueArrayBoolean = new MFBoolObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFCOLOR))
		{
			valueArrayFloat = new MFColorObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFCOLORRGBA))
		{
			valueArrayFloat = new MFColorRGBAObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFDOUBLE))
		{
			valueArrayDouble = new MFDoubleObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFFLOAT))
		{
			valueArrayFloat = new MFFloatObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFIMAGE))
		{
			valueArrayInteger = new MFImageObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFINT32))
		{
			valueArrayInteger = new MFInt32Object().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFMATRIX3D))
		{
			valueArrayDouble = new MFMatrix3dObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFMATRIX3F))
		{
			valueArrayFloat = new MFMatrix3fObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFMATRIX4D))
		{
			valueArrayDouble = new MFMatrix4dObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFMATRIX4F))
		{
			valueArrayFloat = new MFMatrix4fObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFROTATION))
		{
			valueArrayFloat = new MFRotationObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFTIME))
		{
			valueArrayDouble = new MFTimeObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFVEC2D))
		{
			valueArrayDouble = new MFVec2dObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFVEC2F))
		{
			valueArrayFloat = new MFVec2fObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFVEC3D))
		{
			valueArrayDouble = new MFVec3dObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFVEC3F))
		{
			valueArrayFloat = new MFVec3fObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFVEC4D))
		{
			valueArrayDouble = new MFVec4dObject().setValueByString(newValue).getPrimitiveValue();
		}
	
		else if (valueType.equals(fieldObject.TYPE_SFVEC4F))
		{
			valueArrayFloat = new MFVec4fObject().setValueByString(newValue).getPrimitiveValue();
		}
			value = newValue;
		return this;
	}

	/**
	 * Assign typed object SFString value field, similar to {@link #setValue(String)}.
	 * @param newValue is new value for the value field.
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFStringObject newValue)
	{
		setValue(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Utility constructor that also assigns fieldValueName
	 * @param fieldValueName unique DEF name for this X3D node
	 */
	public fieldValueObject (String fieldValueName)
	{
		initialize();
		setName(fieldValueName);
	}
	/**
	 * Utility constructor that also assigns fieldValueName, defaultValue
	 * @param fieldValueName unique name for this field
	 * @param defaultValue string version of defaultValue for this field
	 */
	public fieldValueObject (String fieldValueName, String defaultValue)
	{
		initialize();
		setName (fieldValueName);
	    setValue(defaultValue);
	}

	/**
	 * Indicate whether a node or statement is found in inputOutput MFNode field <i>children</i>.
	 * @return whether a node or statement is found; ignores CommentsBlock.
	 * @see #getChildren()
	 */
	public boolean hasChildrenElements()
	{
		if (children.isEmpty())
			return false; // nothing found
		for (X3DNode node : children)
		{
			if (!(node instanceof CommentsBlock))
				return true;
		}
		return false; // nothing but CommentsBlock found
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
		boolean      hasChild = (!children.isEmpty());

		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<fieldValue"); // start opening tag
		if (hasAttributes)
		{
			if (!getName().equals(NAME_DEFAULT_VALUE))
			{
				stringX3D.append(" name='").append(SFStringObject.toString(getName())).append("'");
			}
			
			if ((!getValue().equals(VALUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" value='").append(new SFStringObject(getValue()).toStringX3D()).append("'");
			}
		}
		if ((hasChild)) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag


			// recursively iterate over child elements
			for (X3DNode element : children)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</fieldValue>").append("\n"); // finish closing tag
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
		boolean      hasChild = (!children.isEmpty());
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		// fieldValue type is figured out using ProtoDeclare/ExternProtoDeclare field getType()
		// fieldValue definition
		stringClassicVRML.append("\n").append(indent).append(indentCharacter).append(indentCharacter).append(name);
		if (value.length() > 0)
		{
			stringClassicVRML.append(" ");
			if (getType().equals(fieldObject.TYPE_SFSTRING))
				 stringClassicVRML.append("\"").append(value).append("\"");
			else stringClassicVRML             .append(value);
		}
		if (hasChild) // has contained node(s), comment(s), IS/connect and/or source code
		{
			// recursively iterate over child elements
			for (X3DNode element : children)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel));
			}
		}
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
		for (X3DNode element : children) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
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
		for (X3DNode element : children) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
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

		if (getName().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " name field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setName(getName()); // exercise field checks, simple types

		
		if (!hasChildren()) // be careful! only check simple types if no children nodes found
			setValue(getValue()); // exercise field checks, simple types

		for (X3DNode element : children) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setChildren(getChildren()); // also test getter/setter validation

		return validationResult.toString();
	}

	/**
	 * Provide base type of this fieldValue declaration from corresponding ProtoDeclare/ExternProtoDeclare field declaration.
	 * String value ['SFBool'|'MFBool'|'SFColor'|'MFColor'|'SFColorRGBA'|'MFColorRGBA'|'SFDouble'|'MFDouble'|'SFFloat'|'MFFloat'|'SFImage'|'MFImage'|'SFInt32'|'SFNode'|'MFNode'|'MFInt32'|'SFRotation'|'MFRotation'|'SFString'|'MFString'|'SFTime'|'MFTime'|'SFVec2d'|'MFVec2d'|'SFVec2f'|'MFVec2f'|'SFVec3d'|'MFVec3d'|'SFVec3f'|'MFVec3f'|'SFVec4d'|'MFVec4d'|'SFVec4f'|'MFVec4f'|'SFMatrix3d'|'MFMatrix3d'|'SFMatrix3f'|'MFMatrix3f'|'SFMatrix4d'|'MFMatrix4d'|'SFMatrix4f'|'MFMatrix4f'] from inputOutput SFString field named <i>type</i>.
	 * <br><br>
	 * @see org.web3d.x3d.jsail.Core.fieldObject
	 * @return type value from corresponding field declaration, otherwise "fieldValueTypeNotFound"
	 */
	public String getType()
	{
		String prototypeName;
		String fieldValueType = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE; // default until found
		String errorNotice = new String();
							
		if (getParentObject() == null)
		{
			errorNotice = ConfigurationProperties.ERROR_NOT_CONNECTED_TO_SCENE_GRAPH + 
							": fieldValue name='" + getName() + "' is not currently connected to a ProtoInstanceObject and thus getType() cannot be checked.";
			validationResult.append(errorNotice).append("\n");
							
			if (!ConfigurationProperties.isCreationConnectionValidationExceptionAllowed())
			{
				 throw new InvalidProtoException(errorNotice); // report error
			}
			else // can occur during object creation
			{
				return ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE;
			}
		}
		else prototypeName = ((ProtoInstanceObject) getParentObject()).getName();

		fieldObject fieldDefinition = new fieldObject();
		SceneObject ancestorSceneObject = findAncestorSceneObject();
		if (ancestorSceneObject == null)
		{
			errorNotice = "ProtoInstance name='" + prototypeName + "' with fieldValue  name='" + getName() + "' problem: " +
						   ConfigurationProperties.ERROR_NOT_CONNECTED_TO_SCENE_GRAPH;
			validationResult.append(errorNotice).append("\n");
							
			if (!ConfigurationProperties.isCreationConnectionValidationExceptionAllowed())
			{
				 throw new InvalidProtoException(errorNotice); // report error
			}
			else // can occur during object creation
			{
				return ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE;
			}
		}
		X3DConcreteElement correspondingPrototype = ancestorSceneObject.findElementByNameValue(prototypeName);
		if (correspondingPrototype == null)
		{
			errorNotice = "ProtoInstance name='" + prototypeName + "' does not have a corresponding " +
						  "ProtoDeclare or ExternProtoDeclare name='" + name + "' definition";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidProtoException(errorNotice); // report error
		}
		correspondingPrototype = findAncestorSceneObject().findElementByNameValue(prototypeName, ProtoDeclareObject.NAME);
		if (correspondingPrototype instanceof org.web3d.x3d.jsail.Core.ProtoDeclareObject)
		{
			fieldDefinition = ((ProtoDeclareObject) correspondingPrototype).getProtoInterface().findFieldByName(name);
			if (fieldDefinition != null)
				fieldValueType = fieldDefinition.getType(); // found in scene graph
			else
			{
				errorNotice = "fieldValue name='" + name + "' does not have a corresponding ProtoDeclare field name='" +
							   name + "' definition";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidProtoException(errorNotice); // report error
			}
			return fieldValueType;
		}
		// else
		correspondingPrototype = findAncestorSceneObject().findElementByNameValue(prototypeName, ExternProtoDeclareObject.NAME);
		if (correspondingPrototype instanceof org.web3d.x3d.jsail.Core.ExternProtoDeclareObject)
		{
			fieldDefinition = ((ExternProtoDeclareObject) correspondingPrototype).findFieldByName(name);
			if (fieldDefinition != null)
				fieldValueType = fieldDefinition.getType(); // found in scene graph
			else
			{
				errorNotice = "fieldValue name='" + name + "' does not have a corresponding ProtoDeclare field name='" +
							   name + "' definition";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidProtoException(errorNotice); // report error
			}
		}
		return fieldValueType;
	}

	/**
	 * Get typed value of a SFBool fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFBoolObject getValueSFBool()
	{
		if (getType().equals(fieldObject.TYPE_SFBOOL))
		{
			if (valueArrayBoolean.length == 0)
			{
				return new SFBoolObject();
			}
			else if (valueArrayBoolean.length == 1)
			{
				return new SFBoolObject(valueArrayBoolean[0]);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFBool() singleton method when field value='" +
									 valueArrayBoolean.toString() + "' has length=" + valueArrayBoolean.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFBool() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFBool fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFBoolObject newValue)
	{
		clearValues();
		valueArrayBoolean = new boolean[1]; // fix array size
		valueArrayBoolean[0] = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFBoolObject getValueMFBool()
	{
		if (getType().equals(fieldObject.TYPE_MFBOOL))
		{
			return new MFBoolObject(valueArrayBoolean);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFBool() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFBool fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFBoolObject newValue)
	{
		clearValues();
		valueArrayBoolean = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFColor fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFColorObject getValueSFColor()
	{
		if (getType().equals(fieldObject.TYPE_SFCOLOR))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFColorObject();
			}
			else if (valueArrayFloat.length == 3)
			{
				return new SFColorObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFColor() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFColor() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFColor fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFColorObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFColorObject getValueMFColor()
	{
		if (getType().equals(fieldObject.TYPE_MFCOLOR))
		{
			return new MFColorObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFColor() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFColor fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFColorObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFColorRGBA fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFColorRGBAObject getValueSFColorRGBA()
	{
		if (getType().equals(fieldObject.TYPE_SFCOLORRGBA))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFColorRGBAObject();
			}
			else if (valueArrayFloat.length == 4)
			{
				return new SFColorRGBAObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFColorRGBA() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFColorRGBA() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFColorRGBA fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFColorRGBAObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFColorRGBAObject getValueMFColorRGBA()
	{
		if (getType().equals(fieldObject.TYPE_MFCOLORRGBA))
		{
			return new MFColorRGBAObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFColorRGBA() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFColorRGBA fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFColorRGBAObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFDouble fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFDoubleObject getValueSFDouble()
	{
		if (getType().equals(fieldObject.TYPE_SFDOUBLE))
		{
			if (valueArrayDouble.length == 0)
			{
				return new SFDoubleObject();
			}
			else if (valueArrayDouble.length == 1)
			{
				return new SFDoubleObject(valueArrayDouble[0]);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFDouble() singleton method when field value='" +
									 valueArrayDouble.toString() + "' has length=" + valueArrayDouble.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFDouble() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFDouble fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFDoubleObject newValue)
	{
		clearValues();
		valueArrayDouble = new double[1]; // fix array size
		valueArrayDouble[0] = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFDoubleObject getValueMFDouble()
	{
		if (getType().equals(fieldObject.TYPE_MFDOUBLE))
		{
			return new MFDoubleObject(valueArrayDouble);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFDouble() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFDouble fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFDoubleObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFFloat fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFFloatObject getValueSFFloat()
	{
		if (getType().equals(fieldObject.TYPE_SFFLOAT))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFFloatObject();
			}
			else if (valueArrayFloat.length == 1)
			{
				return new SFFloatObject(valueArrayFloat[0]);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFFloat() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFFloat() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFFloat fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFFloatObject newValue)
	{
		clearValues();
		valueArrayFloat = new float[1]; // fix array size
		valueArrayFloat[0] = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFFloatObject getValueMFFloat()
	{
		if (getType().equals(fieldObject.TYPE_MFFLOAT))
		{
			return new MFFloatObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFFloat() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFFloat fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFFloatObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFImage fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFImageObject getValueSFImage()
	{
		if (getType().equals(fieldObject.TYPE_SFIMAGE))
		{
			if (valueArrayInteger.length == 0)
			{
				return new SFImageObject();
			}
			else if (valueArrayInteger.length == 1)
			{
				return new SFImageObject(valueArrayInteger);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFImage() singleton method when field value='" +
									 valueArrayInteger.toString() + "' has length=" + valueArrayInteger.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFImage() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFImage fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFImageObject newValue)
	{
		clearValues();
		valueArrayInteger = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFImageObject getValueMFImage()
	{
		if (getType().equals(fieldObject.TYPE_MFIMAGE))
		{
			return new MFImageObject(valueArrayInteger);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFImage() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFImage fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFImageObject newValue)
	{
		clearValues();
		valueArrayInteger = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFInt32 fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFInt32Object getValueSFInt32()
	{
		if (getType().equals(fieldObject.TYPE_SFINT32))
		{
			if (valueArrayInteger.length == 0)
			{
				return new SFInt32Object();
			}
			else if (valueArrayInteger.length == 1)
			{
				return new SFInt32Object(valueArrayInteger[0]);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFInt32() singleton method when field value='" +
									 valueArrayInteger.toString() + "' has length=" + valueArrayInteger.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFInt32() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFInt32 fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFInt32Object newValue)
	{
		clearValues();
		valueArrayInteger = new int[1]; // fix array size
		valueArrayInteger[0] = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFInt32Object getValueMFInt32()
	{
		if (getType().equals(fieldObject.TYPE_MFINT32))
		{
			return new MFInt32Object(valueArrayInteger);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFInt32() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFInt32 fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFInt32Object newValue)
	{
		clearValues();
		valueArrayInteger = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFMatrix3d fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFMatrix3dObject getValueSFMatrix3d()
	{
		if (getType().equals(fieldObject.TYPE_SFMATRIX3D))
		{
			if (valueArrayDouble.length == 0)
			{
				return new SFMatrix3dObject();
			}
			else if (valueArrayDouble.length == 9)
			{
				return new SFMatrix3dObject(valueArrayDouble);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFMatrix3d() singleton method when field value='" +
									 valueArrayDouble.toString() + "' has length=" + valueArrayDouble.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFMatrix3d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFMatrix3d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFMatrix3dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFMatrix3dObject getValueMFMatrix3d()
	{
		if (getType().equals(fieldObject.TYPE_MFMATRIX3D))
		{
			return new MFMatrix3dObject(valueArrayDouble);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFMatrix3d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFMatrix3d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFMatrix3dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFMatrix3f fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFMatrix3fObject getValueSFMatrix3f()
	{
		if (getType().equals(fieldObject.TYPE_SFMATRIX3F))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFMatrix3fObject();
			}
			else if (valueArrayFloat.length == 9)
			{
				return new SFMatrix3fObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFMatrix3f() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFMatrix3f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFMatrix3f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFMatrix3fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFMatrix3fObject getValueMFMatrix3f()
	{
		if (getType().equals(fieldObject.TYPE_MFMATRIX3F))
		{
			return new MFMatrix3fObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFMatrix3f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFMatrix3f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFMatrix3fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFMatrix4d fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFMatrix4dObject getValueSFMatrix4d()
	{
		if (getType().equals(fieldObject.TYPE_SFMATRIX4D))
		{
			if (valueArrayDouble.length == 0)
			{
				return new SFMatrix4dObject();
			}
			else if (valueArrayDouble.length == 16)
			{
				return new SFMatrix4dObject(valueArrayDouble);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFMatrix4d() singleton method when field value='" +
									 valueArrayDouble.toString() + "' has length=" + valueArrayDouble.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFMatrix4d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFMatrix4d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFMatrix4dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFMatrix4dObject getValueMFMatrix4d()
	{
		if (getType().equals(fieldObject.TYPE_MFMATRIX4D))
		{
			return new MFMatrix4dObject(valueArrayDouble);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFMatrix4d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFMatrix4d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFMatrix4dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFMatrix4f fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFMatrix4fObject getValueSFMatrix4f()
	{
		if (getType().equals(fieldObject.TYPE_SFMATRIX4F))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFMatrix4fObject();
			}
			else if (valueArrayFloat.length == 16)
			{
				return new SFMatrix4fObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFMatrix4f() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFMatrix4f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFMatrix4f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFMatrix4fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFMatrix4fObject getValueMFMatrix4f()
	{
		if (getType().equals(fieldObject.TYPE_MFMATRIX4F))
		{
			return new MFMatrix4fObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFMatrix4f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFMatrix4f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFMatrix4fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFRotation fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFRotationObject getValueSFRotation()
	{
		if (getType().equals(fieldObject.TYPE_SFROTATION))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFRotationObject();
			}
			else if (valueArrayFloat.length == 4)
			{
				return new SFRotationObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFRotation() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFRotation() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFRotation fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFRotationObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFRotationObject getValueMFRotation()
	{
		if (getType().equals(fieldObject.TYPE_MFROTATION))
		{
			return new MFRotationObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFRotation() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFRotation fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFRotationObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFString fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFStringObject getValueSFString()
	{
		if (getType().equals(fieldObject.TYPE_SFSTRING))
		{
			if (value.isEmpty())
			{
				return new SFStringObject();
			}
			else
			{
				return new SFStringObject(value);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValue() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFStringObject getValueMFString()
	{
		if (getType().equals(fieldObject.TYPE_MFSTRING))
		{
			return new MFStringObject(value);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValue() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Get typed value of a SFTime fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFTimeObject getValueSFTime()
	{
		if (getType().equals(fieldObject.TYPE_SFTIME))
		{
			if (valueArrayDouble.length == 0)
			{
				return new SFTimeObject();
			}
			else if (valueArrayDouble.length == 1)
			{
				return new SFTimeObject(valueArrayDouble[0]);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFTime() singleton method when field value='" +
									 valueArrayDouble.toString() + "' has length=" + valueArrayDouble.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFTime() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFTime fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFTimeObject newValue)
	{
		clearValues();
		valueArrayDouble = new double[1]; // fix array size
		valueArrayDouble[0] = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFTimeObject getValueMFTime()
	{
		if (getType().equals(fieldObject.TYPE_MFTIME))
		{
			return new MFTimeObject(valueArrayDouble);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFTime() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFTime fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFTimeObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFVec2d fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFVec2dObject getValueSFVec2d()
	{
		if (getType().equals(fieldObject.TYPE_SFVEC2D))
		{
			if (valueArrayDouble.length == 0)
			{
				return new SFVec2dObject();
			}
			else if (valueArrayDouble.length == 2)
			{
				return new SFVec2dObject(valueArrayDouble);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFVec2d() singleton method when field value='" +
									 valueArrayDouble.toString() + "' has length=" + valueArrayDouble.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFVec2d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFVec2d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFVec2dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFVec2dObject getValueMFVec2d()
	{
		if (getType().equals(fieldObject.TYPE_MFVEC2D))
		{
			return new MFVec2dObject(valueArrayDouble);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFVec2d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFVec2d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFVec2dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFVec2f fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFVec2fObject getValueSFVec2f()
	{
		if (getType().equals(fieldObject.TYPE_SFVEC2F))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFVec2fObject();
			}
			else if (valueArrayFloat.length == 2)
			{
				return new SFVec2fObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFVec2f() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFVec2f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFVec2f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFVec2fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFVec2fObject getValueMFVec2f()
	{
		if (getType().equals(fieldObject.TYPE_MFVEC2F))
		{
			return new MFVec2fObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFVec2f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFVec2f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFVec2fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFVec3d fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFVec3dObject getValueSFVec3d()
	{
		if (getType().equals(fieldObject.TYPE_SFVEC3D))
		{
			if (valueArrayDouble.length == 0)
			{
				return new SFVec3dObject();
			}
			else if (valueArrayDouble.length == 3)
			{
				return new SFVec3dObject(valueArrayDouble);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFVec3d() singleton method when field value='" +
									 valueArrayDouble.toString() + "' has length=" + valueArrayDouble.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFVec3d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFVec3d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFVec3dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFVec3dObject getValueMFVec3d()
	{
		if (getType().equals(fieldObject.TYPE_MFVEC3D))
		{
			return new MFVec3dObject(valueArrayDouble);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFVec3d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFVec3d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFVec3dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFVec3f fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFVec3fObject getValueSFVec3f()
	{
		if (getType().equals(fieldObject.TYPE_SFVEC3F))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFVec3fObject();
			}
			else if (valueArrayFloat.length == 3)
			{
				return new SFVec3fObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFVec3f() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFVec3f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFVec3f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFVec3fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFVec3fObject getValueMFVec3f()
	{
		if (getType().equals(fieldObject.TYPE_MFVEC3F))
		{
			return new MFVec3fObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFVec3f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFVec3f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFVec3fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFVec4d fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFVec4dObject getValueSFVec4d()
	{
		if (getType().equals(fieldObject.TYPE_SFVEC4D))
		{
			if (valueArrayDouble.length == 0)
			{
				return new SFVec4dObject();
			}
			else if (valueArrayDouble.length == 4)
			{
				return new SFVec4dObject(valueArrayDouble);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFVec4d() singleton method when field value='" +
									 valueArrayDouble.toString() + "' has length=" + valueArrayDouble.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFVec4d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFVec4d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFVec4dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFVec4dObject getValueMFVec4d()
	{
		if (getType().equals(fieldObject.TYPE_MFVEC4D))
		{
			return new MFVec4dObject(valueArrayDouble);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFVec4d() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFVec4d fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFVec4dObject newValue)
	{
		clearValues();
		valueArrayDouble = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of a SFVec4f fieldValue declaration.
	 * @return typed value object (if values are available), otherwise returns default object
	 */
	public SFVec4fObject getValueSFVec4f()
	{
		if (getType().equals(fieldObject.TYPE_SFVEC4F))
		{
			if (valueArrayFloat.length == 0)
			{
				return new SFVec4fObject();
			}
			else if (valueArrayFloat.length == 4)
			{
				return new SFVec4fObject(valueArrayFloat);
			}
			else // hopefully this case cannot occur, possible internal library error
			{
				String errorNotice = "Invalid invocation of field.getValueSFVec4f() singleton method when field value='" +
									 valueArrayFloat.toString() + "' has length=" + valueArrayFloat.length;
				throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
			}
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueSFVec4f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a SFVec4f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(SFVec4fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Get typed value of this fieldValue declaration.
	 * @return typed value object, if values are available
	 */
	public MFVec4fObject getValueMFVec4f()
	{
		if (getType().equals(fieldObject.TYPE_MFVEC4F))
		{
			return new MFVec4fObject(valueArrayFloat);
		}
		else
		{
			String errorNotice = "Invalid invocation of field.getValueMFVec4f() when declared field type='" + getType() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
	}

	/**
	 * Set typed value of a MFVec4f fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(MFVec4fObject newValue)
	{
		clearValues();
		valueArrayFloat = newValue.getPrimitiveValue();
		return this;
	}						

	/**
	 * Clear all values in a fieldValue declaration.
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject clearValues()
	{
		value = VALUE_DEFAULT_VALUE;
		valueArrayBoolean = java.util.Arrays.copyOf(DEFAULT_VALUE_BOOLEAN, DEFAULT_VALUE_BOOLEAN.length); // must be separate copy
		valueArrayInteger = java.util.Arrays.copyOf(DEFAULT_VALUE_INTEGER, DEFAULT_VALUE_INTEGER.length); // must be separate copy
		valueArrayFloat   = java.util.Arrays.copyOf(DEFAULT_VALUE_FLOAT,   DEFAULT_VALUE_FLOAT.length  ); // must be separate copy
		valueArrayDouble  = java.util.Arrays.copyOf(DEFAULT_VALUE_DOUBLE,  DEFAULT_VALUE_DOUBLE.length ); // must be separate copy
		clearChildren(); // clear all contained children including nodes, statements and comments (if any)
		return this;
	}
	/**
	 * Set typed value of a boolean fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(boolean newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFBOOL) && !getType().equals(fieldObject.TYPE_MFBOOL))
		{
			String errorNotice = "Illegal type: cannot setValue(boolean " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		clearValues();
		valueArrayBoolean = new boolean[1]; // fix array size
		valueArrayBoolean[0] = newValue;
		return this;
	}
	/**
	 * Set typed value of a boolean[] fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(boolean[] newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFBOOL) && !getType().equals(fieldObject.TYPE_MFBOOL))
		{
			String errorNotice = "Illegal type: cannot setValue(boolean[] " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		clearValues();
		if (newValue == null)
			return this;
		valueArrayBoolean = newValue;
		return this;
	}
	/**
	 * Set typed value of a integer fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(int newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFINT32) && !getType().equals(fieldObject.TYPE_MFINT32))
		{
			String errorNotice = "Illegal type: cannot setValue(int " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		clearValues();
		valueArrayInteger = new int[1]; // fix array size
		valueArrayInteger[0] = newValue;
		return this;
	}
	/**
	 * Set typed value of a integer array fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(int[] newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFINT32) && !getType().equals(fieldObject.TYPE_MFINT32) &&
			!getType().equals(fieldObject.TYPE_SFIMAGE) && !getType().equals(fieldObject.TYPE_MFIMAGE))
		{
			String errorNotice = "Illegal type: cannot setValue(int[] " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		clearValues();
		if (newValue == null)
			return this;
		valueArrayInteger = newValue;
		return this;
	}
	/**
	 * Set typed value of a float fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(float newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFFLOAT)    && !getType().equals(fieldObject.TYPE_MFFLOAT) &&
			!getType().equals(fieldObject.TYPE_SFTIME)     && !getType().equals(fieldObject.TYPE_MFTIME))
		{
			String errorNotice = "Illegal type: cannot setValue(float " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		clearValues();
		if (getType().equals(fieldObject.TYPE_SFTIME) || !getType().equals(fieldObject.TYPE_MFTIME))
		{
			valueArrayDouble = new double[1]; // fix array size
			valueArrayDouble[0] = newValue;
		}
		else
		{
			valueArrayFloat = new float[1]; // fix array size
			valueArrayFloat[0] = newValue;
		}
		return this;
	}
	/**
	 * Set typed value of a float[] array fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(float[] newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFCOLOR)    && !getType().equals(fieldObject.TYPE_MFCOLOR) &&
			!getType().equals(fieldObject.TYPE_SFCOLORRGBA)&& !getType().equals(fieldObject.TYPE_MFCOLORRGBA) &&
			!getType().equals(fieldObject.TYPE_SFFLOAT)    && !getType().equals(fieldObject.TYPE_MFFLOAT) &&
			!getType().equals(fieldObject.TYPE_SFROTATION) && !getType().equals(fieldObject.TYPE_MFROTATION) &&
			!getType().equals(fieldObject.TYPE_SFTIME)     && !getType().equals(fieldObject.TYPE_MFTIME) &&
			!getType().equals(fieldObject.TYPE_SFVEC2F)    && !getType().equals(fieldObject.TYPE_MFVEC2F) &&
			!getType().equals(fieldObject.TYPE_SFVEC3F)    && !getType().equals(fieldObject.TYPE_MFVEC3F) &&
			!getType().equals(fieldObject.TYPE_SFVEC4F)    && !getType().equals(fieldObject.TYPE_MFVEC4F) &&
			!getType().equals(fieldObject.TYPE_SFMATRIX3F) && !getType().equals(fieldObject.TYPE_MFMATRIX3F) &&
			!getType().equals(fieldObject.TYPE_SFMATRIX4F) && !getType().equals(fieldObject.TYPE_MFMATRIX4F))
		{
			String errorNotice = "Illegal type: cannot setValue(float[] " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}									
		if ((newValue.length % X3DConcreteField.getTupleSize(getType())) != 0) // tupleSize modulus check
		{
			String errorNotice = "illegal number of values (" + newValue.length + ")" +
				" in initialization string, must be multiple of " + X3DConcreteField.getTupleSize(getType());
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}			
		clearValues();
		if (newValue == null)
			return this;
		if (getType().equals(fieldObject.TYPE_SFTIME) || !getType().equals(fieldObject.TYPE_MFTIME))
		{
			setValue(new MFTimeObject(newValue));
		}
		else
		{
			valueArrayFloat = newValue;
		}
		return this;
	}
	/**
	 * Set typed value of a double fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(double newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFDOUBLE)   && !getType().equals(fieldObject.TYPE_MFDOUBLE) &&
			!getType().equals(fieldObject.TYPE_SFTIME)     && !getType().equals(fieldObject.TYPE_MFTIME))
		{
			String errorNotice = "Illegal type: cannot setValue(double " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		clearValues();
		if (getType().equals(fieldObject.TYPE_SFTIME) || !getType().equals(fieldObject.TYPE_MFTIME))
		{
			
			setValue(new MFTimeObject(newValue));
		}
		else
		{
			valueArrayDouble = new double[1]; // fix array size
			valueArrayDouble[0] = newValue;
		}
		return this;
	}
	/**
	 * Set typed value of a double[] array fieldValue declaration.
	 * <i>WARNING</i>: must first <i>setType()</i> for the proper corresponding X3D type.
	 * @param newValue is new value to assign
	 * @return {@link fieldValueObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public fieldValueObject setValue(double[] newValue)
	{
		if (!getType().equals(fieldObject.TYPE_SFDOUBLE)   && !getType().equals(fieldObject.TYPE_MFDOUBLE) &&
			!getType().equals(fieldObject.TYPE_SFTIME)     && !getType().equals(fieldObject.TYPE_MFTIME) &&
			!getType().equals(fieldObject.TYPE_SFVEC2D)    && !getType().equals(fieldObject.TYPE_MFVEC2D) &&
			!getType().equals(fieldObject.TYPE_SFVEC3D)    && !getType().equals(fieldObject.TYPE_MFVEC3D) &&
			!getType().equals(fieldObject.TYPE_SFVEC4D)    && !getType().equals(fieldObject.TYPE_MFVEC4D) &&
			!getType().equals(fieldObject.TYPE_SFMATRIX3D) && !getType().equals(fieldObject.TYPE_MFMATRIX3D) &&
			!getType().equals(fieldObject.TYPE_SFMATRIX4D) && !getType().equals(fieldObject.TYPE_MFMATRIX4D))
		{
			String errorNotice = "Illegal type: cannot setValue(double[] " + newValue + ") when fieldValue type='" + getType() + "'";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		if ((newValue.length % X3DConcreteField.getTupleSize(getType())) != 0) // tupleSize modulus check
		{
			String errorNotice = "illegal number of values (" + newValue.length + ")" +
				" in initialization string, must be multiple of " + X3DConcreteField.getTupleSize(getType());
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		clearValues();
		if (newValue == null)
			return this;
		valueArrayDouble = newValue;
		return this;
	}
}
