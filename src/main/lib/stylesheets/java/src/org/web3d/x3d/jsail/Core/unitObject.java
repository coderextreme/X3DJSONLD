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

package org.web3d.x3d.jsail.Core;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.*; // again making sure #2

import java.util.Arrays;
import org.web3d.x3d.sai.Core.*;  // making sure #3
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;

import org.web3d.x3d.jsail.fields.*; // making sure #4

/**
 * Functional summary: unit statement defines data-conversion factors for typed values defined in a scene. This concrete class represents an X3D unit statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: (X3D version 3.3 or later) A unit statement defines data-conversion factors for typed values defined within a scene.
 * <ul>
 *  <li> <i>Hint:</i> unit statements are optional secondary children of head statement (add a head statement and optionally any component elements first). </li> 
 *  <li> <i>Hint:</i> unit conversionFactor scale values only affect node definitions in the current Scene, leaving Inline and ExternProtoDeclare content subject to their own independent unit statements. </li> 
 *  <li> <i>Hint:</i> a good practice is to always include unit statements in CAD scenes in order to ensure correct model composition. </li> 
 *  <li> <i>Hint:</i> X3D XML Encoding <br> <a href="http://www.web3d.org/files/specifications/19776-1/V3.2/Part01/concepts.html#Header" target="_blank">http://www.web3d.org/files/specifications/19776-1/V3.2/Part01/concepts.html#Header</a> </li> 
 *  <li> <i>Hint:</i> X3D Scene Authoring Hints, Scale Factors and Unit Conversions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scale" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scale</a> </li> 
 *  <li> <i>Warning:</i>  the UNIT statement is capitalized in the ClassicVRML Encoding. </li> 
 * </ul>
`
				 * <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Standardunitscoordinates" target="_blank">X3D specification: 4.3.6 Standard units and coordinate system</a> 
 defines how scale factors can modify an entire scene.
 * Scale-conversion constants provide correct names and values for common conversion factors. References:
 * <ul>
 * <li> <a href="http://www.unit-conversion.info" target="_blank">Unit conversion</a> website </li>
 * <li> <a href="http://en.wikipedia.org/wiki/Newton_%28unit%29#Conversion_factors" target="_blank">Wikipedia Conversion factors, units of force</a> </li>
 * <li> <a href="http://www.unitsconversion.com.ar/massunitsconversion/index.htm" target="_blank">Unit conversion</a> website </li>
 * </ul>
 * <br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#UNITStatement" target="blank">X3D Abstract Specification: unit</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#unit" target="_blank">X3D Tooltips: unit</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class unitObject extends org.web3d.x3d.jsail.X3DConcreteStatement
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String category; // SFString

	private double conversionFactor; // SFDouble

	private String name; // SFString

	// Scale factors http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scale

	/** unit statement conversionFactor for converting scene values of angles to Radians from Degrees */
	public static final double CONVERSIONFACTOR_ANGLES_toRadiansFromDegrees = 0.0174532925167;
	/** unit statement conversionFactor for converting scene values of angles to Radians from FullCircle */
	public static final double CONVERSIONFACTOR_ANGLES_toRadiansFromFullCircle = 6.283185307179;
	/** unit statement conversionFactor for converting scene values of angles to Radians from Grads */
	public static final double CONVERSIONFACTOR_ANGLES_toRadiansFromGrads = 0.01570796326795;

	/** unit statement conversionFactor for converting scene values of length to Meters from Pica */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromPica = 0.0042175176;
	/** unit statement conversionFactor for converting scene values of length to Meters from Inches */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromInches = 0.0254;
	/** unit statement conversionFactor for converting scene values of length to Meters from Feet */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromFeet = 0.3048;
	/** unit statement conversionFactor for converting scene values of length to Meters from Yards */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromYards = 0.9144;
	/** unit statement conversionFactor for converting scene values of length to Meters from Fathoms */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromFathoms = 1.8288;
	/** unit statement conversionFactor for converting scene values of length to Meters from Furlongs */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromFurlongs = 201.1684;
	/** unit statement conversionFactor for converting scene values of length to Meters from Miles */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromMiles = 1609.344;
	/** unit statement conversionFactor for converting scene values of length to Meters from Nautical Miles */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromNauticalMiles = 1852.0;
	/** unit statement conversionFactor for converting scene values of length to Meters from Microns */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromMicrons = 0.000001;
	/** unit statement conversionFactor for converting scene values of length to Meters from Millimeters */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromMillimeters = 0.001;
	/** unit statement conversionFactor for converting scene values of length to Meters from Centimeters */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromCentimeters = 0.01;
	/** unit statement conversionFactor for converting scene values of length to Meters from Kilometers */
	public static final double CONVERSIONFACTOR_LENGTH_toMetersFromKilometers = 1000.0;
										
	/** unit statement conversionFactor for converting scene values of force to Newtons from Dynes */
	public static final double CONVERSIONFACTOR_FORCE_toNewtonsFromDynes = 0.00001;
	/** unit statement conversionFactor for converting scene values of force to Newtons from Kilogram-force */
	public static final double CONVERSIONFACTOR_FORCE_toNewtonsFromKilogramForce = 9.8068;
	/** unit statement conversionFactor for converting scene values of force to Newtons from Pounds-force */
	public static final double CONVERSIONFACTOR_FORCE_toNewtonsFromPoundsForce = 4.4482;
	/** unit statement conversionFactor for converting scene values of force to Newtons from Poundal */
	public static final double CONVERSIONFACTOR_FORCE_toNewtonsFromPoundal = 0.13826;
										
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Grains Avoirdupois (gr) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromGrains = 0.00006479891;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Drams Avoirdupois (dr) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromDrams = 0.001771845195312;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Ounces Avoirdupois (oz) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromOunces = 0.028349523125;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Troy Ounces (toz) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromTroyOunces = 0.0311034768;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Pounds Avoirdupois (lb) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromPounds = 0.45359237;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Stone, i.e. 14 Pounds Avoirdupois (lb) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromStone = 6.35029318;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Tons (U.S. short) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromTons = 907.18474;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Micrograms */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFrom = 0.000000001;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Milligrams */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromMilligrams = 0.000001;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Centigrams */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromCentigrams = 0.00001;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Carats */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromCarats = 0.0002;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Grams (g) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromGrams = 0.001;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Dekagrams */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromDekagrams = 0.01;
	/** unit statement conversionFactor for converting scene values of mass to Kilograms (kg) from Metric Tonnes (t) */
	public static final double CONVERSIONFACTOR_MASS_toKilogramsFromMetricTonnes = 1000.0;
										

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>category</i> can equal this enumeration value <i>"angle"</i> (Java syntax) or <i>angle</i> (XML syntax). */
	public static final String CATEGORY_ANGLE = "angle";

	/** SFString field named <i>category</i> can equal this enumeration value <i>"force"</i> (Java syntax) or <i>force</i> (XML syntax). */
	public static final String CATEGORY_FORCE = "force";

	/** SFString field named <i>category</i> can equal this enumeration value <i>"length"</i> (Java syntax) or <i>length</i> (XML syntax). */
	public static final String CATEGORY_LENGTH = "length";

	/** SFString field named <i>category</i> can equal this enumeration value <i>"mass"</i> (Java syntax) or <i>mass</i> (XML syntax). */
	public static final String CATEGORY_MASS = "mass";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>unit</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "unit";

	/** Provides name of this element: <i>unit</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>unit</i> element: <i>Core</i> */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for the <i>unit</i> element: <i>Core</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Core</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFString field named <i>category</i> has default value equal to an empty string. */
	public static final String CATEGORY_DEFAULT_VALUE = "";

	/** SFDouble field named <i>conversionFactor</i> has default value <i>1.0</i> (Java syntax) or <i>1.0</i> (XML syntax). */
	public static final double CONVERSIONFACTOR_DEFAULT_VALUE = 1.0;

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_TYPE
	 * @return X3D type (SFvec3f etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE if not recognized
	 */
	@Override		
	public String getFieldType(String fieldName)
	{
		String result;

		switch (fieldName)
		{
			// String constants for exact field type values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing type-matching checks
											
			case "containerField":
				result = "SFString";
				break;
			case "category":
				result = "SFString";
				break;
			case "conversionFactor":
				result = "SFDouble";
				break;
			case "name":
				result = "SFString";
				break;
			default:
			{
				// if fieldName has a prefix "set_" prepended (or a suffix "_changed" appended) then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getFieldType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getFieldType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Indicate accessType corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_ACCESSTYPE
	 * @return X3D accessType (inputOnly etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE if not recognized
	 */
	@Override
	public String getAccessType(String fieldName)
	{
		String result; // set by following checks
		switch (fieldName)
		{
			// String constants for field accessType values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing accessType-matching checks
			case "category":
				result = "initializeOnly";
				break;
			case "conversionFactor":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			default:
			{
				// if user has added a prefix "set_" or suffix "_changed" then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getAccessType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getAccessType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Constructor for unitObject to initialize member variables with default values. */
	public unitObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		category = CATEGORY_DEFAULT_VALUE;
		conversionFactor = CONVERSIONFACTOR_DEFAULT_VALUE;
		name = NAME_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String enumeration value ['angle'|'force'|'length'|'mass'] from initializeOnly SFString field named <i>category</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Base-unit category as defined in X3D Specification.
 * <ul>
 *  <li> <i> Hint:</i>  X3D Specification 4.3.6 Standard units and coordinate system <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Standardunitscoordinates" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Standardunitscoordinates</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #CATEGORY_ANGLE ANGLE}, {@link #CATEGORY_FORCE FORCE}, {@link #CATEGORY_LENGTH LENGTH}, {@link #CATEGORY_MASS MASS}.
	 * @return value of category field
	 */
	public String getCategory()
	{
		return category;
	}

	/**
	 * Assign String enumeration value ("angle"|"force"|"length"|"mass") ['angle'|'force'|'length'|'mass'] to initializeOnly SFString field named <i>category</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #CATEGORY_ANGLE ANGLE}, {@link #CATEGORY_FORCE FORCE}, {@link #CATEGORY_LENGTH LENGTH}, {@link #CATEGORY_MASS MASS}).
	 * <br><br>
	 * <i>Tooltip:</i> Base-unit category as defined in X3D Specification. Hint: X3D Specification 4.3.6 Standard units and coordinate system http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Standardunitscoordinates
	 * @param newValue is new value for the category field.
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public unitObject setCategory(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(CATEGORY_ANGLE) ||
			newValue.equals(CATEGORY_FORCE) ||
			newValue.equals(CATEGORY_LENGTH) ||
			newValue.equals(CATEGORY_MASS))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("unit category newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		category = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString category field, similar to {@link #setCategory(String)}.
	 * @param newValue is new value for the category field.
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public unitObject setCategory(SFStringObject newValue)
	{
		setCategory(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value within allowed range of (0,infinity) from inputOutput SFDouble field named <i>conversionFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Positive double-precision factor that converts new base unit to default base unit.
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Scale Factors and Unit Conversions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scale" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scale</a> </li> 
 * </ul>
	 * @return value of conversionFactor field
	 */
	public double getConversionFactor()
	{
		return conversionFactor;
	}

	/**
	 * Assign double value within allowed range of (0,infinity) to inputOutput SFDouble field named <i>conversionFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Positive double-precision factor that converts new base unit to default base unit. Hint: X3D Scene Authoring Hints, Scale Factors and Unit Conversions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scale
	 * @param newValue is new value for the conversionFactor field.
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public unitObject setConversionFactor(double newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue <= 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("unit conversionFactor newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
            }
		conversionFactor = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFDouble conversionFactor field, similar to {@link #setConversionFactor(double)}.
	 * @param newValue is new value for the conversionFactor field.
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public unitObject setConversionFactor(SFDoubleObject newValue)
	{
		setConversionFactor(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-defined name for this unit conversionFactor value (for example, FeetToMeters).
 * <ul>
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-defined name for this unit conversionFactor value (for example, FeetToMeters). Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public final unitObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to unit
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("unit name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("unit name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public unitObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public unitObject addComments (String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public unitObject addComments (String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link unitObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public unitObject addComments (CommentsBlock newCommentsBlock)
	{
		commentsList.addAll(newCommentsBlock.toStringList());
		return this;
	}
		
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see X3DObject#toStringXML()
	 * @see X3DObject#toFileXML(String)
	 * @see X3DObject#toFileX3D(String)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	@Override
	public String toStringX3D(int indentLevel)
	{
		boolean hasAttributes = true; // TODO check for non-default attribute values
		boolean      hasChild = !commentsList.isEmpty();

		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<unit"); // start opening tag
		if (hasAttributes)
		{
			if (!getName().equals(NAME_DEFAULT_VALUE))
			{
				stringX3D.append(" name='").append(SFStringObject.toString(getName())).append("'");
			}
			
			if ((!getCategory().equals(CATEGORY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" category='").append(new SFStringObject(getCategory()).toStringX3D()).append("'");
			}
			if ((true) /* required attribute */ )
			{
				stringX3D.append(" conversionFactor='").append(SFDoubleObject.toString(getConversionFactor())).append("'");
			}
		}
		if ((hasChild)) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag


			// recursively iterate over child element
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</unit>").append("\n"); // finish closing tag
		}
		else
		{
			stringX3D.append("/>").append("\n"); // otherwise finish singleton tag
		}
		return stringX3D.toString();
	}

	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	@Override
	public String toStringClassicVRML(int indentLevel)
	{
		StringBuilder stringClassicVRML = new StringBuilder();
		boolean hasAttributes = true; // TODO further refinement
		boolean      hasChild = !commentsList.isEmpty();
		// http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/concepts.html#UNITStatementSyntax
		stringClassicVRML.append("UNIT ").append(category).append(" ").append(name).append(" ").append(conversionFactor).append("\n");
		
		return stringClassicVRML.toString();
	}

	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */
	@Override
	public String toStringVRML97(int indentLevel)
	{
		return toStringClassicVRML(indentLevel);
	}

	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue)
	{
		return findElementByNameValue(nameValue, ""); // empty string is wildcard, any element match is allowed
	}
								
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue, String elementName)
	{
		if ((nameValue == null) || nameValue.isEmpty())
		{
			String errorNotice = "findElementByNameValue(\"\", " + elementName + ") cannot use empty string to find a name attribute";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		if (elementName == null)
			elementName = "";
		if (getName().equals(nameValue) &&
			(elementName.isEmpty() || elementName.equals(getElementName())))
			return this;
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node or statement with given name attribute is found, meaning both objects are attached to same scene graph.
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @see #findElementByNameValue(String, String)
	 * @return whether node is found
	 */
	public boolean hasElementByNameValue(String nameValue, String elementName)
	{
		return (findElementByNameValue(nameValue, elementName) != null);
	}

	/**
	 * Recursive method to provide object reference to node by DEF, if found as this node or in a contained node.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same DEF, this method does not handle that case.
	 * @see #findElementByNameValue(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found node, null otherwise
	 */
	@Override
	public X3DConcreteNode findNodeByDEF(String DEFvalue)
	{
		if ((DEFvalue == null) || DEFvalue.isEmpty())
		{
			String errorNotice = "findNodeByDEF(\"\") cannot use empty string to find a name";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node with DEFvalue is found, meaning both objects are attached to same scene graph.
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @see #findNodeByDEF(String)
	 * @return whether node is found
	 */
	public boolean hasNodeByDEF(String DEFvalue)
	{
		return (findNodeByDEF(DEFvalue) != null);
	}

		
	/**
	 * Recursive method to validate this element plus all contained nodes and statements.
	 * @return validation results (if any)
	 */
	@Override
	public String validate()
	{
		validationResult = new StringBuilder(); // prepare for updated results

		if (getCategory().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " category field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setCategory(getCategory()); // exercise field checks, simple types

		
		setConversionFactor(getConversionFactor()); // exercise field checks, simple types

		if (getName().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " name field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setName(getName()); // exercise field checks, simple types

		return validationResult.toString();
	}
}
