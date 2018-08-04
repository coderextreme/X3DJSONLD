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
 * This utility class provides a concrete implementation corresponding to MFVec2d X3D field type.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * MFVec2d is an array of SFVec2d values. Individual singleton SFVec2d array values are optionally separated by commas.
 * <br><br>
 * Related field object: {@link SFVec2dObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFVec2d">X3D Tooltips: type MFVec2d</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFVec2dAndMFVec2d" target="blank">X3D Abstract Specification: SFVec2dAndMFVec2d</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFVec2dObject extends X3DConcreteField implements org.web3d.x3d.sai.MFVec2d
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFVec2d</i> */
	public static final String NAME = "MFVec2d";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final double[] DEFAULT_VALUE = new double[0]; // initialize as empty array

	/** Default string value for this field type is "". */
	public static final String DEFAULT_VALUE_STRING = "";

	/** Default tuple size for this field type is <i>2</i> (i.e. number of component values making up a single-field SF object). */
	public static final int TUPLE_SIZE = 2;

	/** Default regular expression (regex) pattern for this field type is <i>((\+|\-)?(0|[1-9][0-9]*)(\.[0-9]*)?((E|e)(\+|\-)?[0-9]+)? (\+|\-)?(0|[1-9][0-9]*)(\.[0-9]*)?((E|e)(\+|\-)?[0-9]+)?( )?(,)?( )?)*</i>
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html#MFVec2d" target="_blank">X3D Regular Expressions: MFVec2d</a>
	 */
	public static final String REGEX = "((\\+|\\-)?(0|[1-9][0-9]*)(\\.[0-9]*)?((E|e)(\\+|\\-)?[0-9]+)? (\\+|\\-)?(0|[1-9][0-9]*)(\\.[0-9]*)?((E|e)(\\+|\\-)?[0-9]+)?( )?(,)?( )?)*";

	/** Precompiled regular expression (regex) pattern for this field type.
	 * @see REGEX
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 */
	public static final java.util.regex.Pattern pattern = java.util.regex.Pattern.compile(REGEX);

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private double[] MFVec2d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFVec2dObject performs value initialization.
	 */
	public MFVec2dObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFVec2dObject applies default initial value.
	 * Static initializer also provided to verify that the regex pattern compiles and matches that default value.
	 * @see <a href="https://stackoverflow.com/questions/2704857/how-to-check-if-a-given-regex-is-valid">Stack Overflow: How to check if a given Regex is valid?</a>
	 * @see #DEFAULT_VALUE
	 */
	@Override
	public void initialize()
	{
		MFVec2d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}
	// static initializer
	static {
		try {
            // verify pattern is compiling OK, report exception if not
			java.util.regex.Pattern.compile(REGEX);
				
			// verify DEFAULT_VALUE matches pattern OK, report if not
			if ((new MFVec2dObject(DEFAULT_VALUE)).matches() == false)
			{
				System.err.println("MFVec2dObject.initialize() problem: failed to match default value DEFAULT_VALUE " + DEFAULT_VALUE);
			}
        }
		catch (java.util.regex.PatternSyntaxException exception)
		{
			System.err.println("Exception in MFVec2d initialization testing, regex pattern compilation failure.");
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
			String errorNotice = "*** Regular expression (regex) failure, new MFVec2dObject pattern mismatch (\"" + toString() + "\")";
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
	 * Utility accessor for MFVec2dObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFVec2dObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment

		if (!MFVec2dObject.matches(newValue)) // regex test
		{
			String errorNotice = "*** Regular expression (regex) failure, new MFVec2dObject(" + newValue + ")";
			validationResult.append(errorNotice).append("\n");
		}
		if (newValue.trim().isEmpty())
		{
			MFVec2d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.replace(","," ").trim().split("\\s+");
			if ((newValues.length % 2) != 0) // tupleSize modulus check
			{
				String errorNotice = "illegal number of values (" + newValues.length + ")" +
					" in initialization string, must be multiple of 2 when declaring new MFVec2dObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			MFVec2d = new double[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFVec2d[i] = Double.parseDouble(newValues[i]); // insert in array
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFVec2dObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an MFVec2dObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFVec2dObject(MFVec2dObject newValue)
	{
		if (newValue == null)
		{
			MFVec2d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFVec2d = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFVec2dObject using a corresponding Java primitive double[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFVec2dObject (double[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length % 2 != 0) // 2-tuple check
		{
			String errorNotice = "Illegal MFVec2d newValue array length=" + newValue.length +
				", must be multiple of 2 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		MFVec2d = newValue;
	}

	/**
	 * Utility method to normalize vector values to unit length, ignore vector values with zero length.
	 * @return {@link MFVec2dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFVec2dObject normalize()
	{
		for (int index = 0; index+2 < MFVec2d.length; index = index + 2)
		{
			double length =  Math.sqrt(
				MFVec2d[index+0]*MFVec2d[index+0] +
				MFVec2d[index+1]*MFVec2d[index+1]);
		
			if (length > 0.0)
			{
				MFVec2d[index+0] = MFVec2d[index+0] / length;
				MFVec2d[index+1] = MFVec2d[index+1] / length;
			}
		}
		return this;
	}

	/**
	 * Constructor for MFVec3fObject using an alternatively typed float[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFVec2dObject(float[] newValue)
	{
		setValue(newValue); // type conversion, floats to doubles
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
	 * Get the current value of this MFVec2dObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(double[] valueDestination)
	{
		valueDestination = MFVec2d;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public double[] getPrimitiveValue()
	{
		return MFVec2d;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFVec2d">X3D Tooltips: type MFVec2d</a>
	 * @see org.web3d.x3d.jsail.fields.SFDoubleObject#stripTrailingZeroes(double)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFVec2d.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFDoubleObject.stripTrailingZeroes(MFVec2d[i]));
			else result.append(MFVec2d[i]);
			if (i < MFVec2d.length - 1)
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
* @param destinationValue where to place result for selected value
* @throws ArrayIndexOutOfBoundsException The index was outside of the bounds of the current array.
*/
@Override
public void get1Value(int index, double[] destinationValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFVec2d.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFVec2d.length / 2) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec2d array length=" + MFVec2d.length / 2;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	destinationValue = Arrays.copyOfRange(MFVec2d, index * 2, (index * 2) + 2 - 1); // tupleSize factor 
}

/**
* Assign an array subset to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
* @param newValue The replacement value array to (potentially) slice and then assign.		 
*/
@Override
public void setValue(int size, double[] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

	MFVec2d = Arrays.copyOf(newValue, size); // array size slicing
}

  /**
   * Get the current value of this MFVec2dObject by copying it into the valueDestination array, leaving the current object unchanged.
   */
  @Override
  public void getValue(double[][] valueDestination)
  {
	// TODO square array adjustment //// valueDestination = MFVec2d;
  }

/**
* Assign an array subset to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
* @param newValue The replacement value array to (potentially) slice and then assign.
*/
@Override
public void setValue(int size, double[][] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

	// TODO array size slicing, handle double subscripts
}

/**
* Assign a new double[] value to this field.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(double[] newValue)
{
	if (newValue == null)
		newValue = new double[0];
	MFVec2d = new double[newValue.length]; // reset array size
	MFVec2d = newValue;
}

/**
* Assign a single-precision floating-point array value to this double-precision field.
* <br ><br >
* <i>Warning:</i> this method casts type of input values from lower precision to higher precision.
* <br ><br >
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
* @return {@link MFVec2dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/	
public MFVec2dObject setValue(float[] newValue)
{
	if (newValue == null)
		newValue = new float[0];
	MFVec2d = new double[newValue.length]; // reset array size
	for (int i = 0; i < newValue.length; i++)
		MFVec2d[i] = (double) newValue[i]; // cast types for new array
	return this;
}
/**
* Assign a single-field SFVec2dObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFVec2dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFVec2dObject setValue(SFVec2dObject newValue)
{
	if (newValue == null)
	{
		MFVec2d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	setValue(newValue.toDoubleArray()); // create array
	return this;
}

/**
* Replace a single value at the appropriate location in the existing value array.
* Size of the current underlying value array does not change.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param index is position of selected value in current array
* @param newValue provides new value to apply
*/
@Override
public void set1Value(int index, double[] newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFVec2d.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 2)
		{
			String errorNotice = "Illegal MFVec2d newValue array length=" + newValue.length +
				", must equal 2 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
	if (index >= MFVec2d.length / 2) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec2d array length=" + MFVec2d.length / 2;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offset = 0;
	for (double value : newValue)
	{
		MFVec2d[index + offset] = value;
		offset++;
	}
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(double[] newValue)
{
	if ((newValue.length % 2) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 2 when declaring new MFVec2dObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFVec2d.length;
				MFVec2d = Arrays.copyOf(MFVec2d, MFVec2d.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFVec2d[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFVec2dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFVec2dObject append(SFVec2dObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFVec2dObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFVec2dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFVec2dObject append(MFVec2dObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Insert a new value prior to the index location in the existing value array, increasing the field length accordingly.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec2d tuple size of <i>2</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param index The position for the inserted value in the current array
* @param newValue The newValue to insert
*/
@Override
public void insertValue(int index, double[] newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (newValue.length != 2) // array size check, account for tupleSize
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" for insertValue newValue array, must equal 2 for MFVec2dinsertValue(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	
	if (index >= MFVec2d.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec2d array length=" + MFVec2d.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFVec2d.length - index;
	MFVec2d = Arrays.copyOf(MFVec2d, MFVec2d.length + 2); // increase array size for insert
	System.arraycopy(MFVec2d, index, MFVec2d, index + 2, sliceLength); // move second half of array to right
	int offset = 0;
	for (double value : newValue)
	{
		MFVec2d[index + offset] = value;
		offset++;
	}
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFVec2d elements for the given data type.
 *
 * @return The number of SFVec2d elements in this field array.
 */
@Override
public int size()
{
	return MFVec2d.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFVec2d = new double[0];
}

/**
 * Remove one SFVec2d element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFVec2d.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFVec2d.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec2d array length=" + MFVec2d.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFVec2d.length - (index + 1) * 2; // account for tupleSize
	System.arraycopy(MFVec2d, (index + 1) * 2, MFVec2d, index * 2, offsetLength); // copy over element being removed
	MFVec2d = Arrays.copyOfRange(MFVec2d, 0, MFVec2d.length - 2); // finally reduce overall array size by one tuple
}

	/**
	 * Provide double array for this field type.
	 * @return Array of doubles in this field array.
	 */
	public double[] toDoubleArray()
	{
		return MFVec2d;
	}

	/**
	 * Apply an MFVec2dObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFVec2dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFVec2dObject setValue(MFVec2dObject newValue)
	{
		if (newValue == null)
		{
			MFVec2d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFVec2d = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link MFVec2dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFVec2dObject multiply(double scaleFactor)
	{
		for (int i = 0; i < MFVec2d.length; i++)
		{
			MFVec2d[i] *= scaleFactor;
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
        return Arrays.equals(MFVec2d, DEFAULT_VALUE);
    }
}
