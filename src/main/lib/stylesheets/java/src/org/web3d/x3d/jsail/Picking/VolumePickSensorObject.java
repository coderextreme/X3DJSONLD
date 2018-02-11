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

package org.web3d.x3d.jsail.Picking;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Picking.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.Picking.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.Picking.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) VolumePickSensor tests picking intersections using the pickingGeometry against the pickTarget geometry volume.
 * <ul>
 *  <li> <i>Hint:</i> sort order is based on distance between centers of the bounds of the picking geometry and the picked geometry. </li> 
 *  <li> <i>Warning:</i> pickingGeometry volume is defined by the convex hull of the enclosing planes of the provided X3DGeometryNode. If the provided volume is not manifold, pick results are undefined. </li> 
 *  <li> <i>Hint:</i> a pick is successful if any vertex of the pickTarget geometry intersects the volume defined by the pickingGeometry. </li> 
 *  <li> <i>Hint:</i> Sorting is defined based on distance between the centers of the bounds of the picking geometry and the picked geometry. </li> 
 *  <li> <i>Hint:</i> picking is performed between rendered frames of the event model. An author sets up the picking request in one frame by placing a LinePickSensor in the desired location. At the start of the next frame, any picking intersections are reported by the pick sensor. </li> 
 *  <li> <i>Hint:</i> picking notification is performed at the start of the frame for all enabled pick sensors once all other sensors are processed. </li> 
 *  <li> <i>Hint:</i> event timing details are explained in 4.4.8.3 Execution model <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/concepts.html#ExecutionModelWarning" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/concepts.html#ExecutionModelWarning</a>: order of contained nodes is significant, single pickingGeometry node must precede pickTarget node array. </li> 
 *  <li> <i>Hint:</i>  any geometry can be used for pickingGeometry node. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/picking.html#VolumePickSensor" target="blank">X3D Abstract Specification: VolumePickSensor</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#VolumePickSensor" target="_blank">X3D Tooltips: VolumePickSensor</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Volume" target="_blank">X3D Scene Authoring Hints: Volume</a>
 */
