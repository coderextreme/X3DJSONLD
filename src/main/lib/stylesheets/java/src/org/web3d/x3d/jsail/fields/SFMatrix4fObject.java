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
import org.web3d.x3d.sai.*;


/**
 * This utility class provides a concrete implementation corresponding to SFMatrix4f X3D field type.
 * 
 * <br><br>
 * SFMatrix4f specifies a 4x4 matrix of single-precision floating point numbers, organized in row-major fashion. Warning: comma characters in attribute values do not pass strict XML validation.
<br><br>
Related field object: {@link MFMatrix4fObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFMatrix4f">X3D Tooltips: type SFMatrix4f</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFMatrix4fAndMFMatrix4f" target="blank">X3D Abstract Specification: SFMatrix4fAndMFMatrix4f</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFMatrix4fObject extends X3DConcreteField implements org.web3d.x3d.sai.SFMatrix4f
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFMatrix4f</i> */
	public static final String NAME = "SFMatrix4f";

	/** Default value for this field type contains values of <i>0</i>.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = {1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f};

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] SFMatrix4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for SFMatrix4fObject performs value initialization.
	 */
	public SFMatrix4fObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFMatrix4fObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFMatrix4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for SFMatrix4fObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFMatrix4fObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFMatrix4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if (newValues.length != 16)
			{
				String errorNotice = "illegal number of values in initialization string";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			SFMatrix4f [0] = Float.parseFloat(newValues[0]);
			SFMatrix4f [1] = Float.parseFloat(newValues[1]);
			SFMatrix4f [2] = Float.parseFloat(newValues[2]);
			SFMatrix4f [3] = Float.parseFloat(newValues[3]);
			SFMatrix4f [4] = Float.parseFloat(newValues[4]);
			SFMatrix4f [5] = Float.parseFloat(newValues[5]);
			SFMatrix4f [6] = Float.parseFloat(newValues[6]);
			SFMatrix4f [7] = Float.parseFloat(newValues[7]);
			SFMatrix4f [8] = Float.parseFloat(newValues[8]);
			SFMatrix4f [9] = Float.parseFloat(newValues[9]);
			SFMatrix4f[10] = Float.parseFloat(newValues[10]);
			SFMatrix4f[11] = Float.parseFloat(newValues[11]);
			SFMatrix4f[12] = Float.parseFloat(newValues[12]);
			SFMatrix4f[13] = Float.parseFloat(newValues[13]);
			SFMatrix4f[14] = Float.parseFloat(newValues[14]);
			SFMatrix4f[15] = Float.parseFloat(newValues[15]);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFMatrix4fObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFMatrix4fObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFMatrix4fObject(SFMatrix4fObject newValue)
	{
		if (newValue == null)
		{
			SFMatrix4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		SFMatrix4f = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFMatrix4fObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFMatrix4f tuple size of <i>16</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFMatrix4fObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 16)
		{
			String errorNotice = "Illegal SFMatrix4f newValue array length=" + newValue.length +
				", must equal 16 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFMatrix4f = newValue;
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
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return SFMatrix4f;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFMatrix4f">X3D Tooltips: type SFMatrix4f</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < SFMatrix4f.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(SFMatrix4f[i]));
			else result.append(SFMatrix4f[i]);
			if (i < SFMatrix4f.length - 1)
				result.append(" ");
		}
		return result.toString();
	}
	@Override
	public void setIdentity()
	{
		// TODO
	}

	@Override
	public void set(int row, int column)
	{
		// TODO
	}

	@Override
	public float get(int row, int column)
	{
		return 0.0f; // TODO
	}

	@Override
	public void setTransform(SFVec3f translation,
		SFRotation rotation,
		SFVec3f scale,
		SFRotation scaleOrientation,
		SFVec3f center)
	{
		// TODO
	}

	@Override
	public void getTransform(SFVec3f translation,
		SFRotation rotation,
		SFVec3f scale)
	{
		// TODO
	}

	@Override
	public Matrix4 inverse()
	{
		return null; // TODO
	}

	@Override
	public Matrix4 transpose()
	{
		return null; // TODO
	}

	@Override
	public Matrix4 multiplyLeft (Matrix4 matrix3x3)
	{
		return null; // TODO
	}

	@Override
	public Matrix4 multiplyRight(Matrix4 matrix3x3)
	{
		return null; // TODO
	}
	@Override
	public Matrix4 multiplyRowVector(SFVec3f vector3f) // TODO SFVec4f ?
	{
		return null; // TODO
	}

	@Override
	public Matrix4 multiplyColVector(SFVec3f vector3f) // TODO SFVec4f ?
	{
		return null; // TODO
	}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return SFMatrix4f;
	}

	/**
	 * Apply an SFMatrix4fObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFMatrix4fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFMatrix4fObject setValue(SFMatrix4fObject newValue)
	{
		if (newValue == null)
		{
			SFMatrix4f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		SFMatrix4f = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link SFMatrix4fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFMatrix4fObject multiply(float scaleFactor)
	{
		for (int i = 0; i < SFMatrix4f.length; i++)
		{
			SFMatrix4f[i] *= scaleFactor;
		}
		return this;
	}
}
