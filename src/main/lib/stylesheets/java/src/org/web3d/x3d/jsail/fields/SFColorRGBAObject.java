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
 * This utility class provides a concrete implementation corresponding to SFColorRGBA X3D field type.
 * 
 * <br><br>

 * <br>
 * Note that {@linkplain SFColorObject#ALICEBLUE SFColorObject} provides a variety of color constants.
 * <br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * The SFColorRGBA field specifies one RGBA (red-green-blue-alpha) color 4-tuple. Each color value is an RGBA 4-tuple of floating point numbers in the range 0.0 to 1.0. Alpha (opacity) values = (1 - transparency). The default value of an uninitialized SFColorRGBA field is (0 0 0 0). Warning: comma characters in attribute values do not pass strict XML validation.
 * <br><br>
 * Related field object: {@link MFColorRGBAObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFColorRGBA">X3D Tooltips: type SFColorRGBA</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFColorRGBAAndMFColorRGBA" target="blank">X3D Abstract Specification: SFColorRGBAAndMFColorRGBA</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> * @see <a href="https://www.w3.org/TR/css3-color/#svg-color" target="_blank">CSS Color Module Level 3, 4.3. Extended color keywords</a>
 */
public class SFColorRGBAObject extends X3DConcreteField implements org.web3d.x3d.sai.SFColorRGBA
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFColorRGBA</i> */
	public static final String NAME = "SFColorRGBA";

	/** Default value for this field type is a <i>0</i> value.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final float[] DEFAULT_VALUE = {0.0f, 0.0f, 0.0f, 0.0f};

	/** Default string value for this field type is "0 0 0 0". */
	public static final String DEFAULT_VALUE_STRING = "0 0 0 0";

	/** Default tuple size for this field type is <i>4</i> (i.e. number of component values making up a single-field SF object). */
	public static final int TUPLE_SIZE = 4;

	/** Default regular expression (regex) pattern for this field type is <i>((((\.[0-9]+|0(\.[0-9]*)?)((E|e)(\+|\-)?[0-9]+)?)|(1(\.[0]*)?((E|e)\-[0-9]+)?)|([1-9](\.[0-9]*)((E|e)\-[0-9]+))) (((\.[0-9]+|0(\.[0-9]*)?)((E|e)(\+|\-)?[0-9]+)?)|(1(\.[0]*)?((E|e)\-[0-9]+)?)|([1-9](\.[0-9]*)((E|e)\-[0-9]+))) (((\.[0-9]+|0(\.[0-9]*)?)((E|e)(\+|\-)?[0-9]+)?)|(1(\.[0]*)?((E|e)\-[0-9]+)?)|([1-9](\.[0-9]*)((E|e)\-[0-9]+))) (((\.[0-9]+|0(\.[0-9]*)?)((E|e)(\+|\-)?[0-9]+)?)|(1(\.[0]*)?((E|e)\-[0-9]+)?)|([1-9](\.[0-9]*)((E|e)\-[0-9]+))))?</i>
	 * @see #pattern
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html#SFColorRGBA" target="_blank">X3D Regular Expressions: SFColorRGBA</a>
	 */
	public static final String REGEX = "((((\\.[0-9]+|0(\\.[0-9]*)?)((E|e)(\\+|\\-)?[0-9]+)?)|(1(\\.[0]*)?((E|e)\\-[0-9]+)?)|([1-9](\\.[0-9]*)((E|e)\\-[0-9]+))) (((\\.[0-9]+|0(\\.[0-9]*)?)((E|e)(\\+|\\-)?[0-9]+)?)|(1(\\.[0]*)?((E|e)\\-[0-9]+)?)|([1-9](\\.[0-9]*)((E|e)\\-[0-9]+))) (((\\.[0-9]+|0(\\.[0-9]*)?)((E|e)(\\+|\\-)?[0-9]+)?)|(1(\\.[0]*)?((E|e)\\-[0-9]+)?)|([1-9](\\.[0-9]*)((E|e)\\-[0-9]+))) (((\\.[0-9]+|0(\\.[0-9]*)?)((E|e)(\\+|\\-)?[0-9]+)?)|(1(\\.[0]*)?((E|e)\\-[0-9]+)?)|([1-9](\\.[0-9]*)((E|e)\\-[0-9]+))))?";

	/** Precompiled regular expression (regex) pattern for this field type.
	 * @see REGEX
	 * @see #matches
	 * @see #matches(String)
	 * @see #validate
	 * @see <a href="https://docs.oracle.com/javase/8/docs/api/java/util/regex/Pattern.html">java.util.regex.Pattern</a>
	 */
	public static final java.util.regex.Pattern pattern = java.util.regex.Pattern.compile(REGEX);

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private float[] SFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for SFColorRGBAObject performs value initialization.
	 */
	public SFColorRGBAObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFColorRGBAObject applies default initial value.
	 * Static initializer also provided to verify that the regex pattern compiles and matches that default value.
	 * @see <a href="https://stackoverflow.com/questions/2704857/how-to-check-if-a-given-regex-is-valid">Stack Overflow: How to check if a given Regex is valid?</a>
	 * @see #DEFAULT_VALUE
	 */
	@Override
	public void initialize()
	{
		SFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}
	// static initializer
	static {
		try {
            // verify pattern is compiling OK, report exception if not
			java.util.regex.Pattern.compile(REGEX);
				
			// verify DEFAULT_VALUE matches pattern OK, report if not
			if ((new SFColorRGBAObject(DEFAULT_VALUE)).matches() == false)
			{
				System.err.println("SFColorRGBAObject.initialize() problem: failed to match default value DEFAULT_VALUE " + DEFAULT_VALUE);
			}
        }
		catch (java.util.regex.PatternSyntaxException exception)
		{
			System.err.println("Exception in SFColorRGBA initialization testing, regex pattern compilation failure.");
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
			String errorNotice = "*** Regular expression (regex) failure, new SFColorRGBAObject pattern mismatch (\"" + toString() + "\")";
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
	 * Utility accessor for SFColorRGBAObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFColorRGBAObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment

		if (!SFColorRGBAObject.matches(newValue)) // regex test
		{
			String errorNotice = "*** Regular expression (regex) failure, new SFColorRGBAObject(" + newValue + ")";
			validationResult.append(errorNotice).append("\n");
		}
		if (newValue.trim().isEmpty())
		{
			SFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.replace(","," ").trim().split("\\s+");
			if (newValues.length != 4)
			{
				String errorNotice = "illegal number of values in initialization string, new SFColorRGBAObject(" + newValue + ")";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldValueException(errorNotice);
			}
			SFColorRGBA[0] = Float.parseFloat(newValues[0]);
			SFColorRGBA[1] = Float.parseFloat(newValues[1]);
			SFColorRGBA[2] = Float.parseFloat(newValues[2]);
			SFColorRGBA[3] = Float.parseFloat(newValues[3]);
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new SFColorRGBAObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an SFColorRGBAObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFColorRGBAObject(SFColorRGBAObject newValue)
	{
		if (newValue == null)
		{
			SFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		SFColorRGBA = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFColorRGBAObject using a corresponding Java primitive float[] array as new initial value.
	 * @param newValue is new value to assign
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFColorRGBA tuple size of <i>4</i>.
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFColorRGBAObject (float[] newValue)
	{
		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 4)
		{
			String errorNotice = "Illegal SFColorRGBA newValue array length=" + newValue.length +
				", must equal 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		
		// initial value checks 
		float   red = newValue[0];
		float green = newValue[1];
		float  blue = newValue[2];	
		float alpha = newValue[3];	
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f) || (alpha < 0.0f) || (alpha > 1.0f))
		{
			String errorNotice = "Illegal SFColorRGBA value (" + red + "," + green + "," + blue + "," + alpha + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColorRGBA = newValue;
	}

	/**
	 * Constructor using individual float types as new initial value (which must pass validation checks).
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @param alpha fourth component for opaqueness (1 - transparency)
	 */
	public SFColorRGBAObject  (float red, float green, float blue, float alpha)
	{
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f) || (alpha < 0.0f) || (alpha > 1.0f))
		{
			String errorNotice = "Illegal SFColorRGBA value (" + red + "," + green + "," + blue + "," + alpha + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColorRGBA[0] = red;
		SFColorRGBA[1] = green;
		SFColorRGBA[2] = blue;
		SFColorRGBA[3] = alpha;
	}
	/**
	 * Constructor using individual double types as new initial value (which must pass validation checks).
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @param alpha fourth component for opaqueness (1 - transparency)
	 */
	public SFColorRGBAObject  (double red, double green, double blue, double alpha)
	{
		setValue ((float) red, (float) green, (float) blue, (float) alpha);
	}
	/**
	 * Constructor using single HTML-style 0xRRGGBB hex value as new initial value.
	 * @param hexColorValue HTML color value (such as 0xAA2288)
	 * @param alpha fourth component for opaqueness (1 - transparency)
	 */
	public SFColorRGBAObject (int hexColorValue, float alpha)
	{
		// http://stackoverflow.com/questions/12798611/splitting-a-hex-number
						 
		float   red = ((hexColorValue>>16) & 0xff) / 255.0f;
		float green = ((hexColorValue>> 8) & 0xff) / 255.0f;
		float  blue = ((hexColorValue    ) & 0xff) / 255.0f;
						 
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColorRGBA[0] = red;
		SFColorRGBA[1] = green;
		SFColorRGBA[2] = blue;
		SFColorRGBA[3] = alpha;
	}
	/**
	 * Public utility accessor method setting single HTML-style 0xRRGGBB hex value as new value.
	 * @param hexColorValue HTML color value (such as 0xAA2288)
	 * @param alpha fourth component for opaqueness (1 - transparency)
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject setValue (int hexColorValue, float alpha)
	{
		// http://stackoverflow.com/questions/12798611/splitting-a-hex-number
						 
		float   red = ((hexColorValue>>16) & 0xff) / 255.0f;
		float green = ((hexColorValue>> 8) & 0xff) / 255.0f;
		float  blue = ((hexColorValue    ) & 0xff) / 255.0f;
						 
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f) || (alpha < 0.0f) || (alpha > 1.0f))
		{
			String errorNotice = "Illegal SFColor value (" + red + "," + green + "," + blue + "," + alpha + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColorRGBA[0] = red;
		SFColorRGBA[1] = green;
		SFColorRGBA[2] = blue;
		SFColorRGBA[3] = alpha;
		return this;
	}
	/**
	 * Complement all color values in RGB space (i.e. subtract each component from 1), with no change in alpha.
	 * @see <a href="https://en.wikipedia.org/wiki/Negative_(photography)">Wikipedia: Negative (photography)</a>
	 * @see <a href="https://en.wikipedia.org/wiki/Complementary_colors">Wikipedia: Complementary colors</a>
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject complementRGB ()
	{
		SFColorRGBA[0] = 1.0f - SFColorRGBA[0];
		SFColorRGBA[1] = 1.0f - SFColorRGBA[1];
		SFColorRGBA[2] = 1.0f - SFColorRGBA[2];
		return this;
	}
	/**
	 * Complement alpha value by subtracting it from 1, note transparency = (1 - alpha).
	 * @see <a href="https://en.wikipedia.org/wiki/Negative_(photography)">Wikipedia: Negative (photography)</a>
	 * @see <a href="https://en.wikipedia.org/wiki/Complementary_colors">Wikipedia: Complementary colors</a>
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject complementAlpha ()
	{
		SFColorRGBA[3] = 1.0f - SFColorRGBA[3];
		return this;
	}
	/**
	 * Ensure all component color values are within range [0-1] by clipping as necessary.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">X3D Scene Authoring Hints: Color</a>
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject normalizeClip ()
	{
		if (SFColorRGBA[0] < 0.0f) SFColorRGBA[0] = 0.0f;
		if (SFColorRGBA[1] < 0.0f) SFColorRGBA[1] = 0.0f;
		if (SFColorRGBA[2] < 0.0f) SFColorRGBA[2] = 0.0f;
		if (SFColorRGBA[3] < 0.0f) SFColorRGBA[3] = 0.0f;
		if (SFColorRGBA[0] > 1.0f) SFColorRGBA[0] = 1.0f;
		if (SFColorRGBA[1] > 1.0f) SFColorRGBA[1] = 1.0f;
		if (SFColorRGBA[2] > 1.0f) SFColorRGBA[2] = 1.0f;
		if (SFColorRGBA[3] > 1.0f) SFColorRGBA[3] = 1.0f;
		return this;
	}

	/**
	 * Assign a new value to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFColorRGBA tuple size of <i>4</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	public void setValue(double[] newValue)
	{
		float[] floatArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
			floatArray[i] = (float)newValue[i]; // cast each double to float
		setValue(floatArray);
	}

	/**
	 * Constructor for MFVec3fObject using an alternatively typed Java double[] array as new initial value.
	 * @param newValue is new value to assign
	 */
	public SFColorRGBAObject(double[] newValue)
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
	 * Get the current value of this SFColorRGBAObject by copying it into the valueDestination array, leaving the current object unchanged.
	 * @param valueDestination The array to be filled in with current field values.
	 */
	@Override
	public void getValue(float[] valueDestination)
	{
		valueDestination = SFColorRGBA;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public float[] getPrimitiveValue()
	{
		return SFColorRGBA;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFColorRGBA">X3D Tooltips: type SFColorRGBA</a>
	 * @see org.web3d.x3d.jsail.fields.SFFloatObject#stripTrailingZeroes(float)
	 * @return String version of the provided value, with trailing zeroes and decimal points omitted.
	 */
	@Override
	public String toString()
	{
		return "TODO"; // unimplemented type toString()
	}
	/**
	 * Assign a new value to this field.
	 * <i>Warning:</i> newValue array length must correspond to tuple size for base type SFColorRGBA tuple size of <i>4</i>.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(float[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnSelf2

		if      (newValue == null)
			     newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		else if (newValue.length != 4)
		{
			String errorNotice = "Illegal SFColorRGBA newValue array length=" + newValue.length +
				", must equal 4 or else be empty (newValue=" + toString(newValue) + ")";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		
		// initial value checks
		float   red = newValue[0];
		float green = newValue[1];
		float  blue = newValue[2];	
		float alpha = newValue[3];	
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f) || (alpha < 0.0f) || (alpha > 1.0f))
		{
			String errorNotice = "Illegal SFColorRGBA value (" + red + "," + green + "," + blue + "," + alpha + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColorRGBA = newValue;
	}

	/**
	 * Assign a new value to this field.
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @param alpha fourth component for opaqueness (1 - transparency)
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject setValue(float red, float green, float blue, float alpha)
	{
		if ((red < 0.0f) || (red > 1.0f) || (green < 0.0f) || (green > 1.0f) || (blue < 0.0f) || (blue > 1.0f) || (alpha < 0.0f) || (alpha > 1.0f))
		{
			String errorNotice = "Illegal SFColorRGBA value (" + red + "," + green + "," + blue + "," + alpha + 
				"), all values must be in numeric range [0..1]";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColorRGBA[0] = red;
		SFColorRGBA[1] = green;
		SFColorRGBA[2] = blue;
		return this;
	}
	/**
	 * Assign a new value to this field.
	 * @param red first component
	 * @param green second component
	 * @param blue third component
	 * @param alpha fourth component for opaqueness (1 - transparency)
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject setValue(double red, double green, double blue, double alpha)
	{
		setValue ((float) red, (float) green, (float) blue, (float) alpha);
		return this;
	}
	/**
	 * Utility method to modify transparency
	 * @param newTransparency value [0..1]
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject setTransparency (float newTransparency)
	{
		if ((newTransparency < 0.0f) || (newTransparency > 1.0f))
		{
			String errorNotice = "Illegal SFColorRGBA transparency value=" + newTransparency + 
												 ", must be within numeric range [0..1] inclusive";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
		SFColorRGBA[3] = newTransparency;
		return this;
	}
	/**
	 * Utility method to modify transparency
	 * @param newTransparency value [0..1]
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject setTransparency (double newTransparency)
	{
		setTransparency ((float) newTransparency);
		return this;
	}

	/**
	 * Provide float array for this field type.
	 *
	 * @return Array of floats in this field array.
	 */
	public float[] toFloatArray()
	{
		return SFColorRGBA;
	}

	/**
	 * Apply an SFColorRGBAObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFColorRGBAObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFColorRGBAObject setValue(SFColorRGBAObject newValue)
	{
		if (newValue == null)
		{
			SFColorRGBA = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		SFColorRGBA = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Determine whether current value matches DEFAULT_VALUE
	 * @see #DEFAULT_VALUE
	 * @return whether current value matches DEFAULT_VALUE
	 */
    public boolean isDefaultValue()
    {
        return (SFColorRGBA == DEFAULT_VALUE);
    }
}
