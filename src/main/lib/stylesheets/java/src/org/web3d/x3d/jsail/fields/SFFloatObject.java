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
 * This utility class provides a concrete implementation corresponding to SFFloat X3D field type.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * SFFloat is a single-precision floating-point type.
 * <br><br>
 * Related field object: {@link MFFloatObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFFloat">X3D Tooltips: type SFFloat</a>
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
public class SFFloatObject extends X3DConcreteField implements org.web3d.x3d.sai.SFFloat
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFFloat</i> */
	public static final String NAME = "SFFloat";

	/** Default value for this field type is a <i>0</i> value.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float DEFAULT_VALUE = 0.0f;

	/** Default string value for this field type is "0.0". */
	public static final String DEFAULT_VALUE_STRING = "0.0";

	/** Default tuple size for this field type is <i>1</i> (i.e. number of component values making up a single-field SF object). */
	public static final int TUPLE_SIZE = 1;

	/** Default regular expression (regex) pattern for this field type is <i>(\s)*((\+|\-)?(0|[1-9][0-9]*)(\.[0-9]*)?((E|e)(\+|\-)?[0-9]+)?)(\s)*</i>
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html#SFFloat" target="_blank">X3D Regular Expressions: SFFloat</a>
	 */
	public static final String REGEX = "(\\s)*((\\+|\\-)?(0|[1-9][0-9]*)(\\.[0-9]*)?((E|e)(\\+|\\-)?[0-9]+)?)(\\s)*";

	/** Precompiled regular expression (regex) pattern for this field type.
	 * @see REGEX
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 */
	public static final java.util.regex.Pattern pattern = java.util.regex.Pattern.compile(REGEX);

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float SFFloat = DEFAULT_VALUE;

	/**
	 * Constructor for SFFloatObject performs value initialization.
	 */
	public SFFloatObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFFloatObject applies default initial value.
	 * Static initializer also provided to verify that the regex pattern compiles and matches that default value.
	 * @see <a href="https://stackoverflow.com/questions/2704857/how-to-check-if-a-given-regex-is-valid">Stack Overflow: How to check if a given Regex is valid?</a>
	 * @see #DEFAULT_VALUE
	 */
	@Override
	public void initialize()
	{
		SFFloat = DEFAULT_VALUE;
	}
	// static initializer
	static {
		try {
            // verify pattern is compiling OK, report exception if not
			java.util.regex.Pattern.compile(REGEX);
				
			// verify DEFAULT_VALUE matches pattern OK, report if not
			if ((new SFFloatObject(DEFAULT_VALUE)).matches() == false)
			{
				System.err.println("SFFloatObject.initialize() problem: failed to match default value DEFAULT_VALUE " + DEFAULT_VALUE);
			}
        }
		catch (java.util.regex.PatternSyntaxException exception)
		{
			System.err.println("Exception in SFFloat initialization testing, regex pattern compilation failure.");
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
			String errorNotice = "*** Regular expression (regex) failure, new SFFloatObject pattern mismatch (\"" + toString() + "\")";
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
	 * Utility accessor for SFFloatObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFFloatObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment

		if (!SFFloatObject.matches(newValue)) // regex test
		{
			String errorNotice = "*** Regular expression (regex) failure, new SFFloatObject(" + newValue + ")";
			validationResult.append(errorNotice).append("\n");
		}
		if (newValue.trim().isEmpty())
		{
			SFFloat = DEFAULT_VALUE;
			return this;
		}
		try
		{
			SFFloat = Float.parseFloat(newValue);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFFloatObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFFloatObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFFloatObject(SFFloatObject newValue)
	{
		if (newValue == null)
		{
			SFFloat = DEFAULT_VALUE;
			return;
		}
		SFFloat = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFFloatObject using a corresponding Java primitive float as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFFloatObject (float newValue)
	{SFFloat = newValue;
	}

	/**
	 * Constructor using double as new initial value.
	 * @param newValue is new value to assign
	 */
	public SFFloatObject (double newValue)
	{
		SFFloat = (float) newValue;
	}
	/**
	 * Constructor using int as new initial value.
	 * @param newValue is new value to assign
	 */
	public SFFloatObject (int newValue)
	{
		SFFloat = (float) newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (float value)
	{
		return String.valueOf(value);
	}

	/**
	 * Get the current value.
	 * @return current value
	 */
	@Override
	public float getValue()
	{
		return SFFloat;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float getPrimitiveValue()
	{
		return SFFloat;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFFloat">X3D Tooltips: type SFFloat</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		return String.valueOf(SFFloat);
	}
	/**
	 * Assign a new value to this field.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(float newValue)
	{
		SFFloat = newValue;
	}

	/**
	 * Apply a double value to this float field type, note change in precision.
	 * @param newValue The double newValue to apply
	 * @return {@link SFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFFloatObject  setValue(double newValue)
	{
		SFFloat = (float) newValue;
		return this;
	}

	/**
	 * Apply an int value to this float field type, note change in precision.
	 * @param newValue The int newValue to apply
	 * @return {@link SFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFFloatObject  setValue(int newValue)
	{
		SFFloat = (float) newValue;
		return this;
	}

	/**
	 * Utility method to strip trailing fractional zeroes from String representations of the current object's value.
	 * Applicability: first converting an integer (such as 100) to float and then String results in trailing decimal point and zero (such as
100.0).
	 * Functionality can be globally enabled/disabled by {@link ConfigurationProperties#setStripTrailingZeroes(boolean)}.
	 * @see <a href="http://stackoverflow.com/questions/14984664/remove-trailing-zero-in-java">StackOverflow: Remove trailing zero in Java</a>
	 * @see <a href="http://stackoverflow.com/questions/11284938/remove-trailing-zeros-from-double">StackOverflow: Remove trailing zeros from double (String manipulation solution)</a>
	 * @see <a href="http://stackoverflow.com/questions/703396/how-to-nicely-format-floating-numbers-to-string-without-unnecessary-decimal-0">StackOverflow: How to nicely format floating numbers to String without unnecessary decimal 0? (&quot;In short&quot; solution)</a>
	 * @see <a href="https://library.oreilly.com/book/0636920023630/regular-expressions-cookbook-2nd-edition/275.xhtml">Regular Expressions Cookbook, 6.6. Strip Leading Zeros, by Jan Goyvaerts, Steven Levithan</a>
	 * @return string value with trailing zeros and decimal points stripped
	 */
	public String stripTrailingZeroes()
	{
		return stripTrailingZeroes(getValue());
	}

	/**
	 * Utility method to always strip trailing fractional zeroes from String value of any given float.
	 * Applicability: first converting an integer (such as 100) to float and then String results in trailing decimal point and zero (such as 100.0).
	 * <i>Note:</i> not affected by {@link ConfigurationProperties#setStripTrailingZeroes(boolean)}.
	 * @param value a single-precision number
	 * @see #stripTrailingZeroes(float)
	 * @return string value with trailing zeros and decimal points stripped
	 */
	public static String stripTrailingZeroes(float value)
	{
		String stringValue = String.valueOf(value);
		if (stringValue.contains(".") && !stringValue.contains("E") && !stringValue.contains("e"))
			 // regex to strip trailing zeroes, then strip trailing decimal point (if no other fractional part remains)
			 return stringValue.replaceAll("[0]*$", "").replaceAll("\\.$", "");
		else return stringValue; // avoided values with decimal point or exponential scientific notation
	}

	/**
	 * Apply an SFFloatObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFFloatObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFFloatObject setValue(SFFloatObject newValue)
	{
		if (newValue == null)
		{
			SFFloat = DEFAULT_VALUE;
			return this;
		}
		SFFloat = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Determine whether current value matches DEFAULT_VALUE
	 * @see #DEFAULT_VALUE
	 * @return whether current value matches DEFAULT_VALUE
	 */
    public boolean isDefaultValue()
    {
        return (SFFloat == DEFAULT_VALUE);
    }
}
