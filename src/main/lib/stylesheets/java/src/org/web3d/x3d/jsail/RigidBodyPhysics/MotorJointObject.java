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
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) MotorJoint drives relative angular velocities between body1 and body2 within a common reference frame. Contains two RigidBody nodes (containerField values body1, body2).
 * <ul>
 *  <li> <i>Hint:</i> useful in combination with BallJoint. </li> 
 *  <li> <i>Hint:</i>  RigidBodyPhysics component, level 2. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#MotorJoint" target="blank">X3D Abstract Specification: MotorJoint</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MotorJoint" target="_blank">X3D Tooltips: MotorJoint</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MotorJointObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.RigidBodyPhysics.MotorJoint
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private boolean autoCalc; // SFBool

	private float axis1Angle; // SFFloat

	private float axis1Torque; // SFFloat

	private float axis2Angle; // SFFloat

	private float axis2Torque; // SFFloat

	private float axis3Angle; // SFFloat

	private float axis3Torque; // SFFloat

	private RigidBody body1; // SFNode acceptable node types: RigidBody
	private ProtoInstanceObject body1ProtoInstance; // allowed alternative for body1 field

	private RigidBody body2; // SFNode acceptable node types: RigidBody
	private ProtoInstanceObject body2ProtoInstance; // allowed alternative for body2 field

	private int enabledAxes; // SFInt32

	private ArrayList<String> forceOutput = new ArrayList<>(); // MFString

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private float motor1Angle; // SFFloat

	private float motor1AngleRate; // SFFloat

	private float[] motor1Axis; // SFVec3f

	private float motor2Angle; // SFFloat

	private float motor2AngleRate; // SFFloat

	private float[] motor2Axis; // SFVec3f

	private float motor3Angle; // SFFloat

	private float motor3AngleRate; // SFFloat

	private float[] motor3Axis; // SFVec3f

	private float stop1Bounce; // SFFloat

	private float stop1ErrorCorrection; // SFFloat

	private float stop2Bounce; // SFFloat

	private float stop2ErrorCorrection; // SFFloat

	private float stop3Bounce; // SFFloat

	private float stop3ErrorCorrection; // SFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** MFString field named <i>forceOutput</i> is an array that can include this quoted enumeration value <i>new String[] {"ALL"}</i> (Java syntax) or <i>'"ALL"'</i> (XML syntax). */
	public static final ArrayList<String> FORCEOUTPUT_ALL = new ArrayList<String>(Arrays.<String>asList("ALL"));

	/** MFString field named <i>forceOutput</i> is an array that can include this quoted enumeration value <i>new String[] {"NONE"}</i> (Java syntax) or <i>'"NONE"'</i> (XML syntax). */
	public static final ArrayList<String> FORCEOUTPUT_NONE = new ArrayList<String>(Arrays.<String>asList("NONE"));

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>MotorJoint</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "MotorJoint";

	/** Provides name of this element: <i>MotorJoint</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>MotorJoint</i> element: <i>RigidBodyPhysics</i> */
	public static final String COMPONENT = "RigidBodyPhysics";

	/** Defines X3D component for the <i>MotorJoint</i> element: <i>RigidBodyPhysics</i>
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

	/** SFBool field named <i>autoCalc</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean AUTOCALC_DEFAULT_VALUE = false;

	/** SFFloat field named <i>axis1Angle</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float AXIS1ANGLE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>axis1Torque</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float AXIS1TORQUE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>axis2Angle</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float AXIS2ANGLE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>axis2Torque</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float AXIS2TORQUE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>axis3Angle</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float AXIS3ANGLE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>axis3Torque</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float AXIS3TORQUE_DEFAULT_VALUE = 0f;

	/** SFInt32 field named <i>enabledAxes</i> has default value <i>1</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final int ENABLEDAXES_DEFAULT_VALUE = 1;

	/** MFString field named <i>forceOutput</i> has default quoted value <i>new String[] {"NONE"}</i> (Java syntax) or quoted value <i>"NONE"</i> (XML syntax). */
	public static final ArrayList<String> FORCEOUTPUT_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("NONE"));

	/** SFVec3f field named <i>motor1Axis</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] MOTOR1AXIS_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>motor2Axis</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] MOTOR2AXIS_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>motor3Axis</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] MOTOR3AXIS_DEFAULT_VALUE = {0f,0f,0f};

	/** SFFloat field named <i>stop1Bounce</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float STOP1BOUNCE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>stop1ErrorCorrection</i> has default value <i>0.8f</i> (Java syntax) or <i>0.8</i> (XML syntax). */
	public static final float STOP1ERRORCORRECTION_DEFAULT_VALUE = 0.8f;

	/** SFFloat field named <i>stop2Bounce</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float STOP2BOUNCE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>stop2ErrorCorrection</i> has default value <i>0.8f</i> (Java syntax) or <i>0.8</i> (XML syntax). */
	public static final float STOP2ERRORCORRECTION_DEFAULT_VALUE = 0.8f;

	/** SFFloat field named <i>stop3Bounce</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float STOP3BOUNCE_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>stop3ErrorCorrection</i> has default value <i>0.8f</i> (Java syntax) or <i>0.8</i> (XML syntax). */
	public static final float STOP3ERRORCORRECTION_DEFAULT_VALUE = 0.8f;

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
			case "autoCalc":
				result = "SFBool";
				break;
			case "axis1Angle":
				result = "SFFloat";
				break;
			case "axis1Torque":
				result = "SFFloat";
				break;
			case "axis2Angle":
				result = "SFFloat";
				break;
			case "axis2Torque":
				result = "SFFloat";
				break;
			case "axis3Angle":
				result = "SFFloat";
				break;
			case "axis3Torque":
				result = "SFFloat";
				break;
			case "body1":
				result = "SFNode";
				break;
			case "body2":
				result = "SFNode";
				break;
			case "enabledAxes":
				result = "SFInt32";
				break;
			case "forceOutput":
				result = "MFString";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "motor1Angle":
				result = "SFFloat";
				break;
			case "motor1AngleRate":
				result = "SFFloat";
				break;
			case "motor1Axis":
				result = "SFVec3f";
				break;
			case "motor2Angle":
				result = "SFFloat";
				break;
			case "motor2AngleRate":
				result = "SFFloat";
				break;
			case "motor2Axis":
				result = "SFVec3f";
				break;
			case "motor3Angle":
				result = "SFFloat";
				break;
			case "motor3AngleRate":
				result = "SFFloat";
				break;
			case "motor3Axis":
				result = "SFVec3f";
				break;
			case "stop1Bounce":
				result = "SFFloat";
				break;
			case "stop1ErrorCorrection":
				result = "SFFloat";
				break;
			case "stop2Bounce":
				result = "SFFloat";
				break;
			case "stop2ErrorCorrection":
				result = "SFFloat";
				break;
			case "stop3Bounce":
				result = "SFFloat";
				break;
			case "stop3ErrorCorrection":
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
			case "autoCalc":
				result = "initializeOnly";
				break;
			case "axis1Angle":
				result = "inputOutput";
				break;
			case "axis1Torque":
				result = "inputOutput";
				break;
			case "axis2Angle":
				result = "inputOutput";
				break;
			case "axis2Torque":
				result = "inputOutput";
				break;
			case "axis3Angle":
				result = "inputOutput";
				break;
			case "axis3Torque":
				result = "inputOutput";
				break;
			case "body1":
				result = "inputOutput";
				break;
			case "body2":
				result = "inputOutput";
				break;
			case "enabledAxes":
				result = "inputOutput";
				break;
			case "forceOutput":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "motor1Angle":
				result = "outputOnly";
				break;
			case "motor1AngleRate":
				result = "outputOnly";
				break;
			case "motor1Axis":
				result = "inputOutput";
				break;
			case "motor2Angle":
				result = "outputOnly";
				break;
			case "motor2AngleRate":
				result = "outputOnly";
				break;
			case "motor2Axis":
				result = "inputOutput";
				break;
			case "motor3Angle":
				result = "outputOnly";
				break;
			case "motor3AngleRate":
				result = "outputOnly";
				break;
			case "motor3Axis":
				result = "inputOutput";
				break;
			case "stop1Bounce":
				result = "inputOutput";
				break;
			case "stop1ErrorCorrection":
				result = "inputOutput";
				break;
			case "stop2Bounce":
				result = "inputOutput";
				break;
			case "stop2ErrorCorrection":
				result = "inputOutput";
				break;
			case "stop3Bounce":
				result = "inputOutput";
				break;
			case "stop3ErrorCorrection":
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
	String containerField_DEFAULT_VALUE = "joints";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFFloat field named <i>axis1Angle</i>. */
	public static final String fromField_AXIS1ANGLE = "axis1Angle";

	/** toField ROUTE name for SFFloat field named <i>axis1Angle</i>. */
	public static final String toField_AXIS1ANGLE = "axis1Angle";

	/** fromField ROUTE name for SFFloat field named <i>axis1Torque</i>. */
	public static final String fromField_AXIS1TORQUE = "axis1Torque";

	/** toField ROUTE name for SFFloat field named <i>axis1Torque</i>. */
	public static final String toField_AXIS1TORQUE = "axis1Torque";

	/** fromField ROUTE name for SFFloat field named <i>axis2Angle</i>. */
	public static final String fromField_AXIS2ANGLE = "axis2Angle";

	/** toField ROUTE name for SFFloat field named <i>axis2Angle</i>. */
	public static final String toField_AXIS2ANGLE = "axis2Angle";

	/** fromField ROUTE name for SFFloat field named <i>axis2Torque</i>. */
	public static final String fromField_AXIS2TORQUE = "axis2Torque";

	/** toField ROUTE name for SFFloat field named <i>axis2Torque</i>. */
	public static final String toField_AXIS2TORQUE = "axis2Torque";

	/** fromField ROUTE name for SFFloat field named <i>axis3Angle</i>. */
	public static final String fromField_AXIS3ANGLE = "axis3Angle";

	/** toField ROUTE name for SFFloat field named <i>axis3Angle</i>. */
	public static final String toField_AXIS3ANGLE = "axis3Angle";

	/** fromField ROUTE name for SFFloat field named <i>axis3Torque</i>. */
	public static final String fromField_AXIS3TORQUE = "axis3Torque";

	/** toField ROUTE name for SFFloat field named <i>axis3Torque</i>. */
	public static final String toField_AXIS3TORQUE = "axis3Torque";

	/** fromField ROUTE name for SFNode field named <i>body1</i>. */
	public static final String fromField_BODY1 = "body1";

	/** toField ROUTE name for SFNode field named <i>body1</i>. */
	public static final String toField_BODY1 = "body1";

	/** fromField ROUTE name for SFNode field named <i>body2</i>. */
	public static final String fromField_BODY2 = "body2";

	/** toField ROUTE name for SFNode field named <i>body2</i>. */
	public static final String toField_BODY2 = "body2";

	/** fromField ROUTE name for SFInt32 field named <i>enabledAxes</i>. */
	public static final String fromField_ENABLEDAXES = "enabledAxes";

	/** toField ROUTE name for SFInt32 field named <i>enabledAxes</i>. */
	public static final String toField_ENABLEDAXES = "enabledAxes";

	/** fromField ROUTE name for MFString field named <i>forceOutput</i>. */
	public static final String fromField_FORCEOUTPUT = "forceOutput";

	/** toField ROUTE name for MFString field named <i>forceOutput</i>. */
	public static final String toField_FORCEOUTPUT = "forceOutput";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFFloat field named <i>motor1Angle</i>. */
	public static final String fromField_MOTOR1ANGLE = "motor1Angle";

	/** fromField ROUTE name for SFFloat field named <i>motor1AngleRate</i>. */
	public static final String fromField_MOTOR1ANGLERATE = "motor1AngleRate";

	/** fromField ROUTE name for SFVec3f field named <i>motor1Axis</i>. */
	public static final String fromField_MOTOR1AXIS = "motor1Axis";

	/** toField ROUTE name for SFVec3f field named <i>motor1Axis</i>. */
	public static final String toField_MOTOR1AXIS = "motor1Axis";

	/** fromField ROUTE name for SFFloat field named <i>motor2Angle</i>. */
	public static final String fromField_MOTOR2ANGLE = "motor2Angle";

	/** fromField ROUTE name for SFFloat field named <i>motor2AngleRate</i>. */
	public static final String fromField_MOTOR2ANGLERATE = "motor2AngleRate";

	/** fromField ROUTE name for SFVec3f field named <i>motor2Axis</i>. */
	public static final String fromField_MOTOR2AXIS = "motor2Axis";

	/** toField ROUTE name for SFVec3f field named <i>motor2Axis</i>. */
	public static final String toField_MOTOR2AXIS = "motor2Axis";

	/** fromField ROUTE name for SFFloat field named <i>motor3Angle</i>. */
	public static final String fromField_MOTOR3ANGLE = "motor3Angle";

	/** fromField ROUTE name for SFFloat field named <i>motor3AngleRate</i>. */
	public static final String fromField_MOTOR3ANGLERATE = "motor3AngleRate";

	/** fromField ROUTE name for SFVec3f field named <i>motor3Axis</i>. */
	public static final String fromField_MOTOR3AXIS = "motor3Axis";

	/** toField ROUTE name for SFVec3f field named <i>motor3Axis</i>. */
	public static final String toField_MOTOR3AXIS = "motor3Axis";

	/** fromField ROUTE name for SFFloat field named <i>stop1Bounce</i>. */
	public static final String fromField_STOP1BOUNCE = "stop1Bounce";

	/** toField ROUTE name for SFFloat field named <i>stop1Bounce</i>. */
	public static final String toField_STOP1BOUNCE = "stop1Bounce";

	/** fromField ROUTE name for SFFloat field named <i>stop1ErrorCorrection</i>. */
	public static final String fromField_STOP1ERRORCORRECTION = "stop1ErrorCorrection";

	/** toField ROUTE name for SFFloat field named <i>stop1ErrorCorrection</i>. */
	public static final String toField_STOP1ERRORCORRECTION = "stop1ErrorCorrection";

	/** fromField ROUTE name for SFFloat field named <i>stop2Bounce</i>. */
	public static final String fromField_STOP2BOUNCE = "stop2Bounce";

	/** toField ROUTE name for SFFloat field named <i>stop2Bounce</i>. */
	public static final String toField_STOP2BOUNCE = "stop2Bounce";

	/** fromField ROUTE name for SFFloat field named <i>stop2ErrorCorrection</i>. */
	public static final String fromField_STOP2ERRORCORRECTION = "stop2ErrorCorrection";

	/** toField ROUTE name for SFFloat field named <i>stop2ErrorCorrection</i>. */
	public static final String toField_STOP2ERRORCORRECTION = "stop2ErrorCorrection";

	/** fromField ROUTE name for SFFloat field named <i>stop3Bounce</i>. */
	public static final String fromField_STOP3BOUNCE = "stop3Bounce";

	/** toField ROUTE name for SFFloat field named <i>stop3Bounce</i>. */
	public static final String toField_STOP3BOUNCE = "stop3Bounce";

	/** fromField ROUTE name for SFFloat field named <i>stop3ErrorCorrection</i>. */
	public static final String fromField_STOP3ERRORCORRECTION = "stop3ErrorCorrection";

	/** toField ROUTE name for SFFloat field named <i>stop3ErrorCorrection</i>. */
	public static final String toField_STOP3ERRORCORRECTION = "stop3ErrorCorrection";

	/** Constructor for MotorJointObject to initialize member variables with default values. */
	public MotorJointObject()
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

		autoCalc = AUTOCALC_DEFAULT_VALUE;
		axis1Angle = AXIS1ANGLE_DEFAULT_VALUE;
		axis1Torque = AXIS1TORQUE_DEFAULT_VALUE;
		axis2Angle = AXIS2ANGLE_DEFAULT_VALUE;
		axis2Torque = AXIS2TORQUE_DEFAULT_VALUE;
		axis3Angle = AXIS3ANGLE_DEFAULT_VALUE;
		axis3Torque = AXIS3TORQUE_DEFAULT_VALUE;
		body1 = null; // clear out any prior node
		body2 = null; // clear out any prior node
		enabledAxes = ENABLEDAXES_DEFAULT_VALUE;
		forceOutput = FORCEOUTPUT_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		motor1Axis = MOTOR1AXIS_DEFAULT_VALUE;
		motor2Axis = MOTOR2AXIS_DEFAULT_VALUE;
		motor3Axis = MOTOR3AXIS_DEFAULT_VALUE;
		stop1Bounce = STOP1BOUNCE_DEFAULT_VALUE;
		stop1ErrorCorrection = STOP1ERRORCORRECTION_DEFAULT_VALUE;
		stop2Bounce = STOP2BOUNCE_DEFAULT_VALUE;
		stop2ErrorCorrection = STOP2ERRORCORRECTION_DEFAULT_VALUE;
		stop3Bounce = STOP3BOUNCE_DEFAULT_VALUE;
		stop3ErrorCorrection = STOP3ERRORCORRECTION_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>autoCalc</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  autoCalc controls whether user manually provides individual angle rotations each frame (false) or if angle values are automatically calculated by motor implementations (true).  * <br>

	 * @return value of autoCalc field
	 */
	@Override
	public boolean getAutoCalc()
	{
		return autoCalc;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>autoCalc</i>.
	 * <br><br>
	 * <i>Tooltip:</i> autoCalc controls whether user manually provides individual angle rotations each frame (false) or if angle values are automatically calculated by motor implementations (true).
	 * @param newValue is new value for the autoCalc field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setAutoCalc(boolean newValue)
	{
		autoCalc = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool autoCalc field, similar to {@link #setAutoCalc(boolean)}.
	 * @param newValue is new value for the autoCalc field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setAutoCalc(SFBoolObject newValue)
	{
		setAutoCalc(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>axis1Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis1Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis1Angle field
	 */
	@Override
	public float getAxis1Angle()
	{
		return axis1Angle;
	}

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>axis1Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis1Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis1Angle field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setAxis1Angle(float newValue)
	{
		axis1Angle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat axis1Angle field, similar to {@link #setAxis1Angle(float)}.
	 * @param newValue is new value for the axis1Angle field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setAxis1Angle(SFFloatObject newValue)
	{
		setAxis1Angle(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>axis1Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis1Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis1Torque field
	 */
	@Override
	public float getAxis1Torque()
	{
		return axis1Torque;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>axis1Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis1Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis1Torque field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setAxis1Torque(float newValue)
	{
		axis1Torque = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat axis1Torque field, similar to {@link #setAxis1Torque(float)}.
	 * @param newValue is new value for the axis1Torque field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setAxis1Torque(SFFloatObject newValue)
	{
		setAxis1Torque(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>axis2Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis2Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis2Angle field
	 */
	@Override
	public float getAxis2Angle()
	{
		return axis2Angle;
	}

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>axis2Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis2Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis2Angle field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setAxis2Angle(float newValue)
	{
		axis2Angle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat axis2Angle field, similar to {@link #setAxis2Angle(float)}.
	 * @param newValue is new value for the axis2Angle field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setAxis2Angle(SFFloatObject newValue)
	{
		setAxis2Angle(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>axis2Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis2Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis2Torque field
	 */
	@Override
	public float getAxis2Torque()
	{
		return axis2Torque;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>axis2Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis2Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis2Torque field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setAxis2Torque(float newValue)
	{
		axis2Torque = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat axis2Torque field, similar to {@link #setAxis2Torque(float)}.
	 * @param newValue is new value for the axis2Torque field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setAxis2Torque(SFFloatObject newValue)
	{
		setAxis2Torque(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>axis3Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis3Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis3Angle field
	 */
	@Override
	public float getAxis3Angle()
	{
		return axis3Angle;
	}

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>axis3Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis3Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis3Angle field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setAxis3Angle(float newValue)
	{
		axis3Angle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat axis3Angle field, similar to {@link #setAxis3Angle(float)}.
	 * @param newValue is new value for the axis3Angle field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setAxis3Angle(SFFloatObject newValue)
	{
		setAxis3Angle(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>axis3Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis3Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis3Torque field
	 */
	@Override
	public float getAxis3Torque()
	{
		return axis3Torque;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>axis3Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis3Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis3Torque field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setAxis3Torque(float newValue)
	{
		axis3Torque = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat axis3Torque field, similar to {@link #setAxis3Torque(float)}.
	 * @param newValue is new value for the axis3Torque field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setAxis3Torque(SFFloatObject newValue)
	{
		setAxis3Torque(newValue.getPrimitiveValue());
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setBody1(RigidBody newValue)
	{
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
	 * Utility method to clear SFNode value of body1 field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public MotorJointObject clearBody1()
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MotorJointObject setBody1(ProtoInstanceObject newProtoInstanceNode)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setBody2(RigidBody newValue)
	{
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
	 * Utility method to clear SFNode value of body2 field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public MotorJointObject clearBody2()
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MotorJointObject setBody2(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide int value within allowed range of [0,3] from inputOutput SFInt32 field named <i>enabledAxes</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,3] enabledAxes indicates which motor axes are active. (0) none, (1) axis 1, (2) axes 1 and 2, (3) all three axes.  * <br>

	 * @return value of enabledAxes field
	 */
	@Override
	public int getEnabledAxes()
	{
		return enabledAxes;
	}

	/**
	 * Assign int value within allowed range of [0,3] to inputOutput SFInt32 field named <i>enabledAxes</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,3] enabledAxes indicates which motor axes are active. (0) none, (1) axis 1, (2) axes 1 and 2, (3) all three axes.
	 * @param newValue is new value for the enabledAxes field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setEnabledAxes(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("MotorJoint enabledAxes newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
            if (newValue > 3) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("MotorJoint enabledAxes newValue=" + SFInt32Object.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=3");
            }
		enabledAxes = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 enabledAxes field, similar to {@link #setEnabledAxes(int)}.
	 * @param newValue is new value for the enabledAxes field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setEnabledAxes(SFInt32Object newValue)
	{
		setEnabledAxes(newValue.getPrimitiveValue());
		return this;
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setForceOutput(String[] newValue)
	{
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setForceOutput(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setForceOutput(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString forceOutput field, similar to {@link #setForceOutput(String[])}.
	 * @param newValue is new value for the forceOutput field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setForceOutput(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setForceOutput(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString forceOutput field, similar to {@link #setForceOutput(String[])}.
	 * @param newValue is new value for the forceOutput field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setForceOutput(String newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setForceOutput(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString forceOutput field, similar to {@link #setForceOutput(String[])}.
	 * @param newValue is new value for the forceOutput field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setForceOutput(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearForceOutput(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		forceOutput = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of forceOutput field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MotorJointObject clearForceOutput()
	{
		forceOutput.clear(); // reset
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public MotorJointObject clearMetadata()
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public MotorJointObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor1Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor1Angle provides calculated angle of rotation (radians) for this motor joint from last frame.  * <br>

	 * @return value of motor1Angle field
	 */
	@Override
	public float getMotor1Angle()
	{
		return motor1Angle;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor1AngleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor1AngleRate provides calculated anglular rotation rate (radians/second) for this motor joint from last frame.  * <br>

	 * @return value of motor1AngleRate field
	 */
	@Override
	public float getMotor1AngleRate()
	{
		return motor1AngleRate;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>motor1Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor1Axis defines axis vector of corresponding motor axis.
 * <ul>
 *  <li> <i> Hint:</i>  0 0 0 means motor disabled. </li> 
 * </ul>
	 * @return value of motor1Axis field
	 */
	@Override
	public float[] getMotor1Axis()
	{
		return motor1Axis;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>motor1Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor1Axis defines axis vector of corresponding motor axis. Hint: 0 0 0 means motor disabled.
	 * @param newValue is new value for the motor1Axis field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setMotor1Axis(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MotorJoint motor1Axis newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		motor1Axis = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f motor1Axis field, similar to {@link #setMotor1Axis(float[])}.
	 * @param newValue is new value for the motor1Axis field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setMotor1Axis(SFVec3fObject newValue)
	{
		setMotor1Axis(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f motor1Axis field, similar to {@link #setMotor1Axis(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setMotor1Axis(float x, float y, float z)
	{
		setMotor1Axis(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor2Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor2Angle provides calculated angle of rotation (radians) for this motor joint from last frame.  * <br>

	 * @return value of motor2Angle field
	 */
	@Override
	public float getMotor2Angle()
	{
		return motor2Angle;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor2AngleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor2AngleRate provides calculated anglular rotation rate (radians/second) for this motor joint from last frame.  * <br>

	 * @return value of motor2AngleRate field
	 */
	@Override
	public float getMotor2AngleRate()
	{
		return motor2AngleRate;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>motor2Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor2Axis defines axis vector of corresponding motor axis.
 * <ul>
 *  <li> <i> Hint:</i>  0 0 0 means motor disabled. </li> 
 * </ul>
	 * @return value of motor2Axis field
	 */
	@Override
	public float[] getMotor2Axis()
	{
		return motor2Axis;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>motor2Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor2Axis defines axis vector of corresponding motor axis. Hint: 0 0 0 means motor disabled.
	 * @param newValue is new value for the motor2Axis field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setMotor2Axis(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MotorJoint motor2Axis newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		motor2Axis = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f motor2Axis field, similar to {@link #setMotor2Axis(float[])}.
	 * @param newValue is new value for the motor2Axis field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setMotor2Axis(SFVec3fObject newValue)
	{
		setMotor2Axis(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f motor2Axis field, similar to {@link #setMotor2Axis(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setMotor2Axis(float x, float y, float z)
	{
		setMotor2Axis(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor3Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor3Angle provides calculated angle of rotation (radians) for this motor joint from last frame.  * <br>

	 * @return value of motor3Angle field
	 */
	@Override
	public float getMotor3Angle()
	{
		return motor3Angle;
	}
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor3AngleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor3AngleRate provides calculated anglular rotation rate (radians/second) for this motor joint from last frame.  * <br>

	 * @return value of motor3AngleRate field
	 */
	@Override
	public float getMotor3AngleRate()
	{
		return motor3AngleRate;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>motor3Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor3Axis defines axis vector of corresponding motor axis.
 * <ul>
 *  <li> <i> Hint:</i>  0 0 0 means motor disabled. </li> 
 * </ul>
	 * @return value of motor3Axis field
	 */
	@Override
	public float[] getMotor3Axis()
	{
		return motor3Axis;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>motor3Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor3Axis defines axis vector of corresponding motor axis. Hint: 0 0 0 means motor disabled.
	 * @param newValue is new value for the motor3Axis field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setMotor3Axis(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MotorJoint motor3Axis newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		motor3Axis = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f motor3Axis field, similar to {@link #setMotor3Axis(float[])}.
	 * @param newValue is new value for the motor3Axis field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setMotor3Axis(SFVec3fObject newValue)
	{
		setMotor3Axis(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f motor3Axis field, similar to {@link #setMotor3Axis(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setMotor3Axis(float x, float y, float z)
	{
		setMotor3Axis(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop1Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1Bounce is velocity factor for bounce back once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no bounce, 1 means return velocity matches. </li> 
 * </ul>
	 * @return value of stop1Bounce field
	 */
	@Override
	public float getStop1Bounce()
	{
		return stop1Bounce;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop1Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1Bounce is velocity factor for bounce back once stop point is reached. Hint: 0 means no bounce, 1 means return velocity matches.
	 * @param newValue is new value for the stop1Bounce field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setStop1Bounce(float newValue)
	{
		stop1Bounce = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stop1Bounce field, similar to {@link #setStop1Bounce(float)}.
	 * @param newValue is new value for the stop1Bounce field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setStop1Bounce(SFFloatObject newValue)
	{
		setStop1Bounce(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop1ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1ErrorCorrection is fraction of error correction performed during time step once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no error correction, 1 means all error corrected in single step. </li> 
 * </ul>
	 * @return value of stop1ErrorCorrection field
	 */
	@Override
	public float getStop1ErrorCorrection()
	{
		return stop1ErrorCorrection;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop1ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1ErrorCorrection is fraction of error correction performed during time step once stop point is reached. Hint: 0 means no error correction, 1 means all error corrected in single step.
	 * @param newValue is new value for the stop1ErrorCorrection field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setStop1ErrorCorrection(float newValue)
	{
		stop1ErrorCorrection = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stop1ErrorCorrection field, similar to {@link #setStop1ErrorCorrection(float)}.
	 * @param newValue is new value for the stop1ErrorCorrection field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setStop1ErrorCorrection(SFFloatObject newValue)
	{
		setStop1ErrorCorrection(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop2Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2Bounce is velocity factor for bounce back once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no bounce, 1 means return velocity matches. </li> 
 * </ul>
	 * @return value of stop2Bounce field
	 */
	@Override
	public float getStop2Bounce()
	{
		return stop2Bounce;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop2Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2Bounce is velocity factor for bounce back once stop point is reached. Hint: 0 means no bounce, 1 means return velocity matches.
	 * @param newValue is new value for the stop2Bounce field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setStop2Bounce(float newValue)
	{
		stop2Bounce = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stop2Bounce field, similar to {@link #setStop2Bounce(float)}.
	 * @param newValue is new value for the stop2Bounce field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setStop2Bounce(SFFloatObject newValue)
	{
		setStop2Bounce(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop2ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2ErrorCorrection is fraction of error correction performed during time step once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no error correction, 1 means all error corrected in single step. </li> 
 * </ul>
	 * @return value of stop2ErrorCorrection field
	 */
	@Override
	public float getStop2ErrorCorrection()
	{
		return stop2ErrorCorrection;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop2ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2ErrorCorrection is fraction of error correction performed during time step once stop point is reached. Hint: 0 means no error correction, 1 means all error corrected in single step.
	 * @param newValue is new value for the stop2ErrorCorrection field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setStop2ErrorCorrection(float newValue)
	{
		stop2ErrorCorrection = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stop2ErrorCorrection field, similar to {@link #setStop2ErrorCorrection(float)}.
	 * @param newValue is new value for the stop2ErrorCorrection field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setStop2ErrorCorrection(SFFloatObject newValue)
	{
		setStop2ErrorCorrection(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop3Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3Bounce is velocity factor for bounce back once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no bounce, 1 means return velocity matches. </li> 
 * </ul>
	 * @return value of stop3Bounce field
	 */
	@Override
	public float getStop3Bounce()
	{
		return stop3Bounce;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop3Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3Bounce is velocity factor for bounce back once stop point is reached. Hint: 0 means no bounce, 1 means return velocity matches.
	 * @param newValue is new value for the stop3Bounce field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setStop3Bounce(float newValue)
	{
		stop3Bounce = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stop3Bounce field, similar to {@link #setStop3Bounce(float)}.
	 * @param newValue is new value for the stop3Bounce field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setStop3Bounce(SFFloatObject newValue)
	{
		setStop3Bounce(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop3ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3ErrorCorrection is fraction of error correction performed during time step once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no error correction, 1 means all error corrected in single step. </li> 
 * </ul>
	 * @return value of stop3ErrorCorrection field
	 */
	@Override
	public float getStop3ErrorCorrection()
	{
		return stop3ErrorCorrection;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop3ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3ErrorCorrection is fraction of error correction performed during time step once stop point is reached. Hint: 0 means no error correction, 1 means all error corrected in single step.
	 * @param newValue is new value for the stop3ErrorCorrection field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setStop3ErrorCorrection(float newValue)
	{
		stop3ErrorCorrection = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat stop3ErrorCorrection field, similar to {@link #setStop3ErrorCorrection(float)}.
	 * @param newValue is new value for the stop3ErrorCorrection field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setStop3ErrorCorrection(SFFloatObject newValue)
	{
		setStop3ErrorCorrection(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final MotorJointObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to MotorJoint
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MotorJoint DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("MotorJoint DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setDEF(SFStringObject newValue)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final MotorJointObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to MotorJoint
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("MotorJoint USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("MotorJoint USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final MotorJointObject setCssClass(String newValue)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setCssClass(SFStringObject newValue)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJointObject setIS(ISObject newValue)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJointObject setUSE(MotorJointObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on MotorJointObject" +
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
	public MotorJointObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public MotorJointObject addComments (String newComment)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public MotorJointObject addComments (String[] newComments)
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
	 * @return {@link MotorJointObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public MotorJointObject addComments (CommentsBlock newCommentsBlock)
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

		stringX3D.append(indent).append("<MotorJoint"); // start opening tag
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
                            
			if (((getAutoCalc() != AUTOCALC_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" autoCalc='").append(SFBoolObject.toString(getAutoCalc())).append("'");
			}
			if (((getAxis1Angle() != AXIS1ANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" axis1Angle='").append(SFFloatObject.toString(getAxis1Angle())).append("'");
			}
			if (((getAxis1Torque() != AXIS1TORQUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" axis1Torque='").append(SFFloatObject.toString(getAxis1Torque())).append("'");
			}
			if (((getAxis2Angle() != AXIS2ANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" axis2Angle='").append(SFFloatObject.toString(getAxis2Angle())).append("'");
			}
			if (((getAxis2Torque() != AXIS2TORQUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" axis2Torque='").append(SFFloatObject.toString(getAxis2Torque())).append("'");
			}
			if (((getAxis3Angle() != AXIS3ANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" axis3Angle='").append(SFFloatObject.toString(getAxis3Angle())).append("'");
			}
			if (((getAxis3Torque() != AXIS3TORQUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" axis3Torque='").append(SFFloatObject.toString(getAxis3Torque())).append("'");
			}
			if (((getEnabledAxes() != ENABLEDAXES_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" enabledAxes='").append(SFInt32Object.toString(getEnabledAxes())).append("'");
			}
			if (((getForceOutput().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" forceOutput='").append(new MFStringObject(getForceOutput()).toStringX3D()).append("'");
			}
			if ((!Arrays.equals(getMotor1Axis(), MOTOR1AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" motor1Axis='").append(SFVec3fObject.toString(getMotor1Axis())).append("'");
			}
			if ((!Arrays.equals(getMotor2Axis(), MOTOR2AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" motor2Axis='").append(SFVec3fObject.toString(getMotor2Axis())).append("'");
			}
			if ((!Arrays.equals(getMotor3Axis(), MOTOR3AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" motor3Axis='").append(SFVec3fObject.toString(getMotor3Axis())).append("'");
			}
			if (((getStop1Bounce() != STOP1BOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stop1Bounce='").append(SFFloatObject.toString(getStop1Bounce())).append("'");
			}
			if (((getStop1ErrorCorrection() != STOP1ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stop1ErrorCorrection='").append(SFFloatObject.toString(getStop1ErrorCorrection())).append("'");
			}
			if (((getStop2Bounce() != STOP2BOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stop2Bounce='").append(SFFloatObject.toString(getStop2Bounce())).append("'");
			}
			if (((getStop2ErrorCorrection() != STOP2ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stop2ErrorCorrection='").append(SFFloatObject.toString(getStop2ErrorCorrection())).append("'");
			}
			if (((getStop3Bounce() != STOP3BOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stop3Bounce='").append(SFFloatObject.toString(getStop3Bounce())).append("'");
			}
			if (((getStop3ErrorCorrection() != STOP3ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" stop3ErrorCorrection='").append(SFFloatObject.toString(getStop3ErrorCorrection())).append("'");
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
			stringX3D.append(indent).append("</MotorJoint>").append("\n"); // finish closing tag
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
			stringClassicVRML.append("MotorJoint").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("autoCalc"))
						{
							stringClassicVRML.append(indentCharacter).append("autoCalc").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAutoCalc() != AUTOCALC_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("autoCalc ").append(SFBoolObject.toString(getAutoCalc())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("axis1Angle"))
						{
							stringClassicVRML.append(indentCharacter).append("axis1Angle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAxis1Angle() != AXIS1ANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("axis1Angle ").append(SFFloatObject.toString(getAxis1Angle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("axis1Torque"))
						{
							stringClassicVRML.append(indentCharacter).append("axis1Torque").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAxis1Torque() != AXIS1TORQUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("axis1Torque ").append(SFFloatObject.toString(getAxis1Torque())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("axis2Angle"))
						{
							stringClassicVRML.append(indentCharacter).append("axis2Angle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAxis2Angle() != AXIS2ANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("axis2Angle ").append(SFFloatObject.toString(getAxis2Angle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("axis2Torque"))
						{
							stringClassicVRML.append(indentCharacter).append("axis2Torque").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAxis2Torque() != AXIS2TORQUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("axis2Torque ").append(SFFloatObject.toString(getAxis2Torque())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("axis3Angle"))
						{
							stringClassicVRML.append(indentCharacter).append("axis3Angle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAxis3Angle() != AXIS3ANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("axis3Angle ").append(SFFloatObject.toString(getAxis3Angle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("axis3Torque"))
						{
							stringClassicVRML.append(indentCharacter).append("axis3Torque").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAxis3Torque() != AXIS3TORQUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("axis3Torque ").append(SFFloatObject.toString(getAxis3Torque())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("enabledAxes"))
						{
							stringClassicVRML.append(indentCharacter).append("enabledAxes").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEnabledAxes() != ENABLEDAXES_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("enabledAxes ").append(SFInt32Object.toString(getEnabledAxes())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("motor1Axis"))
						{
							stringClassicVRML.append(indentCharacter).append("motor1Axis").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getMotor1Axis(), MOTOR1AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("motor1Axis ").append(SFVec3fObject.toString(getMotor1Axis())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("motor2Axis"))
						{
							stringClassicVRML.append(indentCharacter).append("motor2Axis").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getMotor2Axis(), MOTOR2AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("motor2Axis ").append(SFVec3fObject.toString(getMotor2Axis())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("motor3Axis"))
						{
							stringClassicVRML.append(indentCharacter).append("motor3Axis").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getMotor3Axis(), MOTOR3AXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("motor3Axis ").append(SFVec3fObject.toString(getMotor3Axis())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stop1Bounce"))
						{
							stringClassicVRML.append(indentCharacter).append("stop1Bounce").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStop1Bounce() != STOP1BOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stop1Bounce ").append(SFFloatObject.toString(getStop1Bounce())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stop1ErrorCorrection"))
						{
							stringClassicVRML.append(indentCharacter).append("stop1ErrorCorrection").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStop1ErrorCorrection() != STOP1ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stop1ErrorCorrection ").append(SFFloatObject.toString(getStop1ErrorCorrection())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stop2Bounce"))
						{
							stringClassicVRML.append(indentCharacter).append("stop2Bounce").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStop2Bounce() != STOP2BOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stop2Bounce ").append(SFFloatObject.toString(getStop2Bounce())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stop2ErrorCorrection"))
						{
							stringClassicVRML.append(indentCharacter).append("stop2ErrorCorrection").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStop2ErrorCorrection() != STOP2ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stop2ErrorCorrection ").append(SFFloatObject.toString(getStop2ErrorCorrection())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stop3Bounce"))
						{
							stringClassicVRML.append(indentCharacter).append("stop3Bounce").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStop3Bounce() != STOP3BOUNCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stop3Bounce ").append(SFFloatObject.toString(getStop3Bounce())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("stop3ErrorCorrection"))
						{
							stringClassicVRML.append(indentCharacter).append("stop3ErrorCorrection").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getStop3ErrorCorrection() != STOP3ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("stop3ErrorCorrection ").append(SFFloatObject.toString(getStop3ErrorCorrection())).append("\n").append(indent).append(indentCharacter);
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

		setAutoCalc(getAutoCalc()); // exercise field checks, simple types

		setAxis1Angle(getAxis1Angle()); // exercise field checks, simple types

		setAxis1Torque(getAxis1Torque()); // exercise field checks, simple types

		setAxis2Angle(getAxis2Angle()); // exercise field checks, simple types

		setAxis2Torque(getAxis2Torque()); // exercise field checks, simple types

		setAxis3Angle(getAxis3Angle()); // exercise field checks, simple types

		setAxis3Torque(getAxis3Torque()); // exercise field checks, simple types

		setEnabledAxes(getEnabledAxes()); // exercise field checks, simple types

		setForceOutput(getForceOutput()); // exercise field checks, simple types

		setMotor1Axis(getMotor1Axis()); // exercise field checks, simple types

		setMotor2Axis(getMotor2Axis()); // exercise field checks, simple types

		setMotor3Axis(getMotor3Axis()); // exercise field checks, simple types

		setStop1Bounce(getStop1Bounce()); // exercise field checks, simple types

		setStop1ErrorCorrection(getStop1ErrorCorrection()); // exercise field checks, simple types

		setStop2Bounce(getStop2Bounce()); // exercise field checks, simple types

		setStop2ErrorCorrection(getStop2ErrorCorrection()); // exercise field checks, simple types

		setStop3Bounce(getStop3Bounce()); // exercise field checks, simple types

		setStop3ErrorCorrection(getStop3ErrorCorrection()); // exercise field checks, simple types

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
			String errorNotice = "MotorJoint USE='" + getUSE() + "' is not allowed to have contained SFNode body1";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "MotorJoint USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "MotorJoint USE='" + getUSE() + "' is not allowed to have contained SFNode body2";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "MotorJoint USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "MotorJoint USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "MotorJoint USE='" + getUSE() + "' is not allowed to have contained comments";
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
