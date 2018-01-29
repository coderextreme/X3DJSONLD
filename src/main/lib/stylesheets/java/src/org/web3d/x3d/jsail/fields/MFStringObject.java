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
import java.util.ArrayList;
import java.util.Arrays;
import org.web3d.x3d.sai.InvalidFieldValueException;

/**
 * This utility class provides a concrete implementation corresponding to MFString X3D field type.
 * 
 * <br><br>
 * MFString is an array of SFString values, each "quoted" and separated by whitespace. Individual SFString array values are optionally separated by commas.
<br><br>
Related field object: {@link SFStringObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFString">X3D Tooltips: type MFString</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString" target="blank">X3D Abstract Specification: SFStringAndMFString</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFStringObject extends X3DConcreteField implements org.web3d.x3d.sai.MFString
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFString</i> */
	public static final String NAME = "MFString";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final String[] DEFAULT_VALUE = new String[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private String[] MFString = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFStringObject performs value initialization.
	 */
	public MFStringObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFStringObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFString = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Modify current object values to ignore all whitespace, remove all embedded quotes, remove all commas, and remove all square brackets.
	 * @see MFStringObject#cleanupUnescapedEnclosingQuotes()
	 * @return {@link MFStringObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFStringObject cleanupEnumerationValues()
	{
		MFString = cleanupEnumerationValues(MFString);
		return this;
	}
	/**
	 * Utility method for single enumeration value to ignore all whitespace, remove all embedded quotes, remove all commas, and remove all square brackets to create an unadorned enumeration String.
	 * @param value single enumeration string intended for use as an SFString or MFString value
	 * @see MFStringObject#cleanupUnescapedEnclosingQuotes(String)
	 * @return unquoted string values containing no whitespace as MFString list
	 */
	public static String cleanupEnumerationValue(String value)
	{
		String result = new String();
		if  (value != null)
			 result = value;
		// total elimination:
		return result.replaceAll("\""," ").replaceAll(","," ").replaceAll("["," ").replaceAll("]"," ").replaceAll(" ","");
	}
	/**
	 * Utility method for a single String containing multiple enumeration values to ignore all whitespace, remove all embedded quotes, remove all commas, and remove all square brackets to create unadorned MFString elements as a String[] array.
	 * @param values zero or more enumeration values intended for use as an MFString list
	 * @see MFStringObject#cleanupUnescapedEnclosingQuotes(String)
	 * @return unquoted string values containing no whitespace as MFString list
	 */
	public static String[] cleanupEnumerationValues(String values)
	{
		String[] result = new String[1];
		if  (values == null)
			 result[0] = new String();
		else result[0] = values.trim();
		if (!result[0].contains("\""))
			 return result;
		else return result[0].replaceAll("\""," ").replaceAll(","," ").replaceAll("["," ").replaceAll("]"," ").split("(\\s)*");
	}
	/**
	 * Utility method for multiple enumeration values to ignore all whitespace, remove all embedded quotes, remove all commas, and remove all square brackets in a String[] array.
	 * @param values zero or more enumeration values intended for use as an MFString list
	 * @see MFStringObject#cleanupEnumerationValue(String)
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @see MFStringObject#cleanupUnescapedEnclosingQuotes(String)
	 * @return unquoted string values containing no whitespace as String[] array
	 */
	public static String[] cleanupEnumerationValues(String[] values)
	{
		String[] results = new String[0];
		if  (values != null)
			 results = values;
		for (int i = 0; i < results.length; i++)
		{
			results[i] = cleanupEnumerationValue(results[i]); // one singleton enumeration at a time
		}
		return results;
	}
	/**
	 * Utility method for multiple enumeration values to ignore all whitespace, remove all embedded quotes, remove all commas, and remove all square brackets from a ArrayList of values.
	 * @param values zero or more enumeration values intended for use as an MFString list
	 * @see MFStringObject#cleanupEnumerationValue(String)
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @see MFStringObject#cleanupUnescapedEnclosingQuotes(String)
	 * @return unquoted string values containing no whitespace as MFString list
	 */
	public static ArrayList<String> cleanupEnumerationValues(ArrayList<String> values)
	{
		ArrayList<String> results = new ArrayList<>();
		if  (values != null)
			 results = values;
		for (String result : results)
		{
			result = cleanupEnumerationValue(result); // one singleton enumeration at a time
		}
		return results;
	}
	/**
	 * Modify current object values to trim enclosing quotes and outer whitespace.
	 * @see MFStringObject#cleanupEnumerationValues()
	 * @return {@link MFStringObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFStringObject cleanupUnescapedEnclosingQuotes()
	{
		MFString = cleanupUnescapedEnclosingQuotes(MFString);
		return this;
	}
	/**
	 * Utility method to trim enclosing quotes and outer whitespace from an arbitrary String value, without removing escaped quotation marks (<i>\"</i>).
	 * <br><br>
	 * <i>Warning:</i> do not use this method on a String that contains multiple quoted values, use cleanupEnumerationValues() instead.
	 * @param singleValue input String for use with MFString list, which must be unquoted
	 * @see MFStringObject#cleanupEnumerationValue(String)
	 * @return unquoted String value
	 */
	public static String cleanupUnescapedEnclosingQuotes(String singleValue)
	{
		String result = singleValue;
		if  (result == null)
			 result = new String();
		if (result.trim().startsWith("\""))
		{
			result = result.trim().substring(1);							 // trim unescaped quotation mark "
		}
		if (result.trim().endsWith("\"") && !result.trim().endsWith("\\\"")) 
		{
			result = result.trim().substring(0, result.trim().length() - 1); // trim unescaped quotation mark "
		}
		return result;
	}
	/**
	 * Utility method to trim enclosing quotes and outer whitespace from elements in an arbitrary String[] array.
	 * @param values String[] array for use with MFString list, which must be unquoted
	 * @see MFStringObject#cleanupUnescapedEnclosingQuotes(String)
	 * @see MFStringObject#cleanupEnumerationValue(String)
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return unquoted String[] array
	 */
	public static String[] cleanupUnescapedEnclosingQuotes(String[] values)
	{
		String[] result = values;
		if  (result == null)
			 result = new String[0];
		for (int i = 0; i < result.length; i++)
		{
			result[i] = cleanupUnescapedEnclosingQuotes(result[i]);
		}
		return result;
	}
	/**
	 * Utility method to trim enclosing quotes and outer whitespace from elements in an ArrayList of arbitrary String values.
	 * @param values existing ArrayList of String values for use with MFString list, which must be unquoted
	 * @see MFStringObject#cleanupUnescapedEnclosingQuotes(String)
	 * @see MFStringObject#cleanupEnumerationValue(String)
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return unquoted String[] array
	 */
	public static ArrayList<String> cleanupUnescapedEnclosingQuotes(ArrayList<String> values)
	{
		ArrayList<String> results = values;
		if  (results == null)
			 results = new ArrayList<>();
		for (String result : results)
		{
			result = cleanupUnescapedEnclosingQuotes(result);
		}
		return results;
	}

	/**
	 * Utility accessor for MFStringObject using String value
	 * @param newValue is new value to assign
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFStringObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFString = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
			if (!newValue.contains("\""))
			{
				MFString = new String[1];
				MFString[0] = newValue; // simple single string (value missing "wrapped quotes")
				return this;
			}
			String[] newValues = cleanupUnescapedEnclosingQuotes(newValue.trim()).split("\"[\\s+]\"");
			MFString = new String[newValues.length];
			for (int i=0; i < newValues.length; i++)
			{
				MFString[i] = newValues[i].replace("\\\"","\""); // fill array, no backslash escapes preceding contained quote characters
			}
		return this;
	}

	/**
	 * Constructor to copy an MFStringObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFStringObject(MFStringObject newValue)
	{
		if (newValue == null)
		{
			MFString = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFString = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFStringObject using a corresponding Java primitive String[] array as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFStringObject (String[] newValue)
	{
		if (newValue == null)
			newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		MFString = new String[newValue.length];
//		for (int i=0; i < newValue.length; i++)
//			newValue[i] = cleanupUnescapedEnclosingQuotes(newValue[i]); // fill array
		MFString = newValue;
	}

	/**
	 * Constructor to parse String as new initial value.
	 * @param newValue is new value to assign
	 */
	public MFStringObject (String newValue)
	{
		setValueByString(newValue);
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @see SFStringObject#toStringX3D
	 * @see MFStringObject#toStringX3D
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString">X3D Abstract Specification: 5.3.14 SFString and MFString</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString">X3D XML Encoding: 5.15 SFString and MFString</a>
	 * @see <a href="http://www.web3d.org/x3d/content/X3dTooltips.html#Text">X3D Tooltips: Text</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return XML/X3D-escaped String version of the provided value
	 */
	public static String toString (String[] value)
	{
		String result = new String();
		for (String eachValue : value)
		{
			// http://www.regexplanet.com/advanced/java/index.html
			// https://www.regular-expressions.info/java.html see "backslash-mess"
			// https://docs.oracle.com/javase/tutorial/java/data/characters.html
			// append another quoted SFString value to MFString output
			result += " \"" + eachValue.replaceAll("&","&amp;")      // escape ampersands           in XML attributes
									   .replaceAll("<","&lt;")       // escape    less-than < signs in XML attributes
									   .replaceAll(">","&gt;")       // escape greater-than > signs in XML attributes
									   .replaceAll("'","&apos;")     // escape apostrophes since XML attributes in this output are delimited by apostrophes
									   .replaceAll("\\\\","\\\\")    // escape backslash \ as \\    in XML attributes
									   .replaceAll("\"",  "\\\\\"")  // escape     quote " as \"    in XML attributes
				    + "\"";
		}
		return (result.trim());
	}

	/**
	 * Provide String representation of this object, properly escaped for XML-based X3D syntax and conforming to X3D Canonical Form.
	 * @see SFStringObject#toStringX3D
	 * @see SFStringObject#toStringX3D(String)
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFString">X3D Tooltips: type MFString</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return XML/X3D-escaped String version of this object
	 */
	public String toStringX3D ()
	{
		// avoid StringBuilder since it clobbers \"
		String result = new String();
		for (int i = 0; i < MFString.length; i++)
		{
			// MFString[0] // trace
			if (!MFString[i].startsWith("\""))
				result += "\"";
			// avoid SFStringObject.toStringX3D(MFString[i]) due to additional contrary handling of \" and &
			// http://www.regexplanet.com/advanced/java/index.html
			// https://www.regular-expressions.info/java.html see "backslash-mess"
			// https://docs.oracle.com/javase/tutorial/java/data/characters.html
			String escapedValue = MFString[i]
				.replaceAll("&","&amp;")      // escape ampersands           in XML attributes
				.replaceAll("<","&lt;")       // escape    less-than < signs in XML attributes
				.replaceAll(">","&gt;")       // escape greater-than > signs in XML attributes
				.replaceAll("'","&apos;")     // escape apostrophes since XML attributes in this output are delimited by apostrophes
				.replaceAll("\\\\","\\\\")    // escape backslash \ as \\    in XML attributes
			    .replaceAll("\"",  "\\\\\""); // escape     quote " as \"    in XML attributes 

			result += escapedValue;			// apply escaping to each SFString value
			if (!MFString[i].startsWith("\""))
				result += "\"";
			if (i < MFString.length - 1)
				result += " ";
		}
		return result;
	}

	/**
	 * Get the current value of this MFStringObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(String[] valueDestination)
	{
		valueDestination = MFString;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public String[] getPrimitiveValue()
	{
		return MFString;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFString">X3D Tooltips: type MFString</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < MFString.length; i++)
		{
			if (!MFString[i].startsWith("\""))
				result.append("\"");
			result.append(String.valueOf(MFString[i]));
			if (!MFString[i].startsWith("\""))
				result.append("\"");
			if (i < MFString.length - 1)
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
public String get1Value(int index)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFString.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot get1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFString.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFString array length=" + MFString.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	return MFString[index];
}

/**
* Assign an array subset to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param size indicates size of result to copy (i.e. the number of typed singleton values) from beginning of newValue array.
* @param newValue The replacement value array to (potentially) slice and then assign.
*/
@Override
public void setValue(int size, String[] newValue)
{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest
	if (size < 0)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is negative"); // newValueSizeCheck
	if (size > newValue.length)
		throw new org.web3d.x3d.sai.InvalidFieldValueException("requested setValue() array-copy size=" + size + 
			" is greater than newValue.length()=" + newValue.length); // newValueSizeCheck

	MFString = Arrays.copyOf(newValue, size); // array size slicing
}

/**
* Assign a new String[] value to this field.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue is replacement value array to assign
*/	
public void setValue(String[] newValue)
{
	if (newValue == null)
		newValue = new String[0];
	MFString = new String[newValue.length]; // reset array size
	
			for (int i=0; i < newValue.length; i++)
			{
				MFString[i] = cleanupUnescapedEnclosingQuotes(newValue[i]); // fill array
			}
}

/**
* Assign a single-field SFStringObject as new array value.
* @param newValue The replacement value to assign.
* @return {@link MFStringObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
*/	
public MFStringObject setValue(SFStringObject newValue)
{
	if (newValue == null)
	{
		MFString = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		return this;
	}
	MFString = new String[1]; // create (or else clear) previous contents
	MFString[0] = newValue.getValue();
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
public void set1Value(int index, String newValue) throws ArrayIndexOutOfBoundsException
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (MFString.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot set1Value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFString.length / 1) // tupleSize factor
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFString array length=" + MFString.length / 1;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	MFString[index] = newValue;
}

/**
* Places new value(s) at the end of the existing value array, increasing the field length accordingly.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
@Override
public void append(String newValue)
{
	MFString = Arrays.copyOf(MFString, MFString.length + 1); // increase array size for append
	MFString[MFString.length-1] = newValue;
}
/**
* Appends another array at the end of the existing value array, increasing the field length accordingly.
* <i>Warning:</i> newValue array length must correspond to tuple size for base type MFVec4f tuple size of <i>4</i>.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
*/
public void append(String[] newValue)
{
	if ((newValue.length % 1) != 0) // tupleSize modulus check
	{
		String errorNotice = "illegal number of values (" + newValue.length + ")" +
			" in initialization array, must be multiple of 4 when declaring new MFVec4fObject(" + newValue + ")";
		validationResult.append(errorNotice).append("\n");
		throw new InvalidFieldValueException (errorNotice);
	}
	int originalLength = MFString.length;
	MFString = Arrays.copyOf(MFString, MFString.length + newValue.length); // increase array size for append
	for (int i = 0; i < newValue.length; i++)
	{
		MFString[originalLength + i] = newValue[i];
	}
}

/**
* Appends a new singleton typed value at the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for incrementally constructing arrays.
* @param newValue The newValue to append
* @return {@link MFStringObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFStringObject append(SFStringObject newValue)
{
	append(newValue.getPrimitiveValue());
	return this;
}

/**
* Appends a new MFStringObject to the end of the existing value array, increasing the field length accordingly.
* <i>Note:</i> this method can be useful for constructing long arrays.
* @see X3DConcreteField#getTupleSize(String)
* @param newValue The newValue to append
* @return {@link MFStringObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
*/
public MFStringObject append(MFStringObject newValue)
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
public void insertValue(int index, String newValue)
{
	if (index < 0)
	{
		String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFString.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFString array length=" + MFString.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	
	int sliceLength = MFString.length - index;
	MFString = Arrays.copyOf(MFString, MFString.length + 1); // increase array size for insert
	System.arraycopy(MFString, index, MFString, index + 1, sliceLength); // move second half of array to right
	MFString[index] = newValue;
}

/**
 * Get the size of the underlying data array, meaning the number of
 * simple SFString elements for the given data type.
 *
 * @return The number of SFString elements in this field array.
 */
@Override
public int size()
{
	return MFString.length;
}

/**
 * Removes all values in the field array, changing the array size to zero.
 */
@Override
public void clear()
{
	MFString = new String[0];
}

/**
 * Remove one SFString element of the field array at index position, if found.  Initial element is at index 0.
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
	if (MFString.length == 0)
	{
		String errorNotice = "Value array is empty, thus cannot remove value at index=" + index + ".";
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	if (index >= MFString.length)
	{
		String errorNotice = "Provided array index=" + index + " must be less than MFString array length=" + MFString.length;
		validationResult.append(errorNotice).append("\n");
		throw new ArrayIndexOutOfBoundsException(errorNotice);
	}
	int offsetLength = MFString.length - (index + 1) * 1; // account for tupleSize
	System.arraycopy(MFString, (index + 1) * 1, MFString, index * 1, offsetLength); // copy over element being removed
	MFString = Arrays.copyOfRange(MFString, 0, MFString.length - 1); // finally reduce overall array size by one tuple
}

	/**
	 * Apply an MFStringObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFStringObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFStringObject setValue(MFStringObject newValue)
	{
		if (newValue == null)
		{
			MFString = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFString = newValue.getPrimitiveValue();
		return this;
	}								
}