public class VolumePickSensorObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Picking.VolumePickSensor
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private boolean enabled; // SFBool

	private String intersectionType; // SFString

	private boolean isActive; // SFBool

	private String matchCriterion; // SFString

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private ArrayList<String> objectType = new ArrayList<>(); // MFString

	private ArrayList<X3DChildNode> pickedGeometry = new ArrayList<>(); // MFNode acceptable node types: X3DChildNode

	private X3DGeometryNode pickingGeometry; // SFNode acceptable node types: X3DGeometryNode
	private ProtoInstanceObject pickingGeometryProtoInstance; // allowed alternative for pickingGeometry field

	private ArrayList<X3DNode> pickTarget = new ArrayList<>(); // MFNode acceptable node types: X3DGroupingNode|X3DShapeNode|Inline

	private String sortOrder; // SFString

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>intersectionType</i> can equal this enumeration value <i>"BOUNDS"</i> (Java syntax) or <i>BOUNDS</i> (XML syntax). */
	public static final String INTERSECTIONTYPE_BOUNDS = "BOUNDS";

	/** SFString field named <i>intersectionType</i> can equal this enumeration value <i>"GEOMETRY"</i> (Java syntax) or <i>GEOMETRY</i> (XML syntax). */
	public static final String INTERSECTIONTYPE_GEOMETRY = "GEOMETRY";

	/** SFString field named <i>matchCriterion</i> can equal this enumeration value <i>"MATCH_ANY"</i> (Java syntax) or <i>MATCH_ANY</i> (XML syntax). */
	public static final String MATCHCRITERION_MATCH_ANY = "MATCH_ANY";

	/** SFString field named <i>matchCriterion</i> can equal this enumeration value <i>"MATCH_EVERY"</i> (Java syntax) or <i>MATCH_EVERY</i> (XML syntax). */
	public static final String MATCHCRITERION_MATCH_EVERY = "MATCH_EVERY";

	/** SFString field named <i>matchCriterion</i> can equal this enumeration value <i>"MATCH_ONLY_ONE"</i> (Java syntax) or <i>MATCH_ONLY_ONE</i> (XML syntax). */
	public static final String MATCHCRITERION_MATCH_ONLY_ONE = "MATCH_ONLY_ONE";

	/** MFString field named <i>objectType</i> is an array that can include this quoted enumeration value <i>new String[] {"ALL"}</i> (Java syntax) or <i>'"ALL"'</i> (XML syntax). */
	public static final ArrayList<String> OBJECTTYPE_ALL = new ArrayList<String>(Arrays.<String>asList("ALL"));

	/** MFString field named <i>objectType</i> is an array that can include this quoted enumeration value <i>new String[] {"NONE"}</i> (Java syntax) or <i>'"NONE"'</i> (XML syntax). */
	public static final ArrayList<String> OBJECTTYPE_NONE = new ArrayList<String>(Arrays.<String>asList("NONE"));

	/** MFString field named <i>objectType</i> is an array that can include this quoted enumeration value <i>new String[] {"TERRAIN"}</i> (Java syntax) or <i>'"TERRAIN"'</i> (XML syntax). */
	public static final ArrayList<String> OBJECTTYPE_TERRAIN = new ArrayList<String>(Arrays.<String>asList("TERRAIN"));

	/** SFString field named <i>sortOrder</i> can equal this enumeration value <i>"ANY"</i> (Java syntax) or <i>ANY</i> (XML syntax). */
	public static final String SORTORDER_ANY = "ANY";

	/** SFString field named <i>sortOrder</i> can equal this enumeration value <i>"CLOSEST"</i> (Java syntax) or <i>CLOSEST</i> (XML syntax). */
	public static final String SORTORDER_CLOSEST = "CLOSEST";

	/** SFString field named <i>sortOrder</i> can equal this enumeration value <i>"ALL"</i> (Java syntax) or <i>ALL</i> (XML syntax). */
	public static final String SORTORDER_ALL = "ALL";

	/** SFString field named <i>sortOrder</i> can equal this enumeration value <i>"ALL_SORTED"</i> (Java syntax) or <i>ALL_SORTED</i> (XML syntax). */
	public static final String SORTORDER_ALL_SORTED = "ALL_SORTED";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>VolumePickSensor</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "VolumePickSensor";

	/** Provides name of this element: <i>VolumePickSensor</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>VolumePickSensor</i> element: <i>Picking</i> */
	public static final String COMPONENT = "Picking";

	/** Defines X3D component for the <i>VolumePickSensor</i> element: <i>Picking</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Picking</i> component level for this element: <i>3</i> */
	public static final int LEVEL = 3;

	/** Provides default X3D component level for this element: <i>3</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFBool field named <i>enabled</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENABLED_DEFAULT_VALUE = true;

	/** SFString field named <i>intersectionType</i> has default value <i>"BOUNDS"</i> (Java syntax) or <i>BOUNDS</i> (XML syntax). */
	public static final String INTERSECTIONTYPE_DEFAULT_VALUE = "BOUNDS";

	/** SFString field named <i>matchCriterion</i> has default value <i>"MATCH_ANY"</i> (Java syntax) or <i>MATCH_ANY</i> (XML syntax). */
	public static final String MATCHCRITERION_DEFAULT_VALUE = "MATCH_ANY";

	/** MFString field named <i>objectType</i> has default quoted value <i>new String[] {"ALL"}</i> (Java syntax) or quoted value <i>"ALL"</i> (XML syntax). */
	public static final ArrayList<String> OBJECTTYPE_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("ALL"));

	/** SFString field named <i>sortOrder</i> has default value <i>"CLOSEST"</i> (Java syntax) or <i>CLOSEST</i> (XML syntax). */
	public static final String SORTORDER_DEFAULT_VALUE = "CLOSEST";

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D node
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
			case "enabled":
				result = "SFBool";
				break;
			case "intersectionType":
				result = "SFString";
				break;
			case "isActive":
				result = "SFBool";
				break;
			case "matchCriterion":
				result = "SFString";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "objectType":
				result = "MFString";
				break;
			case "pickedGeometry":
				result = "MFNode";
				break;
			case "pickingGeometry":
				result = "SFNode";
				break;
			case "pickTarget":
				result = "MFNode";
				break;
			case "sortOrder":
				result = "SFString";
				break;
			case "DEF":
				result = "SFString";
				break;
			case "USE":
				result = "SFString";
				break;
			case "class":
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
	 * @param fieldName name of field in this X3D node
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
			case "enabled":
				result = "inputOutput";
				break;
			case "intersectionType":
				result = "initializeOnly";
				break;
			case "isActive":
				result = "outputOnly";
				break;
			case "matchCriterion":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "objectType":
				result = "inputOutput";
				break;
			case "pickedGeometry":
				result = "outputOnly";
				break;
			case "pickingGeometry":
				result = "inputOutput";
				break;
			case "pickTarget":
				result = "inputOutput";
				break;
			case "sortOrder":
				result = "initializeOnly";
				break;
			case "DEF":
				result = "inputOutput";
				break;
			case "USE":
				result = "inputOutput";
				break;
			case "class":
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

	/** containerField describes typical field relationship of a node to its parent.
	 * Usage is not ordinarily needed when using this API, default value is provided for informational purposes. */
	String containerField_DEFAULT_VALUE = "children";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String fromField_ENABLED = "enabled";

	/** toField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String toField_ENABLED = "enabled";

	/** fromField ROUTE name for SFBool field named <i>isActive</i>. */
	public static final String fromField_ISACTIVE = "isActive";

	/** fromField ROUTE name for SFString field named <i>matchCriterion</i>. */
	public static final String fromField_MATCHCRITERION = "matchCriterion";

	/** toField ROUTE name for SFString field named <i>matchCriterion</i>. */
	public static final String toField_MATCHCRITERION = "matchCriterion";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for MFString field named <i>objectType</i>. */
	public static final String fromField_OBJECTTYPE = "objectType";

	/** toField ROUTE name for MFString field named <i>objectType</i>. */
	public static final String toField_OBJECTTYPE = "objectType";

	/** fromField ROUTE name for MFNode field named <i>pickedGeometry</i>. */
	public static final String fromField_PICKEDGEOMETRY = "pickedGeometry";

	/** fromField ROUTE name for SFNode field named <i>pickingGeometry</i>. */
	public static final String fromField_PICKINGGEOMETRY = "pickingGeometry";

	/** toField ROUTE name for SFNode field named <i>pickingGeometry</i>. */
	public static final String toField_PICKINGGEOMETRY = "pickingGeometry";

	/** fromField ROUTE name for MFNode field named <i>pickTarget</i>. */
	public static final String fromField_PICKTARGET = "pickTarget";

	/** toField ROUTE name for MFNode field named <i>pickTarget</i>. */
	public static final String toField_PICKTARGET = "pickTarget";

	/** Constructor for VolumePickSensorObject to initialize member variables with default values. */
	public VolumePickSensorObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "children" };

		enabled = ENABLED_DEFAULT_VALUE;
		intersectionType = INTERSECTIONTYPE_DEFAULT_VALUE;
		matchCriterion = MATCHCRITERION_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		objectType = OBJECTTYPE_DEFAULT_VALUE;
		pickingGeometry = null; // clear out any prior node
		pickTarget = new ArrayList<>();
		sortOrder = SORTORDER_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables node operation.  * <br>

	 * @return value of enabled field
	 */
	@Override
	public boolean getEnabled()
	{
		return enabled;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables node operation.
	 * @param newValue is new value for the enabled field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setEnabled(boolean newValue)
	{
		enabled = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool enabled field, similar to {@link #setEnabled(boolean)}.
	 * @param newValue is new value for the enabled field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setEnabled(SFBoolObject newValue)
	{
		setEnabled(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['BOUNDS'|'GEOMETRY'|'etc.'] from initializeOnly SFString field named <i>intersectionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> intersectionType specifies precision of the collision computation.
 * <ul>
 *  <li> <i>Hint:</i> intersectionType constants may be extended by the browser to provide additional options. </li> 
 *  <li> <i>Warning:</i>  do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #INTERSECTIONTYPE_BOUNDS BOUNDS}, {@link #INTERSECTIONTYPE_GEOMETRY GEOMETRY}.
	 * @return value of intersectionType field
	 */
	@Override
	public String getIntersectionType()
	{
		return intersectionType;
	}

	/**
	 * Assign String enumeration value ("BOUNDS"|"GEOMETRY") ['BOUNDS'|'GEOMETRY'|'etc.'] to initializeOnly SFString field named <i>intersectionType</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #INTERSECTIONTYPE_BOUNDS BOUNDS}, {@link #INTERSECTIONTYPE_GEOMETRY GEOMETRY}).
	 * <br><br>
	 * <i>Tooltip:</i> intersectionType specifies precision of the collision computation. Hint: intersectionType constants may be extended by the browser to provide additional options. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values.
	 * @param newValue is new value for the intersectionType field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setIntersectionType(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		intersectionType = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString intersectionType field, similar to {@link #setIntersectionType(String)}.
	 * @param newValue is new value for the intersectionType field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setIntersectionType(SFStringObject newValue)
	{
		setIntersectionType(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  isActive indicates when the intersecting object is picked by the picking geometry. Output event isActive=true gets sent once a picked item is found. Output event isActive=false gets sent once no picked item is found.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive()
	{
		return isActive;
	}
	/**
	 * Provide String enumeration value ['MATCH_ANY'|'MATCH_EVERY'|'MATCH_ONLY_ONE'] from inputOutput SFString field named <i>matchCriterion</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  defines whether the intersection test (i.e. pick) by this X3DPickSensorNode must match one or more objectType. Specifically MATCH_ANY means any match of objectType values is acceptable, MATCH_EVERY means that every objectType value in this node shall match an objectType value in the X3DPickableObject, and MATCH_ONLY_ONE means that one and only one objectType value can match.  * <br>

	 * <br><br>
	 * Available enumeration values for string comparison: {@link #MATCHCRITERION_MATCH_ANY MATCH_ANY}, {@link #MATCHCRITERION_MATCH_EVERY MATCH_EVERY}, {@link #MATCHCRITERION_MATCH_ONLY_ONE MATCH_ONLY_ONE}.
	 * @return value of matchCriterion field
	 */
	@Override
	public String getMatchCriterion()
	{
		return matchCriterion;
	}

	/**
	 * Assign String enumeration value ("MATCH_ANY"|"MATCH_EVERY"|"MATCH_ONLY_ONE") ['MATCH_ANY'|'MATCH_EVERY'|'MATCH_ONLY_ONE'] to inputOutput SFString field named <i>matchCriterion</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #MATCHCRITERION_MATCH_ANY MATCH_ANY}, {@link #MATCHCRITERION_MATCH_EVERY MATCH_EVERY}, {@link #MATCHCRITERION_MATCH_ONLY_ONE MATCH_ONLY_ONE}).
	 * <br><br>
	 * <i>Tooltip:</i> defines whether the intersection test (i.e. pick) by this X3DPickSensorNode must match one or more objectType. Specifically MATCH_ANY means any match of objectType values is acceptable, MATCH_EVERY means that every objectType value in this node shall match an objectType value in the X3DPickableObject, and MATCH_ONLY_ONE means that one and only one objectType value can match.
	 * @param newValue is new value for the matchCriterion field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setMatchCriterion(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(MATCHCRITERION_MATCH_ANY) ||
			newValue.equals(MATCHCRITERION_MATCH_EVERY) ||
			newValue.equals(MATCHCRITERION_MATCH_ONLY_ONE))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("VolumePickSensor matchCriterion newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		matchCriterion = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString matchCriterion field, similar to {@link #setMatchCriterion(String)}.
	 * @param newValue is new value for the matchCriterion field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setMatchCriterion(SFStringObject newValue)
	{
		setMatchCriterion(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata()
	{
		return metadata;
	}

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see #setMetadata(ProtoInstanceObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setMetadata(X3DMetadataObject newValue)
	{
		metadata = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) metadata).setParentObject(this); // parentTest15
		}
		if (metadataProtoInstance != null)
		{
			metadataProtoInstance.setParentObject(null); // housekeeping, clear prior object
			metadataProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of metadata field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public VolumePickSensorObject clearMetadata()
	{
		((X3DConcreteElement) metadata).clearParentObject(); // remove references to facilitate Java memory management
		metadata = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>metadata</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DMetadataObject.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the metadata field
	 * @see #setMetadata(X3DMetadataObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public VolumePickSensorObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
	{
		if (metadata != null)
		{
			((X3DConcreteElement) metadata).setParentObject(null); // housekeeping, clear prior object
			metadata = null;
		}
		metadataProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>metadata</i>, if available.
	 * @see #getMetadata()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getMetadataProtoInstance()
	{
		return metadataProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>metadata</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getMetadata()
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 */
	public boolean hasMetadata()
	{
		return (metadata != null) || (metadataProtoInstance != null);
	}
	/**
	 * Provide array of String enumeration results with quoted value(s) ["ALL","NONE","TERRAIN",...] from inputOutput MFString field named <i>objectType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The objectType field specifies a set of labels used in the picking process. Each string specified is treated as an independent label that needs to be matched against the same type in one of the pick sensor instances. Example: labeling a PickableGroup with the objectType value "WATER" and then attempting to intersect a pick sensor with objectType value "GROUND" fails since the objectType values do not match. Example: the special value "ALL" means that each node is available for picking regardless of the type specified by the pick sensor. Example: the special value "NONE" effectively disables all picking for this node and is the equivalent of setting the pickable field of the corresponding PickableGroup to false.
 * <ul>
 *  <li> <i>Hint:</i> authors may define any value for objectType. </li> 
 *  <li> <i>Hint:</i>  MFString arrays can have multiple values, so "separate each individual string" "by using quote marks". </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #OBJECTTYPE_ALL ALL}, {@link #OBJECTTYPE_NONE NONE}, {@link #OBJECTTYPE_TERRAIN TERRAIN}.
	 * @return value of objectType field
	 */
	@Override
	public String[] getObjectType()
	{
		final String[] valuesArray = new String[objectType.size()];
		int i = 0;
		for (String arrayElement : objectType) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString objectType field, similar to {@link #getObjectType()}.

	 * @return value of objectType field
	 */
	public ArrayList<String> getObjectTypeList()
	{
		return objectType;
	}

	/**
	 * Assign String enumeration array (""ALL""|""NONE""|""TERRAIN"") with quoted value(s) ["ALL","NONE","TERRAIN",...] to inputOutput MFString field named <i>objectType</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #OBJECTTYPE_ALL ALL}, {@link #OBJECTTYPE_NONE NONE}, {@link #OBJECTTYPE_TERRAIN TERRAIN}).
	 * <br><br>
	 * <i>Tooltip:</i> The objectType field specifies a set of labels used in the picking process. Each string specified is treated as an independent label that needs to be matched against the same type in one of the pick sensor instances. Example: labeling a PickableGroup with the objectType value "WATER" and then attempting to intersect a pick sensor with objectType value "GROUND" fails since the objectType values do not match. Example: the special value "ALL" means that each node is available for picking regardless of the type specified by the pick sensor. Example: the special value "NONE" effectively disables all picking for this node and is the equivalent of setting the pickable field of the corresponding PickableGroup to false. Hint: authors may define any value for objectType. Hint: MFString arrays can have multiple values, so "separate each individual string" "by using quote marks".
	 * @param newValue is new value for the objectType field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setObjectType(String[] newValue)
	{
		if (newValue == null)
		{
			clearObjectType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		objectType.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			objectType.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString objectType field, similar to {@link #setObjectType(String[])}.
	 * @param newValue is new value for the objectType field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setObjectType(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearObjectType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setObjectType(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString objectType field, similar to {@link #setObjectType(String[])}.
	 * @param newValue is new value for the objectType field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setObjectType(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearObjectType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setObjectType(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString objectType field, similar to {@link #setObjectType(String[])}.
	 * @param newValue is new value for the objectType field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setObjectType(String newValue)
	{
		if (newValue == null)
		{
			clearObjectType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setObjectType(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString objectType field, similar to {@link #setObjectType(String[])}.
	 * @param newValue is new value for the objectType field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setObjectType(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearObjectType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		objectType = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of objectType field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public VolumePickSensorObject clearObjectType()
	{
		objectType.clear(); // reset
		return this;
	}
	/**
	 * Provide array of X3DChildNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from outputOnly MFNode field <i>pickedGeometry</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Output event containing the node or nodes that have been found to intersect with the picking geometry from the last time this node performed a picking operation, given in the local coordinate system.  * <br>

	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of pickedGeometry field
	 */
	@Override
	public X3DNode[] getPickedGeometry()
	{
		final X3DNode[] valuesArray = new X3DNode[pickedGeometry.size()];
		int i = 0;
		for (X3DChildNode arrayElement : pickedGeometry) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode pickedGeometry field, similar to {@link #getPickedGeometry()}.

	 * @return value of pickedGeometry field
	 */
	public ArrayList<X3DChildNode> getPickedGeometryList()
	{
		return pickedGeometry;
	}
	/**
	 * Provide X3DGeometryNode instance (using a properly typed node) from inputOutput SFNode field <i>pickingGeometry</i>.
	 * @see #getPickingGeometryProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i>  [X3DGeometryNode] pickingGeometry specifies the exact geometry coordinates that are used to perform the intersection testing of the picking operation.  * <br>

	 * @return value of pickingGeometry field
	 */
	@Override
	public X3DGeometryNode getPickingGeometry()
	{
		return pickingGeometry;
	}

	/**
	 * Assign X3DGeometryNode instance (using a properly typed node) to inputOutput SFNode field <i>pickingGeometry</i>.
	 * @see #setPickingGeometry(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [X3DGeometryNode] pickingGeometry specifies the exact geometry coordinates that are used to perform the intersection testing of the picking operation.
	 * @param newValue is new value for the pickingGeometry field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setPickingGeometry(X3DGeometryNode newValue)
	{
		pickingGeometry = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) pickingGeometry).setParentObject(this); // parentTest15
		}
		if (pickingGeometryProtoInstance != null)
		{
			pickingGeometryProtoInstance.setParentObject(null); // housekeeping, clear prior object
			pickingGeometryProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of pickingGeometry field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public VolumePickSensorObject clearPickingGeometry()
	{
		((X3DConcreteElement) pickingGeometry).clearParentObject(); // remove references to facilitate Java memory management
		pickingGeometry = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>pickingGeometry</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DGeometryNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the pickingGeometry field
	 * @see #setPickingGeometry(X3DGeometryNode)
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public VolumePickSensorObject setPickingGeometry(ProtoInstanceObject newProtoInstanceNode)
	{
		if (pickingGeometry != null)
		{
			((X3DConcreteElement) pickingGeometry).setParentObject(null); // housekeeping, clear prior object
			pickingGeometry = null;
		}
		pickingGeometryProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>pickingGeometry</i>, if available.
	 * @see #getPickingGeometry()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getPickingGeometryProtoInstance()
	{
		return pickingGeometryProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>pickingGeometry</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getPickingGeometry()
	 * @see #getPickingGeometryProtoInstance()
	 */
	public boolean hasPickingGeometry()
	{
		return (pickingGeometry != null) || (pickingGeometryProtoInstance != null);
	}
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to X3DGroupingNode|X3DShapeNode|Inline, from inputOutput MFNode field <i>pickTarget</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [X3DGroupingNode|X3DShapeNode|Inline] pickTarget specifies the list of nodes against which picking operations are performed. All nodes declared in this field and their descendents are evaluated for intersections.  * <br>

	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DGroupingNode|X3DShapeNode|Inline.
	 * @see org.web3d.x3d.sai.Grouping.X3DGroupingNode
	 * @see org.web3d.x3d.sai.Shape.X3DShapeNode
	 * @see org.web3d.x3d.jsail.Networking.InlineObject
	 * @return value of pickTarget field
	 */
	@Override
	public X3DNode[] getPickTarget()
	{
		final X3DNode[] valuesArray = new X3DNode[pickTarget.size()];
		int i = 0;
		for (X3DNode arrayElement : pickTarget) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode pickTarget field, similar to {@link #getPickTarget()}.

	 * @return value of pickTarget field
	 */
	public ArrayList<X3DNode> getPickTargetList()
	{
		return pickTarget;
	}

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to X3DGroupingNode|X3DShapeNode|Inline, to inputOutput MFNode field <i>pickTarget</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DGroupingNode|X3DShapeNode|Inline] pickTarget specifies the list of nodes against which picking operations are performed. All nodes declared in this field and their descendents are evaluated for intersections.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DGroupingNode|X3DShapeNode|Inline.
	 * @param newValue is new value for the pickTarget field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setPickTarget(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearPickTarget(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(((X3DConcreteNode)newValue[i]) instanceof X3DGroupingNode) || 
				(((X3DConcreteNode)newValue[i]) instanceof X3DShapeNode) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Networking.InlineObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes X3DGroupingNode|X3DShapeNode|Inline; newValue["+i+"]=" + newValue[i]);
			}
		}
		pickTarget.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				pickTarget.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode pickTarget field, similar to {@link #setPickTarget(X3DNode[])}.
	 * @param newValue is new value for the pickTarget field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setPickTarget(ArrayList<X3DNode> newValue)
	{
		if (newValue == null)
		{
			clearPickTarget(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayListAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #3
		for (X3DNode element : newValue)
		{
			boolean isNodeTypeAllowed = 
				(element instanceof X3DGroupingNode) || 
				(element instanceof X3DShapeNode) || 
				(element instanceof org.web3d.x3d.jsail.Networking.InlineObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] element is not instanceof " +
					"acceptableNodeTypes X3DGroupingNode|X3DShapeNode|Inline; element=" + element);
			}
		}
		pickTarget = newValue;
		for (X3DNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child pickTarget node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DGroupingNode|X3DShapeNode|Inline.
	 * @param newValue is new value to be appended the pickTarget field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public VolumePickSensorObject addPickTarget(X3DNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.sai.Grouping.X3DGroupingNode) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.sai.Shape.X3DShapeNode) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Networking.InlineObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes X3DGroupingNode|X3DShapeNode|Inline; newValue=" + newValue);
		}
		pickTarget.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child pickTarget nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DGroupingNode|X3DShapeNode|Inline.
	 * @param newValue is new value array to be appended the pickTarget field.
	 */
	@Override
	public void addPickTarget(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(((X3DConcreteNode)newValue[i]) instanceof X3DGroupingNode) || 
				(((X3DConcreteNode)newValue[i]) instanceof X3DShapeNode) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Networking.InlineObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes X3DGroupingNode|X3DShapeNode|Inline; newValue["+i+"]=" + newValue[i]);
			}
		}
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				pickTarget.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child pickTarget node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DGroupingNode|X3DShapeNode|Inline.
	 * @param newValue is new node for the pickTarget field (restricted to X3DGroupingNode|X3DShapeNode|Inline)
	 */
	@Override
	public void setPickTarget(X3DNode newValue)
	{
		if (newValue == null)
		{
			pickTarget.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.sai.Grouping.X3DGroupingNode) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.sai.Shape.X3DShapeNode) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Networking.InlineObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes X3DGroupingNode|X3DShapeNode|Inline; newValue=" + newValue);
		}
		if  (newValue instanceof X3DNode)
		{
			for (X3DNode element : pickTarget)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			pickTarget.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			pickTarget.add(newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of pickTarget field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public VolumePickSensorObject clearPickTarget()
	{
		for (X3DNode element : pickTarget)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		pickTarget.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>pickTarget</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getPickTarget()
	 */
	public boolean hasPickTarget()
	{
		return (!pickTarget.isEmpty());
	}
	/**
	 * Provide String enumeration value ['ANY'|'CLOSEST'|'ALL'|'ALL_SORTED'|'etc.'] from initializeOnly SFString field named <i>sortOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The sortOrder field determines the order provided for picked output events. Example: ANY means that any single object can satisfy picking conditions for this pick sensor. Consistency of results is not guaranteed. Example: ALL means that every object that satisfies the picking conditions for this pick sensor shall be returned. Example: ALL_SORTED means that every object that satisfies the picking conditions for this pick sensor shall be returned with the order of the output fields provided in a distance-sorted order from closest to farthest away. The exact algorithm for sorting is defined by the individual node definitions. Example: CLOSEST means that the closest object by distance that satisfies the conditions of this pick sensor. *The exact algorithm for distance determination shall be defined by individual node definitions*.
 * <ul>
 *  <li> <i>Hint:</i> browser implementations may define additional values and algorithms beyond these four required values. </li> 
 *  <li> <i>Warning:</i>  do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #SORTORDER_ANY ANY}, {@link #SORTORDER_CLOSEST CLOSEST}, {@link #SORTORDER_ALL ALL}, {@link #SORTORDER_ALL_SORTED ALL_SORTED}.
	 * @return value of sortOrder field
	 */
	@Override
	public String getSortOrder()
	{
		return sortOrder;
	}

	/**
	 * Assign String enumeration value ("ANY"|"CLOSEST"|"ALL"|"ALL_SORTED") ['ANY'|'CLOSEST'|'ALL'|'ALL_SORTED'|'etc.'] to initializeOnly SFString field named <i>sortOrder</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #SORTORDER_ANY ANY}, {@link #SORTORDER_CLOSEST CLOSEST}, {@link #SORTORDER_ALL ALL}, {@link #SORTORDER_ALL_SORTED ALL_SORTED}).
	 * <br><br>
	 * <i>Tooltip:</i> The sortOrder field determines the order provided for picked output events. Example: ANY means that any single object can satisfy picking conditions for this pick sensor. Consistency of results is not guaranteed. Example: ALL means that every object that satisfies the picking conditions for this pick sensor shall be returned. Example: ALL_SORTED means that every object that satisfies the picking conditions for this pick sensor shall be returned with the order of the output fields provided in a distance-sorted order from closest to farthest away. The exact algorithm for sorting is defined by the individual node definitions. Example: CLOSEST means that the closest object by distance that satisfies the conditions of this pick sensor. *The exact algorithm for distance determination shall be defined by individual node definitions*. Hint: browser implementations may define additional values and algorithms beyond these four required values. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values.
	 * @param newValue is new value for the sortOrder field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setSortOrder(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		sortOrder = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString sortOrder field, similar to {@link #setSortOrder(String)}.
	 * @param newValue is new value for the sortOrder field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setSortOrder(SFStringObject newValue)
	{
		setSortOrder(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final VolumePickSensorObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to VolumePickSensor
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("VolumePickSensor DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("VolumePickSensor DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setDEF(SFStringObject newValue)
	{
		setDEF(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value). Hint: USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. Warning: do NOT include any child nodes, a DEF attribute, or any other attribute values (except for containerField) when defining a USE attribute. Warning: each USE value must match a corresponding DEF value that is defined earlier in the scene.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final VolumePickSensorObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to VolumePickSensor
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("VolumePickSensor USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("VolumePickSensor USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final VolumePickSensorObject setCssClass(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		setConcreteCssClass(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString cssClass field, similar to {@link #setCssClass(String)}.
	 * @param newValue is new value for the class field.
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setCssClass(SFStringObject newValue)
	{
		setCssClass(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Assign field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @param newValue is new value for the description field.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public VolumePickSensorObject setIS(ISObject newValue)
	{
		if (IS != null)
			IS.setParentObject(null); // housekeeping, clear prior object
		IS = newValue;
		IS.setParentObject(this);
		return this;
	}
	/**
	 * Provide field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return current ISObject, if any.
	 */
	@Override
	public ISObject getIS()
	{
		return IS;
	}
	/**
	 * Assign a USE reference to another DEF node of same node type, similar to {@link #setUSE(String)}.
	 * <br ><br >
	 * <i>Warning:</i> note that the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.
	 * <br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param DEFnode must have a DEF value defined
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public VolumePickSensorObject setUSE(VolumePickSensorObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on VolumePickSensorObject" +
				" that has no DEF name defined, thus a copy cannot be referenced as a USE node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		setUSE(DEFnode.getDEF());
		return this;
	}
	/**
	 * Utility constructor that assigns DEF label after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 */
	public VolumePickSensorObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public VolumePickSensorObject addComments (String newComment)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(\"" + newComment + "\")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public VolumePickSensorObject addComments (String[] newComments)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(" + Arrays.toString(newComments) + ")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link VolumePickSensorObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public VolumePickSensorObject addComments (CommentsBlock newCommentsBlock)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(CommentsBlock) " +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || (pickingGeometry != null) || (pickingGeometryProtoInstance != null) || (!pickTarget.isEmpty()) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<VolumePickSensor"); // start opening tag
		if (hasAttributes)
		{
			if (!getDEF().equals(DEF_DEFAULT_VALUE) && !isUSE())
			{
				stringX3D.append(" DEF='").append(SFStringObject.toString(getDEF())).append("'");
			}
			
			if (!getUSE().equals(USE_DEFAULT_VALUE))
			{
				stringX3D.append(" USE='").append(SFStringObject.toString(getUSE())).append("'");
			}
			
                            if (!getContainerFieldOverride().isEmpty() && !getContainerFieldOverride().equals(containerField_DEFAULT_VALUE))
                            {
                                    stringX3D.append(" containerField='").append(getContainerFieldOverride()).append("'");
                            }
                            
			if (((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" enabled='").append(SFBoolObject.toString(getEnabled())).append("'");
			}
			if ((!getIntersectionType().equals(INTERSECTIONTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" intersectionType='").append(new SFStringObject(getIntersectionType()).toStringX3D()).append("'");
			}
			if ((!getMatchCriterion().equals(MATCHCRITERION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" matchCriterion='").append(new SFStringObject(getMatchCriterion()).toStringX3D()).append("'");
			}
			if (((getObjectType().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" objectType='").append(new MFStringObject(getObjectType()).toStringX3D()).append("'");
			}
			if ((!getSortOrder().equals(SORTORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" sortOrder='").append(new SFStringObject(getSortOrder()).toStringX3D()).append("'");
			}
			if ((!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" class='").append(new SFStringObject(getCssClass()).toStringX3D()).append("'");
			}
		}
		if ((hasChild) && !isUSE()) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag

			if (getIS() != null)
				stringX3D.append(getIS().toStringX3D(indentLevel + indentIncrement));

			// recursively iterate over child elements
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			if      (metadata != null)
			{
				stringX3D.append(((X3DConcreteElement)metadata).toStringX3D(indentLevel + indentIncrement));
			}
			else if (metadataProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)metadataProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (X3DNode element : pickTarget)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			if      (pickingGeometry != null)
			{
				stringX3D.append(((X3DConcreteElement)pickingGeometry).toStringX3D(indentLevel + indentIncrement));
			}
			else if (pickingGeometryProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)pickingGeometryProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</VolumePickSensor>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || (pickingGeometry != null) || (pickingGeometryProtoInstance != null) || (!pickTarget.isEmpty()) || !commentsList.isEmpty();
		if (isUSE())
		{
			hasAttributes = false;
			hasChild      = false; // USE nodes include no other fields
		}
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		if (!getDEF().equals(DEF_DEFAULT_VALUE))
		{
			stringClassicVRML.append("DEF ").append(SFStringObject.toString(getDEF())).append(" ");
		}
		if (!getUSE().equals(USE_DEFAULT_VALUE))
		{
			 stringClassicVRML.append("USE ").append(SFStringObject.toString(getUSE())).append("\n");
		}
		else // only have further output if not a USE node
		{
			stringClassicVRML.append("VolumePickSensor").append(" { "); // define node name, node content follows

			if (hasAttributes || hasChild)
			{
				stringClassicVRML.append("\n").append(indent).append(indentCharacter); // fields for this node follow
			}
			if (hasAttributes)
			{

				boolean hasISconnect = (getIS() != null) && !getIS().getConnectList().isEmpty();
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("enabled"))
						{
							stringClassicVRML.append(indentCharacter).append("enabled").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("enabled ").append(SFBoolObject.toString(getEnabled())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("intersectionType"))
						{
							stringClassicVRML.append(indentCharacter).append("intersectionType").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getIntersectionType().equals(INTERSECTIONTYPE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("intersectionType ").append("\"").append(SFStringObject.toString(getIntersectionType())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("matchCriterion"))
						{
							stringClassicVRML.append(indentCharacter).append("matchCriterion").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getMatchCriterion().equals(MATCHCRITERION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("matchCriterion ").append("\"").append(SFStringObject.toString(getMatchCriterion())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("objectType"))
						{
							stringClassicVRML.append(indentCharacter).append("objectType").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getObjectType().length > 0)
				{
					stringClassicVRML.append("objectType ").append("[ ").append(MFStringObject.toString(getObjectType())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("sortOrder"))
						{
							stringClassicVRML.append(indentCharacter).append("sortOrder").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getSortOrder().equals(SORTORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("sortOrder ").append("\"").append(SFStringObject.toString(getSortOrder())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("class"))
						{
							stringClassicVRML.append(indentCharacter).append("class").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("# class ").append("\"").append(SFStringObject.toString(getCssClass())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
			}
		}
		if (hasChild) // has contained node(s), comment(s), IS/connect and/or source code
		{
			// recursively iterate over child elements
			if (metadata != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadata).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (metadataProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadataProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (pickingGeometry != null)
			{
				stringClassicVRML.append(indentCharacter).append("pickingGeometry").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) pickingGeometry).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (pickingGeometryProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("pickingGeometry").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) pickingGeometryProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (pickTarget.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("pickTarget").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DNode element : pickTarget)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringClassicVRML.append(commentsBlock.toStringClassicVRML(indentLevel));
				stringClassicVRML.append(indent); // end SFNode
			}
		}
		if (hasAttributes || hasChild)
		{
			stringClassicVRML.append("}").append("\n"); // finish node content
		}
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
		// no name field available for this element
		X3DConcreteElement referenceElement;
		if (metadata != null)
		{
			referenceElement = ((X3DConcreteElement) metadata).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (metadataProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) metadataProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (pickingGeometry != null)
		{
			referenceElement = ((X3DConcreteElement) pickingGeometry).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (pickingGeometryProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) pickingGeometryProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		for (X3DNode element : pickTarget) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
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
		if (getDEF().equals(DEFvalue))
			return this;
		X3DConcreteNode referenceNode;
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (pickingGeometry != null)
		{
			referenceNode = ((X3DConcreteElement) pickingGeometry).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (X3DNode element : pickTarget) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
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

		setEnabled(getEnabled()); // exercise field checks, simple types

		setIntersectionType(getIntersectionType()); // exercise field checks, simple types

		setMatchCriterion(getMatchCriterion()); // exercise field checks, simple types

		setObjectType(getObjectType()); // exercise field checks, simple types

		setSortOrder(getSortOrder()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (metadata != null)
		{
			setMetadata(getMetadata());
			((X3DConcreteElement) metadata).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadata).getValidationResult());
		}
		if (metadataProtoInstance != null)
		{
			setMetadata(getMetadataProtoInstance());
			((X3DConcreteElement) metadataProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadataProtoInstance).getValidationResult());
		}
		if ((metadata != null) && (metadataProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both metadata and metadataProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasMetadata()) // test USE restrictions
		{
			String errorNotice = "VolumePickSensor USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "VolumePickSensor USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (pickingGeometry != null)
		{
			setPickingGeometry(getPickingGeometry());
			((X3DConcreteElement) pickingGeometry).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) pickingGeometry).getValidationResult());
		}
		if (pickingGeometryProtoInstance != null)
		{
			setPickingGeometry(getPickingGeometryProtoInstance());
			((X3DConcreteElement) pickingGeometryProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) pickingGeometryProtoInstance).getValidationResult());
		}
		if ((pickingGeometry != null) && (pickingGeometryProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both pickingGeometry and pickingGeometryProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasPickingGeometry()) // test USE restrictions
		{
			String errorNotice = "VolumePickSensor USE='" + getUSE() + "' is not allowed to have contained SFNode pickingGeometry";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "VolumePickSensor USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		for (X3DNode element : pickTarget) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setPickTarget(getPickTarget()); // also test getter/setter validation

		if (isUSE() && hasPickTarget()) // test USE restrictions
		{
			String errorNotice = "VolumePickSensor USE='" + getUSE() + "' is not allowed to have contained MFNode pickTarget";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		if (getIS() != null)
		{
			if (getIS().getConnectList().isEmpty())
			{
				String errorNotice = "IS statement present, but contains no connect statements";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidProtoException(errorNotice); // report error
			}				
			// TODO also check that this node has ancestor ProtoBody, and that a field with same name also exists, so that IS is legal
		}
		if (!getContainerFieldOverride().isEmpty() &&
			!Arrays.asList(containerField_ALTERNATE_VALUES).contains(getContainerFieldOverride()))
		{
			String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
				": illegal value encountered, containerField='" + getContainerFieldOverride() +
				"' but allowed values are containerField_ALTERNATE_VALUES='" + 
				new MFStringObject(containerField_ALTERNATE_VALUES).toStringX3D() + "'.";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldException(errorNotice); // report error
		}

		// profile validation test, if connected to full scene
		if (findAncestorX3DObject() != null)
		{
			String     modelProfile = findAncestorX3DObject().getProfile();
			headObject modelHead    = findAncestorX3DObject().getHead();
			ArrayList<componentObject> sceneComponentsList = new ArrayList<>();
			if (modelHead != null) 
				sceneComponentsList = modelHead.getComponentList();
			boolean hasSatisfactoryComponent = false;
			for (componentObject nextComponent : sceneComponentsList)
			{
				if ( nextComponent.getName().equals("Picking") &&
					(nextComponent.getLevel() >= 3))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Picking' level='3'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Picking\").setLevel(3);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
