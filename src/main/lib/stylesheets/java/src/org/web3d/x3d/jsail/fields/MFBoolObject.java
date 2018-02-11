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
 * This utility class provides a concrete implementation corresponding to MFBool X3D field type.
 * 
 * <br><br>
 * MFBool is an array of Boolean values. Type MFBool was previously undefined in the VRML 97 Specification, but nevertheless needed for event utilities and scripting. Example use: MFBool is useful for defining a series of behavior states using a BooleanSequencer prototype. Hint: boolean values are lower case (true|false) in order to maintain compatibility with HTML and other XML documents.
<br><br>
Related field object: {@link SFBoolObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFBool">X3D Tooltips: type MFBool</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFBoolAndMFBool" target="blank">X3D Abstract Specification: SFBoolAndMFBool</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFBoolObject extends X3DConcreteField implements org.web3d.x3d.sai.MFBool
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFBool</i> */
	public static final String NAME = "MFBool";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final boolean[] DEFAULT_VALUE = new boolean[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private boolean[] MFBool = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFBoolObject performs value initialization.
	 */
	public MFBoolObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFBoolObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFBool = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for MFBoolObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFBoolObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFBool = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
			String[] newValues = newValue.trim().split("\\s+");
			MFBool = new boolean[newValues.length];
			int i = 0;
			for (String value : newValues)
			{
				if (!value.equals("true") && !newValue.equals("false"))
				{
					String errorNotice = "illegal boolean value for MFBoolObject() initialization, newValue[" + i + "]='" + value + "' but must be 'true' or 'false' (case sensitive)";
 					validationResult.append(errorNotice).append("\n");
					throw new InvalidFieldValueException(errorNotice);
				}
				MFBool[i] = Boolean.parseBoolean(value); // append to array
				i++;
			}
		return this;
	}

	/**
	 * Constructor to copy an MFBoolObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFBoolObject(MFBoolObject newValue)
	{
		if (newValue == null)
		{
			MFBool = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFBool = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFBoolObject using a corresponding Java primitive boolean[] array as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFBoolObject (boolean[] newValue)
	{
		if (newValue == null)
			newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		MFBool = newValue;
	}

	/**
	 * Constructor for MFBoolObject using a single corresponding Java primitive boolean as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFBoolObject (boolean newValue)
	{
		MFBool = new boolean[1]; // fix array size
		MFBool[0] = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (boolean[] value)
	{
		StringBuilder result = new StringBuilder();
		for (int i=0; i < value.length; i++)
		{
			result.append(value[i]).append(" ");
		}
		return result.toString().trim();
	}

	/**
	 * Get the current value of this MFBoolObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(boolean[] valueDestination)
	{
		valueDestination = MFBool;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public boolean[] getPrimitiveValue()
	{
		return MFBool;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFBool">X3D Tooltips: type MFBool</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFBool.length; i++)
		{
			result.append(String.valueOf(MFBool[i]));
			if (i < MFBool.length - 1)
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
public boolean get1Value(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFBool.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFBool.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFBool array length=" + MFBool.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	return MFBool[index];
}

/**
* Assign an array subset to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
* @param newValue The replacement value array to (potentially) slice and then assign.
*/
@Override
public void setValue(int size, boolean[] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

	MFBool = Arrays.copyOf(newValue, size); // array size slicing
}

/**
* Assign a new boolean[] value to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(boolean[] newValue)
{
	if (newValue == null)
		newValue = new boolean[0];
	MFBool = new boolean[newValue.length]; // reset array size
	MFBool = newValue;
}

/**
* Assign a single boolean value as new array (of length 1).
* @param newValue The replacement value to assign.
*/	
public void setValue(boolean newValue)
{
	MFBool = new boolean[1]; // create array
	MFBool[0] = newValue;
}

/**
* Assign a single-field SFBoolObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFBoolObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFBoolObject setValue(SFBoolObject newValue)
{
	if (newValue == null)
	{
		MFBool = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	MFBool = new boolean[1]; // create (or else clear) previous contents
	MFBool[0] = newValue.getValue();
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
public void set1Value(int index, boolean newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFBool.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFBool.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFBool array length=" + MFBool.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	MFBool[index] = newValue;
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(boolean newValue)
{
	MFBool = Arrays.copyOf(MFBool, MFBool.length + 1); // increase array size for append
	MFBool[MFBool.length-1] = newValue;
}
/**
* Appends another array at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec4f tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
public void append(boolean[] newValue)
{
	if ((newValue.length % 1) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 4 when declaring new MFVec4fObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFBool.length;
	MFBool = Arrays.copyOf(MFBool, MFBool.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFBool[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFBoolObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFBoolObject append(SFBoolObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFBoolObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFBoolObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFBoolObject append(MFBoolObject newValue)
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
public void insertValue(int index, boolean newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFBool.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFBool array length=" + MFBool.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFBool.length - index;
	MFBool = Arrays.copyOf(MFBool, MFBool.length + 1); // increase array size for insert
	System.arraycopy(MFBool, index, MFBool, index + 1, sliceLength); // move second half of array to right
	MFBool[index] = newValue;
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFBool elements for the given data type.
 *
 * @return The number of SFBool elements in this field array.
 */
@Override
public int size()
{
	return MFBool.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFBool = new boolean[0];
}

/**
 * Remove one SFBool element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFBool.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFBool.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFBool array length=" + MFBool.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFBool.length - (index + 1) * 1; // account for tupleSize
	System.arraycopy(MFBool, (index + 1) * 1, MFBool, index * 1, offsetLength); // copy over element being removed
	MFBool = Arrays.copyOfRange(MFBool, 0, MFBool.length - 1); // finally reduce overall array size by one tuple
}

	/**
	 * Utility method to negate this array of boolean values.
	 * @return {@link MFBoolObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFBoolObject negate()
	{
		for (int i= 0; i < MFBool.length; i++)
		{
			MFBool[i] = !MFBool[i]; // negate
		}
		return this;
	}

	/**
	 * Apply an MFBoolObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFBoolObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFBoolObject setValue(MFBoolObject newValue)
	{
		if (newValue == null)
		{
			MFBool = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFBool = newValue.getPrimitiveValue();
		return this;
	}								
}
