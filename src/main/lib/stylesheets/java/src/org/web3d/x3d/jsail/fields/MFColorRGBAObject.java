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
import org.web3d.x3d.sai.InvalidFieldValueException;

/**
 * This utility class provides a concrete implementation corresponding to MFColorRGBA X3D field type.
 * 
 * <br><br>

 * <br>
 * Note that {@linkplain SFColorObject#ALICEBLUE SFColorObject} provides a variety of color constants.
 * <br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * MFColorRGBA specifies zero or more SFColorRGBA 4-tuples. Each color value is an RGBA 4-tuple of floating point numbers in the range 0.0 to 1.0. Alpha (opacity) values = (1 - transparency). The default value of an uninitialized MFColor field is the empty list. Individual SFColorRGBA array values are optionally separated by commas.
 * <br><br>
 * Related field object: {@link SFColorRGBAObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFColorRGBA">X3D Tooltips: type MFColorRGBA</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFColorRGBAAndMFColorRGBA" target="blank">X3D Abstract Specification: SFColorRGBAAndMFColorRGBA</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFColorRGBAObject extends X3DConcreteField implements org.web3d.x3d.sai.MFColorRGBA
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFColorRGBA</i> */
	public static final String NAME = "MFColorRGBA";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = new float[0]; // initialize as empty array

	/** Default tuple size for this field type is <i>4</i> (i.e. number of component values making up a single-field SF object). */
	public static final int TUPLE_SIZE = 4;

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] MFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFColorRGBAObject performs value initialization.
	 */
	public MFColorRGBAObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFColorRGBAObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for MFColorRGBAObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFColorRGBAObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().trim().split("\\s+");
			if ((newValues.length % 4) != 0) // tupleSize modulus check
			{
				String errorNotice = "illegal number of values (" + newValues.length + ")" +
					" in initialization string, must be multiple of 4 when declaring new MFColorRGBAObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			MFColorRGBA = new float[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFColorRGBA[i] = Float.parseFloat(newValues[i]); // insert in array
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFColorRGBAObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an MFColorRGBAObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFColorRGBAObject(MFColorRGBAObject newValue)
	{
		if (newValue == null)
		{
			MFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFColorRGBA = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFColorRGBAObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFColorRGBAObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length % 4 != 0) // 4-tuple check
		{
			String errorNotice = "Illegal MFColorRGBA newValue array length=" + newValue.length +
				", must be multiple of 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		MFColorRGBA = newValue;
	}

	/**
	 * Replace a single value at the appropriate location in the existing value array.
	 * Size of the current underlying value array does not change.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param index is position of selected value in current array
	 * @param hexColorValue The HTML color value (such as 0xAA2288) to apply
	 * @param alpha fourth component for opaqueness (1 - transparency)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFColorRGBAObject set1Value(int index, int hexColorValue, float alpha) throws ArrayIndexOutOfBoundsException
	{
		if (index < 0)
		{
			String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
			validationResult.append(errorNotice).append("\n");
			throw new ArrayIndexOutOfBoundsException(errorNotice);
		}
		if (index >= MFColorRGBA.length / MFColorRGBAObject.TUPLE_SIZE) // tupleSize factor
		{
			String errorNotice = "Provided array index=" + index + " (for 4-tuples) must be less than MFColor array length=" + MFColorRGBA.length / MFColorRGBAObject.TUPLE_SIZE;
			validationResult.append(errorNotice).append("\n");
			throw new ArrayIndexOutOfBoundsException(errorNotice);
		}
		
		// http://stackoverflow.com/questions/12798611/splitting-a-hex-number
						 
		float   red = ((hexColorValue>>16) & 0xff) / 255.0f;
		float green = ((hexColorValue>> 8) & 0xff) / 255.0f;
		float  blue = ((hexColorValue    ) & 0xff) / 255.0f;
						 
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f) || (alpha < 0.0f) || (alpha > 1.0f))
		{
			String errorNotice = "Illegal SFColorRGBA value (" + red + "," + green + "," + blue + "," + alpha +
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		MFColorRGBA[4*index + 0] = red;
		MFColorRGBA[4*index + 1] = green;
		MFColorRGBA[4*index + 2] = blue;
		MFColorRGBA[4*index + 3] = alpha;
		return this;
	}
	/**
	 * Complement all color values of array in RGB space (i.e. subtract each component from 1).
	 * @see <a href="https://en.wikipedia.org/wiki/Negative_(photography)">Wikipedia: Negative (photography)</a>
	 * @see <a href="https://en.wikipedia.org/wiki/Complementary_colors">Wikipedia: Complementary colors</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFColorRGBAObject complementRGB ()
	{
		for (int index = 0; index+3 < MFColorRGBA.length; index = index + 4)
		{
			MFColorRGBA[4*index + 0] = 1.0f - MFColorRGBA[4*index + 0];
			MFColorRGBA[4*index + 1] = 1.0f - MFColorRGBA[4*index + 1];
			MFColorRGBA[4*index + 2] = 1.0f - MFColorRGBA[4*index + 2];
		}
		return this;
	}
	/**
	 * Complement each alpha value of array by subtracting it from 1, note transparency = (1 - alpha).
	 * @see <a href="https://en.wikipedia.org/wiki/Negative_(photography)">Wikipedia: Negative (photography)</a>
	 * @see <a href="https://en.wikipedia.org/wiki/Complementary_colors">Wikipedia: Complementary colors</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFColorRGBAObject complementAlpha ()
	{
		for (int index = 0; index+3 < MFColorRGBA.length; index = index + 4)
		{
			MFColorRGBA[4*index + 3] = 1.0f - MFColorRGBA[4*index + 3];
		}
		return this;
	}
	/**
	 * Ensure all component color values are within range [0-1] by clipping as necessary.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFColorRGBAObject normalizeClip ()
	{
		for (int index = 0; index+3 < MFColorRGBA.length; index = index + 4)
		{
			if (MFColorRGBA[4*index + 0] < 0.0f) MFColorRGBA[4*index + 0] = 0.0f;
			if (MFColorRGBA[4*index + 1] < 0.0f) MFColorRGBA[4*index + 1] = 0.0f;
			if (MFColorRGBA[4*index + 2] < 0.0f) MFColorRGBA[4*index + 2] = 0.0f;
			if (MFColorRGBA[4*index + 3] < 0.0f) MFColorRGBA[4*index + 3] = 0.0f;
			if (MFColorRGBA[4*index + 0] > 1.0f) MFColorRGBA[4*index + 0] = 1.0f;
			if (MFColorRGBA[4*index + 1] > 1.0f) MFColorRGBA[4*index + 1] = 1.0f;
			if (MFColorRGBA[4*index + 2] > 1.0f) MFColorRGBA[4*index + 2] = 1.0f;
			if (MFColorRGBA[4*index + 3] > 1.0f) MFColorRGBA[4*index + 3] = 1.0f;
		}
		return this;
	}

	/**
	 * Constructor for MFVec3fObject using an alternatively typed Java double[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFColorRGBAObject(double[] newValue)
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
	 * Get the current value of this MFColorRGBAObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(float[] valueDestination)
	{
		valueDestination = MFColorRGBA;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return MFColorRGBA;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFColorRGBA">X3D Tooltips: type MFColorRGBA</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		return "TODO"; // unimplemented type toString()
	}
/**
* <p>
* Get an individual value from the existing field array.
* </p><p>
* If the index is outside the bounds of the current array of data values, an ArrayIndexOutOfBoundsException is thrown.
* </p>
* @param index is position of selected value in current array
* @param destinationValue where to place result for selected value
* @throws ArrayIndexOutOfBoundsException The index was outside of the bounds of the current array.
*/
@Override
public void get1Value(int index, float[] destinationValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFColorRGBA.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFColorRGBA.length / 4) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFColorRGBA array length=" + MFColorRGBA.length / 4;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	destinationValue = Arrays.copyOfRange(MFColorRGBA, index * 4, (index * 4) + 4 - 1); // tupleSize factor 
}

/**
* Assign an array subset to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
* @param newValue The replacement value array to (potentially) slice and then assign.
*/
@Override
public void setValue(int size, float[] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

	MFColorRGBA = Arrays.copyOf(newValue, size); // array size slicing
}

/**
* Assign a new float[] value to this field.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(float[] newValue)
{
	if (newValue == null)
		newValue = new float[0];
	MFColorRGBA = new float[newValue.length]; // reset array size
	MFColorRGBA = newValue;
}

/**
* Assign a double-precision array value to this single-precision field.
* <br ><br >
* <i>Warning:</i> this method casts type of input values from higher precision to lower precision.
* <br ><br >
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
* @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/	
public MFColorRGBAObject setValue(double[] newValue)
{
	if (newValue == null)
		newValue = new double[0];
	MFColorRGBA = new float[newValue.length]; // reset array size
	for (int i = 0; i < newValue.length; i++)
		MFColorRGBA[i] = (float) newValue[i]; // cast types for new array
	return this;
}
/**
* Assign a single-field SFColorRGBAObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFColorRGBAObject setValue(SFColorRGBAObject newValue)
{
	if (newValue == null)
	{
		MFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	setValue(newValue.toFloatArray()); // create array
		
	return this;
}

/**
* Replace a single value at the appropriate location in the existing value array.
* Size of the current underlying value array does not change.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param index is position of selected value in current array
* @param newValue provides new value to apply
*/
@Override
public void set1Value(int index, float[] newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFColorRGBA.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 4)
		{
			String errorNotice = "Illegal MFColorRGBA newValue array length=" + newValue.length +
				", must equal 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
	if (index >= MFColorRGBA.length / 4) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFColorRGBA array length=" + MFColorRGBA.length / 4;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offset = 0;
	for (float value : newValue)
	{
		MFColorRGBA[index + offset] = value;
		offset++;
	}
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(float[] newValue)
{
	if ((newValue.length % 4) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 4 when declaring new MFColorRGBAObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFColorRGBA.length;
				MFColorRGBA = Arrays.copyOf(MFColorRGBA, MFColorRGBA.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFColorRGBA[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFColorRGBAObject append(SFColorRGBAObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFColorRGBAObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFColorRGBAObject append(MFColorRGBAObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Insert a new value prior to the index location in the existing value array, increasing the field length accordingly.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param index The position for the inserted value in the current array
* @param newValue The newValue to insert
*/
@Override
public void insertValue(int index, float[] newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (newValue.length != 4) // array size check, account for tupleSize
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" for insertValue newValue array, must equal 4 for MFColorRGBAinsertValue(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	
	if (index >= MFColorRGBA.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFColorRGBA array length=" + MFColorRGBA.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFColorRGBA.length - index;
	MFColorRGBA = Arrays.copyOf(MFColorRGBA, MFColorRGBA.length + 4); // increase array size for insert
	System.arraycopy(MFColorRGBA, index, MFColorRGBA, index + 4, sliceLength); // move second half of array to right
	int offset = 0;
	for (float value : newValue)
	{
		MFColorRGBA[index + offset] = value;
		offset++;
	}
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFColorRGBA elements for the given data type.
 *
 * @return The number of SFColorRGBA elements in this field array.
 */
@Override
public int size()
{
	return MFColorRGBA.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFColorRGBA = new float[0];
}

/**
 * Remove one SFColorRGBA element of the field array at index position, if found.  Initial element is at index 0.
 * @param index position of element in field array that gets removed
 */
@Override
public void remove(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot remove() value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFColorRGBA.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFColorRGBA.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFColorRGBA array length=" + MFColorRGBA.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFColorRGBA.length - (index + 1) * 4; // account for tupleSize
	System.arraycopy(MFColorRGBA, (index + 1) * 4, MFColorRGBA, index * 4, offsetLength); // copy over element being removed
	MFColorRGBA = Arrays.copyOfRange(MFColorRGBA, 0, MFColorRGBA.length - 4); // finally reduce overall array size by one tuple
}

    /**
     * Write out the current value of this field into the external valueDestination array.
     *
     * @param valueDestination The array to be filled in with current field values.
     * @throws ArrayIndexOutOfBoundsException The provided valueDestination array was too small.
     */
	@Override
	public void getValue(float[][] valueDestination)
	{
		// TODO
	}

    /**
     * Assign an array subset to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFColorRGBA tuple size of <i>4</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
     * @param newValue The replacement value array to (potentially) slice and then assign.
     */
	@Override
	public void setValue(int size, float[][] newValue)
	{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

		// TODO
	}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return MFColorRGBA;
	}

	/**
	 * Apply an MFColorRGBAObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFColorRGBAObject setValue(MFColorRGBAObject newValue)
	{
		if (newValue == null)
		{
			MFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFColorRGBA = newValue.getPrimitiveValue();
		return this;
	}								
}
