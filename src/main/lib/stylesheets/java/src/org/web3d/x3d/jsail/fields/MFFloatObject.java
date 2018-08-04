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
 * This utility class provides a concrete implementation corresponding to MFFloat X3D field type.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * MFFloat is an array of SFFloat values, i.e. a single-precision floating-point array type. Array values are optionally separated by commas.
 * <br><br>
 * Related field object: {@link SFFloatObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFFloat">X3D Tooltips: type MFFloat</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFFloatAndMFFloat" target="blank">X3D Abstract Specification: SFFloatAndMFFloat</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFFloatObject extends X3DConcreteField implements org.web3d.x3d.sai.MFFloat
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFFloat</i> */
	public static final String NAME = "MFFloat";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = new float[0]; // initialize as empty array

	/** Default string value for this field type is "". */
	public static final String DEFAULT_VALUE_STRING = "";

	/** Default tuple size for this field type is <i>1</i> (i.e. number of component values making up a single-field SF object). */
	public static final int TUPLE_SIZE = 1;

	/** Default regular expression (regex) pattern for this field type is <i>(\s)*(((\+|\-)?(0|[1-9][0-9]*)(\.[0-9]*)?((E|e)(\+|\-)?[0-9]+)?)(\s|,)*)*</i>
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html#MFFloat" target="_blank">X3D Regular Expressions: MFFloat</a>
	 */
	public static final String REGEX = "(\\s)*(((\\+|\\-)?(0|[1-9][0-9]*)(\\.[0-9]*)?((E|e)(\\+|\\-)?[0-9]+)?)(\\s|,)*)*";

	/** Precompiled regular expression (regex) pattern for this field type.
	 * @see REGEX
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 */
	public static final java.util.regex.Pattern pattern = java.util.regex.Pattern.compile(REGEX);

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] MFFloat = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFFloatObject performs value initialization.
	 */
	public MFFloatObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFFloatObject applies default initial value.
	 * Static initializer also provided to verify that the regex pattern compiles and matches that default value.
	 * @see <a href="https://stackoverflow.com/questions/2704857/how-to-check-if-a-given-regex-is-valid">Stack Overflow: How to check if a given Regex is valid?</a>
	 * @see #DEFAULT_VALUE
	 */
	@Override
	public void initialize()
	{
		MFFloat = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}
	// static initializer
	static {
		try {
            // verify pattern is compiling OK, report exception if not
			java.util.regex.Pattern.compile(REGEX);
				
			// verify DEFAULT_VALUE matches pattern OK, report if not
			if ((new MFFloatObject(DEFAULT_VALUE)).matches() == false)
			{
				System.err.println("MFFloatObject.initialize() problem: failed to match default value DEFAULT_VALUE " + DEFAULT_VALUE);
			}
        }
		catch (java.util.regex.PatternSyntaxException exception)
		{
			System.err.println("Exception in MFFloat initialization testing, regex pattern compilation failure.");
			System.err.println("REGEX = " + REGEX);
			System.err.println(exception.getDescription());
        }
	}

	/**
	 * Validate current value via regular expression (regex) check of current object's toString() value, reporting errors only if found.
	 * @see #REGEX
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 * @return empty string if pattern matches, warning otherwise
	 */
	public final String validate()
	{
		java.util.regex.Matcher m = pattern.matcher(toString());
		if (!m.matches())
		{
			String errorNotice = "*** Regular expression (regex) failure, new MFFloatObject pattern mismatch (\"" + toString() + "\")";
			return errorNotice;
		}
		else return "";
	}
	/**
	 * Test pattern match via regular expression (regex) check of current object's toString() value.
	 * @see #REGEX
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 * @return true if pattern matches, false otherwise
	 */
	public final boolean matches()
	{
		java.util.regex.Matcher m = pattern.matcher(toString());
		return m.matches();
	}
	/**
	 * Test pattern match with regular expression (regex) of provided value.
	 * @param value String to check against regex pattern for successful match
	 * @see #REGEX
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 * @return true if pattern matches, false otherwise
	 */
	public static final boolean matches(String value)
	{
		java.util.regex.Matcher m = pattern.matcher(value);
		return m.matches();
	}

	/**
	 * Utility accessor for MFFloatObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFFloatObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment

		if (!MFFloatObject.matches(newValue)) // regex test
		{
			String errorNotice = "*** Regular expression (regex) failure, new MFFloatObject(" + newValue + ")";
			validationResult.append(errorNotice).append("\n");
		}
		if (newValue.trim().isEmpty())
		{
			MFFloat = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.replace(","," ").trim().split("\\s+");
			MFFloat = new float[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFFloat[i] = Float.parseFloat(newValues[i]); // insert in array
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFFloatObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Utility constructor for MFFloatObject to assign a single float as new initial array value.
	 * @param newValue is new value to assign
	 */
	public MFFloatObject (float newValue)
	{
		setValue(new SFFloatObject(newValue));
	}

	/**
	 * Utility constructor for MFFloatObject using a corresponding SFFloatObject as new initial value (which must pass parsing validation checks).
	 * @param newValue is new value to assign
	 */
	public MFFloatObject (SFFloatObject newValue)
	{
		if (newValue == null)
		{
			MFFloat = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFFloat = new float[1]; // create array
		MFFloat[0] = newValue.getValue();
	}

	/**
	 * Constructor to copy an MFFloatObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFFloatObject(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			MFFloat = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFFloat = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFFloatObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFFloatObject (float[] newValue)
	{
		if (newValue == null)
			newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		MFFloat = newValue;
	}

	/**
	 * Constructor for MFVec3fObject using an alternatively typed Java double[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFFloatObject(double[] newValue)
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
	 * Get the current value of this MFFloatObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(float[] valueDestination)
	{
		valueDestination = MFFloat;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return MFFloat;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFFloat">X3D Tooltips: type MFFloat</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFFloat.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(MFFloat[i]));
			else result.append(MFFloat[i]);
			if (i < MFFloat.length - 1)
				result.append(" ");
		}
		return result.toString();
	}
/**
* <p>
* Get an individual value from the existing field array.
* </p><p>
* If the index is outside the bounds of the current array of data values, an ArrayIndexOutOfBoundsException is thrown.
* </p>
* @param index is position of selected value in current array
* @return The selected value
* @throws ArrayIndexOutOfBoundsException The index was outside of the bounds of the current array.
*/
@Override
public float get1Value(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFFloat.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFFloat.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFFloat array length=" + MFFloat.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	return MFFloat[index];
}

/**
* Assign an array subset to this field.
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

	MFFloat = Arrays.copyOf(newValue, size); // array size slicing
}

/**
* Assign a new float[] value to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(float[] newValue)
{
	if (newValue == null)
		newValue = new float[0];
	MFFloat = new float[newValue.length]; // reset array size
	MFFloat = newValue;
}

/**
* Assign a double-precision array value to this single-precision field.
* <br ><br >
* <i>Warning:</i> this method casts type of input values from higher precision to lower precision.
* <br ><br >
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
* @return {@link MFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/	
public MFFloatObject setValue(double[] newValue)
{
	if (newValue == null)
		newValue = new double[0];
	MFFloat = new float[newValue.length]; // reset array size
	for (int i = 0; i < newValue.length; i++)
		MFFloat[i] = (float) newValue[i]; // cast types for new array
	return this;
}
/**
* Assign a single float value as new array (of length 1).
* @param newValue The replacement value to assign.
*/	
public void setValue(float newValue)
{
	MFFloat = new float[1]; // create array
	MFFloat[0] = newValue;
}

/**
* Assign a single-field SFFloatObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFFloatObject setValue(SFFloatObject newValue)
{
	if (newValue == null)
	{
		MFFloat = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	MFFloat = new float[1]; // create (or else clear) previous contents
	MFFloat[0] = newValue.getValue();
	return this;
}

/**
* Replace a single value at the appropriate location in the existing value array.
* Size of the current underlying value array does not change.
* @see X3DConcreteField#getTupleSize(String)
* @param index is position of selected value in current array
* @param newValue provides new value to apply
*/
@Override
public void set1Value(int index, float newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFFloat.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFFloat.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFFloat array length=" + MFFloat.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	MFFloat[index] = newValue;
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(float newValue)
{
	MFFloat = Arrays.copyOf(MFFloat, MFFloat.length + 1); // increase array size for append
	MFFloat[MFFloat.length-1] = newValue;
}
/**
* Appends another array at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec4f tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
public void append(float[] newValue)
{
	if ((newValue.length % 1) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 4 when declaring new MFVec4fObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFFloat.length;
	MFFloat = Arrays.copyOf(MFFloat, MFFloat.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFFloat[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFFloatObject append(SFFloatObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFFloatObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFFloatObject append(MFFloatObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Insert a new value prior to the index location in the existing value array, increasing the field length accordingly.
* @see X3DConcreteField#getTupleSize(String)
* @param index The position for the inserted value in the current array
* @param newValue The newValue to insert
*/
@Override
public void insertValue(int index, float newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFFloat.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFFloat array length=" + MFFloat.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFFloat.length - index;
	MFFloat = Arrays.copyOf(MFFloat, MFFloat.length + 1); // increase array size for insert
	System.arraycopy(MFFloat, index, MFFloat, index + 1, sliceLength); // move second half of array to right
	MFFloat[index] = newValue;
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFFloat elements for the given data type.
 *
 * @return The number of SFFloat elements in this field array.
 */
@Override
public int size()
{
	return MFFloat.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFFloat = new float[0];
}

/**
 * Remove one SFFloat element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFFloat.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFFloat.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFFloat array length=" + MFFloat.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFFloat.length - (index + 1) * 1; // account for tupleSize
	System.arraycopy(MFFloat, (index + 1) * 1, MFFloat, index * 1, offsetLength); // copy over element being removed
	MFFloat = Arrays.copyOfRange(MFFloat, 0, MFFloat.length - 1); // finally reduce overall array size by one tuple
}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return MFFloat;
	}

	/**
	 * Apply an MFFloatObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFFloatObject setValue(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			MFFloat = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFFloat = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link MFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFFloatObject multiply(float scaleFactor)
	{
		for (int i = 0; i < MFFloat.length; i++)
		{
			MFFloat[i] *= scaleFactor;
		}
		return this;
	}

	/**
	 * Determine whether current value matches DEFAULT_VALUE
	 * @see #DEFAULT_VALUE
	 * @return whether current value matches DEFAULT_VALUE
	 */
    public boolean isDefaultValue()
    {
        return Arrays.equals(MFFloat, DEFAULT_VALUE);
    }
}
