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
 * Functional summary: each added component statement indicates needed scene functionality support above the given X3D profile. This concrete class represents an X3D component statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: Each added component statement indicates needed scene functionality above the given X3D profile.
 * <ul>
 *  <li> <i>Hint:</i> component statements are optional secondary children of head statement (add a head statement first). </li> 
 *  <li> <i>Hint:</i> X3D XML Encoding <br> <a href="http://www.web3d.org/files/specifications/19776-1/V3.2/Part01/concepts.html#Header" target="_blank">http://www.web3d.org/files/specifications/19776-1/V3.2/Part01/concepts.html#Header</a> </li> 
 *  <li> <i>Warning:</i>  the COMPONENT statement is capitalized in the ClassicVRML Encoding. </li> 
 * </ul>
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Components" target="blank">X3D Abstract Specification: component</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#component" target="_blank">X3D Tooltips: component</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class componentObject extends org.web3d.x3d.jsail.X3DConcreteStatement
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private int level; // SFInt32

	private String name; // SFString

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Core"</i> (Java syntax) or <i>Core</i> (XML syntax). */
	public static final String NAME_CORE = "Core";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"CADGeometry"</i> (Java syntax) or <i>CADGeometry</i> (XML syntax). */
	public static final String NAME_CADGEOMETRY = "CADGeometry";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"CubeMapTexturing"</i> (Java syntax) or <i>CubeMapTexturing</i> (XML syntax). */
	public static final String NAME_CUBEMAPTEXTURING = "CubeMapTexturing";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"DIS"</i> (Java syntax) or <i>DIS</i> (XML syntax). */
	public static final String NAME_DIS = "DIS";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"EnvironmentalEffects"</i> (Java syntax) or <i>EnvironmentalEffects</i> (XML syntax). */
	public static final String NAME_ENVIRONMENTALEFFECTS = "EnvironmentalEffects";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"EnvironmentalSensor"</i> (Java syntax) or <i>EnvironmentalSensor</i> (XML syntax). */
	public static final String NAME_ENVIRONMENTALSENSOR = "EnvironmentalSensor";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"EventUtilities"</i> (Java syntax) or <i>EventUtilities</i> (XML syntax). */
	public static final String NAME_EVENTUTILITIES = "EventUtilities";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Followers"</i> (Java syntax) or <i>Followers</i> (XML syntax). */
	public static final String NAME_FOLLOWERS = "Followers";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Geometry2D"</i> (Java syntax) or <i>Geometry2D</i> (XML syntax). */
	public static final String NAME_GEOMETRY2D = "Geometry2D";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Geometry3D"</i> (Java syntax) or <i>Geometry3D</i> (XML syntax). */
	public static final String NAME_GEOMETRY3D = "Geometry3D";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Geospatial"</i> (Java syntax) or <i>Geospatial</i> (XML syntax). */
	public static final String NAME_GEOSPATIAL = "Geospatial";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Grouping"</i> (Java syntax) or <i>Grouping</i> (XML syntax). */
	public static final String NAME_GROUPING = "Grouping";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"H-Anim"</i> (Java syntax) or <i>H-Anim</i> (XML syntax). */
	public static final String NAME_H_ANIM = "H-Anim";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Interpolation"</i> (Java syntax) or <i>Interpolation</i> (XML syntax). */
	public static final String NAME_INTERPOLATION = "Interpolation";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"KeyDeviceSensor"</i> (Java syntax) or <i>KeyDeviceSensor</i> (XML syntax). */
	public static final String NAME_KEYDEVICESENSOR = "KeyDeviceSensor";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Layering"</i> (Java syntax) or <i>Layering</i> (XML syntax). */
	public static final String NAME_LAYERING = "Layering";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Layout"</i> (Java syntax) or <i>Layout</i> (XML syntax). */
	public static final String NAME_LAYOUT = "Layout";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Lighting"</i> (Java syntax) or <i>Lighting</i> (XML syntax). */
	public static final String NAME_LIGHTING = "Lighting";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Navigation"</i> (Java syntax) or <i>Navigation</i> (XML syntax). */
	public static final String NAME_NAVIGATION = "Navigation";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Networking"</i> (Java syntax) or <i>Networking</i> (XML syntax). */
	public static final String NAME_NETWORKING = "Networking";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"NURBS"</i> (Java syntax) or <i>NURBS</i> (XML syntax). */
	public static final String NAME_NURBS = "NURBS";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"ParticleSystems"</i> (Java syntax) or <i>ParticleSystems</i> (XML syntax). */
	public static final String NAME_PARTICLESYSTEMS = "ParticleSystems";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Picking"</i> (Java syntax) or <i>Picking</i> (XML syntax). */
	public static final String NAME_PICKING = "Picking";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"PointingDeviceSensor"</i> (Java syntax) or <i>PointingDeviceSensor</i> (XML syntax). */
	public static final String NAME_POINTINGDEVICESENSOR = "PointingDeviceSensor";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Rendering"</i> (Java syntax) or <i>Rendering</i> (XML syntax). */
	public static final String NAME_RENDERING = "Rendering";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"RigidBodyPhysics"</i> (Java syntax) or <i>RigidBodyPhysics</i> (XML syntax). */
	public static final String NAME_RIGIDBODYPHYSICS = "RigidBodyPhysics";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Scripting"</i> (Java syntax) or <i>Scripting</i> (XML syntax). */
	public static final String NAME_SCRIPTING = "Scripting";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Shaders"</i> (Java syntax) or <i>Shaders</i> (XML syntax). */
	public static final String NAME_SHADERS = "Shaders";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Shape"</i> (Java syntax) or <i>Shape</i> (XML syntax). */
	public static final String NAME_SHAPE = "Shape";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Sound"</i> (Java syntax) or <i>Sound</i> (XML syntax). */
	public static final String NAME_SOUND = "Sound";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Text"</i> (Java syntax) or <i>Text</i> (XML syntax). */
	public static final String NAME_TEXT = "Text";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Texturing"</i> (Java syntax) or <i>Texturing</i> (XML syntax). */
	public static final String NAME_TEXTURING = "Texturing";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Texturing3D"</i> (Java syntax) or <i>Texturing3D</i> (XML syntax). */
	public static final String NAME_TEXTURING3D = "Texturing3D";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Time"</i> (Java syntax) or <i>Time</i> (XML syntax). */
	public static final String NAME_TIME = "Time";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"VolumeRendering"</i> (Java syntax) or <i>VolumeRendering</i> (XML syntax). */
	public static final String NAME_VOLUMERENDERING = "VolumeRendering";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>component</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "component";

	/** Provides name of this element: <i>component</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>component</i> element: <i>Core</i> */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for the <i>component</i> element: <i>Core</i>
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

	/** SFInt32 field named <i>level</i> has default value <i>1</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final int LEVEL_DEFAULT_VALUE = 1;

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
			case "level":
				result = "SFInt32";
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
			case "level":
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

	/** Constructor for componentObject to initialize member variables with default values. */
	public componentObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		level = LEVEL_DEFAULT_VALUE;
		name = NAME_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide int value within allowed range of [1,5] from inputOutput SFInt32 field named <i>level</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Necessary level of support for this scene, as defined in corresponding Support table for a given node's component.
 * <ul>
 *  <li> <i> Hint:</i>  for example specification definitions, see X3D Specification Grouping component, 10.5 Support levels <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#SupportLevels" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#SupportLevels</a> </li> 
 * </ul>
	 * @return value of level field
	 */
	public int getLevel()
	{
		return level;
	}

	/**
	 * Assign int value within allowed range of [1,5] to inputOutput SFInt32 field named <i>level</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Necessary level of support for this scene, as defined in corresponding Support table for a given node's component. Hint: for example specification definitions, see X3D Specification Grouping component, 10.5 Support levels http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#SupportLevels
	 * @param newValue is new value for the level field.
	 * @return {@link componentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public componentObject setLevel(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 1) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("component level newValue=" + newValue + " has component value less than restriction minInclusive=1");
            }
            if (newValue > 5) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("component level newValue=" + SFInt32Object.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=5");
            }
		level = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 level field, similar to {@link #setLevel(int)}.
	 * @param newValue is new value for the level field.
	 * @return {@link componentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public componentObject setLevel(SFInt32Object newValue)
	{
		setLevel(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['Core'|'CADGeometry'|'CubeMapTexturing'|'DIS'|'EnvironmentalEffects'|'EnvironmentalSensor'|'EventUtilities'|'Followers'|'Geometry2D'|'Geometry3D'|'Geospatial'|'Grouping'|'H-Anim'|'Interpolation'|'KeyDeviceSensor'|'Layering'|'Layout'|'Lighting'|'Navigation'|'Networking'|'NURBS'|'ParticleSystems'|'Picking'|'PointingDeviceSensor'|'Rendering'|'RigidBodyPhysics'|'Scripting'|'Shaders'|'Shape'|'Sound'|'Text'|'Texturing'|'Texturing3D'|'Time'|'VolumeRendering'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Provides name of this component, as defined in corresponding X3D Specification component Introduction. Example: see X3D Specification 10.1.1 Name for Grouping component <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#Name" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#Name</a>
 * <ul>
 *  <li> <i>Hint:</i> all nodes, components and levels are already supported in Full profile. </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #NAME_CORE CORE}, {@link #NAME_CADGEOMETRY CADGEOMETRY}, {@link #NAME_CUBEMAPTEXTURING CUBEMAPTEXTURING}, {@link #NAME_DIS DIS}, {@link #NAME_ENVIRONMENTALEFFECTS ENVIRONMENTALEFFECTS}, {@link #NAME_ENVIRONMENTALSENSOR ENVIRONMENTALSENSOR}, {@link #NAME_EVENTUTILITIES EVENTUTILITIES}, {@link #NAME_FOLLOWERS FOLLOWERS}, {@link #NAME_GEOMETRY2D GEOMETRY2D}, {@link #NAME_GEOMETRY3D GEOMETRY3D}, {@link #NAME_GEOSPATIAL GEOSPATIAL}, {@link #NAME_GROUPING GROUPING}, {@link #NAME_H_ANIM H_ANIM}, {@link #NAME_INTERPOLATION INTERPOLATION}, {@link #NAME_KEYDEVICESENSOR KEYDEVICESENSOR}, {@link #NAME_LAYERING LAYERING}, {@link #NAME_LAYOUT LAYOUT}, {@link #NAME_LIGHTING LIGHTING}, {@link #NAME_NAVIGATION NAVIGATION}, {@link #NAME_NETWORKING NETWORKING}, {@link #NAME_NURBS NURBS}, {@link #NAME_PARTICLESYSTEMS PARTICLESYSTEMS}, {@link #NAME_PICKING PICKING}, {@link #NAME_POINTINGDEVICESENSOR POINTINGDEVICESENSOR}, {@link #NAME_RENDERING RENDERING}, {@link #NAME_RIGIDBODYPHYSICS RIGIDBODYPHYSICS}, {@link #NAME_SCRIPTING SCRIPTING}, {@link #NAME_SHADERS SHADERS}, {@link #NAME_SHAPE SHAPE}, {@link #NAME_SOUND SOUND}, {@link #NAME_TEXT TEXT}, {@link #NAME_TEXTURING TEXTURING}, {@link #NAME_TEXTURING3D TEXTURING3D}, {@link #NAME_TIME TIME}, {@link #NAME_VOLUMERENDERING VOLUMERENDERING}.
	 * @return value of name field
	 */
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String enumeration value ("Core"|"CADGeometry"|"CubeMapTexturing"|"DIS"|"EnvironmentalEffects"|"EnvironmentalSensor"|"EventUtilities"|"Followers"|"Geometry2D"|"Geometry3D"|"Geospatial"|"Grouping"|"H-Anim"|"Interpolation"|"KeyDeviceSensor"|"Layering"|"Layout"|"Lighting"|"Navigation"|"Networking"|"NURBS"|"ParticleSystems"|"Picking"|"PointingDeviceSensor"|"Rendering"|"RigidBodyPhysics"|"Scripting"|"Shaders"|"Shape"|"Sound"|"Text"|"Texturing"|"Texturing3D"|"Time"|"VolumeRendering") ['Core'|'CADGeometry'|'CubeMapTexturing'|'DIS'|'EnvironmentalEffects'|'EnvironmentalSensor'|'EventUtilities'|'Followers'|'Geometry2D'|'Geometry3D'|'Geospatial'|'Grouping'|'H-Anim'|'Interpolation'|'KeyDeviceSensor'|'Layering'|'Layout'|'Lighting'|'Navigation'|'Networking'|'NURBS'|'ParticleSystems'|'Picking'|'PointingDeviceSensor'|'Rendering'|'RigidBodyPhysics'|'Scripting'|'Shaders'|'Shape'|'Sound'|'Text'|'Texturing'|'Texturing3D'|'Time'|'VolumeRendering'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #NAME_CORE CORE}, {@link #NAME_CADGEOMETRY CADGEOMETRY}, {@link #NAME_CUBEMAPTEXTURING CUBEMAPTEXTURING}, {@link #NAME_DIS DIS}, {@link #NAME_ENVIRONMENTALEFFECTS ENVIRONMENTALEFFECTS}, {@link #NAME_ENVIRONMENTALSENSOR ENVIRONMENTALSENSOR}, {@link #NAME_EVENTUTILITIES EVENTUTILITIES}, {@link #NAME_FOLLOWERS FOLLOWERS}, {@link #NAME_GEOMETRY2D GEOMETRY2D}, {@link #NAME_GEOMETRY3D GEOMETRY3D}, {@link #NAME_GEOSPATIAL GEOSPATIAL}, {@link #NAME_GROUPING GROUPING}, {@link #NAME_H_ANIM H_ANIM}, {@link #NAME_INTERPOLATION INTERPOLATION}, {@link #NAME_KEYDEVICESENSOR KEYDEVICESENSOR}, {@link #NAME_LAYERING LAYERING}, {@link #NAME_LAYOUT LAYOUT}, {@link #NAME_LIGHTING LIGHTING}, {@link #NAME_NAVIGATION NAVIGATION}, {@link #NAME_NETWORKING NETWORKING}, {@link #NAME_NURBS NURBS}, {@link #NAME_PARTICLESYSTEMS PARTICLESYSTEMS}, {@link #NAME_PICKING PICKING}, {@link #NAME_POINTINGDEVICESENSOR POINTINGDEVICESENSOR}, {@link #NAME_RENDERING RENDERING}, {@link #NAME_RIGIDBODYPHYSICS RIGIDBODYPHYSICS}, {@link #NAME_SCRIPTING SCRIPTING}, {@link #NAME_SHADERS SHADERS}, {@link #NAME_SHAPE SHAPE}, {@link #NAME_SOUND SOUND}, {@link #NAME_TEXT TEXT}, {@link #NAME_TEXTURING TEXTURING}, {@link #NAME_TEXTURING3D TEXTURING3D}, {@link #NAME_TIME TIME}, {@link #NAME_VOLUMERENDERING VOLUMERENDERING}).
	 * <br><br>
	 * <i>Tooltip:</i> Provides name of this component, as defined in corresponding X3D Specification component Introduction. Example: see X3D Specification 10.1.1 Name for Grouping component http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#Name Hint: all nodes, components and levels are already supported in Full profile. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link componentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public final componentObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(NAME_CORE) ||
			newValue.equals(NAME_CADGEOMETRY) ||
			newValue.equals(NAME_CUBEMAPTEXTURING) ||
			newValue.equals(NAME_DIS) ||
			newValue.equals(NAME_ENVIRONMENTALEFFECTS) ||
			newValue.equals(NAME_ENVIRONMENTALSENSOR) ||
			newValue.equals(NAME_EVENTUTILITIES) ||
			newValue.equals(NAME_FOLLOWERS) ||
			newValue.equals(NAME_GEOMETRY2D) ||
			newValue.equals(NAME_GEOMETRY3D) ||
			newValue.equals(NAME_GEOSPATIAL) ||
			newValue.equals(NAME_GROUPING) ||
			newValue.equals(NAME_H_ANIM) ||
			newValue.equals(NAME_INTERPOLATION) ||
			newValue.equals(NAME_KEYDEVICESENSOR) ||
			newValue.equals(NAME_LAYERING) ||
			newValue.equals(NAME_LAYOUT) ||
			newValue.equals(NAME_LIGHTING) ||
			newValue.equals(NAME_NAVIGATION) ||
			newValue.equals(NAME_NETWORKING) ||
			newValue.equals(NAME_NURBS) ||
			newValue.equals(NAME_PARTICLESYSTEMS) ||
			newValue.equals(NAME_PICKING) ||
			newValue.equals(NAME_POINTINGDEVICESENSOR) ||
			newValue.equals(NAME_RENDERING) ||
			newValue.equals(NAME_RIGIDBODYPHYSICS) ||
			newValue.equals(NAME_SCRIPTING) ||
			newValue.equals(NAME_SHADERS) ||
			newValue.equals(NAME_SHAPE) ||
			newValue.equals(NAME_SOUND) ||
			newValue.equals(NAME_TEXT) ||
			newValue.equals(NAME_TEXTURING) ||
			newValue.equals(NAME_TEXTURING3D) ||
			newValue.equals(NAME_TIME) ||
			newValue.equals(NAME_VOLUMERENDERING))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("component name newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to component
		if (!org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("component name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("component name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link componentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public componentObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Utility constructor that assigns name and level attributes.
	 * @param newName  name for this component
	 * @param newLevel level value for this component element
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#component">X3D Tooltips: component</a>
	 */
	public componentObject (String newName, int newLevel)
	{
		initialize();
		setName   (newName);
		setLevel(newLevel);
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link componentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public componentObject addComments (String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link componentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public componentObject addComments (String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link componentObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public componentObject addComments (CommentsBlock newCommentsBlock)
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

		stringX3D.append(indent).append("<component"); // start opening tag
		if (hasAttributes)
		{
			if (!getName().equals(NAME_DEFAULT_VALUE))
			{
				stringX3D.append(" name='").append(SFStringObject.toString(getName())).append("'");
			}
			
			if ((true) /* required attribute */ )
			{
				stringX3D.append(" level='").append(SFInt32Object.toString(getLevel())).append("'");
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
			stringX3D.append(indent).append("</component>").append("\n"); // finish closing tag
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
		// http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/concepts.html#ComponentStatementSyntax
		stringClassicVRML.append("COMPONENT ").append(name).append(":").append(getLevel()).append("\n");
		
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
		return toStringClassicVRML(indentLevel).replaceAll("COMPONENT ","#COMPONENT "); // hide unavailable X3D feature
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

		
		setLevel(getLevel()); // exercise field checks, simple types

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
