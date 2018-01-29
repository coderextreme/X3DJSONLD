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
 * This utility class provides a concrete implementation corresponding to MFInt32 X3D field type.
 * 
 * <br><br>
 * An MFInt32 field defines an array of 32-bit signed integers. Array values are optionally separated by commas.
<br><br>
Related field object: {@link SFInt32Object}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFInt32">X3D Tooltips: type MFInt32</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFInt32AndMFInt32" target="blank">X3D Abstract Specification: SFInt32AndMFInt32</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFInt32Object extends X3DConcreteField implements org.web3d.x3d.sai.MFInt32
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFInt32</i> */
	public static final String NAME = "MFInt32";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final int[] DEFAULT_VALUE = new int[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private int[] MFInt32 = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFInt32Object performs value initialization.
	 */
	public MFInt32Object ()
	{
		initialize();
	}

	/**
	 * Initialization for MFInt32Object applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFInt32 = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for MFInt32Object using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFInt32Object setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFInt32 = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			MFInt32 = new int[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFInt32[i] = Integer.parseInt(newValues[i]); // insert in array
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFInt32Object(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Utility constructor for MFInt32Object to assign a single int as new initial array value.
	 * @param newValue is new value to assign
	 */
	public MFInt32Object (int newValue)
	{
		setValue(new SFInt32Object(newValue));
	}

	/**
	 * Utility constructor for MFInt32Object using a corresponding SFInt32Object as new initial value (which must pass parsing validation checks).
	 * @param newValue is new value to assign
	 */
	public MFInt32Object (SFInt32Object newValue)
	{
		if (newValue == null)
		{
			MFInt32 = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFInt32 = new int[1]; // create array
		MFInt32[0] = newValue.getValue();
	}

	/**
	 * Constructor to copy an MFInt32Object value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFInt32Object(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			MFInt32 = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFInt32 = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFInt32Object using a corresponding Java primitive int[] array as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFInt32Object (int[] newValue)
	{
		if (newValue == null)
			newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		MFInt32 = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (int[] value)
	{
		StringBuilder result = new StringBuilder();
		for (int i=0; i < value.length; i++)
		{
			result.append(value[i]).append(" ");
		}
		return result.toString().trim();
	}

	/**
	 * Get the current value of this MFInt32Object by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(int[] valueDestination)
	{
		valueDestination = MFInt32;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public int[] getPrimitiveValue()
	{
		return MFInt32;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFInt32">X3D Tooltips: type MFInt32</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFInt32.length; i++)
		{
			result.append(String.valueOf(MFInt32[i]));
			if (i < MFInt32.length - 1)
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
public int get1Value(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFInt32.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFInt32.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFInt32 array length=" + MFInt32.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	return MFInt32[index];
}

/**
* Assign an array subset to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
* @param newValue The replacement value array to (potentially) slice and then assign.
*/
@Override
public void setValue(int size, int[] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

	MFInt32 = Arrays.copyOf(newValue, size); // array size slicing
}

/**
* Assign a new int[] value to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(int[] newValue)
{
	if (newValue == null)
		newValue = new int[0];
	MFInt32 = new int[newValue.length]; // reset array size
	MFInt32 = newValue;
}

/**
* Assign a single int value as new array (of length 1).
* @param newValue The replacement value to assign.
*/	
public void setValue(int newValue)
{
	MFInt32 = new int[1]; // create array
	MFInt32[0] = newValue;
}

/**
* Assign a single-field SFInt32Object as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFInt32Object} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFInt32Object setValue(SFInt32Object newValue)
{
	if (newValue == null)
	{
		MFInt32 = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	MFInt32 = new int[1]; // create (or else clear) previous contents
	MFInt32[0] = newValue.getValue();
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
public void set1Value(int index, int newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFInt32.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFInt32.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFInt32 array length=" + MFInt32.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	MFInt32[index] = newValue;
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(int newValue)
{
	MFInt32 = Arrays.copyOf(MFInt32, MFInt32.length + 1); // increase array size for append
	MFInt32[MFInt32.length-1] = newValue;
}
/**
* Appends another array at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec4f tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
public void append(int[] newValue)
{
	if ((newValue.length % 1) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 4 when declaring new MFVec4fObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFInt32.length;
	MFInt32 = Arrays.copyOf(MFInt32, MFInt32.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFInt32[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFInt32Object} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFInt32Object append(SFInt32Object newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFInt32Object to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFInt32Object} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFInt32Object append(MFInt32Object newValue)
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
public void insertValue(int index, int newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFInt32.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFInt32 array length=" + MFInt32.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFInt32.length - index;
	MFInt32 = Arrays.copyOf(MFInt32, MFInt32.length + 1); // increase array size for insert
	System.arraycopy(MFInt32, index, MFInt32, index + 1, sliceLength); // move second half of array to right
	MFInt32[index] = newValue;
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFInt32 elements for the given data type.
 *
 * @return The number of SFInt32 elements in this field array.
 */
@Override
public int size()
{
	return MFInt32.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFInt32 = new int[0];
}

/**
 * Remove one SFInt32 element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFInt32.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFInt32.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFInt32 array length=" + MFInt32.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFInt32.length - (index + 1) * 1; // account for tupleSize
	System.arraycopy(MFInt32, (index + 1) * 1, MFInt32, index * 1, offsetLength); // copy over element being removed
	MFInt32 = Arrays.copyOfRange(MFInt32, 0, MFInt32.length - 1); // finally reduce overall array size by one tuple
}

	/**
	 * Apply an MFInt32Object value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFInt32Object} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFInt32Object setValue(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			MFInt32 = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFInt32 = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link MFInt32Object} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFInt32Object multiply(int scaleFactor)
	{
		for (int i = 0; i < MFInt32.length; i++)
		{
			MFInt32[i] *= scaleFactor;
		}
		return this;
	}
}
