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

package org.web3d.x3d.jsail.Geometry3D;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Geometry3D.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import java.io.File;

/**
 * <i>X3D node tooltip</i>: Extrusion is a geometry node that sequentially stretches a 2D cross section along a 3D-spine path in the local coordinate system, creating an outer hull. Scaling and rotating the crossSection 2D outline at each control point can modify the outer hull of the Extrusion to produce a wide variety of interesting shapes.
 * <ul>
 *  <li> <i>Warning:</i> take care to avoid defining parameter combinations that create self-intersecting, impossible or inverted geometry. </li> 
 *  <li> <i>Hint:</i>  insert a Shape node before adding geometry or Appearance. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry3D.html#Extrusion" target="blank">X3D Abstract Specification: Extrusion</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#Extrusion" target="_blank">X3D Tooltips: Extrusion</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class ExtrusionObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Geometry3D.Extrusion
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private boolean beginCap; // SFBool

	private boolean ccw; // SFBool

	private boolean convex; // SFBool

	private float creaseAngle; // SFFloat

	private float[] crossSection; // MFVec2f

	private boolean endCap; // SFBool

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private float[] orientation; // MFRotation

	private float[] scale; // MFVec2f

	private float[] spine; // MFVec3f

	private boolean solid; // SFBool

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>Extrusion</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "Extrusion";

	/** Provides name of this element: <i>Extrusion</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>Extrusion</i> element: <i>Geometry3D</i> */
	public static final String COMPONENT = "Geometry3D";

	/** Defines X3D component for the <i>Extrusion</i> element: <i>Geometry3D</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Geometry3D</i> component level for this element: <i>4</i> */
	public static final int LEVEL = 4;

	/** Provides default X3D component level for this element: <i>4</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFBool field named <i>beginCap</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean BEGINCAP_DEFAULT_VALUE = true;

	/** SFBool field named <i>ccw</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean CCW_DEFAULT_VALUE = true;

	/** SFBool field named <i>convex</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean CONVEX_DEFAULT_VALUE = true;

	/** SFFloat field named <i>creaseAngle</i> has default value <i>0.0f</i> (Java syntax) or <i>0.0</i> (XML syntax). */
	public static final float CREASEANGLE_DEFAULT_VALUE = 0.0f;

	/** MFVec2f field named <i>crossSection</i> has default value <i>{1f,1f,1f,-1f,-1f,-1f,-1f,1f,1f,1f}</i> (Java syntax) or <i>1 1 1 -1 -1 -1 -1 1 1 1</i> (XML syntax). */
	public static final float[] CROSSSECTION_DEFAULT_VALUE = {1f,1f,1f,-1f,-1f,-1f,-1f,1f,1f,1f};

	/** SFBool field named <i>endCap</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENDCAP_DEFAULT_VALUE = true;

	/** MFRotation field named <i>orientation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] ORIENTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** MFVec2f field named <i>scale</i> has default value <i>{1f,1f}</i> (Java syntax) or <i>1 1</i> (XML syntax). */
	public static final float[] SCALE_DEFAULT_VALUE = {1f,1f};

	/** SFBool field named <i>solid</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean SOLID_DEFAULT_VALUE = true;

	/** MFVec3f field named <i>spine</i> has default value <i>{0f,0f,0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 0 0 1 0</i> (XML syntax). */
	public static final float[] SPINE_DEFAULT_VALUE = {0f,0f,0f,0f,1f,0f};

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
			case "beginCap":
				result = "SFBool";
				break;
			case "ccw":
				result = "SFBool";
				break;
			case "convex":
				result = "SFBool";
				break;
			case "creaseAngle":
				result = "SFFloat";
				break;
			case "crossSection":
				result = "MFVec2f";
				break;
			case "endCap":
				result = "SFBool";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "orientation":
				result = "MFRotation";
				break;
			case "scale":
				result = "MFVec2f";
				break;
			case "spine":
				result = "MFVec3f";
				break;
			case "solid":
				result = "SFBool";
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
			case "beginCap":
				result = "initializeOnly";
				break;
			case "ccw":
				result = "initializeOnly";
				break;
			case "convex":
				result = "initializeOnly";
				break;
			case "creaseAngle":
				result = "initializeOnly";
				break;
			case "crossSection":
				result = "initializeOnly";
				break;
			case "endCap":
				result = "initializeOnly";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "orientation":
				result = "inputOutput";
				break;
			case "scale":
				result = "inputOutput";
				break;
			case "set_crossSection":
				result = "inputOnly";
				break;
			case "set_orientation":
				result = "inputOnly";
				break;
			case "set_scale":
				result = "inputOnly";
				break;
			case "set_spine":
				result = "inputOnly";
				break;
			case "solid":
				result = "initializeOnly";
				break;
			case "spine":
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
	String containerField_DEFAULT_VALUE = "geometry";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for MFRotation field named <i>orientation</i>. */
	public static final String fromField_ORIENTATION = "orientation";

	/** toField ROUTE name for MFRotation field named <i>orientation</i>. */
	public static final String toField_ORIENTATION = "orientation";

	/** fromField ROUTE name for MFVec2f field named <i>scale</i>. */
	public static final String fromField_SCALE = "scale";

	/** toField ROUTE name for MFVec2f field named <i>scale</i>. */
	public static final String toField_SCALE = "scale";

	/** toField ROUTE name for MFVec2f field named <i>set_crossSection</i>. */
	public static final String toField_SET_CROSSSECTION = "set_crossSection";

	/** toField ROUTE name for MFRotation field named <i>set_orientation</i>. */
	public static final String toField_SET_ORIENTATION = "set_orientation";

	/** toField ROUTE name for MFVec2f field named <i>set_scale</i>. */
	public static final String toField_SET_SCALE = "set_scale";

	/** toField ROUTE name for MFVec3f field named <i>set_spine</i>. */
	public static final String toField_SET_SPINE = "set_spine";

	/** Constructor for ExtrusionObject to initialize member variables with default values. */
	public ExtrusionObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "geometry" };

		beginCap = BEGINCAP_DEFAULT_VALUE;
		ccw = CCW_DEFAULT_VALUE;
		convex = CONVEX_DEFAULT_VALUE;
		creaseAngle = CREASEANGLE_DEFAULT_VALUE;
		crossSection = CROSSSECTION_DEFAULT_VALUE;
		endCap = ENDCAP_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		orientation = ORIENTATION_DEFAULT_VALUE;
		scale = SCALE_DEFAULT_VALUE;
		solid = SOLID_DEFAULT_VALUE;
		spine = SPINE_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>beginCap</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether beginning cap is drawn (similar to Cylinder top cap).
 * <ul>
 *  <li> <i> Warning:</i>  cannot be changed after initial creation. </li> 
 * </ul>
	 * @return value of beginCap field
	 */
	@Override
	public boolean getBeginCap()
	{
		return beginCap;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>beginCap</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether beginning cap is drawn (similar to Cylinder top cap). Warning: cannot be changed after initial creation.
	 * @param newValue is new value for the beginCap field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setBeginCap(boolean newValue)
	{
		beginCap = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool beginCap field, similar to {@link #setBeginCap(boolean)}.
	 * @param newValue is new value for the beginCap field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setBeginCap(SFBoolObject newValue)
	{
		setBeginCap(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>ccw</i>.
	 * <br><br>
	 * <i>Tooltip:</i> ccw = counterclockwise: ordering of vertex-coordinates orientation.
 * <ul>
 *  <li> <i> Hint:</i>  ccw false can reverse solid (backface culling) and normal-vector orientation. Note that consistency of left-handed or right-handed point sequences is important throughout. </li> 
 * </ul>
	 * @return value of ccw field
	 */
	@Override
	public boolean getCcw()
	{
		return ccw;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>ccw</i>.
	 * <br><br>
	 * <i>Tooltip:</i> ccw = counterclockwise: ordering of vertex-coordinates orientation. Hint: ccw false can reverse solid (backface culling) and normal-vector orientation. Note that consistency of left-handed or right-handed point sequences is important throughout.
	 * @param newValue is new value for the ccw field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setCcw(boolean newValue)
	{
		ccw = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool ccw field, similar to {@link #setCcw(boolean)}.
	 * @param newValue is new value for the ccw field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setCcw(SFBoolObject newValue)
	{
		setCcw(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>convex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether all polygons in a shape are convex (true), or possibly concave (false). A convex polygon is planar, does not intersect itself, and has all interior angles &amp;lt; 180 degrees.
 * <ul>
 *  <li> <i> Warning:</i>  concave or inverted geometry may be invisible when using default value convex=true. </li> 
 * </ul>
	 * @return value of convex field
	 */
	@Override
	public boolean getConvex()
	{
		return convex;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>convex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether all polygons in a shape are convex (true), or possibly concave (false). A convex polygon is planar, does not intersect itself, and has all interior angles &lt; 180 degrees. Warning: concave or inverted geometry may be invisible when using default value convex=true.
	 * @param newValue is new value for the convex field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setConvex(boolean newValue)
	{
		convex = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool convex field, similar to {@link #setConvex(boolean)}.
	 * @param newValue is new value for the convex field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setConvex(SFBoolObject newValue)
	{
		setConvex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) within allowed range of [0,infinity) from initializeOnly SFFloat field named <i>creaseAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) creaseAngle defines angle (in radians) where adjacent polygons are drawn with sharp edges or smooth shading. If angle between normals of two adjacent polygons is less than creaseAngle, smooth shading is rendered across the shared line segment.
 * <ul>
 *  <li> <i> Hint:</i>  creaseAngle=0 means render all edges sharply, creaseAngle=3.14159 means render all edges smoothly. </li> 
 * </ul>
	 * @return value of creaseAngle field
	 */
	@Override
	public float getCreaseAngle()
	{
		return creaseAngle;
	}

	/**
	 * Assign float value unit axis, angle (in radians) within allowed range of [0,infinity) to initializeOnly SFFloat field named <i>creaseAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) creaseAngle defines angle (in radians) where adjacent polygons are drawn with sharp edges or smooth shading. If angle between normals of two adjacent polygons is less than creaseAngle, smooth shading is rendered across the shared line segment. Hint: creaseAngle=0 means render all edges sharply, creaseAngle=3.14159 means render all edges smoothly.
	 * @param newValue is new value for the creaseAngle field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setCreaseAngle(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("Extrusion creaseAngle newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		creaseAngle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat creaseAngle field, similar to {@link #setCreaseAngle(float)}.
	 * @param newValue is new value for the creaseAngle field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setCreaseAngle(SFFloatObject newValue)
	{
		setCreaseAngle(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 2-tuple float results from initializeOnly MFVec2f field named <i>crossSection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The crossSection array defines a silhouette outline of the outer Extrusion surface. crossSection is an ordered set of 2D points that draw a piecewise-linear curve which is extruded to form a series of connected vertices.
 * <ul>
 *  <li> <i>Hint:</i> the crossSection array can be open or closed (closed means that endpoints are coincident). </li> 
 *  <li> <i>Hint:</i> number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values. </li> 
 *  <li> <i>Warning:</i> match clockwise/counterclockwise, otherwise self-intersecting, impossible or inverted geometry can result! </li> 
 *  <li> <i>Warning:</i>  avoid self-intersecting polygon line segments, otherwise defined geometry is irregular and rendering results are undefined. , particularly for end caps. </li> 
 * </ul>
	 * @return value of crossSection field
	 */
	@Override
	public float[] getCrossSection()
	{
		return crossSection;
	}

	/**
	 * Assign 2-tuple float array to initializeOnly MFVec2f field named <i>crossSection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The crossSection array defines a silhouette outline of the outer Extrusion surface. crossSection is an ordered set of 2D points that draw a piecewise-linear curve which is extruded to form a series of connected vertices. Hint: the crossSection array can be open or closed (closed means that endpoints are coincident). Hint: number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values. Warning: match clockwise/counterclockwise, otherwise self-intersecting, impossible or inverted geometry can result! Warning: avoid self-intersecting polygon line segments, otherwise defined geometry is irregular and rendering results are undefined. , particularly for end caps.
	 * @param newValue is new value for the crossSection field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setCrossSection(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 2 != 0) // 2-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Extrusion crossSection newValue=" + MFVec2fObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 2");
		}
		crossSection = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFVec2f crossSection field, similar to {@link #setCrossSection(float[])}.
	 * @param newValue is new value for the crossSection field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setCrossSection(MFVec2fObject newValue)
	{
		setCrossSection(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>endCap</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether end cap is drawn (similar to Cylinder bottom cap).
 * <ul>
 *  <li> <i> Warning:</i>  cannot be changed after initial creation. </li> 
 * </ul>
	 * @return value of endCap field
	 */
	@Override
	public boolean getEndCap()
	{
		return endCap;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>endCap</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether end cap is drawn (similar to Cylinder bottom cap). Warning: cannot be changed after initial creation.
	 * @param newValue is new value for the endCap field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setEndCap(boolean newValue)
	{
		endCap = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool endCap field, similar to {@link #setEndCap(boolean)}.
	 * @param newValue is new value for the endCap field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setEndCap(SFBoolObject newValue)
	{
		setEndCap(newValue.getPrimitiveValue());
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ExtrusionObject clearMetadata()
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public ExtrusionObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput MFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The orientation array is a list of axis-angle 4-tuple values applied at each spine-aligned cross-section plane.
 * <ul>
 *  <li> <i>Hint:</i> if the orientation array contains a single 4-tuple value, it is applied at all spine-aligned crossSection planes. </li> 
 *  <li> <i>Hint:</i>  number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values. </li> 
 * </ul>
	 * @return value of orientation field
	 */
	@Override
	public float[] getOrientation()
	{
		return orientation;
	}

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput MFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The orientation array is a list of axis-angle 4-tuple values applied at each spine-aligned cross-section plane. Hint: if the orientation array contains a single 4-tuple value, it is applied at all spine-aligned crossSection planes. Hint: number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values.
	 * @param newValue is new value for the orientation field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setOrientation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 4 != 0) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Extrusion orientation newValue=" + MFRotationObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 4");
		}
		orientation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFRotation orientation field, similar to {@link #setOrientation(float[])}.
	 * @param newValue is new value for the orientation field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setOrientation(MFRotationObject newValue)
	{
		setOrientation(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 2-tuple float results from inputOutput MFVec2f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) scale is a list of 2D-scale parameters applied at each spine-aligned cross-section plane.
 * <ul>
 *  <li> <i>Hint:</i> number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values. </li> 
 *  <li> <i>Hint:</i> if the scale array contains one value, it is applied at all spine-aligned crossSection planes. </li> 
 *  <li> <i>Warning:</i>  zero or negative scale values not allowed. </li> 
 * </ul>
	 * @return value of scale field
	 */
	@Override
	public float[] getScale()
	{
		return scale;
	}

	/**
	 * Assign 2-tuple float array to inputOutput MFVec2f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) scale is a list of 2D-scale parameters applied at each spine-aligned cross-section plane. Hint: number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values. Hint: if the scale array contains one value, it is applied at all spine-aligned crossSection planes. Warning: zero or negative scale values not allowed.
	 * @param newValue is new value for the scale field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setScale(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 2 != 0) // 2-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Extrusion scale newValue=" + MFVec2fObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 2");
		}
		scale = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFVec2f scale field, similar to {@link #setScale(float[])}.
	 * @param newValue is new value for the scale field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setScale(MFVec2fObject newValue)
	{
		setScale(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off).
 * <ul>
 *  <li> <i>Warning:</i> default value true can completely hide geometry if viewed from wrong side! </li> 
 *  <li> <i>Hint:</i>  if in doubt, use solid='false' for maximum visibility. </li> 
 * </ul>
	 * @return value of solid field
	 */
	@Override
	public boolean getSolid()
	{
		return solid;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off). Warning: default value true can completely hide geometry if viewed from wrong side! Hint: if in doubt, use solid='false' for maximum visibility.
	 * @param newValue is new value for the solid field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setSolid(boolean newValue)
	{
		solid = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool solid field, similar to {@link #setSolid(boolean)}.
	 * @param newValue is new value for the solid field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setSolid(SFBoolObject newValue)
	{
		setSolid(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from initializeOnly MFVec3f field named <i>spine</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The spine array defines a center-line sequence of 3D points that define a piecewise-linear curve forming a series of connected vertices. The spine is set of points along which a 2D crossSection is extruded, scaled and oriented.
 * <ul>
 *  <li> <i>Hint:</i> the spine array can be open or closed (closed means that endpoints are coincident). </li> 
 *  <li> <i>Hint:</i> number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values. </li> 
 *  <li> <i>Warning:</i>  take care if creating loops or spirals, otherwise self-intersecting, impossible or inverted geometry can result!. </li> 
 * </ul>
	 * @return value of spine field
	 */
	@Override
	public float[] getSpine()
	{
		return spine;
	}

	/**
	 * Assign 3-tuple float array to initializeOnly MFVec3f field named <i>spine</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The spine array defines a center-line sequence of 3D points that define a piecewise-linear curve forming a series of connected vertices. The spine is set of points along which a 2D crossSection is extruded, scaled and oriented. Hint: the spine array can be open or closed (closed means that endpoints are coincident). Hint: number of values must all match for 3-tuple spine points, 2-tuple scale values, and 4-tuple orientation values. Warning: take care if creating loops or spirals, otherwise self-intersecting, impossible or inverted geometry can result!.
	 * @param newValue is new value for the spine field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setSpine(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 3 != 0) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Extrusion spine newValue=" + MFVec3fObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 3");
		}
		spine = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFVec3f spine field, similar to {@link #setSpine(float[])}.
	 * @param newValue is new value for the spine field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setSpine(MFVec3fObject newValue)
	{
		setSpine(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final ExtrusionObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to Extrusion
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Extrusion DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("Extrusion DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setDEF(SFStringObject newValue)
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final ExtrusionObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to Extrusion
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Extrusion USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("Extrusion USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final ExtrusionObject setCssClass(String newValue)
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setCssClass(SFStringObject newValue)
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ExtrusionObject setIS(ISObject newValue)
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ExtrusionObject setUSE(ExtrusionObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on ExtrusionObject" +
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
	public ExtrusionObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ExtrusionObject addComments (String newComment)
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ExtrusionObject addComments (String[] newComments)
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
	 * @return {@link ExtrusionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ExtrusionObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<Extrusion"); // start opening tag
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
                            
			if (((getBeginCap() != BEGINCAP_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" beginCap='").append(SFBoolObject.toString(getBeginCap())).append("'");
			}
			if (((getCcw() != CCW_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" ccw='").append(SFBoolObject.toString(getCcw())).append("'");
			}
			if (((getConvex() != CONVEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" convex='").append(SFBoolObject.toString(getConvex())).append("'");
			}
			if (((getCreaseAngle() != CREASEANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" creaseAngle='").append(SFFloatObject.toString(getCreaseAngle())).append("'");
			}
			if ((!Arrays.equals(getCrossSection(), CROSSSECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" crossSection='").append(MFVec2fObject.toString(getCrossSection())).append("'");
			}
			if (((getEndCap() != ENDCAP_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" endCap='").append(SFBoolObject.toString(getEndCap())).append("'");
			}
			if ((!Arrays.equals(getOrientation(), ORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" orientation='").append(MFRotationObject.toString(getOrientation())).append("'");
			}
			if ((!Arrays.equals(getScale(), SCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" scale='").append(MFVec2fObject.toString(getScale())).append("'");
			}
			if (((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" solid='").append(SFBoolObject.toString(getSolid())).append("'");
			}
			if ((!Arrays.equals(getSpine(), SPINE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" spine='").append(MFVec3fObject.toString(getSpine())).append("'");
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

			// recursively iterate over child element
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
			stringX3D.append(indent).append("</Extrusion>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("Extrusion").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("beginCap"))
						{
							stringClassicVRML.append(indentCharacter).append("beginCap").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getBeginCap() != BEGINCAP_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("beginCap ").append(SFBoolObject.toString(getBeginCap())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("ccw"))
						{
							stringClassicVRML.append(indentCharacter).append("ccw").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCcw() != CCW_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("ccw ").append(SFBoolObject.toString(getCcw())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("convex"))
						{
							stringClassicVRML.append(indentCharacter).append("convex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getConvex() != CONVEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("convex ").append(SFBoolObject.toString(getConvex())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("creaseAngle"))
						{
							stringClassicVRML.append(indentCharacter).append("creaseAngle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCreaseAngle() != CREASEANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("creaseAngle ").append(SFFloatObject.toString(getCreaseAngle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("crossSection"))
						{
							stringClassicVRML.append(indentCharacter).append("crossSection").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getCrossSection(), CROSSSECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("crossSection ").append("[ ").append(MFVec2fObject.toString(getCrossSection())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("endCap"))
						{
							stringClassicVRML.append(indentCharacter).append("endCap").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEndCap() != ENDCAP_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("endCap ").append(SFBoolObject.toString(getEndCap())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("orientation"))
						{
							stringClassicVRML.append(indentCharacter).append("orientation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getOrientation(), ORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("orientation ").append("[ ").append(MFRotationObject.toString(getOrientation())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("scale"))
						{
							stringClassicVRML.append(indentCharacter).append("scale").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getScale(), SCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("scale ").append("[ ").append(MFVec2fObject.toString(getScale())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("solid"))
						{
							stringClassicVRML.append(indentCharacter).append("solid").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("solid ").append(SFBoolObject.toString(getSolid())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("spine"))
						{
							stringClassicVRML.append(indentCharacter).append("spine").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getSpine(), SPINE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("spine ").append("[ ").append(MFVec3fObject.toString(getSpine())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
			// recursively iterate over child element
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

		setBeginCap(getBeginCap()); // exercise field checks, simple types

		setCcw(getCcw()); // exercise field checks, simple types

		setConvex(getConvex()); // exercise field checks, simple types

		setCreaseAngle(getCreaseAngle()); // exercise field checks, simple types

		setCrossSection(getCrossSection()); // exercise field checks, simple types

		setEndCap(getEndCap()); // exercise field checks, simple types

		setOrientation(getOrientation()); // exercise field checks, simple types

		setScale(getScale()); // exercise field checks, simple types

		setSolid(getSolid()); // exercise field checks, simple types

		setSpine(getSpine()); // exercise field checks, simple types

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
			String errorNotice = "Extrusion USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "Extrusion USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("Geometry3D") &&
					(nextComponent.getLevel() >= 4))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Immersive") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Geometry3D' level='4'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Geometry3D\").setLevel(4);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}

    /**
     * Whether crossSection array is open or closed (closed means that endpoints are coincident).
     * @return whether crossSection is closed, i.e. first and last points identical
     */
        public boolean isCrossSectionClosed()
        {
            boolean isClosed;
            if (crossSection == null) return false; // safety check
            int crossSectionTupleLength = crossSection.length / 2;
            isClosed = (crossSectionTupleLength > 1) && 
                       (crossSection[0] == crossSection[(crossSectionTupleLength-1)*2 + 0]) && 
                       (crossSection[1] == crossSection[(crossSectionTupleLength-1)*2 + 1]);
            return isClosed;
        }

    /**
     * Whether spine array is open or closed (closed means that endpoints are coincident).
     * @return whether spine is closed, i.e. first and last points identical
     */
        public boolean isSpineClosed()
        {
            boolean isClosed;
            if (spine == null) return false; // safety check
            int spineTupleLength = spine.length / 3;
            isClosed = (spineTupleLength > 1) && 
                       (spine[0] == spine[(spineTupleLength-1)*3 + 0]) && 
                       (spine[1] == spine[(spineTupleLength-1)*3 + 1]) && 
                       (spine[2] == spine[(spineTupleLength-1)*3 + 2]);
            return isClosed;
        }

    /**
     * Create SVG output file (with same base name) for Extrusion crossSection, if found.
     * @see X3DObject#FILE_EXTENSION_SVG
     * @see ConfigurationProperties#STYLESHEET_extrusionCrossSectionSVG
     * @see X3DObject#toFileStylesheetConversion(String,String)
     * @param fileName name of file to create and save, can include local directory path, must end with .svg
     * @return File containing result (if operation succeeds), null otherwise
   */
	public File toFileSvgCrossSection(String fileName)
        {
            if (!(fileName.endsWith(X3DObject.FILE_EXTENSION_SVG)))
            {
                    throw new X3DException("fileName " + fileName + " does not end with expected extension \"" + X3DObject.FILE_EXTENSION_SVG + "\"");
            }
            return findAncestorX3DObject().toFileStylesheetConversion(ConfigurationProperties.STYLESHEET_extrusionCrossSectionSVG, fileName);
        }
}
