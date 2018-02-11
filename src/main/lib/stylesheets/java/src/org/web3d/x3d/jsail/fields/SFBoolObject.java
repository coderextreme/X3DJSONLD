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

package org.web3d.x3d.jsail.fields;

import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.InvalidFieldValueException;

/**
 * This utility class provides a concrete implementation corresponding to SFBool X3D field type.
 * 
 * <br><br>
 * SFBool is a logical type with possible values (true|false) to match the XML boolean type. Hint: boolean values are lower case (true|false) in order to maintain compatibility with HTML and other XML documents.
<br><br>
Related field object: {@link MFBoolObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFBool">X3D Tooltips: type SFBool</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFBoolAndMFBool" target="blank">X3D Abstract Specification: SFBoolAndMFBool</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFBoolObject extends X3DConcreteField implements org.web3d.x3d.sai.SFBool
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFBool</i> */
	public static final String NAME = "SFBool";

	/** Default value for this field type is a <i>true</i> value.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final boolean DEFAULT_VALUE = true;

	/** String constant for boolean value <em>true</em>, note lower-case value is XML syntax (upper-case value is VRML syntax) */
	public static String TRUE  = "true";
	/** String constant for boolean value <em>false</em>, note lower-case value is XML syntax (upper-case value is VRML syntax) */
	public static String FALSE = "false";

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private boolean SFBool = DEFAULT_VALUE;

	/**
	 * Constructor for SFBoolObject performs value initialization.
	 */
	public SFBoolObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFBoolObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFBool = DEFAULT_VALUE;
	}

	/**
	 * Utility accessor for SFBoolObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFBoolObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFBool = DEFAULT_VALUE;
			return this;
		}
			if (!newValue.equals("true") && !newValue.equals("false"))
		{
			String errorNotice = "illegal boolean value, must be 'true' or 'false' (case sensitive), new SFBoolObject(" + newValue + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFBool = Boolean.parseBoolean(newValue);
		return this;
	}

	/**
	 * Constructor to copy an SFBoolObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFBoolObject(SFBoolObject newValue)
	{
		if (newValue == null)
		{
			SFBool = DEFAULT_VALUE;
			return;
		}
		SFBool = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFBoolObject using a corresponding Java primitive boolean as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFBoolObject (boolean newValue)
	{SFBool = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (boolean value)
	{
		return String.valueOf(value);
	}

	/**
	 * Get the current value.
	 * @return current value
	 */
	@Override
	public boolean getValue()
	{
		return SFBool;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public boolean getPrimitiveValue()
	{
		return SFBool;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFBool">X3D Tooltips: type SFBool</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		return String.valueOf(SFBool);
	}
	/**
	 * Assign a new value to this field.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(boolean newValue)
	{
		SFBool = newValue;
	}

	/**
	 * Utility method to negate this boolean value.
	 * @return {@link SFBoolObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFBoolObject negate()
	{
		SFBool = !SFBool; // negate
		return this;
	}

	/**
	 * Apply an SFBoolObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFBoolObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFBoolObject setValue(SFBoolObject newValue)
	{
		if (newValue == null)
		{
			SFBool = DEFAULT_VALUE;
			return this;
		}
		SFBool = newValue.getPrimitiveValue();
		return this;
	}								
}
