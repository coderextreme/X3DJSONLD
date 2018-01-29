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
 * This utility class provides a concrete implementation corresponding to MFTime X3D field type.
 * 
 * <br><br>
 * MFTime is an array of SFTime values. Array values are optionally separated by commas.
<br><br>
Related field object: {@link SFTimeObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFTime">X3D Tooltips: type MFTime</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFTimeAndMFTime" target="blank">X3D Abstract Specification: SFTimeAndMFTime</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFTimeObject extends X3DConcreteField implements org.web3d.x3d.sai.MFTime
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFTime</i> */
	public static final String NAME = "MFTime";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final double[] DEFAULT_VALUE = new double[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private double[] MFTime = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFTimeObject performs value initialization.
	 */
	public MFTimeObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFTimeObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFTime = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for MFTimeObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFTimeObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFTime = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			if ((newValues.length % 1) != 0) // tupleSize modulus check
			{
				String errorNotice = "illegal number of values (" + newValues.length + ")" +
					" in initialization string, must be multiple of 1 when declaring new MFTimeObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			MFTime = new double[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFTime[i] = Double.parseDouble(newValues[i]); // insert in array		
				if ((MFTime[i] < 0.0) && (MFTime[i] != SFTimeObject.DEFAULT_VALUE)) // initial value check
				{
					MFTime[i] = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
				}
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFTimeObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Utility constructor for MFTimeObject to assign a single double as new initial array value.
	 * @param newValue is new value to assign
	 */
	public MFTimeObject (double newValue)
	{
		setValue(new SFTimeObject(newValue));
	}

	/**
	 * Utility constructor for MFTimeObject using a corresponding SFTimeObject as new initial value (which must pass parsing validation checks).
	 * @param newValue is new value to assign
	 */
	public MFTimeObject (SFTimeObject newValue)
	{
		if (newValue == null)
		{
			MFTime = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFTime = new double[1]; // create array
		MFTime[0] = newValue.getValue();
	}

	/**
	 * Constructor to copy an MFTimeObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFTimeObject(MFTimeObject newValue)
	{
		if (newValue == null)
		{
			MFTime = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFTime = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFTimeObject using a corresponding Java primitive double[] array as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFTimeObject (double[] newValue)
	{
		if (newValue == null)
			newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		
		for (int i = 0; i < newValue.length; i++)
		{
			if ((newValue[i] < 0.0) && (newValue[i] != SFTimeObject.DEFAULT_VALUE)) // initial value check
			{
				newValue[i] = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
			}
		}
		MFTime = newValue;
	}

	/**
	 * Constructor for MFTimeObject using a single float as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFTimeObject (float newValue)
	{
		setValue(newValue); // apply checks
	}
	/**
	 * Constructor for MFTimeObject using a float[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFTimeObject (float[] newValue)
	{
		setValue(newValue); // apply checks
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
	 * Get the current value of this MFTimeObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(double[] valueDestination)
	{
		valueDestination = MFTime;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public double[] getPrimitiveValue()
	{
		return MFTime;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFTime">X3D Tooltips: type MFTime</a>
	 * @see org.web3d.x3d.jsail.fields.SFDoubleObject#stripTrailingZeroes(double)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFTime.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFDoubleObject.stripTrailingZeroes(MFTime[i]));
			else result.append(MFTime[i]);
			if (i < MFTime.length - 1)
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
public double get1Value(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFTime.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFTime.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFTime array length=" + MFTime.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	return MFTime[index];
}

/**
* Assign an array subset to this field.
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

	for (int i = 0; i < newValue.length; i++)
	{
		if ((newValue[i] < 0.0) && (newValue[i] != SFTimeObject.DEFAULT_VALUE)) // initial value check
		{
			newValue[i] = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
		}
	}
	MFTime = Arrays.copyOf(newValue, size); // array size slicing
}

/**
* Assign a new double[] value to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(double[] newValue)
{
	if (newValue == null)
		newValue = new double[0];
	
	for (int i = 0; i < newValue.length; i++)
	{
		if ((newValue[i] < 0.0) && (newValue[i] != SFTimeObject.DEFAULT_VALUE)) // initial value check
		{
			newValue[i] = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
		}
	}
	MFTime = new double[newValue.length]; // reset array size
	MFTime = newValue;
}

/**
* Assign a single double value as new array (of length 1).
* @param newValue The replacement value to assign.
*/	
public void setValue(double newValue)
{
	
	if ((newValue < 0.0) && (newValue != SFTimeObject.DEFAULT_VALUE)) // initial value check
	{
		newValue = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
	}
	MFTime = new double[1]; // create array
	MFTime[0] = newValue;
}

/**
* Assign a single-field SFTimeObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFTimeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFTimeObject setValue(SFTimeObject newValue)
{
	if (newValue == null)
	{
		MFTime = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	MFTime = new double[1]; // create (or else clear) previous contents
	MFTime[0] = newValue.getValue();
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
public void set1Value(int index, double newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFTime.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFTime.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFTime array length=" + MFTime.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	if ((newValue < 0.0) && (newValue != SFTimeObject.DEFAULT_VALUE)) // initial value check
	{
		newValue = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
	}
	MFTime[index] = newValue;
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(double newValue)
{
	if ((newValue < 0.0) && (newValue != SFTimeObject.DEFAULT_VALUE)) // initial value check
	{
		newValue = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
	}
	MFTime = Arrays.copyOf(MFTime, MFTime.length + 1); // increase array size for append
	MFTime[MFTime.length-1] = newValue;
}
/**
* Appends another array at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec4f tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
public void append(double[] newValue)
{
	if ((newValue.length % 1) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 4 when declaring new MFVec4fObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFTime.length;
	MFTime = Arrays.copyOf(MFTime, MFTime.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFTime[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFTimeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFTimeObject append(SFTimeObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFTimeObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFTimeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFTimeObject append(MFTimeObject newValue)
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
public void insertValue(int index, double newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFTime.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFTime array length=" + MFTime.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	if ((newValue < 0.0) && (newValue != SFTimeObject.DEFAULT_VALUE)) // initial value check
	{
		newValue = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
	}
	int sliceLength = MFTime.length - index;
	MFTime = Arrays.copyOf(MFTime, MFTime.length + 1); // increase array size for insert
	System.arraycopy(MFTime, index, MFTime, index + 1, sliceLength); // move second half of array to right
	MFTime[index] = newValue;
}

/**
* Places a new value at the end of the existing value array, increasing the field length accordingly.
* @param newValue The newValue to append
*/
@Override
public void append(long newValue)
{
	if ((newValue < 0) && ((double)newValue != SFTimeObject.DEFAULT_VALUE)) // initial value check
	{
		 append(SFTimeObject.DEFAULT_VALUE); // unusual occurrence, TODO log it
	}
	else append((double) newValue);
}
	
/**
* Insert a new value prior to the index location in the existing value array, increasing the field length accordingly.
* @param index The position for the inserted value in the current array
* @param newValue The newValue to insert
*/
@Override
public void insertValue(int index, long newValue)
{
	if ((newValue < 0) && ((double)newValue != SFTimeObject.DEFAULT_VALUE)) // initial value check
	{
		 insertValue(index, SFTimeObject.DEFAULT_VALUE); // unusual occurrence, TODO log it
	}
	else insertValue(index, (double) newValue);
}
		
/**
* Replace a single value at the appropriate location in the existing value array.
* Size of the current underlying value array does not change.
* @see X3DConcreteField#getTupleSize(String)
* @param index is position of selected value in current array
* @param newValue provides new value to apply
*/
@Override
public void set1Value(int index, long newValue) throws ArrayIndexOutOfBoundsException
{
	if ((newValue < 0) && ((double)newValue != SFTimeObject.DEFAULT_VALUE)) // initial value check
	{
		 set1Value(index, SFTimeObject.DEFAULT_VALUE); // unusual occurrence, TODO log it
	}
	else set1Value(index, (double) newValue);
}
		
/**
* Replace values at the appropriate location in the existing value array.
* Size of the current underlying value array does not change.
* @see X3DConcreteField#getTupleSize(String)
* @param index is position of selected value in current array
* @param newValue provides new value to apply
*/
@Override
public void setValue(int index, long[] newValue) throws ArrayIndexOutOfBoundsException
{
	double[] doubleTimeValues = new double[newValue.length];
	for (int i=0; i < newValue.length; i++)
	{
		if ((newValue[i] < 0) && ((double)newValue[i] != SFTimeObject.DEFAULT_VALUE)) // initial value check
		{
			 doubleTimeValues[i] = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
		}
		else doubleTimeValues[i] = newValue[i];
	}
	setValue(index, doubleTimeValues);
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFTime elements for the given data type.
 *
 * @return The number of SFTime elements in this field array.
 */
@Override
public int size()
{
	return MFTime.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFTime = new double[0];
}

/**
 * Remove one SFTime element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFTime.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFTime.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFTime array length=" + MFTime.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFTime.length - (index + 1) * 1; // account for tupleSize
	System.arraycopy(MFTime, (index + 1) * 1, MFTime, index * 1, offsetLength); // copy over element being removed
	MFTime = Arrays.copyOfRange(MFTime, 0, MFTime.length - 1); // finally reduce overall array size by one tuple
}

/**
 * <p>
 * Get an individual value from the existing field array.
 * </p><p>
 * If the index is outside the bounds of the current array of data values,
 * an ArrayIndexOutOfBoundsException is thrown.
 * </p>
 * @param index is position of selected value in current array
 * @return The selected value
 * @throws ArrayIndexOutOfBoundsException The index was outside of the bounds of the current array.
 */
@Override
public long get1JavaValue(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1JavaValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	return (long)MFTime[index];
}

/**
* Assign a new value array, converting seconds from (long) to (double).
* @param newValue is replacement value array to assign
*/
@Override
public void setValue(long[] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest

	// create new array and cast each value
	MFTime = new double[newValue.length];
	for (int i=0; i < newValue.length; i++)
	{
		if ((newValue[i] < 0) && ((double)newValue[i] != SFTimeObject.DEFAULT_VALUE)) // initial value check
		{
			 MFTime[i] = SFTimeObject.DEFAULT_VALUE; // unusual occurrence, TODO log it
		}
		else MFTime[i] = (double)newValue[i];
	}
}

	/**
	 * Assign a single float value as new double array (of length 1).
	 * @param newValue is new value to assign
	 * @return {@link MFTimeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MFTimeObject setValue(float newValue)
	{
		setValue((double) newValue); // apply checks
		return this;
	}
	/**
	 * Assign a float array as new double array.
	 * @param newValue is new value to assign
	 * @return {@link MFTimeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MFTimeObject setValue(float[] newValue)
	{
		if (newValue == null)
		{
			initialize();
		}
		else
		{
			double[] doubleArray = new double[newValue.length]; // fix array size
			for (int i=0; i < newValue.length; i++)
				doubleArray[i] = (double) newValue[i];
			setValue(doubleArray); // apply checks
		}
		return this;
	}

	/**
	 * Provide double array for this field type.
	 * @return Array of doubles in this field array.
	 */
	public double[] toDoubleArray()
	{
		return MFTime;
	}

	/**
	 * Apply an MFTimeObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFTimeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFTimeObject setValue(MFTimeObject newValue)
	{
		if (newValue == null)
		{
			MFTime = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFTime = newValue.getPrimitiveValue();
		return this;
	}								
}
