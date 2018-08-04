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
 * This utility class provides a concrete implementation corresponding to SFVec2f X3D field type.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * SFVec2f is a 2-tuple pair of SFFloat values. Hint: SFVec2f can be used to specify a 2D single-precision coordinate. Warning: comma characters in attribute values do not pass strict XML validation.
 * <br><br>
 * Related field object: {@link MFVec2fObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFVec2f">X3D Tooltips: type SFVec2f</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFVec2fAndMFVec2f" target="blank">X3D Abstract Specification: SFVec2fAndMFVec2f</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFVec2fObject extends X3DConcreteField implements org.web3d.x3d.sai.SFVec2f
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFVec2f</i> */
	public static final String NAME = "SFVec2f";

	/** Default value for this field type contains values of <i>0 0</i>.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = {0.0f, 0.0f};

	/** Default string value for this field type is "0.0 0.0". */
	public static final String DEFAULT_VALUE_STRING = "0.0 0.0";

	/** Default tuple size for this field type is <i>2</i> (i.e. number of component values making up a single-field SF object). */
	public static final int TUPLE_SIZE = 2;

	/** Default regular expression (regex) pattern for this field type is <i>((\+|\-)?(0|[1-9][0-9]*)(\.[0-9]*)?((E|e)(\+|\-)?[0-9]+)? (\+|\-)?(0|[1-9][0-9]*)(\.[0-9]*)?((E|e)(\+|\-)?[0-9]+)?)?</i>
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html#SFVec2f" target="_blank">X3D Regular Expressions: SFVec2f</a>
	 */
	public static final String REGEX = "((\\+|\\-)?(0|[1-9][0-9]*)(\\.[0-9]*)?((E|e)(\\+|\\-)?[0-9]+)? (\\+|\\-)?(0|[1-9][0-9]*)(\\.[0-9]*)?((E|e)(\\+|\\-)?[0-9]+)?)?";

	/** Precompiled regular expression (regex) pattern for this field type.
	 * @see REGEX
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 */
	public static final java.util.regex.Pattern pattern = java.util.regex.Pattern.compile(REGEX);

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] SFVec2f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for SFVec2fObject performs value initialization.
	 */
	public SFVec2fObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFVec2fObject applies default initial value.
	 * Static initializer also provided to verify that the regex pattern compiles and matches that default value.
	 * @see <a href="https://stackoverflow.com/questions/2704857/how-to-check-if-a-given-regex-is-valid">Stack Overflow: How to check if a given Regex is valid?</a>
	 * @see #DEFAULT_VALUE
	 */
	@Override
	public void initialize()
	{
		SFVec2f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}
	// static initializer
	static {
		try {
            // verify pattern is compiling OK, report exception if not
			java.util.regex.Pattern.compile(REGEX);
				
			// verify DEFAULT_VALUE matches pattern OK, report if not
			if ((new SFVec2fObject(DEFAULT_VALUE)).matches() == false)
			{
				System.err.println("SFVec2fObject.initialize() problem: failed to match default value DEFAULT_VALUE " + DEFAULT_VALUE);
			}
        }
		catch (java.util.regex.PatternSyntaxException exception)
		{
			System.err.println("Exception in SFVec2f initialization testing, regex pattern compilation failure.");
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
			String errorNotice = "*** Regular expression (regex) failure, new SFVec2fObject pattern mismatch (\"" + toString() + "\")";
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
	 * Utility accessor for SFVec2fObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFVec2fObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment

		if (!SFVec2fObject.matches(newValue)) // regex test
		{
			String errorNotice = "*** Regular expression (regex) failure, new SFVec2fObject(" + newValue + ")";
			validationResult.append(errorNotice).append("\n");
		}
		if (newValue.trim().isEmpty())
		{
			SFVec2f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.replace(","," ").trim().split("\\s+");
			if (newValues.length != 2)
			{
				String errorNotice = "illegal number of values in initialization string, new SFVec2fObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			SFVec2f[0] = Float.parseFloat(newValues[0]);
			SFVec2f[1] = Float.parseFloat(newValues[1]);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFVec2fObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFVec2fObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFVec2fObject(SFVec2fObject newValue)
	{
		if (newValue == null)
		{
			SFVec2f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		SFVec2f = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFVec2fObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFVec2f tuple size of <i>2</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFVec2fObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 2)
		{
			String errorNotice = "Illegal SFVec2f newValue array length=" + newValue.length +
				", must equal 2 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFVec2f = newValue;
	}

	/**
	 * Utility constructor for SFVec2fObject using individual primitive values.
	 * @param x first component of axis
	 * @param y second component of axis
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 */
	public SFVec2fObject (float x, float y)
	{
		SFVec2f[0] = x;
		SFVec2f[1] = y;
	}
	/**
	 * Utility method to normalize this vector value to unit length, ignore if zero length.
	 * @return {@link SFVec2fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec2fObject normalize()
	{
		float length = (float) Math.sqrt(
			SFVec2f[0]*SFVec2f[0] +
			SFVec2f[1]*SFVec2f[1]);
		
		if (length > 0.0f)
		{
			SFVec2f[0] = SFVec2f[0] / length;
			SFVec2f[1] = SFVec2f[1] / length;
		}
		return this;
	}

	/**
	 * Utility constructor for SFVec2fObject using double values.
	 * @param x first component
	 * @param y second component
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 */
	public SFVec2fObject (double x, double y)
	{
		setValue((float) x, (float) y);
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
	 * Get the current value of this SFVec2fObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(float[] valueDestination)
	{
		valueDestination = SFVec2f;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return SFVec2f;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFVec2f">X3D Tooltips: type SFVec2f</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		StringBuilder result = new StringBuilder();
		for (int i = 0; i < SFVec2f.length; i++)
		{
			if  (ConfigurationProperties.isStripTrailingZeroes())
				 result.append(org.web3d.x3d.jsail.fields.SFFloatObject.stripTrailingZeroes(SFVec2f[i]));
			else result.append(SFVec2f[i]);
			if (i < SFVec2f.length - 1)
				result.append(" ");
		}
		return result.toString();
	}
	/**
	 * Assign a new value to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFVec2f tuple size of <i>2</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(float[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnSelf2

		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 2)
		{
			String errorNotice = "Illegal SFVec2f newValue array length=" + newValue.length +
				", must equal 2 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFVec2f = newValue;
	}

	/**
	 * Assign a new value to this field.
	 * @param x first component
	 * @param y second component
	 * @return {@link SFVec2fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec2fObject setValue(float x, float y)
	{
		SFVec2f[0] = x;
		SFVec2f[1] = y;
		return this;
	}
	/**
	 * Assign a new value to this field.
	 * @param x first component
	 * @param y second component
	 * @return {@link SFVec2fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec2fObject setValue(double x, double y)
	{
		setValue((float) x, (float) y);
		return this;
	}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return SFVec2f;
	}

	/**
	 * Apply an SFVec2fObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFVec2fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec2fObject setValue(SFVec2fObject newValue)
	{
		if (newValue == null)
		{
			SFVec2f = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		SFVec2f = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Multiply scaleFactor times all values in this field type.
	 * @param scaleFactor scalar value for vector multiplication
	 * @return {@link SFVec2fObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFVec2fObject multiply(float scaleFactor)
	{
		SFVec2f[0] *= scaleFactor;
		SFVec2f[1] *= scaleFactor;
		
		return this;
	}

	/**
	 * Determine whether current value matches DEFAULT_VALUE
	 * @see #DEFAULT_VALUE
	 * @return whether current value matches DEFAULT_VALUE
	 */
    public boolean isDefaultValue()
    {
        return (SFVec2f == DEFAULT_VALUE);
    }
}
