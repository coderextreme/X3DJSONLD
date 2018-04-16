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
 * This utility class provides a concrete implementation corresponding to SFVec4f X3D field type.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * SFVec4f is a 4-tuple set of single-precision floating-point values, specifying a 3D homogeneous vector. Warning: comma characters in attribute values do not pass strict XML validation.
 * <br><br>
 * Related field object: {@link MFVec4fObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFVec4f">X3D Tooltips: type SFVec4f</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFVec4fAndMFVec4f" target="blank">X3D Abstract Specification: SFVec4fAndMFVec4f</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFVec4fObject extends X3DConcreteField implements org.web3d.x3d.sai.SFVec4f
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFVec4f</i> */
	public static final String NAME = "SFVec4f";

	/** Default value for this field type contains values of <i>0</i>.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = {0.0f, 0.0f, 0.0f, 1.0f};

	/** Default tuple size for this field type is <i>4</i> (i.e. number of component values making up a single-field SF object). */
	public static final int TUPLE_SIZE = 4;

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] SFVec4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for SFVec4fObject performs value initialization.
	 */
	public SFVec4fObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFVec4fObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFVec4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for SFVec4fObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFVec4fObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFVec4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if (newValues.length != 4)
			{
				String errorNotice = "illegal number of values in initialization string, new SFVec4fObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			SFVec4f[0] = Float.parseFloat(newValues[0]);
			SFVec4f[1] = Float.parseFloat(newValues[1]);
			SFVec4f[2] = Float.parseFloat(newValues[2]);
			SFVec4f[3] = Float.parseFloat(newValues[3]);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFVec4fObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFVec4fObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFVec4fObject(SFVec4fObject newValue)
	{
		if (newValue == null)
		{
			SFVec4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		SFVec4f = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFVec4fObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFVec4f tuple size of <i>4</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFVec4fObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 4)
		{
			String errorNotice = "Illegal SFVec4f newValue array length=" + newValue.length +
				", must equal 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFVec4f = newValue;
	}

	/**
	 * Utility constructor for SFVec4fObject using individual primitive values.
	 * @param x first component
	 * @param y second component
	 * @param z third component
	 * @param w fourth component
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 */
	public SFVec4fObject (float x, float y, float z, float w)
	{
		SFVec4f[0] = x;
		SFVec4f[1] = y;
		SFVec4f[2] = z;
		SFVec4f[3] = w;
	}
	/**
	 * Utility method to normalize this vector value to unit length, ignore if zero length.
	 * @return {@link SFVec4fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec4fObject normalize()
	{
		float length = (float) Math.sqrt(
			SFVec4f[0]*SFVec4f[0] +
			SFVec4f[1]*SFVec4f[1] +
			SFVec4f[2]*SFVec4f[2] +
			SFVec4f[3]*SFVec4f[3]);
		
		if (length > 0.0f)
		{
			SFVec4f[0] = SFVec4f[0] / length;
			SFVec4f[1] = SFVec4f[1] / length;
			SFVec4f[2] = SFVec4f[2] / length;
			SFVec4f[3] = SFVec4f[3] / length;
		}
		return this;
	}

	/**
	 * Utility constructor for SFVec4fObject using double values.
	 * @param x first component
	 * @param y second component
	 * @param z third component
	 * @param t fourth component
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 */
	public SFVec4fObject (double x, double y, double z, double t)
	{
		setValue((float) x, (float) y, (float) z, (float) t);
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @see SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	public static String toString (float[] value)
	{
		StringBuilder result = new StringBuilder();
		for (int i=0; i < value.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(value[i])).append(" ");
			else result.append(value[i]).append(" ");
		}
		return result.toString().trim();
	}

	/**
	 * Get the current value of this SFVec4fObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(float[] valueDestination)
	{
		valueDestination = SFVec4f;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return SFVec4f;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFVec4f">X3D Tooltips: type SFVec4f</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < SFVec4f.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(SFVec4f[i]));
			else result.append(SFVec4f[i]);
			if (i < SFVec4f.length - 1)
				result.append(" ");
		}
		return result.toString();
	}
	/**
	 * Assign a new value to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFVec4f tuple size of <i>4</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(float[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid2

		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 4)
		{
			String errorNotice = "Illegal SFVec4f newValue array length=" + newValue.length +
				", must equal 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFVec4f = newValue;
	}

	/**
	 * Assign a new value to this field.
	 * @param x first component
	 * @param y second component
	 * @param z third component
	 * @param t fourth component
	 * @return {@link SFVec4fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec4fObject setValue(float x, float y, float z, float t)
	{
		SFVec4f[0] = x;
		SFVec4f[1] = y;
		SFVec4f[2] = z;
		SFVec4f[3] = t;
		return this;
	}
	/**
	 * Assign a new value to this field.
	 * @param x first component
	 * @param y second component
	 * @param z third component
	 * @param t fourth component
	 * @return {@link SFVec4fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec4fObject setValue(double x, double y, double z, double t)
	{
		setValue((float) x, (float) y, (float) z, (float) t);
		return this;
	}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return SFVec4f;
	}

	/**
	 * Apply an SFVec4fObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFVec4fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec4fObject setValue(SFVec4fObject newValue)
	{
		if (newValue == null)
		{
			SFVec4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		SFVec4f = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link SFVec4fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec4fObject multiply(float scaleFactor)
	{
		SFVec4f[0] *= scaleFactor;
		SFVec4f[1] *= scaleFactor;
		SFVec4f[2] *= scaleFactor;
		SFVec4f[3] *= scaleFactor;
		
		return this;
	}
}
