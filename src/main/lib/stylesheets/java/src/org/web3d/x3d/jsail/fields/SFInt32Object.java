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
 * This utility class provides a concrete implementation corresponding to SFInt32 X3D field type.
 * 
 * <br><br>
 * An SFInt32 field specifies one 32-bit signed integer.
<br><br>
Related field object: {@link MFInt32Object}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFInt32">X3D Tooltips: type SFInt32</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFInt32AndMFInt32" target="blank">X3D Abstract Specification: SFInt32AndMFInt32</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFInt32Object extends X3DConcreteField implements org.web3d.x3d.sai.SFInt32
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFInt32</i> */
	public static final String NAME = "SFInt32";

	/** Default value for this field type is a <i>0</i> value.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final int DEFAULT_VALUE = 0;

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private int SFInt32 = DEFAULT_VALUE;

	/**
	 * Constructor for SFInt32Object performs value initialization.
	 */
	public SFInt32Object ()
	{
		initialize();
	}

	/**
	 * Initialization for SFInt32Object applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFInt32 = DEFAULT_VALUE;
	}

	/**
	 * Utility accessor for SFInt32Object using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFInt32Object setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFInt32 = DEFAULT_VALUE;
			return this;
		}
		try
		{
			SFInt32 = Integer.parseInt(newValue);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFInt32Object(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFInt32Object value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFInt32Object(SFInt32Object newValue)
	{
		if (newValue == null)
		{
			SFInt32 = DEFAULT_VALUE;
			return;
		}
		SFInt32 = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFInt32Object using a corresponding Java primitive int as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFInt32Object (int newValue)
	{SFInt32 = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (int value)
	{
		return String.valueOf(value);
	}

	/**
	 * Get the current value.
	 * @return current value
	 */
	@Override
	public int getValue()
	{
		return SFInt32;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public int getPrimitiveValue()
	{
		return SFInt32;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFInt32">X3D Tooltips: type SFInt32</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		return String.valueOf(SFInt32);
	}
	/**
	 * Assign a new value to this field.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(int newValue)
	{
		SFInt32 = newValue;
	}

	/**
	 * Apply an SFInt32Object value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFInt32Object} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFInt32Object setValue(SFInt32Object newValue)
	{
		if (newValue == null)
		{
			SFInt32 = DEFAULT_VALUE;
			return this;
		}
		SFInt32 = newValue.getPrimitiveValue();
		return this;
	}								
}
