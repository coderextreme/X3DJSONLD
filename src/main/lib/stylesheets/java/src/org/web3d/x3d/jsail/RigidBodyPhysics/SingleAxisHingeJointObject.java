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

package org.web3d.x3d.jsail.RigidBodyPhysics;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.RigidBodyPhysics.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * SingleAxisHingeJoint has single axis about which to rotate, similar to a traditional door hinge. Contains two RigidBody nodes (containerField values body1, body2).
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) SingleAxisHingeJoint has single axis about which to rotate, similar to a traditional door hinge. Contains two RigidBody nodes (containerField values body1, body2).
 * <ul>
 *  <li> <i> Hint:</i>  RigidBodyPhysics component, level 2. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#SingleAxisHingeJoint" target="blank">X3D Abstract Specification: SingleAxisHingeJoint</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SingleAxisHingeJoint" target="_blank">X3D Tooltips: SingleAxisHingeJoint</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SingleAxisHingeJointObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.RigidBodyPhysics.SingleAxisHingeJoint
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float[] anchorPoint; // SFVec3f

	private float angle; // SFFloat

	private float angleRate; // SFFloat

	private float[] axis; // SFVec3f

	private RigidBody body1; // SFNode acceptable node types: RigidBody
	private ProtoInstanceObject body1ProtoInstance; // allowed alternative for body1 field

	private float[] body1AnchorPoint; // SFVec3f

	private RigidBody body2; // SFNode acceptable node types: RigidBody
	private ProtoInstanceObject body2ProtoInstance; // allowed alternative for body2 field

	private float[] body2AnchorPoint; // SFVec3f

	private ArrayList<String> forceOutput = new ArrayList<>(); // MFString

	private float maxAngle; // SFFloat

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private float minAngle; // SFFloat

	private float stopBounce; // SFFloat

	private float stopErrorCorrection; // SFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** MFString field named <i>forceOutput</i> is an array that can include this quoted enumeration value <i>new String[] {"ALL"}</i> (Java syntax) or <i>'"ALL"'</i> (XML syntax). */
	public static final ArrayList<String> FORCEOUTPUT_ALL = new ArrayList<String>(Arrays.<String>asList("ALL"));

	/** MFString field named <i>forceOutput</i> is an array that can include this quoted enumeration value <i>new String[] {"NONE"}</i> (Java syntax) or <i>'"NONE"'</i> (XML syntax). */
	public static final ArrayList<String> FORCEOUTPUT_NONE = new ArrayList<String>(Arrays.<String>asList("NONE"));

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>SingleAxisHingeJoint</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "SingleAxisHingeJoint";

	/** Provides name of this element: <i>SingleAxisHingeJoint</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>SingleAxisHingeJoint</i> element: <i>RigidBodyPhysics</i> */
	public static final String COMPONENT = "RigidBodyPhysics";

	/** Defines X3D component for the <i>SingleAxisHingeJoint</i> element: <i>RigidBodyPhysics</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>RigidBodyPhysics</i> component level for this element: <i>2</i> */
	public static final int LEVEL = 2;

	/** Provides default X3D component level for this element: <i>2</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFVec3f field named <i>anchorPoint</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] ANCHORPOINT_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>axis</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] AXIS_DEFAULT_VALUE = {0f,0f,0f};

	/** MFString field named <i>forceOutput</i> has default quoted value <i>new String[] {"NONE"}</i> (Java syntax) or quoted value <i>"NONE"</i> (XML syntax). */
	public static final ArrayList<String> FORCEOUTPUT_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("NONE"));

	/** SFFloat field named <i>maxAngle</i> has default value <i>3.141592653f</i> (Java syntax) or <i>3.141592653</i> (XML syntax). */
	public static final float MAXANGLE_DEFAULT_VALUE = 3.141592653f;

	/** SFFloat field named <i>minAngle</i> has default value <i>-3.141592653f</i> (Java syntax) or <i>-3.141592653</i> (XML syntax). */
	public static final float MINANGLE_DEFAULT_VALUE = -3.141592653f;

	/** SFFloat field named <i>stopBounce</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float STOPBOUNCE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>stopErrorCorrection</i> has default value <i>0.8f</i> (Java syntax) or <i>0.8</i> (XML syntax). */
	public static final float STOPERRORCORRECTION_DEFAULT_VALUE = 0.8f;

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
			case "anchorPoint":
				result = "SFVec3f";
				break;
			case "angle":
				result = "SFFloat";
				break;
			case "angleRate":
				result = "SFFloat";
				break;
			case "axis":
				result = "SFVec3f";
				break;
			case "body1":
				result = "SFNode";
				break;
			case "body1AnchorPoint":
				result = "SFVec3f";
				break;
			case "body2":
				result = "SFNode";
				break;
			case "body2AnchorPoint":
				result = "SFVec3f";
				break;
			case "forceOutput":
				result = "MFString";
				break;
			case "maxAngle":
				result = "SFFloat";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "minAngle":
				result = "SFFloat";
				break;
			case "stopBounce":
				result = "SFFloat";
				break;
			case "stopErrorCorrection":
				result = "SFFloat";
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
			case "anchorPoint":
				result = "inputOutput";
				break;
			case "angle":
				result = "outputOnly";
				break;
			case "angleRate":
				result = "outputOnly";
				break;
			case "axis":
				result = "inputOutput";
				break;
			case "body1":
				result = "inputOutput";
				break;
			case "body1AnchorPoint":
				result = "outputOnly";
				break;
			case "body2":
				result = "inputOutput";
				break;
			case "body2AnchorPoint":
				result = "outputOnly";
				break;
			case "forceOutput":
				result = "inputOutput";
				break;
			case "maxAngle":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "minAngle":
				result = "inputOutput";
				break;
			case "stopBounce":
				result = "inputOutput";
				break;
			case "stopErrorCorrection":
				result = "inputOutput";
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
	public String containerField_DEFAULT_VALUE = "joints";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFVec3f field named <i>anchorPoint</i>. */
	public static final String fromField_ANCHORPOINT = "anchorPoint";

	/** toField ROUTE name for SFVec3f field named <i>anchorPoint</i>. */
	public static final String toField_ANCHORPOINT = "anchorPoint";

	/** fromField ROUTE name for SFFloat field named <i>angle</i>. */
	public static final String fromField_ANGLE = "angle";

	/** fromField ROUTE name for SFFloat field named <i>angleRate</i>. */
	public static final String fromField_ANGLERATE = "angleRate";

	/** fromField ROUTE name for SFVec3f field named <i>axis</i>. */
	public static final String fromField_AXIS = "axis";

	/** toField ROUTE name for SFVec3f field named <i>axis</i>. */
	public static final String toField_AXIS = "axis";

	/** fromField ROUTE name for SFNode field named <i>body1</i>. */
	public static final String fromField_BODY1 = "body1";

	/** toField ROUTE name for SFNode field named <i>body1</i>. */
	public static final String toField_BODY1 = "body1";

	/** fromField ROUTE name for SFVec3f field named <i>body1AnchorPoint</i>. */
	public static final String fromField_BODY1ANCHORPOINT = "body1AnchorPoint";

	/** fromField ROUTE name for SFNode field named <i>body2</i>. */
	public static final String fromField_BODY2 = "body2";

	/** toField ROUTE name for SFNode field named <i>body2</i>. */
	public static final String toField_BODY2 = "body2";

	/** fromField ROUTE name for SFVec3f field named <i>body2AnchorPoint</i>. */
	public static final String fromField_BODY2ANCHORPOINT = "body2AnchorPoint";

	/** fromField ROUTE name for MFString field named <i>forceOutput</i>. */
	public static final String fromField_FORCEOUTPUT = "forceOutput";

	/** toField ROUTE name for MFString field named <i>forceOutput</i>. */
	public static final String toField_FORCEOUTPUT = "forceOutput";

	/** fromField ROUTE name for SFFloat field named <i>maxAngle</i>. */
	public static final String fromField_MAXANGLE = "maxAngle";

	/** toField ROUTE name for SFFloat field named <i>maxAngle</i>. */
	public static final String toField_MAXANGLE = "maxAngle";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFFloat field named <i>minAngle</i>. */
	public static final String fromField_MINANGLE = "minAngle";

	/** toField ROUTE name for SFFloat field named <i>minAngle</i>. */
	public static final String toField_MINANGLE = "minAngle";

	/** fromField ROUTE name for SFFloat field named <i>stopBounce</i>. */
	public static final String fromField_STOPBOUNCE = "stopBounce";

	/** toField ROUTE name for SFFloat field named <i>stopBounce</i>. */
	public static final String toField_STOPBOUNCE = "stopBounce";

	/** fromField ROUTE name for SFFloat field named <i>stopErrorCorrection</i>. */
	public static final String fromField_STOPERRORCORRECTION = "stopErrorCorrection";

	/** toField ROUTE name for SFFloat field named <i>stopErrorCorrection</i>. */
	public static final String toField_STOPERRORCORRECTION = "stopErrorCorrection";

	/** Constructor for SingleAxisHingeJointObject to initialize member variables with default values. */
	public SingleAxisHingeJointObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "joints" };

		anchorPoint = ANCHORPOINT_DEFAULT_VALUE;
		axis = AXIS_DEFAULT_VALUE;
		body1 = null; // clear out any prior node
		body2 = null; // clear out any prior node
		forceOutput = FORCEOUTPUT_DEFAULT_VALUE;
		maxAngle = MAXANGLE_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		minAngle = MINANGLE_DEFAULT_VALUE;
		stopBounce = STOPBOUNCE_DEFAULT_VALUE;
		stopErrorCorrection = STOPERRORCORRECTION_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>anchorPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  anchorPoint is joint center, specified in world coordinates.  * <br>

	 * @return value of anchorPoint field
	 */
	@Override
	public float[] getAnchorPoint()
	{
		return anchorPoint;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>anchorPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i> anchorPoint is joint center, specified in world coordinates.
	 * @param newValue is new value for the anchorPoint field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setAnchorPoint(float[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SingleAxisHingeJoint anchorPoint newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		anchorPoint = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f anchorPoint field, similar to {@link #setAnchorPoint(float[])}.
	 * @param newValue is new value for the anchorPoint field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setAnchorPoint(SFVec3fObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setAnchorPoint(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign values to SFVec3f anchorPoint field, similar to {@link #setAnchorPoint(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setAnchorPoint(float x, float y, float z)
	{
		setAnchorPoint(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>angle</i>.
	 * @return value of angle field
	 */
	@Override
	public float getAngle()
	{
		return angle;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>angleRate</i>.
	 * @return value of angleRate field
	 */
	@Override
	public float getAngleRate()
	{
		return angleRate;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis defines vector of joint connection between body1 and body2.  * <br>

	 * @return value of axis field
	 */
	@Override
	public float[] getAxis()
	{
		return axis;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis defines vector of joint connection between body1 and body2.
	 * @param newValue is new value for the axis field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setAxis(float[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SingleAxisHingeJoint axis newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		axis = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f axis field, similar to {@link #setAxis(float[])}.
	 * @param newValue is new value for the axis field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setAxis(SFVec3fObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setAxis(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign values to SFVec3f axis field, similar to {@link #setAxis(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setAxis(float x, float y, float z)
	{
		setAxis(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide RigidBody instance (using a properly typed node) from inputOutput SFNode field <i>body1</i>.
	 * @see #getBody1ProtoInstance()
	 * @return value of body1 field
	 */
	@Override
	public RigidBody getBody1()
	{
		return body1;
	}

	/**
	 * Assign RigidBody instance (using a properly typed node) to inputOutput SFNode field <i>body1</i>.
	 * @see #setBody1(ProtoInstanceObject)
	 * @param newValue is new value for the body1 field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setBody1(RigidBody newValue)
	{
		// set-newValue-validity-checks #0
		body1 = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) body1).setParentObject(this); // parentTest15
		}
		if (body1ProtoInstance != null)
		{
			body1ProtoInstance.setParentObject(null); // housekeeping, clear prior object
			body1ProtoInstance = null;
		}
		return this;
	}

	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>body1</i>.
	 * @see #setBody1(RigidBody)
	 * @param newValue is new value for the body1 field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setBody1(ProtoInstance newValue)
	{
		body1ProtoInstance = (ProtoInstanceObject)newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) body1ProtoInstance).setParentObject(this); // parentTest15.5
	    }
		if (body1 != null)
		{
			((X3DConcreteElement) body1).setParentObject(null); // housekeeping, clear prior object
			body1 = null;
		}
	    return this;
	}
	/**
	 * Utility method to clear SFNode value of body1 field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public SingleAxisHingeJointObject clearBody1()
	{
		((X3DConcreteElement) body1).clearParentObject(); // remove references to facilitate Java memory management
		body1 = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>body1</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type RigidBody.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the body1 field
	 * @see #setBody1(RigidBody)
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SingleAxisHingeJointObject setBody1(ProtoInstanceObject newProtoInstanceNode)
	{
		if (body1 != null)
		{
			((X3DConcreteElement) body1).setParentObject(null); // housekeeping, clear prior object
			body1 = null;
		}
		body1ProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>body1</i>, if available.
	 * @see #getBody1()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getBody1ProtoInstance()
	{
		return body1ProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>body1</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getBody1()
	 * @see #getBody1ProtoInstance()
	 */
	public boolean hasBody1()
	{
		return (body1 != null) || (body1ProtoInstance != null);
	}
	/**
	 * Provide array of 3-tuple float results from outputOnly SFVec3f field named <i>body1AnchorPoint</i>.
	 * @return value of body1AnchorPoint field
	 */
	@Override
	public float[] getBody1AnchorPoint()
	{
		return body1AnchorPoint;
	}
	/**
	 * Provide RigidBody instance (using a properly typed node) from inputOutput SFNode field <i>body2</i>.
	 * @see #getBody2ProtoInstance()
	 * @return value of body2 field
	 */
	@Override
	public RigidBody getBody2()
	{
		return body2;
	}

	/**
	 * Assign RigidBody instance (using a properly typed node) to inputOutput SFNode field <i>body2</i>.
	 * @see #setBody2(ProtoInstanceObject)
	 * @param newValue is new value for the body2 field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setBody2(RigidBody newValue)
	{
		// set-newValue-validity-checks #0
		body2 = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) body2).setParentObject(this); // parentTest15
		}
		if (body2ProtoInstance != null)
		{
			body2ProtoInstance.setParentObject(null); // housekeeping, clear prior object
			body2ProtoInstance = null;
		}
		return this;
	}

	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>body2</i>.
	 * @see #setBody2(RigidBody)
	 * @param newValue is new value for the body2 field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setBody2(ProtoInstance newValue)
	{
		body2ProtoInstance = (ProtoInstanceObject)newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) body2ProtoInstance).setParentObject(this); // parentTest15.5
	    }
		if (body2 != null)
		{
			((X3DConcreteElement) body2).setParentObject(null); // housekeeping, clear prior object
			body2 = null;
		}
	    return this;
	}
	/**
	 * Utility method to clear SFNode value of body2 field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public SingleAxisHingeJointObject clearBody2()
	{
		((X3DConcreteElement) body2).clearParentObject(); // remove references to facilitate Java memory management
		body2 = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>body2</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type RigidBody.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the body2 field
	 * @see #setBody2(RigidBody)
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SingleAxisHingeJointObject setBody2(ProtoInstanceObject newProtoInstanceNode)
	{
		if (body2 != null)
		{
			((X3DConcreteElement) body2).setParentObject(null); // housekeeping, clear prior object
			body2 = null;
		}
		body2ProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>body2</i>, if available.
	 * @see #getBody2()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getBody2ProtoInstance()
	{
		return body2ProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>body2</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getBody2()
	 * @see #getBody2ProtoInstance()
	 */
	public boolean hasBody2()
	{
		return (body2 != null) || (body2ProtoInstance != null);
	}
	/**
	 * Provide array of 3-tuple float results from outputOnly SFVec3f field named <i>body2AnchorPoint</i>.
	 * @return value of body2AnchorPoint field
	 */
	@Override
	public float[] getBody2AnchorPoint()
	{
		return body2AnchorPoint;
	}
	/**
	 * Provide array of String enumeration results ['"ALL"'|'"NONE"'|'"etc."'] from inputOutput MFString field named <i>forceOutput</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  forceOutput controls which output fields are generated for the next frame. Values are ALL, NONE, or exact names of output fields updated at start of next frame.  * <br>

	 * <br><br>
	 * Available enumeration values for string comparison: {@link #FORCEOUTPUT_ALL ALL}, {@link #FORCEOUTPUT_NONE NONE}.
	 * @return value of forceOutput field
	 */
	@Override
	public String[] getForceOutput()
	{
		final String[] valuesArray = new String[forceOutput.size()];
		int i = 0;
		for (String arrayElement : forceOutput) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString forceOutput field, similar to {@link #getForceOutput()}.

	 * @return value of forceOutput field
	 */
	public ArrayList<String> getForceOutputList()
	{
		return forceOutput;
	}

	/**
	 * Assign String enumeration array (""ALL""|""NONE"") ['"ALL"'|'"NONE"'|'"etc."'] to inputOutput MFString field named <i>forceOutput</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #FORCEOUTPUT_ALL ALL}, {@link #FORCEOUTPUT_NONE NONE}).
	 * <br><br>
	 * <i>Tooltip:</i> forceOutput controls which output fields are generated for the next frame. Values are ALL, NONE, or exact names of output fields updated at start of next frame.
	 * @param newValue is new value for the forceOutput field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setForceOutput(String[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		forceOutput.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			forceOutput.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString forceOutput field, similar to {@link #setForceOutput(String[])}.
	 * @param newValue is new value for the forceOutput field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setForceOutput(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setForceOutput(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Assign single SFString object value to MFString forceOutput field, similar to {@link #setForceOutput(String[])}.
	 * @param newValue is new value for the forceOutput field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setForceOutput(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #2
		setForceOutput(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString forceOutput field, similar to {@link #setForceOutput(String[])}.
	 * @param newValue is new value for the forceOutput field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setForceOutput(String newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #3
		setForceOutput(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString forceOutput field, similar to {@link #setForceOutput(String[])}.
	 * @param newValue is new value for the forceOutput field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setForceOutput(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		forceOutput = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of forceOutput field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SingleAxisHingeJointObject clearForceOutput()
	{
		forceOutput.clear(); // reset
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>maxAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [-pi,pi] maxAngle is maximum rotation angle for hinge.  * <br>

	 * @return value of maxAngle field
	 */
	@Override
	public float getMaxAngle()
	{
		return maxAngle;
	}

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>maxAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-pi,pi] maxAngle is maximum rotation angle for hinge.
	 * @param newValue is new value for the maxAngle field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setMaxAngle(float newValue)
	{
		// set-newValue-validity-checks #0
		maxAngle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat maxAngle field, similar to {@link #setMaxAngle(float)}.
	 * @param newValue is new value for the maxAngle field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setMaxAngle(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setMaxAngle(newValue.getPrimitiveValue());
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setMetadata(X3DMetadataObject newValue)
	{
		// set-newValue-validity-checks #0
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public SingleAxisHingeJointObject clearMetadata()
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SingleAxisHingeJointObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>minAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [-pi,pi] minAngle is minimum rotation angle for hinge.  * <br>

	 * @return value of minAngle field
	 */
	@Override
	public float getMinAngle()
	{
		return minAngle;
	}

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>minAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-pi,pi] minAngle is minimum rotation angle for hinge.
	 * @param newValue is new value for the minAngle field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setMinAngle(float newValue)
	{
		// set-newValue-validity-checks #0
		minAngle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat minAngle field, similar to {@link #setMinAngle(float)}.
	 * @param newValue is new value for the minAngle field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setMinAngle(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setMinAngle(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stopBounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stopBounce is velocity factor for bounce back once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no bounce, 1 means return velocity matches. </li> 
 * </ul>
	 * @return value of stopBounce field
	 */
	@Override
	public float getStopBounce()
	{
		return stopBounce;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stopBounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stopBounce is velocity factor for bounce back once stop point is reached. Hint: 0 means no bounce, 1 means return velocity matches.
	 * @param newValue is new value for the stopBounce field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setStopBounce(float newValue)
	{
		// set-newValue-validity-checks #0
		stopBounce = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stopBounce field, similar to {@link #setStopBounce(float)}.
	 * @param newValue is new value for the stopBounce field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setStopBounce(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setStopBounce(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stopErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stopErrorCorrection is fraction of error correction performed during time step once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no error correction, 1 means all error corrected in single step. </li> 
 * </ul>
	 * @return value of stopErrorCorrection field
	 */
	@Override
	public float getStopErrorCorrection()
	{
		return stopErrorCorrection;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stopErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stopErrorCorrection is fraction of error correction performed during time step once stop point is reached. Hint: 0 means no error correction, 1 means all error corrected in single step.
	 * @param newValue is new value for the stopErrorCorrection field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setStopErrorCorrection(float newValue)
	{
		// set-newValue-validity-checks #0
		stopErrorCorrection = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stopErrorCorrection field, similar to {@link #setStopErrorCorrection(float)}.
	 * @param newValue is new value for the stopErrorCorrection field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setStopErrorCorrection(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setStopErrorCorrection(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final SingleAxisHingeJointObject setDEF(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to SingleAxisHingeJoint
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SingleAxisHingeJoint DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("SingleAxisHingeJoint DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setDEF(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final SingleAxisHingeJointObject setUSE(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to SingleAxisHingeJoint
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("SingleAxisHingeJoint USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("SingleAxisHingeJoint USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setUSE(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setUSE(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final SingleAxisHingeJointObject setCssClass(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		setConcreteCssClass(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString cssClass field, similar to {@link #setCssClass(String)}.
	 * @param newValue is new value for the class field.
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setCssClass(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public SingleAxisHingeJointObject setIS(ISObject newValue)
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SingleAxisHingeJointObject setUSE(SingleAxisHingeJointObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on SingleAxisHingeJointObject" +
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
	public SingleAxisHingeJointObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public SingleAxisHingeJointObject addComments (String newComment)
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public SingleAxisHingeJointObject addComments (String[] newComments)
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
	 * @return {@link SingleAxisHingeJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public SingleAxisHingeJointObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (body1 != null) || (body1ProtoInstance != null) || (body2 != null) || (body2ProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<SingleAxisHingeJoint"); // start opening tag
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
                            
			if ((!Arrays.equals(getAnchorPoint(), ANCHORPOINT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" anchorPoint='").append(SFVec3fObject.toString(getAnchorPoint())).append("'");
			}
			if ((!Arrays.equals(getAxis(), AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" axis='").append(SFVec3fObject.toString(getAxis())).append("'");
			}
			if (((getForceOutput().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" forceOutput='").append(new MFStringObject(getForceOutput()).toStringX3D()).append("'");
			}
			if (((getMaxAngle() != MAXANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" maxAngle='").append(SFFloatObject.toString(getMaxAngle())).append("'");
			}
			if (((getMinAngle() != MINANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" minAngle='").append(SFFloatObject.toString(getMinAngle())).append("'");
			}
			if (((getStopBounce() != STOPBOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stopBounce='").append(SFFloatObject.toString(getStopBounce())).append("'");
			}
			if (((getStopErrorCorrection() != STOPERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stopErrorCorrection='").append(SFFloatObject.toString(getStopErrorCorrection())).append("'");
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
			if      (body1 != null)
			{
				stringX3D.append(((X3DConcreteElement)body1).toStringX3D(indentLevel + indentIncrement));
			}
			else if (body1ProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)body1ProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (body2 != null)
			{
				stringX3D.append(((X3DConcreteElement)body2).toStringX3D(indentLevel + indentIncrement));
			}
			else if (body2ProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)body2ProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</SingleAxisHingeJoint>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (body1 != null) || (body1ProtoInstance != null) || (body2 != null) || (body2ProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("SingleAxisHingeJoint").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("anchorPoint"))
						{
							stringClassicVRML.append(indentCharacter).append("anchorPoint").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getAnchorPoint(), ANCHORPOINT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("anchorPoint ").append(SFVec3fObject.toString(getAnchorPoint())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("axis"))
						{
							stringClassicVRML.append(indentCharacter).append("axis").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getAxis(), AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("axis ").append(SFVec3fObject.toString(getAxis())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("forceOutput"))
						{
							stringClassicVRML.append(indentCharacter).append("forceOutput").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getForceOutput().length > 0)
				{
					stringClassicVRML.append("forceOutput ").append("[ ").append(MFStringObject.toString(getForceOutput())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("maxAngle"))
						{
							stringClassicVRML.append(indentCharacter).append("maxAngle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMaxAngle() != MAXANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("maxAngle ").append(SFFloatObject.toString(getMaxAngle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("minAngle"))
						{
							stringClassicVRML.append(indentCharacter).append("minAngle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMinAngle() != MINANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("minAngle ").append(SFFloatObject.toString(getMinAngle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stopBounce"))
						{
							stringClassicVRML.append(indentCharacter).append("stopBounce").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStopBounce() != STOPBOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stopBounce ").append(SFFloatObject.toString(getStopBounce())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stopErrorCorrection"))
						{
							stringClassicVRML.append(indentCharacter).append("stopErrorCorrection").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStopErrorCorrection() != STOPERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stopErrorCorrection ").append(SFFloatObject.toString(getStopErrorCorrection())).append("\n").append(indent).append(indentCharacter);
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
			if (body1 != null)
			{
				stringClassicVRML.append(indentCharacter).append("body1").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) body1).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (body1ProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("body1").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) body1ProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (body2 != null)
			{
				stringClassicVRML.append(indentCharacter).append("body2").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) body2).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (body2ProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("body2").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) body2ProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
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
		if (body1 != null)
		{
			referenceElement = ((X3DConcreteElement) body1).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (body1ProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) body1ProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (body2 != null)
		{
			referenceElement = ((X3DConcreteElement) body2).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (body2ProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) body2ProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
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
		if (body1 != null)
		{
			referenceNode = ((X3DConcreteElement) body1).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (body2 != null)
		{
			referenceNode = ((X3DConcreteElement) body2).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
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

		setAnchorPoint(getAnchorPoint()); // exercise field checks, simple types

		setAxis(getAxis()); // exercise field checks, simple types

		setForceOutput(getForceOutput()); // exercise field checks, simple types

		setMaxAngle(getMaxAngle()); // exercise field checks, simple types

		setMinAngle(getMinAngle()); // exercise field checks, simple types

		setStopBounce(getStopBounce()); // exercise field checks, simple types

		setStopErrorCorrection(getStopErrorCorrection()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (body1 != null)
		{
			setBody1(getBody1());
			((X3DConcreteElement) body1).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) body1).getValidationResult());
		}
		if (body1ProtoInstance != null)
		{
			setBody1(getBody1ProtoInstance());
			((X3DConcreteElement) body1ProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) body1ProtoInstance).getValidationResult());
		}
		if ((body1 != null) && (body1ProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both body1 and body1ProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasBody1()) // test USE restrictions
		{
			String errorNotice = "SingleAxisHingeJoint USE='" + getUSE() + "' is not allowed to have contained SFNode body1";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "SingleAxisHingeJoint USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (body2 != null)
		{
			setBody2(getBody2());
			((X3DConcreteElement) body2).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) body2).getValidationResult());
		}
		if (body2ProtoInstance != null)
		{
			setBody2(getBody2ProtoInstance());
			((X3DConcreteElement) body2ProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) body2ProtoInstance).getValidationResult());
		}
		if ((body2 != null) && (body2ProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both body2 and body2ProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasBody2()) // test USE restrictions
		{
			String errorNotice = "SingleAxisHingeJoint USE='" + getUSE() + "' is not allowed to have contained SFNode body2";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "SingleAxisHingeJoint USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

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
			String errorNotice = "SingleAxisHingeJoint USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "SingleAxisHingeJoint USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("RigidBodyPhysics") &&
					(nextComponent.getLevel() >= 2))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='RigidBodyPhysics' level='2'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"RigidBodyPhysics\").setLevel(2);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
