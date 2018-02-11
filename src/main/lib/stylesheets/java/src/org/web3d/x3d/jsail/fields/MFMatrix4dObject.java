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
import java.util.Arrays;
import org.web3d.x3d.sai.*;


/**
 * This utility class provides a concrete implementation corresponding to MFMatrix4d X3D field type.
 * 
 * <br><br>
 * MFMatrix4d specifies zero or more 4x4 matrices of double-precision floating point numbers, organized in row-major fashion. Warning: comma characters can only appear between singleton 16-tuple values.
<br><br>
Related field object: {@link SFMatrix4dObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFMatrix4d">X3D Tooltips: type MFMatrix4d</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFMatrix4dAndMFMatrix4d" target="blank">X3D Abstract Specification: SFMatrix4dAndMFMatrix4d</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFMatrix4dObject extends X3DConcreteField implements org.web3d.x3d.sai.MFMatrix4d
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFMatrix4d</i> */
	public static final String NAME = "MFMatrix4d";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final double[] DEFAULT_VALUE = new double[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private double[] MFMatrix4d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFMatrix4dObject performs value initialization.
	 */
	public MFMatrix4dObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFMatrix4dObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFMatrix4d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for MFMatrix4dObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFMatrix4dObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFMatrix4d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if ((newValues.length % 16) != 0) // tupleSize modulus check
			{
				String errorNotice = "illegal number of values (" + newValues.length + ")" +
					" in initialization string, must be multiple of 16 when declaring new MFMatrix4dObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			MFMatrix4d = new double[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFMatrix4d[i] = Double.parseDouble(newValues[i]); // insert in array
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFMatrix4dObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an MFMatrix4dObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFMatrix4dObject(MFMatrix4dObject newValue)
	{
		if (newValue == null)
		{
			MFMatrix4d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFMatrix4d = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFMatrix4dObject using a corresponding Java primitive double[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFMatrix4d tuple size of <i>16</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFMatrix4dObject (double[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length % 16 != 0) // 16-tuple check
		{
			String errorNotice = "Illegal MFMatrix4d newValue array length=" + newValue.length +
				", must be multiple of 16 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		MFMatrix4d = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @see SFDoubleObject#stripTrailingZeroes(double)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	public static String toString (double[] value)
	{
		StringBuilder result = new StringBuilder();
		for (int i=0; i < value.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFDoubleObject.stripTrailingZeroes(value[i])).append(" ");
			else result.append(value[i]).append(" ");
		}
		return result.toString().trim();
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public double[] getPrimitiveValue()
	{
		return MFMatrix4d;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFMatrix4d">X3D Tooltips: type MFMatrix4d</a>
	 * @see org.web3d.x3d.jsail.fields.SFDoubleObject#stripTrailingZeroes(double)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFMatrix4d.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFDoubleObject.stripTrailingZeroes(MFMatrix4d[i]));
			else result.append(MFMatrix4d[i]);
			if (i < MFMatrix4d.length - 1)
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
	public void setTransform(SFVec3d translation,
		SFRotation rotation,
		SFVec3d scale,
		SFRotation scaleOrientation,
		SFVec3d center)
	{
		// TODO
	}

	@Override
	public void getTransform(SFVec3d translation,
		SFRotation rotation,
		SFVec3d scale)
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
	public Matrix4 multiplyRowVector(SFVec3d vector3d) // TODO SFVec4d ?
	{
		return null; // TODO
	}

	@Override
	public Matrix4 multiplyColVector(SFVec3d vector3d) // TODO SFVec4d ?
	{
		return null; // TODO
	}

	/**
	 * Provide double array for this field type.
	 * @return Array of doubles in this field array.
	 */
	public double[] toDoubleArray()
	{
		return MFMatrix4d;
	}

	/**
	 * Apply an MFMatrix4dObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFMatrix4dObject setValue(MFMatrix4dObject newValue)
	{
		if (newValue == null)
		{
			MFMatrix4d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFMatrix4d = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFMatrix4dObject multiply(double scaleFactor)
	{
		for (int i = 0; i < MFMatrix4d.length; i++)
		{
			MFMatrix4d[i] *= scaleFactor;
		}
		return this;
	}
}
