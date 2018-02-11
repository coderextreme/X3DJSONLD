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
 * This utility class provides a concrete implementation corresponding to SFMatrix3f X3D field type.
 * 
 * <br><br>
 * SFMatrix3f specifies a 3x3 matrix of single-precision floating point numbers, organized in row-major fashion. Warning: comma characters in attribute values do not pass strict XML validation.
<br><br>
Related field object: {@link MFMatrix3fObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFMatrix3f">X3D Tooltips: type SFMatrix3f</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFMatrix3fAndMFMatrix3f" target="blank">X3D Abstract Specification: SFMatrix3fAndMFMatrix3f</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFMatrix3fObject extends X3DConcreteField implements org.web3d.x3d.sai.SFMatrix3f
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFMatrix3f</i> */
	public static final String NAME = "SFMatrix3f";

	/** Default value for this field type contains values of <i>0</i>.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] SFMatrix3f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for SFMatrix3fObject performs value initialization.
	 */
	public SFMatrix3fObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFMatrix3fObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFMatrix3f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for SFMatrix3fObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFMatrix3fObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFMatrix3f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if (newValues.length != 9)
			{
				String errorNotice = "illegal number of values in initialization string, new SFMatrix3fObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			SFMatrix3f[0] = Float.parseFloat(newValues[0]);
			SFMatrix3f[1] = Float.parseFloat(newValues[1]);
			SFMatrix3f[2] = Float.parseFloat(newValues[2]);
			SFMatrix3f[3] = Float.parseFloat(newValues[3]);
			SFMatrix3f[4] = Float.parseFloat(newValues[4]);
			SFMatrix3f[5] = Float.parseFloat(newValues[5]);
			SFMatrix3f[6] = Float.parseFloat(newValues[6]);
			SFMatrix3f[7] = Float.parseFloat(newValues[7]);
			SFMatrix3f[8] = Float.parseFloat(newValues[8]);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFMatrix3fObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFMatrix3fObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFMatrix3fObject(SFMatrix3fObject newValue)
	{
		if (newValue == null)
		{
			SFMatrix3f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		SFMatrix3f = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFMatrix3fObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFMatrix3f tuple size of <i>9</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFMatrix3fObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 9)
		{
			String errorNotice = "Illegal SFMatrix3f newValue array length=" + newValue.length +
				", must equal 9 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFMatrix3f = newValue;
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
		return SFMatrix3f;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFMatrix3f">X3D Tooltips: type SFMatrix3f</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < SFMatrix3f.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(SFMatrix3f[i]));
			else result.append(SFMatrix3f[i]);
			if (i < SFMatrix3f.length - 1)
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
	public Matrix3 inverse()
	{
		return null; // TODO
	}

	@Override
	public Matrix3 transpose()
	{
		return null; // TODO
	}

	@Override
	public Matrix3 multiplyLeft (Matrix3 matrix3x3)
	{
		return null; // TODO
	}

	@Override
	public Matrix3 multiplyRight(Matrix3 matrix3x3)
	{
		return null; // TODO
	}
	@Override
	public Matrix3 multiplyRowVector(SFVec3f vector3f) // TODO SFVec4f ?
	{
		return null; // TODO
	}

	@Override
	public Matrix3 multiplyColVector(SFVec3f vector3f) // TODO SFVec4f ?
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
		return SFMatrix3f;
	}

	/**
	 * Apply an SFMatrix3fObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFMatrix3fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFMatrix3fObject setValue(SFMatrix3fObject newValue)
	{
		if (newValue == null)
		{
			SFMatrix3f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		SFMatrix3f = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link SFMatrix3fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFMatrix3fObject multiply(float scaleFactor)
	{
		for (int i = 0; i < SFMatrix3f.length; i++)
		{
			SFMatrix3f[i] *= scaleFactor;
		}
		return this;
	}
}
