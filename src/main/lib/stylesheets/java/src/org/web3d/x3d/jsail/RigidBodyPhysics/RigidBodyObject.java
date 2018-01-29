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
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>:  (X3D version 3.2 or later) RigidBody describes a collection of shapes with a mass distribution that is affected by the physics model.
Contains a Sphere, Box, or Cone (containerField='massDensityModel') and multiple CollidableOffset or CollidableShape nodes (containerField='geometry') for animating collidable geometry.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#RigidBody" target="blank">X3D Abstract Specification: RigidBody</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#RigidBody" target="_blank">X3D Tooltips: RigidBody</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class RigidBodyObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.RigidBodyPhysics.RigidBody
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float angularDampingFactor; // SFFloat

	private float[] angularVelocity; // SFVec3f

	private boolean autoDamp; // SFBool

	private boolean autoDisable; // SFBool

	private float[] centerOfMass; // SFVec3f

	private float disableAngularSpeed; // SFFloat

	private float disableLinearSpeed; // SFFloat

	private double disableTime; // SFTime

	private boolean enabled; // SFBool

	private float[] finiteRotationAxis; // SFVec3f

	private boolean fixed; // SFBool

	private float[] forces; // MFVec3f

	private ArrayList<X3DNBodyCollidableNode> geometry = new ArrayList<>(); // MFNode acceptable node types: X3DNBodyCollidableNode

	private float[] inertia; // SFMatrix3f

	private float linearDampingFactor; // SFFloat

	private float[] linearVelocity; // SFVec3f

	private float mass; // SFFloat

	private X3DNode massDensityModel; // SFNode acceptable node types: Sphere|Box|Cone
	private ProtoInstanceObject massDensityModelProtoInstance; // allowed alternative for massDensityModel field

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private float[] orientation; // SFRotation

	private float[] position; // SFVec3f

	private float[] torques; // MFVec3f

	private boolean useFiniteRotation; // SFBool

	private boolean useGlobalGravity; // SFBool

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>RigidBody</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "RigidBody";

	/** Provides name of this element: <i>RigidBody</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>RigidBody</i> element: <i>RigidBodyPhysics</i> */
	public static final String COMPONENT = "RigidBodyPhysics";

	/** Defines X3D component for the <i>RigidBody</i> element: <i>RigidBodyPhysics</i>
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

	/** SFFloat field named <i>angularDampingFactor</i> has default value <i>0.001f</i> (Java syntax) or <i>0.001</i> (XML syntax). */
	public static final float ANGULARDAMPINGFACTOR_DEFAULT_VALUE = 0.001f;

	/** SFVec3f field named <i>angularVelocity</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] ANGULARVELOCITY_DEFAULT_VALUE = {0f,0f,0f};

	/** SFBool field named <i>autoDamp</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean AUTODAMP_DEFAULT_VALUE = false;

	/** SFBool field named <i>autoDisable</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean AUTODISABLE_DEFAULT_VALUE = false;

	/** SFVec3f field named <i>centerOfMass</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] CENTEROFMASS_DEFAULT_VALUE = {0f,0f,0f};

	/** SFFloat field named <i>disableAngularSpeed</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float DISABLEANGULARSPEED_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>disableLinearSpeed</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float DISABLELINEARSPEED_DEFAULT_VALUE = 0f;

	/** SFTime field named <i>disableTime</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final double DISABLETIME_DEFAULT_VALUE = 0;

	/** SFBool field named <i>enabled</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENABLED_DEFAULT_VALUE = true;

	/** SFVec3f field named <i>finiteRotationAxis</i> has default value <i>{0f,1f,0f}</i> (Java syntax) or <i>0 1 0</i> (XML syntax). */
	public static final float[] FINITEROTATIONAXIS_DEFAULT_VALUE = {0f,1f,0f};

	/** SFBool field named <i>fixed</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean FIXED_DEFAULT_VALUE = false;

	/** SFMatrix3f field named <i>inertia</i> has default value <i>{1f,0f,0f,0f,1f,0f,0f,0f,1f}</i> (Java syntax) or <i>1 0 0 0 1 0 0 0 1</i> (XML syntax). */
	public static final float[] INERTIA_DEFAULT_VALUE = {1f,0f,0f,0f,1f,0f,0f,0f,1f};

	/** SFFloat field named <i>linearDampingFactor</i> has default value <i>0.001f</i> (Java syntax) or <i>0.001</i> (XML syntax). */
	public static final float LINEARDAMPINGFACTOR_DEFAULT_VALUE = 0.001f;

	/** SFVec3f field named <i>linearVelocity</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] LINEARVELOCITY_DEFAULT_VALUE = {0f,0f,0f};

	/** SFFloat field named <i>mass</i> has default value <i>1f</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final float MASS_DEFAULT_VALUE = 1f;

	/** SFRotation field named <i>orientation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] ORIENTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** SFVec3f field named <i>position</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] POSITION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFBool field named <i>useFiniteRotation</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean USEFINITEROTATION_DEFAULT_VALUE = false;

	/** SFBool field named <i>useGlobalGravity</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean USEGLOBALGRAVITY_DEFAULT_VALUE = true;

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
			case "angularDampingFactor":
				result = "SFFloat";
				break;
			case "angularVelocity":
				result = "SFVec3f";
				break;
			case "autoDamp":
				result = "SFBool";
				break;
			case "autoDisable":
				result = "SFBool";
				break;
			case "centerOfMass":
				result = "SFVec3f";
				break;
			case "disableAngularSpeed":
				result = "SFFloat";
				break;
			case "disableLinearSpeed":
				result = "SFFloat";
				break;
			case "disableTime":
				result = "SFTime";
				break;
			case "enabled":
				result = "SFBool";
				break;
			case "finiteRotationAxis":
				result = "SFVec3f";
				break;
			case "fixed":
				result = "SFBool";
				break;
			case "forces":
				result = "MFVec3f";
				break;
			case "geometry":
				result = "MFNode";
				break;
			case "inertia":
				result = "SFMatrix3f";
				break;
			case "linearDampingFactor":
				result = "SFFloat";
				break;
			case "linearVelocity":
				result = "SFVec3f";
				break;
			case "mass":
				result = "SFFloat";
				break;
			case "massDensityModel":
				result = "SFNode";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "orientation":
				result = "SFRotation";
				break;
			case "position":
				result = "SFVec3f";
				break;
			case "torques":
				result = "MFVec3f";
				break;
			case "useFiniteRotation":
				result = "SFBool";
				break;
			case "useGlobalGravity":
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
			case "angularDampingFactor":
				result = "inputOutput";
				break;
			case "angularVelocity":
				result = "inputOutput";
				break;
			case "autoDamp":
				result = "inputOutput";
				break;
			case "autoDisable":
				result = "inputOutput";
				break;
			case "centerOfMass":
				result = "inputOutput";
				break;
			case "disableAngularSpeed":
				result = "inputOutput";
				break;
			case "disableLinearSpeed":
				result = "inputOutput";
				break;
			case "disableTime":
				result = "inputOutput";
				break;
			case "enabled":
				result = "inputOutput";
				break;
			case "finiteRotationAxis":
				result = "inputOutput";
				break;
			case "fixed":
				result = "inputOutput";
				break;
			case "forces":
				result = "inputOutput";
				break;
			case "geometry":
				result = "inputOutput";
				break;
			case "inertia":
				result = "inputOutput";
				break;
			case "linearDampingFactor":
				result = "inputOutput";
				break;
			case "linearVelocity":
				result = "inputOutput";
				break;
			case "mass":
				result = "inputOutput";
				break;
			case "massDensityModel":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "orientation":
				result = "inputOutput";
				break;
			case "position":
				result = "inputOutput";
				break;
			case "torques":
				result = "inputOutput";
				break;
			case "useFiniteRotation":
				result = "inputOutput";
				break;
			case "useGlobalGravity":
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
	String containerField_DEFAULT_VALUE = "bodies";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFFloat field named <i>angularDampingFactor</i>. */
	public static final String fromField_ANGULARDAMPINGFACTOR = "angularDampingFactor";

	/** toField ROUTE name for SFFloat field named <i>angularDampingFactor</i>. */
	public static final String toField_ANGULARDAMPINGFACTOR = "angularDampingFactor";

	/** fromField ROUTE name for SFVec3f field named <i>angularVelocity</i>. */
	public static final String fromField_ANGULARVELOCITY = "angularVelocity";

	/** toField ROUTE name for SFVec3f field named <i>angularVelocity</i>. */
	public static final String toField_ANGULARVELOCITY = "angularVelocity";

	/** fromField ROUTE name for SFBool field named <i>autoDamp</i>. */
	public static final String fromField_AUTODAMP = "autoDamp";

	/** toField ROUTE name for SFBool field named <i>autoDamp</i>. */
	public static final String toField_AUTODAMP = "autoDamp";

	/** fromField ROUTE name for SFBool field named <i>autoDisable</i>. */
	public static final String fromField_AUTODISABLE = "autoDisable";

	/** toField ROUTE name for SFBool field named <i>autoDisable</i>. */
	public static final String toField_AUTODISABLE = "autoDisable";

	/** fromField ROUTE name for SFVec3f field named <i>centerOfMass</i>. */
	public static final String fromField_CENTEROFMASS = "centerOfMass";

	/** toField ROUTE name for SFVec3f field named <i>centerOfMass</i>. */
	public static final String toField_CENTEROFMASS = "centerOfMass";

	/** fromField ROUTE name for SFFloat field named <i>disableAngularSpeed</i>. */
	public static final String fromField_DISABLEANGULARSPEED = "disableAngularSpeed";

	/** toField ROUTE name for SFFloat field named <i>disableAngularSpeed</i>. */
	public static final String toField_DISABLEANGULARSPEED = "disableAngularSpeed";

	/** fromField ROUTE name for SFFloat field named <i>disableLinearSpeed</i>. */
	public static final String fromField_DISABLELINEARSPEED = "disableLinearSpeed";

	/** toField ROUTE name for SFFloat field named <i>disableLinearSpeed</i>. */
	public static final String toField_DISABLELINEARSPEED = "disableLinearSpeed";

	/** fromField ROUTE name for SFTime field named <i>disableTime</i>. */
	public static final String fromField_DISABLETIME = "disableTime";

	/** toField ROUTE name for SFTime field named <i>disableTime</i>. */
	public static final String toField_DISABLETIME = "disableTime";

	/** fromField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String fromField_ENABLED = "enabled";

	/** toField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String toField_ENABLED = "enabled";

	/** fromField ROUTE name for SFVec3f field named <i>finiteRotationAxis</i>. */
	public static final String fromField_FINITEROTATIONAXIS = "finiteRotationAxis";

	/** toField ROUTE name for SFVec3f field named <i>finiteRotationAxis</i>. */
	public static final String toField_FINITEROTATIONAXIS = "finiteRotationAxis";

	/** fromField ROUTE name for SFBool field named <i>fixed</i>. */
	public static final String fromField_FIXED = "fixed";

	/** toField ROUTE name for SFBool field named <i>fixed</i>. */
	public static final String toField_FIXED = "fixed";

	/** fromField ROUTE name for MFVec3f field named <i>forces</i>. */
	public static final String fromField_FORCES = "forces";

	/** toField ROUTE name for MFVec3f field named <i>forces</i>. */
	public static final String toField_FORCES = "forces";

	/** fromField ROUTE name for MFNode field named <i>geometry</i>. */
	public static final String fromField_GEOMETRY = "geometry";

	/** toField ROUTE name for MFNode field named <i>geometry</i>. */
	public static final String toField_GEOMETRY = "geometry";

	/** fromField ROUTE name for SFMatrix3f field named <i>inertia</i>. */
	public static final String fromField_INERTIA = "inertia";

	/** toField ROUTE name for SFMatrix3f field named <i>inertia</i>. */
	public static final String toField_INERTIA = "inertia";

	/** fromField ROUTE name for SFFloat field named <i>linearDampingFactor</i>. */
	public static final String fromField_LINEARDAMPINGFACTOR = "linearDampingFactor";

	/** toField ROUTE name for SFFloat field named <i>linearDampingFactor</i>. */
	public static final String toField_LINEARDAMPINGFACTOR = "linearDampingFactor";

	/** fromField ROUTE name for SFVec3f field named <i>linearVelocity</i>. */
	public static final String fromField_LINEARVELOCITY = "linearVelocity";

	/** toField ROUTE name for SFVec3f field named <i>linearVelocity</i>. */
	public static final String toField_LINEARVELOCITY = "linearVelocity";

	/** fromField ROUTE name for SFFloat field named <i>mass</i>. */
	public static final String fromField_MASS = "mass";

	/** toField ROUTE name for SFFloat field named <i>mass</i>. */
	public static final String toField_MASS = "mass";

	/** fromField ROUTE name for SFNode field named <i>massDensityModel</i>. */
	public static final String fromField_MASSDENSITYMODEL = "massDensityModel";

	/** toField ROUTE name for SFNode field named <i>massDensityModel</i>. */
	public static final String toField_MASSDENSITYMODEL = "massDensityModel";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFRotation field named <i>orientation</i>. */
	public static final String fromField_ORIENTATION = "orientation";

	/** toField ROUTE name for SFRotation field named <i>orientation</i>. */
	public static final String toField_ORIENTATION = "orientation";

	/** fromField ROUTE name for SFVec3f field named <i>position</i>. */
	public static final String fromField_POSITION = "position";

	/** toField ROUTE name for SFVec3f field named <i>position</i>. */
	public static final String toField_POSITION = "position";

	/** fromField ROUTE name for MFVec3f field named <i>torques</i>. */
	public static final String fromField_TORQUES = "torques";

	/** toField ROUTE name for MFVec3f field named <i>torques</i>. */
	public static final String toField_TORQUES = "torques";

	/** fromField ROUTE name for SFBool field named <i>useFiniteRotation</i>. */
	public static final String fromField_USEFINITEROTATION = "useFiniteRotation";

	/** toField ROUTE name for SFBool field named <i>useFiniteRotation</i>. */
	public static final String toField_USEFINITEROTATION = "useFiniteRotation";

	/** fromField ROUTE name for SFBool field named <i>useGlobalGravity</i>. */
	public static final String fromField_USEGLOBALGRAVITY = "useGlobalGravity";

	/** toField ROUTE name for SFBool field named <i>useGlobalGravity</i>. */
	public static final String toField_USEGLOBALGRAVITY = "useGlobalGravity";

	/** Constructor for RigidBodyObject to initialize member variables with default values. */
	public RigidBodyObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "bodies" };

		angularDampingFactor = ANGULARDAMPINGFACTOR_DEFAULT_VALUE;
		angularVelocity = ANGULARVELOCITY_DEFAULT_VALUE;
		autoDamp = AUTODAMP_DEFAULT_VALUE;
		autoDisable = AUTODISABLE_DEFAULT_VALUE;
		centerOfMass = CENTEROFMASS_DEFAULT_VALUE;
		disableAngularSpeed = DISABLEANGULARSPEED_DEFAULT_VALUE;
		disableLinearSpeed = DISABLELINEARSPEED_DEFAULT_VALUE;
		disableTime = DISABLETIME_DEFAULT_VALUE;
		enabled = ENABLED_DEFAULT_VALUE;
		finiteRotationAxis = FINITEROTATIONAXIS_DEFAULT_VALUE;
		fixed = FIXED_DEFAULT_VALUE;
		forces =  new float[] { };
		geometry = new ArrayList<>();
		inertia = INERTIA_DEFAULT_VALUE;
		linearDampingFactor = LINEARDAMPINGFACTOR_DEFAULT_VALUE;
		linearVelocity = LINEARVELOCITY_DEFAULT_VALUE;
		mass = MASS_DEFAULT_VALUE;
		massDensityModel = null; // clear out any prior node
		metadata = null; // clear out any prior node
		orientation = ORIENTATION_DEFAULT_VALUE;
		position = POSITION_DEFAULT_VALUE;
		torques =  new float[] { };
		useFiniteRotation = USEFINITEROTATION_DEFAULT_VALUE;
		useGlobalGravity = USEGLOBALGRAVITY_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value from inputOutput SFFloat field named <i>angularDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] angularDampingFactor automatically damps a portion of body motion over time.  * <br>

	 * @return value of angularDampingFactor field
	 */
	@Override
	public float getAngularDampingFactor()
	{
		return angularDampingFactor;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>angularDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] angularDampingFactor automatically damps a portion of body motion over time.
	 * @param newValue is new value for the angularDampingFactor field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setAngularDampingFactor(float newValue)
	{
		angularDampingFactor = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat angularDampingFactor field, similar to {@link #setAngularDampingFactor(float)}.
	 * @param newValue is new value for the angularDampingFactor field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setAngularDampingFactor(SFFloatObject newValue)
	{
		setAngularDampingFactor(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>angularVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> angularVelocity sets constant velocity value to object every frame, and reports updates by physics model.
 * <ul>
 *  <li> <i>Hint:</i> initial value only applied during first frame if forces applied. </li> 
 *  <li> <i>Warning:</i>  instantaneous velocity changes may lead to numerical instability. </li> 
 * </ul>
	 * @return value of angularVelocity field
	 */
	@Override
	public float[] getAngularVelocity()
	{
		return angularVelocity;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>angularVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> angularVelocity sets constant velocity value to object every frame, and reports updates by physics model. Hint: initial value only applied during first frame if forces applied. Warning: instantaneous velocity changes may lead to numerical instability.
	 * @param newValue is new value for the angularVelocity field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setAngularVelocity(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody angularVelocity newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		angularVelocity = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f angularVelocity field, similar to {@link #setAngularVelocity(float[])}.
	 * @param newValue is new value for the angularVelocity field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setAngularVelocity(SFVec3fObject newValue)
	{
		setAngularVelocity(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f angularVelocity field, similar to {@link #setAngularVelocity(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setAngularVelocity(float x, float y, float z)
	{
		setAngularVelocity(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>autoDamp</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  autoDamp enables/disables angularDampingFactor and linearDampingFactor.  * <br>

	 * @return value of autoDamp field
	 */
	@Override
	public boolean getAutoDamp()
	{
		return autoDamp;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>autoDamp</i>.
	 * <br><br>
	 * <i>Tooltip:</i> autoDamp enables/disables angularDampingFactor and linearDampingFactor.
	 * @param newValue is new value for the autoDamp field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setAutoDamp(boolean newValue)
	{
		autoDamp = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool autoDamp field, similar to {@link #setAutoDamp(boolean)}.
	 * @param newValue is new value for the autoDamp field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setAutoDamp(SFBoolObject newValue)
	{
		setAutoDamp(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>autoDisable</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  autoDisable toggles operation of disableAngularSpeed, disableLinearSpeed, disableTime.  * <br>

	 * @return value of autoDisable field
	 */
	@Override
	public boolean getAutoDisable()
	{
		return autoDisable;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>autoDisable</i>.
	 * <br><br>
	 * <i>Tooltip:</i> autoDisable toggles operation of disableAngularSpeed, disableLinearSpeed, disableTime.
	 * @param newValue is new value for the autoDisable field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setAutoDisable(boolean newValue)
	{
		autoDisable = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool autoDisable field, similar to {@link #setAutoDisable(boolean)}.
	 * @param newValue is new value for the autoDisable field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setAutoDisable(SFBoolObject newValue)
	{
		setAutoDisable(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  centerOfMass defines local center of mass for physics calculations.  * <br>

	 * @return value of centerOfMass field
	 */
	@Override
	public float[] getCenterOfMass()
	{
		return centerOfMass;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> centerOfMass defines local center of mass for physics calculations.
	 * @param newValue is new value for the centerOfMass field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setCenterOfMass(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody centerOfMass newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		centerOfMass = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f centerOfMass field, similar to {@link #setCenterOfMass(float[])}.
	 * @param newValue is new value for the centerOfMass field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setCenterOfMass(SFVec3fObject newValue)
	{
		setCenterOfMass(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f centerOfMass field, similar to {@link #setCenterOfMass(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setCenterOfMass(float x, float y, float z)
	{
		setCenterOfMass(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>disableAngularSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableAngularSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculations, reducing numeric instabilities.
 * <ul>
 *  <li> <i> Hint:</i>  only activated if autoDisable='true'. </li> 
 * </ul>
	 * @return value of disableAngularSpeed field
	 */
	@Override
	public float getDisableAngularSpeed()
	{
		return disableAngularSpeed;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>disableAngularSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableAngularSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculations, reducing numeric instabilities. Hint: only activated if autoDisable='true'.
	 * @param newValue is new value for the disableAngularSpeed field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setDisableAngularSpeed(float newValue)
	{
		disableAngularSpeed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat disableAngularSpeed field, similar to {@link #setDisableAngularSpeed(float)}.
	 * @param newValue is new value for the disableAngularSpeed field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setDisableAngularSpeed(SFFloatObject newValue)
	{
		setDisableAngularSpeed(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>disableLinearSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableLinearSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculation, reducing numeric instabilitiess.
 * <ul>
 *  <li> <i> Hint:</i>  only activated if autoDisable='true'. </li> 
 * </ul>
	 * @return value of disableLinearSpeed field
	 */
	@Override
	public float getDisableLinearSpeed()
	{
		return disableLinearSpeed;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>disableLinearSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableLinearSpeed defines lower-limit tolerance value when body is considered at rest and not part of rigid body calculation, reducing numeric instabilitiess. Hint: only activated if autoDisable='true'.
	 * @param newValue is new value for the disableLinearSpeed field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setDisableLinearSpeed(float newValue)
	{
		disableLinearSpeed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat disableLinearSpeed field, similar to {@link #setDisableLinearSpeed(float)}.
	 * @param newValue is new value for the disableLinearSpeed field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setDisableLinearSpeed(SFFloatObject newValue)
	{
		setDisableLinearSpeed(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>disableTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableTime defines interval when body becomes at rest and not part of rigid body calculations, reducing numeric instabilities.
 * <ul>
 *  <li> <i> Hint:</i>  only activated if autoDisable='true'. </li> 
 * </ul>
	 * @return value of disableTime field
	 */
	@Override
	public double getDisableTime()
	{
		return disableTime;
	}

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>disableTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) disableTime defines interval when body becomes at rest and not part of rigid body calculations, reducing numeric instabilities. Hint: only activated if autoDisable='true'.
	 * @param newValue is new value for the disableTime field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setDisableTime(double newValue)
	{
		disableTime = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime disableTime field, similar to {@link #setDisableTime(double)}.
	 * @param newValue is new value for the disableTime field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setDisableTime(SFTimeObject newValue)
	{
		setDisableTime(newValue.getPrimitiveValue());
		return this;
	}
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setEnabled(boolean newValue)
	{
		enabled = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool enabled field, similar to {@link #setEnabled(boolean)}.
	 * @param newValue is new value for the enabled field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setEnabled(SFBoolObject newValue)
	{
		setEnabled(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results unit axis, angle (in radians) from inputOutput SFVec3f field named <i>finiteRotationAxis</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  finiteRotationAxis specifies vector around which the object rotates.  * <br>

	 * @return value of finiteRotationAxis field
	 */
	@Override
	public float[] getFiniteRotationAxis()
	{
		return finiteRotationAxis;
	}

	/**
	 * Assign 3-tuple float array unit axis, angle (in radians) to inputOutput SFVec3f field named <i>finiteRotationAxis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> finiteRotationAxis specifies vector around which the object rotates.
	 * @param newValue is new value for the finiteRotationAxis field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setFiniteRotationAxis(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody finiteRotationAxis newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		finiteRotationAxis = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f finiteRotationAxis field, similar to {@link #setFiniteRotationAxis(float[])}.
	 * @param newValue is new value for the finiteRotationAxis field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setFiniteRotationAxis(SFVec3fObject newValue)
	{
		setFiniteRotationAxis(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f finiteRotationAxis field, similar to {@link #setFiniteRotationAxis(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setFiniteRotationAxis(float x, float y, float z)
	{
		setFiniteRotationAxis(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>fixed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> fixed indicates whether body is able to move.
 * <ul>
 *  <li> <i> Hint:</i>  fixed is useful for indicating objects that do not move: walls, ground, etc. </li> 
 * </ul>
	 * @return value of fixed field
	 */
	@Override
	public boolean getFixed()
	{
		return fixed;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>fixed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> fixed indicates whether body is able to move. Hint: fixed is useful for indicating objects that do not move: walls, ground, etc.
	 * @param newValue is new value for the fixed field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setFixed(boolean newValue)
	{
		fixed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool fixed field, similar to {@link #setFixed(boolean)}.
	 * @param newValue is new value for the fixed field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setFixed(SFBoolObject newValue)
	{
		setFixed(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput MFVec3f field named <i>forces</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  forces defines linear force values applied to the object every frame.  * <br>

	 * @return value of forces field
	 */
	@Override
	public float[] getForces()
	{
		return forces;
	}

	/**
	 * Assign 3-tuple float array to inputOutput MFVec3f field named <i>forces</i>.
	 * <br><br>
	 * <i>Tooltip:</i> forces defines linear force values applied to the object every frame.
	 * @param newValue is new value for the forces field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setForces(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 3 != 0) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody forces newValue=" + MFVec3fObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 3");
		}
		forces = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFVec3f forces field, similar to {@link #setForces(float[])}.
	 * @param newValue is new value for the forces field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setForces(MFVec3fObject newValue)
	{
		setForces(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of X3DNBodyCollidableNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>geometry</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollidableNode.
	 * @see org.web3d.x3d.sai.RigidBodyPhysics.X3DNBodyCollidableNode
	 * @return value of geometry field
	 */
	@Override
	public X3DNode[] getGeometry()
	{
		final X3DNode[] valuesArray = new X3DNode[geometry.size()];
		int i = 0;
		for (X3DNBodyCollidableNode arrayElement : geometry) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode geometry field, similar to {@link #getGeometry()}.

	 * @return value of geometry field
	 */
	public ArrayList<X3DNBodyCollidableNode> getGeometryList()
	{
		return geometry;
	}

	/**
	 * Assign X3DNBodyCollidableNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>geometry</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollidableNode.
	 * @param newValue is new value for the geometry field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setGeometry(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearGeometry(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geometry.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNBodyCollidableNode)
			{
				geometry.add((X3DNBodyCollidableNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNBodyCollidableNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode geometry field, similar to {@link #setGeometry(X3DNode[])}.
	 * @param newValue is new value for the geometry field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setGeometry(ArrayList<X3DNBodyCollidableNode> newValue)
	{
		if (newValue == null)
		{
			clearGeometry(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geometry = newValue;
		for (X3DNBodyCollidableNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child geometry node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollidableNode.
	 * @param newValue is new value to be appended the geometry field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public RigidBodyObject addGeometry(X3DNBodyCollidableNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		geometry.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child geometry nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DNBodyCollidableNode.
	 * @param newValue is new value array to be appended the geometry field.
	 */
	@Override
	public void addGeometry(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNBodyCollidableNode)
			{
				geometry.add((X3DNBodyCollidableNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNBodyCollidableNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child geometry node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DNBodyCollidableNode.
	 * @param newValue is new node for the geometry field (restricted to X3DNBodyCollidableNode)
	 */
	@Override
	public void setGeometry(X3DNode newValue)
	{
		if (newValue == null)
		{
			geometry.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DNBodyCollidableNode)
		{
			for (X3DNBodyCollidableNode element : geometry)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			geometry.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			geometry.add((X3DNBodyCollidableNode)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DNBodyCollidableNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of geometry field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public RigidBodyObject clearGeometry()
	{
		for (X3DNBodyCollidableNode element : geometry)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		geometry.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>geometry</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getGeometry()
	 */
	public boolean hasGeometry()
	{
		return (!geometry.isEmpty());
	}
	/**
	 * Provide array of float results from inputOutput SFMatrix3f field named <i>inertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i> inertia matrix defines a 3x2 inertia tensor matrix.
 * <ul>
 *  <li> <i> Warning:</i>  only the first 6 values are used. </li> 
 * </ul>
	 * @return value of inertia field
	 */
	@Override
	public float[] getInertia()
	{
		return inertia;
	}

	/**
	 * Assign float array to inputOutput SFMatrix3f field named <i>inertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i> inertia matrix defines a 3x2 inertia tensor matrix. Warning: only the first 6 values are used.
	 * @param newValue is new value for the inertia field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setInertia(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 9) // 9-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody inertia newValue=" + SFMatrix3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 9");
		}
		inertia = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFMatrix3f inertia field, similar to {@link #setInertia(float[])}.
	 * @param newValue is new value for the inertia field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setInertia(SFMatrix3fObject newValue)
	{
		setInertia(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>linearDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] linearDampingFactor automatically damps a portion of body motion over time.  * <br>

	 * @return value of linearDampingFactor field
	 */
	@Override
	public float getLinearDampingFactor()
	{
		return linearDampingFactor;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>linearDampingFactor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] linearDampingFactor automatically damps a portion of body motion over time.
	 * @param newValue is new value for the linearDampingFactor field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setLinearDampingFactor(float newValue)
	{
		linearDampingFactor = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat linearDampingFactor field, similar to {@link #setLinearDampingFactor(float)}.
	 * @param newValue is new value for the linearDampingFactor field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setLinearDampingFactor(SFFloatObject newValue)
	{
		setLinearDampingFactor(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> linearVelocity sets constant velocity value to object every frame, and reports updates by physics model.
 * <ul>
 *  <li> <i>Hint:</i> initial value only applied during first frame if forces applied. </li> 
 *  <li> <i>Warning:</i>  instantaneous velocity changes may lead to numerical instability. </li> 
 * </ul>
	 * @return value of linearVelocity field
	 */
	@Override
	public float[] getLinearVelocity()
	{
		return linearVelocity;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> linearVelocity sets constant velocity value to object every frame, and reports updates by physics model. Hint: initial value only applied during first frame if forces applied. Warning: instantaneous velocity changes may lead to numerical instability.
	 * @param newValue is new value for the linearVelocity field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setLinearVelocity(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody linearVelocity newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		linearVelocity = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f linearVelocity field, similar to {@link #setLinearVelocity(float[])}.
	 * @param newValue is new value for the linearVelocity field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setLinearVelocity(SFVec3fObject newValue)
	{
		setLinearVelocity(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f linearVelocity field, similar to {@link #setLinearVelocity(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setLinearVelocity(float x, float y, float z)
	{
		setLinearVelocity(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,1] mass of the body in kilograms.
 * <ul>
 *  <li> <i> Warning:</i>  mass must be greater than 0. </li> 
 * </ul>
	 * @return value of mass field
	 */
	@Override
	public float getMass()
	{
		return mass;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,1] mass of the body in kilograms. Warning: mass must be greater than 0.
	 * @param newValue is new value for the mass field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setMass(float newValue)
	{
		mass = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat mass field, similar to {@link #setMass(float)}.
	 * @param newValue is new value for the mass field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setMass(SFFloatObject newValue)
	{
		setMass(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DNode instance (using a properly typed node) with acceptable node types limited to Sphere|Box|Cone, from inputOutput SFNode field <i>massDensityModel</i>.
	 * @see #getMassDensityModelProtoInstance()
	 * @return value of massDensityModel field
	 */
	@Override
	public X3DNode getMassDensityModel()
	{
		return massDensityModel;
	}

	/**
	 * Assign X3DNode instance (using a properly typed node) with acceptable node types limited to Sphere|Box|Cone, to inputOutput SFNode field <i>massDensityModel</i>.
	 * @see #setMassDensityModel(ProtoInstanceObject)
	 * @param newValue is new value for the massDensityModel field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setMassDensityModel(X3DNode newValue)
	{
		massDensityModel = newValue;
		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Geometry3D.SphereObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Geometry3D.BoxObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Geometry3D.ConeObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes Sphere|Box|Cone; newValue=" + newValue);
		}

		if (newValue != null)
		{
			((X3DConcreteElement) massDensityModel).setParentObject(this); // parentTest15
		}
		if (massDensityModelProtoInstance != null)
		{
			massDensityModelProtoInstance.setParentObject(null); // housekeeping, clear prior object
			massDensityModelProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of massDensityModel field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public RigidBodyObject clearMassDensityModel()
	{
		((X3DConcreteElement) massDensityModel).clearParentObject(); // remove references to facilitate Java memory management
		massDensityModel = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>massDensityModel</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node types Sphere|Box|Cone.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the massDensityModel field
	 * @see #setMassDensityModel(X3DNode)
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public RigidBodyObject setMassDensityModel(ProtoInstanceObject newProtoInstanceNode)
	{
		if (massDensityModel != null)
		{
			((X3DConcreteElement) massDensityModel).setParentObject(null); // housekeeping, clear prior object
			massDensityModel = null;
		}
		massDensityModelProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>massDensityModel</i>, if available.
	 * @see #getMassDensityModel()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getMassDensityModelProtoInstance()
	{
		return massDensityModelProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>massDensityModel</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getMassDensityModel()
	 * @see #getMassDensityModelProtoInstance()
	 */
	public boolean hasMassDensityModel()
	{
		return (massDensityModel != null) || (massDensityModelProtoInstance != null);
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public RigidBodyObject clearMetadata()
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public RigidBodyObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  orientation sets body direction in world space, then reports physics updates.  * <br>

	 * @return value of orientation field
	 */
	@Override
	public float[] getOrientation()
	{
		return orientation;
	}

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> orientation sets body direction in world space, then reports physics updates.
	 * @param newValue is new value for the orientation field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setOrientation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody orientation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		orientation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation orientation field, similar to {@link #setOrientation(float[])}.
	 * @param newValue is new value for the orientation field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setOrientation(SFRotationObject newValue)
	{
		setOrientation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFRotation orientation field, similar to {@link #setOrientation(float[])}.

	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis

	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setOrientation(float x, float y, float z, float angleRadians)
	{
		setOrientation(new float[] {x, y, z, angleRadians});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  position sets body location in world space, then reports physics updates.  * <br>

	 * @return value of position field
	 */
	@Override
	public float[] getPosition()
	{
		return position;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i> position sets body location in world space, then reports physics updates.
	 * @param newValue is new value for the position field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setPosition(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody position newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		position = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f position field, similar to {@link #setPosition(float[])}.
	 * @param newValue is new value for the position field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setPosition(SFVec3fObject newValue)
	{
		setPosition(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f position field, similar to {@link #setPosition(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setPosition(float x, float y, float z)
	{
		setPosition(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput MFVec3f field named <i>torques</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  torques defines rotational force values applied to the object every frame.  * <br>

	 * @return value of torques field
	 */
	@Override
	public float[] getTorques()
	{
		return torques;
	}

	/**
	 * Assign 3-tuple float array to inputOutput MFVec3f field named <i>torques</i>.
	 * <br><br>
	 * <i>Tooltip:</i> torques defines rotational force values applied to the object every frame.
	 * @param newValue is new value for the torques field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setTorques(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 3 != 0) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody torques newValue=" + MFVec3fObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 3");
		}
		torques = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFVec3f torques field, similar to {@link #setTorques(float[])}.
	 * @param newValue is new value for the torques field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setTorques(MFVec3fObject newValue)
	{
		setTorques(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value unit axis, angle (in radians) from inputOutput SFBool field named <i>useFiniteRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  useFiniteRotation enables/disables higher-resolution, higher-cost computational method for calculating rotations.  * <br>

	 * @return value of useFiniteRotation field
	 */
	@Override
	public boolean getUseFiniteRotation()
	{
		return useFiniteRotation;
	}

	/**
	 * Assign boolean value unit axis, angle (in radians) to inputOutput SFBool field named <i>useFiniteRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> useFiniteRotation enables/disables higher-resolution, higher-cost computational method for calculating rotations.
	 * @param newValue is new value for the useFiniteRotation field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setUseFiniteRotation(boolean newValue)
	{
		useFiniteRotation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool useFiniteRotation field, similar to {@link #setUseFiniteRotation(boolean)}.
	 * @param newValue is new value for the useFiniteRotation field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setUseFiniteRotation(SFBoolObject newValue)
	{
		setUseFiniteRotation(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>useGlobalGravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> useGlobalGravity indicates whether this particular body is influenced by parent RigidBodyCollection's gravity setting.
 * <ul>
 *  <li> <i> Hint:</i>  contained sub-bodies are not affected by this setting. </li> 
 * </ul>
	 * @return value of useGlobalGravity field
	 */
	@Override
	public boolean getUseGlobalGravity()
	{
		return useGlobalGravity;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>useGlobalGravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> useGlobalGravity indicates whether this particular body is influenced by parent RigidBodyCollection's gravity setting. Hint: contained sub-bodies are not affected by this setting.
	 * @param newValue is new value for the useGlobalGravity field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setUseGlobalGravity(boolean newValue)
	{
		useGlobalGravity = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool useGlobalGravity field, similar to {@link #setUseGlobalGravity(boolean)}.
	 * @param newValue is new value for the useGlobalGravity field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setUseGlobalGravity(SFBoolObject newValue)
	{
		setUseGlobalGravity(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final RigidBodyObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to RigidBody
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("RigidBody DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setDEF(SFStringObject newValue)
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final RigidBodyObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to RigidBody
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBody USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("RigidBody USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final RigidBodyObject setCssClass(String newValue)
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setCssClass(SFStringObject newValue)
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyObject setIS(ISObject newValue)
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyObject setUSE(RigidBodyObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on RigidBodyObject" +
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
	public RigidBodyObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public RigidBodyObject addComments (String newComment)
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public RigidBodyObject addComments (String[] newComments)
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
	 * @return {@link RigidBodyObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public RigidBodyObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (!geometry.isEmpty()) || (massDensityModel != null) || (massDensityModelProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<RigidBody"); // start opening tag
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
                            
			if (((getAngularDampingFactor() != ANGULARDAMPINGFACTOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" angularDampingFactor='").append(SFFloatObject.toString(getAngularDampingFactor())).append("'");
			}
			if ((!Arrays.equals(getAngularVelocity(), ANGULARVELOCITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" angularVelocity='").append(SFVec3fObject.toString(getAngularVelocity())).append("'");
			}
			if (((getAutoDamp() != AUTODAMP_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" autoDamp='").append(SFBoolObject.toString(getAutoDamp())).append("'");
			}
			if (((getAutoDisable() != AUTODISABLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" autoDisable='").append(SFBoolObject.toString(getAutoDisable())).append("'");
			}
			if ((!Arrays.equals(getCenterOfMass(), CENTEROFMASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" centerOfMass='").append(SFVec3fObject.toString(getCenterOfMass())).append("'");
			}
			if (((getDisableAngularSpeed() != DISABLEANGULARSPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" disableAngularSpeed='").append(SFFloatObject.toString(getDisableAngularSpeed())).append("'");
			}
			if (((getDisableLinearSpeed() != DISABLELINEARSPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" disableLinearSpeed='").append(SFFloatObject.toString(getDisableLinearSpeed())).append("'");
			}
			if (((getDisableTime() != DISABLETIME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" disableTime='").append(SFTimeObject.toString(getDisableTime())).append("'");
			}
			if (((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" enabled='").append(SFBoolObject.toString(getEnabled())).append("'");
			}
			if ((!Arrays.equals(getFiniteRotationAxis(), FINITEROTATIONAXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" finiteRotationAxis='").append(SFVec3fObject.toString(getFiniteRotationAxis())).append("'");
			}
			if (((getFixed() != FIXED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" fixed='").append(SFBoolObject.toString(getFixed())).append("'");
			}
			if ((getForces().length > 0) && !isUSE())
			{
				stringX3D.append(" forces='").append(MFVec3fObject.toString(getForces())).append("'");
			}
			if ((!Arrays.equals(getInertia(), INERTIA_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" inertia='").append(SFMatrix3fObject.toString(getInertia())).append("'");
			}
			if (((getLinearDampingFactor() != LINEARDAMPINGFACTOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" linearDampingFactor='").append(SFFloatObject.toString(getLinearDampingFactor())).append("'");
			}
			if ((!Arrays.equals(getLinearVelocity(), LINEARVELOCITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" linearVelocity='").append(SFVec3fObject.toString(getLinearVelocity())).append("'");
			}
			if (((getMass() != MASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" mass='").append(SFFloatObject.toString(getMass())).append("'");
			}
			if ((!Arrays.equals(getOrientation(), ORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" orientation='").append(SFRotationObject.toString(getOrientation())).append("'");
			}
			if ((!Arrays.equals(getPosition(), POSITION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" position='").append(SFVec3fObject.toString(getPosition())).append("'");
			}
			if ((getTorques().length > 0) && !isUSE())
			{
				stringX3D.append(" torques='").append(MFVec3fObject.toString(getTorques())).append("'");
			}
			if (((getUseFiniteRotation() != USEFINITEROTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" useFiniteRotation='").append(SFBoolObject.toString(getUseFiniteRotation())).append("'");
			}
			if (((getUseGlobalGravity() != USEGLOBALGRAVITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" useGlobalGravity='").append(SFBoolObject.toString(getUseGlobalGravity())).append("'");
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
			for (X3DNBodyCollidableNode element : geometry)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			if      (massDensityModel != null)
			{
				stringX3D.append(((X3DConcreteElement)massDensityModel).toStringX3D(indentLevel + indentIncrement));
			}
			else if (massDensityModelProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)massDensityModelProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</RigidBody>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!geometry.isEmpty()) || (massDensityModel != null) || (massDensityModelProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("RigidBody").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("angularDampingFactor"))
						{
							stringClassicVRML.append(indentCharacter).append("angularDampingFactor").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAngularDampingFactor() != ANGULARDAMPINGFACTOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("angularDampingFactor ").append(SFFloatObject.toString(getAngularDampingFactor())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("angularVelocity"))
						{
							stringClassicVRML.append(indentCharacter).append("angularVelocity").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getAngularVelocity(), ANGULARVELOCITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("angularVelocity ").append(SFVec3fObject.toString(getAngularVelocity())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("autoDamp"))
						{
							stringClassicVRML.append(indentCharacter).append("autoDamp").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAutoDamp() != AUTODAMP_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("autoDamp ").append(SFBoolObject.toString(getAutoDamp())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("autoDisable"))
						{
							stringClassicVRML.append(indentCharacter).append("autoDisable").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getAutoDisable() != AUTODISABLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("autoDisable ").append(SFBoolObject.toString(getAutoDisable())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("centerOfMass"))
						{
							stringClassicVRML.append(indentCharacter).append("centerOfMass").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getCenterOfMass(), CENTEROFMASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("centerOfMass ").append(SFVec3fObject.toString(getCenterOfMass())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("disableAngularSpeed"))
						{
							stringClassicVRML.append(indentCharacter).append("disableAngularSpeed").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getDisableAngularSpeed() != DISABLEANGULARSPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("disableAngularSpeed ").append(SFFloatObject.toString(getDisableAngularSpeed())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("disableLinearSpeed"))
						{
							stringClassicVRML.append(indentCharacter).append("disableLinearSpeed").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getDisableLinearSpeed() != DISABLELINEARSPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("disableLinearSpeed ").append(SFFloatObject.toString(getDisableLinearSpeed())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("disableTime"))
						{
							stringClassicVRML.append(indentCharacter).append("disableTime").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getDisableTime() != DISABLETIME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("disableTime ").append(SFTimeObject.toString(getDisableTime())).append("\n").append(indent).append(indentCharacter);
				}
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
						if (element.getNodeField().equals("finiteRotationAxis"))
						{
							stringClassicVRML.append(indentCharacter).append("finiteRotationAxis").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getFiniteRotationAxis(), FINITEROTATIONAXIS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("finiteRotationAxis ").append(SFVec3fObject.toString(getFiniteRotationAxis())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("fixed"))
						{
							stringClassicVRML.append(indentCharacter).append("fixed").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getFixed() != FIXED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("fixed ").append(SFBoolObject.toString(getFixed())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("forces"))
						{
							stringClassicVRML.append(indentCharacter).append("forces").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getForces().length > 0) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("forces ").append("[ ").append(MFVec3fObject.toString(getForces())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("inertia"))
						{
							stringClassicVRML.append(indentCharacter).append("inertia").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getInertia(), INERTIA_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("inertia ").append(SFMatrix3fObject.toString(getInertia())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("linearDampingFactor"))
						{
							stringClassicVRML.append(indentCharacter).append("linearDampingFactor").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getLinearDampingFactor() != LINEARDAMPINGFACTOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("linearDampingFactor ").append(SFFloatObject.toString(getLinearDampingFactor())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("linearVelocity"))
						{
							stringClassicVRML.append(indentCharacter).append("linearVelocity").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getLinearVelocity(), LINEARVELOCITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("linearVelocity ").append(SFVec3fObject.toString(getLinearVelocity())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("mass"))
						{
							stringClassicVRML.append(indentCharacter).append("mass").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMass() != MASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("mass ").append(SFFloatObject.toString(getMass())).append("\n").append(indent).append(indentCharacter);
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
					stringClassicVRML.append("orientation ").append(SFRotationObject.toString(getOrientation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("position"))
						{
							stringClassicVRML.append(indentCharacter).append("position").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getPosition(), POSITION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("position ").append(SFVec3fObject.toString(getPosition())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("torques"))
						{
							stringClassicVRML.append(indentCharacter).append("torques").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTorques().length > 0) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("torques ").append("[ ").append(MFVec3fObject.toString(getTorques())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("useFiniteRotation"))
						{
							stringClassicVRML.append(indentCharacter).append("useFiniteRotation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getUseFiniteRotation() != USEFINITEROTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("useFiniteRotation ").append(SFBoolObject.toString(getUseFiniteRotation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("useGlobalGravity"))
						{
							stringClassicVRML.append(indentCharacter).append("useGlobalGravity").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getUseGlobalGravity() != USEGLOBALGRAVITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("useGlobalGravity ").append(SFBoolObject.toString(getUseGlobalGravity())).append("\n").append(indent).append(indentCharacter);
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
			if (geometry.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("geometry").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DNBodyCollidableNode element : geometry)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (massDensityModel != null)
			{
				stringClassicVRML.append(indentCharacter).append("massDensityModel").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) massDensityModel).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (massDensityModelProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("massDensityModel").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) massDensityModelProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
		for (X3DNBodyCollidableNode element : geometry) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		if (massDensityModel != null)
		{
			referenceElement = ((X3DConcreteElement) massDensityModel).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (massDensityModelProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) massDensityModelProtoInstance).findElementByNameValue(nameValue, elementName);
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
		for (X3DNBodyCollidableNode element : geometry) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		if (massDensityModel != null)
		{
			referenceNode = ((X3DConcreteElement) massDensityModel).findNodeByDEF(DEFvalue);
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

		setAngularDampingFactor(getAngularDampingFactor()); // exercise field checks, simple types

		setAngularVelocity(getAngularVelocity()); // exercise field checks, simple types

		setAutoDamp(getAutoDamp()); // exercise field checks, simple types

		setAutoDisable(getAutoDisable()); // exercise field checks, simple types

		setCenterOfMass(getCenterOfMass()); // exercise field checks, simple types

		setDisableAngularSpeed(getDisableAngularSpeed()); // exercise field checks, simple types

		setDisableLinearSpeed(getDisableLinearSpeed()); // exercise field checks, simple types

		setDisableTime(getDisableTime()); // exercise field checks, simple types

		setEnabled(getEnabled()); // exercise field checks, simple types

		setFiniteRotationAxis(getFiniteRotationAxis()); // exercise field checks, simple types

		setFixed(getFixed()); // exercise field checks, simple types

		setForces(getForces()); // exercise field checks, simple types

		setInertia(getInertia()); // exercise field checks, simple types

		setLinearDampingFactor(getLinearDampingFactor()); // exercise field checks, simple types

		setLinearVelocity(getLinearVelocity()); // exercise field checks, simple types

		setMass(getMass()); // exercise field checks, simple types

		setOrientation(getOrientation()); // exercise field checks, simple types

		setPosition(getPosition()); // exercise field checks, simple types

		setTorques(getTorques()); // exercise field checks, simple types

		setUseFiniteRotation(getUseFiniteRotation()); // exercise field checks, simple types

		setUseGlobalGravity(getUseGlobalGravity()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		for (X3DNBodyCollidableNode element : geometry) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setGeometry(getGeometry()); // also test getter/setter validation

		if (isUSE() && hasGeometry()) // test USE restrictions
		{
			String errorNotice = "RigidBody USE='" + getUSE() + "' is not allowed to have contained MFNode geometry";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		if (massDensityModel != null)
		{
			setMassDensityModel(getMassDensityModel());
			((X3DConcreteElement) massDensityModel).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) massDensityModel).getValidationResult());
		}
		if (massDensityModelProtoInstance != null)
		{
			setMassDensityModel(getMassDensityModelProtoInstance());
			((X3DConcreteElement) massDensityModelProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) massDensityModelProtoInstance).getValidationResult());
		}
		if ((massDensityModel != null) && (massDensityModelProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both massDensityModel and massDensityModelProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasMassDensityModel()) // test USE restrictions
		{
			String errorNotice = "RigidBody USE='" + getUSE() + "' is not allowed to have contained SFNode massDensityModel";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "RigidBody USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "RigidBody USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "RigidBody USE='" + getUSE() + "' is not allowed to have contained comments";
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
