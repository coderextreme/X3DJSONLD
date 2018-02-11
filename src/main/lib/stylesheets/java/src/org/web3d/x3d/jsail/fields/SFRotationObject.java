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
 * This utility class provides a concrete implementation corresponding to SFRotation X3D field type.
 * 
 * <br><br>
 * SFRotation is an axis-angle 4-tuple, indicating X-Y-Z direction axis plus angle orientation about that axis. The first three values specify a normalized axis vector about which the rotation takes place, so the first three values shall be within the range [-1..+1] in order to represent a normalized unit vector. The fourth value specifies the amount of right-handed rotation about that axis in radians. Warning: comma characters in attribute values do not pass strict XML validation.
<br><br>
Related field object: {@link MFRotationObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFRotation">X3D Tooltips: type SFRotation</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFRotationAndMFRotation" target="blank">X3D Abstract Specification: SFRotationAndMFRotation</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFRotationObject extends X3DConcreteField implements org.web3d.x3d.sai.SFRotation
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFRotation</i> */
	public static final String NAME = "SFRotation";

	/** Default value for this field type is a <i>0 0 1 0</i> identity-rotation value.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = {0.0f, 0.0f, 1.0f, 0.0f};

	/** Preferred default value for this field type, oriented for rotation about Y axis. */
	public static final float[] PREFERRED_DEFAULT_VALUE = {0.0f, 1.0f, 0.0f, 0.0f};

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] SFRotation = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for SFRotationObject performs value initialization.
	 */
	public SFRotationObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFRotationObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFRotation = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for SFRotationObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFRotationObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFRotation = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if (newValues.length != 4)
			{
				String errorNotice = "illegal number of values in initialization string, new SFRotationObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			SFRotation[0] = Float.parseFloat(newValues[0]);
			SFRotation[1] = Float.parseFloat(newValues[1]);
			SFRotation[2] = Float.parseFloat(newValues[2]);
			SFRotation[3] = Float.parseFloat(newValues[3]);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFRotationObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFRotationObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFRotationObject(SFRotationObject newValue)
	{
		if (newValue == null)
		{
			SFRotation = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		SFRotation = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFRotationObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFRotation tuple size of <i>4</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFRotationObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 4)
		{
			String errorNotice = "Illegal SFRotation newValue array length=" + newValue.length +
				", must equal 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFRotation = newValue;
	}

	/**
	 * Utility method converting degrees to radians.
	 * @param angleDegrees value to convert
	 * @return angle value in radians
	 */
	public static float degreesToRadians (float angleDegrees)
	{
		return (float) (angleDegrees * Math.PI / 180.0);
	}
	/**
	 * Utility method converting degrees to radians.
	 * @param angleDegrees value to convert
	 * @return angle value in radians
	 */
	public static float degreesToRadians (int angleDegrees)
	{
		return (float) (angleDegrees * Math.PI / 180.0);
	}
	/**
	 * Utility method converting degrees to radians.
	 * @param angleDegrees value to convert
	 * @return angle value in radians
	 */
	public static float degreesToRadians (double angleDegrees)
	{
		return (float) (angleDegrees * Math.PI / 180.0);
	}
	/**
	 * Utility method converting radians to degrees.
	 * @param angleRadians value to convert
	 * @return angle value in degrees
	 */
	public static float radiansToDegrees (float angleRadians)
	{
		return (float) (angleRadians * 180.0 / Math.PI);
	}
	/**
	 * Utility method converting radians to degrees.
	 * @param angleRadians value to convert
	 * @return angle value in degrees
	 */
	public static float radiansToDegrees (double angleRadians)
	{
		return (float) (angleRadians * 180.0 / Math.PI);
	}
	/**
	 * Constructor using individual float types as new initial axis-angle value.
	 * <i>Warning</i>: angle must be in radians, if necessary use {@link #degreesToRadians(float) }
	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis
	 */
	public SFRotationObject (float x, float y, float z, float angleRadians)
	{
		if ((x == 0.0f) && (y == 0.0f) && (z == 0.0f))
		{
			String errorNotice = "Illegal SFRotation value (" + x + "," + y + "," + z + "," + angleRadians + 
				") since (x,y,z) axis vector must have a direction and cannot be (0,0,0)";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		if (Math.abs(angleRadians) > 2.0 * Math.PI)
			System.err.println ("SFRotation constructor: questionable |angleRadians| > 2pi");
		SFRotation[0] = x;
		SFRotation[1] = y;
		SFRotation[2] = z;
		SFRotation[3] = angleRadians;
	}
	/**
	 * Constructor using individual double types as new initial axis-angle value.
	 * <i>Warning</i>: angle must be in radians, if necessary use {@link #degreesToRadians(float) }
	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis
	 */
	public SFRotationObject (double x, double y, double z, double angleRadians)
	{
		if ((x == 0.0) && (y == 0.0) && (z == 0.0))
		{
			String errorNotice = "Illegal SFRotation value (" + x + "," + y + "," + z + "," + angleRadians + 
				") since (x,y,z) axis vector must have a direction and cannot be (0,0,0)";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		if (Math.abs(angleRadians) > 2.0 * Math.PI)
			System.err.println ("SFRotation constructor: questionable |angleRadians| > 2pi");
		SFRotation[0] = (float) x;
		SFRotation[1] = (float) y;
		SFRotation[2] = (float) z;
		SFRotation[3] = (float) angleRadians;
	}
	/**
	 * Constructor using individual integer types as new initial axis, along with float angle value.
	 * <i>Warning</i>: angle must be in radians, if necessary use {@link #degreesToRadians(float) }
	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis
	 */
	public SFRotationObject (int x, int y, int z, float angleRadians)
	{
		if ((x == 0) && (y == 0) && (z == 0))
		{
			String errorNotice = "Illegal SFRotation value (" + x + "," + y + "," + z + "," + angleRadians + 
				") since (x,y,z) axis vector must have a direction and cannot be (0,0,0)";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		if (Math.abs(angleRadians) > 2.0 * Math.PI)
			System.err.println ("SFRotation constructor: questionable |angleRadians| > 2pi");
		SFRotation[0] = (float) x;
		SFRotation[1] = (float) y;
		SFRotation[2] = (float) z;
		SFRotation[3] =         angleRadians;
	}
	/**
	 * Utility method to normalize this rotation value: unit length for axis-angle vector, angle in range [0-2pi] radians, rotation with zero-length axis is reset to DEFAULT_VALUE.
	 * @return {@link SFRotationObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFRotationObject normalize()
	{
		float length = (float) Math.sqrt(SFRotation[0]*SFRotation[0] + SFRotation[1]*SFRotation[1] + +SFRotation[2]*SFRotation[2]);
		if (length == 0.0f)
		{
			SFRotation = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		}
		else
		{
			SFRotation[0] = SFRotation[0] / length;
			SFRotation[1] = SFRotation[1] / length;
			SFRotation[2] = SFRotation[2] / length;
			while (SFRotation[3] < 0.0f)
				   SFRotation[3] += 2.0f * Math.PI;
			while (SFRotation[3] >= 2.0f * Math.PI)
				   SFRotation[3] -= 2.0f * Math.PI;
		}
		return this;
	}

	/**
	 * Assign a new value to this field.
	 * <i>Warning</i>: angle must be in radians, if necessary use {@link #degreesToRadians(float) }
	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis
	 */
	public void setValue(float x, float y, float z, float angleRadians)
	{
		float[] floatArray = new float[4];
		floatArray[0] = x;
		floatArray[1] = y;
		floatArray[2] = z;
		floatArray[3] = angleRadians;
		
		setValue(floatArray);
	}
	/**
	 * Assign a new value to this field.
	 * <i>Warning</i>: angle must be in radians, if necessary use {@link #degreesToRadians(float) }
	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis
	 */
	public void setValue(double x, double y, double z, double angleRadians)
	{
		setValue((float) x, (float) y, (float) z, (float) angleRadians);
	}
	/**
	 * Assign a new value to this field. 
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFRotation tuple size of <i>4</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	public void setValue(double[] newValue)
	{
		float            x = (float) newValue[0];
		float            y = (float) newValue[1];
		float            z = (float) newValue[2];
		float angleRadians = (float) newValue[3];
		
		setValue(x, y, z, angleRadians);
	}

	/**
	 * Constructor for MFVec3fObject using an alternatively typed Java double[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public SFRotationObject(double[] newValue)
	{
		setValue(newValue); // type conversion, doubles to floats
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
	 * Get the current value of this SFRotationObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(float[] valueDestination)
	{
		valueDestination = SFRotation;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return SFRotation;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFRotation">X3D Tooltips: type SFRotation</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < SFRotation.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(SFRotation[i]));
			else result.append(SFRotation[i]);
			if (i < SFRotation.length - 1)
				result.append(" ");
		}
		return result.toString();
	}
	/**
	 * Assign a new value to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFRotation tuple size of <i>4</i>.
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
			String errorNotice = "Illegal SFRotation newValue array length=" + newValue.length +
				", must equal 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		
		float            x = newValue[0];
		float            y = newValue[1];
		float            z = newValue[2];
		float angleRadians = newValue[3];
		if ((x == 0.0f) && (y == 0.0f) && (z == 0.0f))
		{
			String errorNotice = "Illegal SFRotation value (" + x + "," + y + "," + z + "," + angleRadians + 
				") since (x,y,z) axis vector must have a direction and cannot be (0,0,0)";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		if (Math.abs(angleRadians) > 2.0 * Math.PI)
			System.err.println ("SFRotation constructor: questionable |angleRadians| > 2pi");
		SFRotation = newValue;
	}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return SFRotation;
	}

	/**
	 * Apply an SFRotationObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFRotationObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFRotationObject setValue(SFRotationObject newValue)
	{
		if (newValue == null)
		{
			SFRotation = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		SFRotation = newValue.getPrimitiveValue();
		return this;
	}								
}
