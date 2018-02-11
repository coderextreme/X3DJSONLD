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
 * This utility class provides a concrete implementation corresponding to MFVec3d X3D field type.
 * 
 * <br><br>
 * MFVec3d is an array of SFVec3d values. Individual singleton SFVec3d array values are optionally separated by commas. Original rationale for inclusion: GeoVRML 1.0 Recommended Practice, Section 2.3, Limitations of Single Precision. Hint: MFVec3d can be used to specify a list of georeferenced 3D coordinates.
<br><br>
Related field object: {@link SFVec3dObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFVec3d">X3D Tooltips: type MFVec3d</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFVec3dAndMFVec3d" target="blank">X3D Abstract Specification: SFVec3dAndMFVec3d</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFVec3dObject extends X3DConcreteField implements org.web3d.x3d.sai.MFVec3d
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFVec3d</i> */
	public static final String NAME = "MFVec3d";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final double[] DEFAULT_VALUE = new double[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private double[] MFVec3d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFVec3dObject performs value initialization.
	 */
	public MFVec3dObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFVec3dObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFVec3d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for MFVec3dObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFVec3dObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFVec3d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if ((newValues.length % 3) != 0) // tupleSize modulus check
			{
				String errorNotice = "illegal number of values (" + newValues.length + ")" +
					" in initialization string, must be multiple of 3 when declaring new MFVec3dObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			MFVec3d = new double[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFVec3d[i] = Double.parseDouble(newValues[i]); // insert in array
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFVec3dObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an MFVec3dObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFVec3dObject(MFVec3dObject newValue)
	{
		if (newValue == null)
		{
			MFVec3d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFVec3d = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFVec3dObject using a corresponding Java primitive double[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFVec3dObject (double[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length % 3 != 0) // 3-tuple check
		{
			String errorNotice = "Illegal MFVec3d newValue array length=" + newValue.length +
				", must be multiple of 3 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		MFVec3d = newValue;
	}

	/**
	 * Utility method to normalize vector values to unit length, ignore vector values with zero length.
	 * @return {@link MFVec3dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFVec3dObject normalize()
	{
		for (int index = 0; index+3 < MFVec3d.length; index = index + 3)
		{
			double length =  Math.sqrt(
				MFVec3d[index+0]*MFVec3d[index+0] +
				MFVec3d[index+1]*MFVec3d[index+1] +
				MFVec3d[index+2]*MFVec3d[index+2]);
		
			if (length > 0.0)
			{
				MFVec3d[index+0] = MFVec3d[index+0] / length;
				MFVec3d[index+1] = MFVec3d[index+1] / length;
				MFVec3d[index+2] = MFVec3d[index+2] / length;
			}
		}
		return this;
	}

	/**
	 * Constructor for MFVec3fObject using an alternatively typed float[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFVec3dObject(float[] newValue)
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
	 * Get the current value of this MFVec3dObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(double[] valueDestination)
	{
		valueDestination = MFVec3d;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public double[] getPrimitiveValue()
	{
		return MFVec3d;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFVec3d">X3D Tooltips: type MFVec3d</a>
	 * @see org.web3d.x3d.jsail.fields.SFDoubleObject#stripTrailingZeroes(double)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFVec3d.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFDoubleObject.stripTrailingZeroes(MFVec3d[i]));
			else result.append(MFVec3d[i]);
			if (i < MFVec3d.length - 1)
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
	if (MFVec3d.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFVec3d.length / 3) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec3d array length=" + MFVec3d.length / 3;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	destinationValue = Arrays.copyOfRange(MFVec3d, index * 3, (index * 3) + 3 - 1); // tupleSize factor 
}

/**
* Assign an array subset to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
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

	MFVec3d = Arrays.copyOf(newValue, size); // array size slicing
}

  /**
   * Get the current value of this MFVec3dObject by copying it into the valueDestination array, leaving the current object unchanged.
   */
  @Override
  public void getValue(double[][] valueDestination)
  {
	// TODO square array adjustment //// valueDestination = MFVec3d;
  }

/**
* Assign an array subset to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
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
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(double[] newValue)
{
	if (newValue == null)
		newValue = new double[0];
	MFVec3d = new double[newValue.length]; // reset array size
	MFVec3d = newValue;
}

/**
* Assign a single-precision floating-point array value to this double-precision field.
* <br ><br >
* <i>Warning:</i> this method casts type of input values from lower precision to higher precision.
* <br ><br >
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
* @return {@link MFVec3dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/	
public MFVec3dObject setValue(float[] newValue)
{
	if (newValue == null)
		newValue = new float[0];
	MFVec3d = new double[newValue.length]; // reset array size
	for (int i = 0; i < newValue.length; i++)
		MFVec3d[i] = (double) newValue[i]; // cast types for new array
	return this;
}
/**
* Assign a single-field SFVec3dObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFVec3dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFVec3dObject setValue(SFVec3dObject newValue)
{
	if (newValue == null)
	{
		MFVec3d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	setValue(newValue.toDoubleArray()); // create array
	return this;
}

/**
* Replace a single value at the appropriate location in the existing value array.
* Size of the current underlying value array does not change.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
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
	if (MFVec3d.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 3)
		{
			String errorNotice = "Illegal MFVec3d newValue array length=" + newValue.length +
				", must equal 3 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
	if (index >= MFVec3d.length / 3) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec3d array length=" + MFVec3d.length / 3;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offset = 0;
	for (double value : newValue)
	{
		MFVec3d[index + offset] = value;
		offset++;
	}
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(double[] newValue)
{
	if ((newValue.length % 3) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 3 when declaring new MFVec3dObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFVec3d.length;
				MFVec3d = Arrays.copyOf(MFVec3d, MFVec3d.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFVec3d[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFVec3dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFVec3dObject append(SFVec3dObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFVec3dObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFVec3dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFVec3dObject append(MFVec3dObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Insert a new value prior to the index location in the existing value array, increasing the field length accordingly.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec3d tuple size of <i>3</i>.
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
	if (newValue.length != 3) // array size check, account for tupleSize
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" for insertValue newValue array, must equal 3 for MFVec3dinsertValue(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	
	if (index >= MFVec3d.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec3d array length=" + MFVec3d.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFVec3d.length - index;
	MFVec3d = Arrays.copyOf(MFVec3d, MFVec3d.length + 3); // increase array size for insert
	System.arraycopy(MFVec3d, index, MFVec3d, index + 3, sliceLength); // move second half of array to right
	int offset = 0;
	for (double value : newValue)
	{
		MFVec3d[index + offset] = value;
		offset++;
	}
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFVec3d elements for the given data type.
 *
 * @return The number of SFVec3d elements in this field array.
 */
@Override
public int size()
{
	return MFVec3d.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFVec3d = new double[0];
}

/**
 * Remove one SFVec3d element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFVec3d.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFVec3d.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFVec3d array length=" + MFVec3d.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFVec3d.length - (index + 1) * 3; // account for tupleSize
	System.arraycopy(MFVec3d, (index + 1) * 3, MFVec3d, index * 3, offsetLength); // copy over element being removed
	MFVec3d = Arrays.copyOfRange(MFVec3d, 0, MFVec3d.length - 3); // finally reduce overall array size by one tuple
}

	/**
	 * Provide double array for this field type.
	 * @return Array of doubles in this field array.
	 */
	public double[] toDoubleArray()
	{
		return MFVec3d;
	}

	/**
	 * Apply an MFVec3dObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFVec3dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFVec3dObject setValue(MFVec3dObject newValue)
	{
		if (newValue == null)
		{
			MFVec3d = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFVec3d = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link MFVec3dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFVec3dObject multiply(double scaleFactor)
	{
		for (int i = 0; i < MFVec3d.length; i++)
		{
			MFVec3d[i] *= scaleFactor;
		}
		return this;
	}
}
