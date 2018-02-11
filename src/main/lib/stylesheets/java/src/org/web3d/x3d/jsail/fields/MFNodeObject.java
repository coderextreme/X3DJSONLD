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
import org.web3d.x3d.sai.Core.*;  // making sure #0

/**
 * This utility class provides a concrete implementation corresponding to MFNode X3D field type.
 * 
 * <br><br>
 * The MFNode field specifies zero or more nodes; the default value of an MFNode field is the empty list.
<br><br>
Related field object: {@link SFNodeObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFNode">X3D Tooltips: type MFNode</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFNodeAndMFNode" target="blank">X3D Abstract Specification: SFNodeAndMFNode</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFNodeObject extends X3DConcreteField implements org.web3d.x3d.sai.MFNode
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFNode</i> */
	public static final String NAME = "MFNode";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final X3DNode[] DEFAULT_VALUE = new X3DNode[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private X3DNode[] MFNode = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFNodeObject performs value initialization.
	 */
	public MFNodeObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFNodeObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFNode = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility constructor for MFNodeObject to assign a single X3DNode as new initial array value.
	 * @param newValue is new value to assign
	 */
	public MFNodeObject (X3DNode newValue)
	{
		setValue(new SFNodeObject(newValue));
	}

	/**
	 * Utility constructor for MFNodeObject using a corresponding SFNodeObject as new initial value (which must pass parsing validation checks).
	 * @param newValue is new value to assign
	 */
	public MFNodeObject (SFNodeObject newValue)
	{
		if (newValue == null)
		{
			MFNode = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFNode = new X3DNode[1]; // create array
		MFNode[0] = newValue.getValue();
	}

	/**
	 * Constructor to copy an MFNodeObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFNodeObject(MFNodeObject newValue)
	{
		if (newValue == null)
		{
			MFNode = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFNode = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFNodeObject using a corresponding Java primitive X3DNode[] array as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFNodeObject (X3DNode[] newValue)
	{
		if (newValue == null)
			newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		MFNode = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (X3DNode[] value)
	{
		StringBuilder result = new StringBuilder();
		for (int i=0; i < value.length; i++)
		{
			result.append(value[i]).append(" ");
		}
		return result.toString().trim();
	}

	/**
	 * Get the current value of this MFNodeObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(X3DNode[] valueDestination)
	{
		valueDestination = MFNode;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public X3DNode[] getPrimitiveValue()
	{
		return MFNode;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFNode">X3D Tooltips: type MFNode</a>
	 * @return String version of the provided value
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
* @return The selected value
* @throws ArrayIndexOutOfBoundsException The index was outside of the bounds of the current array.
*/
@Override
public X3DNode get1Value(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFNode.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFNode.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFNode array length=" + MFNode.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	return MFNode[index];
}

/**
* Assign an array subset to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
* @param newValue The replacement value array to (potentially) slice and then assign.
*/
@Override
public void setValue(int size, X3DNode[] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

	MFNode = Arrays.copyOf(newValue, size); // array size slicing
}

/**
* Assign a new X3DNode[] value to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(X3DNode[] newValue)
{
	if (newValue == null)
		newValue = new X3DNode[0];
	MFNode = new X3DNode[newValue.length]; // reset array size
	MFNode = newValue;
}

/**
* Assign a single-field SFNodeObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFNodeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFNodeObject setValue(SFNodeObject newValue)
{
	if (newValue == null)
	{
		MFNode = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	MFNode = new X3DNode[1]; // create (or else clear) previous contents
	MFNode[0] = newValue.getValue();
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
public void set1Value(int index, X3DNode newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFNode.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFNode.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFNode array length=" + MFNode.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	MFNode[index] = newValue;
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(X3DNode newValue)
{
	MFNode = Arrays.copyOf(MFNode, MFNode.length + 1); // increase array size for append
	MFNode[MFNode.length-1] = newValue;
}
/**
* Appends another array at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec4f tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
public void append(X3DNode[] newValue)
{
	if ((newValue.length % 1) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 4 when declaring new MFVec4fObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFNode.length;
	MFNode = Arrays.copyOf(MFNode, MFNode.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFNode[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFNodeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFNodeObject append(SFNodeObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFNodeObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFNodeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFNodeObject append(MFNodeObject newValue)
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
public void insertValue(int index, X3DNode newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFNode.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFNode array length=" + MFNode.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFNode.length - index;
	MFNode = Arrays.copyOf(MFNode, MFNode.length + 1); // increase array size for insert
	System.arraycopy(MFNode, index, MFNode, index + 1, sliceLength); // move second half of array to right
	MFNode[index] = newValue;
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFNode elements for the given data type.
 *
 * @return The number of SFNode elements in this field array.
 */
@Override
public int size()
{
	return MFNode.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFNode = new X3DNode[0];
}

/**
 * Remove one SFNode element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFNode.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFNode.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFNode array length=" + MFNode.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFNode.length - (index + 1) * 1; // account for tupleSize
	System.arraycopy(MFNode, (index + 1) * 1, MFNode, index * 1, offsetLength); // copy over element being removed
	MFNode = Arrays.copyOfRange(MFNode, 0, MFNode.length - 1); // finally reduce overall array size by one tuple
}

	/**
	 * Apply an MFNodeObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFNodeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFNodeObject setValue(MFNodeObject newValue)
	{
		if (newValue == null)
		{
			MFNode = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFNode = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Utility method to clear all contained children including nodes, statements and comments (if any).
	 * @return {@link MFNodeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MFNodeObject clearChildren()
	{
		MFNode = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
}
