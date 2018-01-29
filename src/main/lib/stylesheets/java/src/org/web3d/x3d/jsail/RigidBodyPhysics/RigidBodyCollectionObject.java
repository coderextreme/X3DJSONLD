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
 * <i>X3D node tooltip</i>:  (X3D version 3.2 or later) RigidBodyCollection represents a system of bodies that interact within a single physics model.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#RigidBodyCollection" target="blank">X3D Abstract Specification: RigidBodyCollection</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#RigidBodyCollection" target="_blank">X3D Tooltips: RigidBodyCollection</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class RigidBodyCollectionObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.RigidBodyPhysics.RigidBodyCollection
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private boolean autoDisable; // SFBool

	private ArrayList<RigidBody> bodies = new ArrayList<>(); // MFNode acceptable node types: RigidBody

	private CollisionCollection collider; // SFNode acceptable node types: CollisionCollection
	private ProtoInstanceObject colliderProtoInstance; // allowed alternative for collider field

	private float constantForceMix; // SFFloat

	private float contactSurfaceThickness; // SFFloat

	private float disableAngularSpeed; // SFFloat

	private float disableLinearSpeed; // SFFloat

	private double disableTime; // SFTime

	private boolean enabled; // SFBool

	private float errorCorrection; // SFFloat

	private float[] gravity; // SFVec3f

	private int iterations; // SFInt32

	private ArrayList<X3DRigidJointNode> joints = new ArrayList<>(); // MFNode acceptable node types: X3DRigidJointNode

	private float maxCorrectionSpeed; // SFFloat

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private boolean preferAccuracy; // SFBool

	private ArrayList<Contact> contacts = new ArrayList<>(); // MFNode acceptable node types: Contact

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>RigidBodyCollection</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "RigidBodyCollection";

	/** Provides name of this element: <i>RigidBodyCollection</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>RigidBodyCollection</i> element: <i>RigidBodyPhysics</i> */
	public static final String COMPONENT = "RigidBodyPhysics";

	/** Defines X3D component for the <i>RigidBodyCollection</i> element: <i>RigidBodyPhysics</i>
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

	/** SFBool field named <i>autoDisable</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean AUTODISABLE_DEFAULT_VALUE = false;

	/** SFFloat field named <i>constantForceMix</i> has default value <i>0.0001f</i> (Java syntax) or <i>0.0001</i> (XML syntax). */
	public static final float CONSTANTFORCEMIX_DEFAULT_VALUE = 0.0001f;

	/** SFFloat field named <i>contactSurfaceThickness</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float CONTACTSURFACETHICKNESS_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>disableAngularSpeed</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float DISABLEANGULARSPEED_DEFAULT_VALUE = 0f;

	/** SFFloat field named <i>disableLinearSpeed</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float DISABLELINEARSPEED_DEFAULT_VALUE = 0f;

	/** SFTime field named <i>disableTime</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final double DISABLETIME_DEFAULT_VALUE = 0;

	/** SFBool field named <i>enabled</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENABLED_DEFAULT_VALUE = true;

	/** SFFloat field named <i>errorCorrection</i> has default value <i>0.8f</i> (Java syntax) or <i>0.8</i> (XML syntax). */
	public static final float ERRORCORRECTION_DEFAULT_VALUE = 0.8f;

	/** SFVec3f field named <i>gravity</i> has default value <i>{0f,-9.8f,0f}</i> (Java syntax) or <i>0 -9.8 0</i> (XML syntax). */
	public static final float[] GRAVITY_DEFAULT_VALUE = {0f,-9.8f,0f};

	/** SFInt32 field named <i>iterations</i> has default value <i>10</i> (Java syntax) or <i>10</i> (XML syntax). */
	public static final int ITERATIONS_DEFAULT_VALUE = 10;

	/** SFFloat field named <i>maxCorrectionSpeed</i> has default value <i>-1f</i> (Java syntax) or <i>-1</i> (XML syntax). */
	public static final float MAXCORRECTIONSPEED_DEFAULT_VALUE = -1f;

	/** SFBool field named <i>preferAccuracy</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean PREFERACCURACY_DEFAULT_VALUE = false;

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
			case "autoDisable":
				result = "SFBool";
				break;
			case "bodies":
				result = "MFNode";
				break;
			case "collider":
				result = "SFNode";
				break;
			case "constantForceMix":
				result = "SFFloat";
				break;
			case "contactSurfaceThickness":
				result = "SFFloat";
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
			case "errorCorrection":
				result = "SFFloat";
				break;
			case "gravity":
				result = "SFVec3f";
				break;
			case "iterations":
				result = "SFInt32";
				break;
			case "joints":
				result = "MFNode";
				break;
			case "maxCorrectionSpeed":
				result = "SFFloat";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "preferAccuracy":
				result = "SFBool";
				break;
			case "contacts":
				result = "MFNode";
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
			case "autoDisable":
				result = "inputOutput";
				break;
			case "bodies":
				result = "inputOutput";
				break;
			case "collider":
				result = "initializeOnly";
				break;
			case "constantForceMix":
				result = "inputOutput";
				break;
			case "contactSurfaceThickness":
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
			case "errorCorrection":
				result = "inputOutput";
				break;
			case "gravity":
				result = "inputOutput";
				break;
			case "iterations":
				result = "inputOutput";
				break;
			case "joints":
				result = "inputOutput";
				break;
			case "maxCorrectionSpeed":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "preferAccuracy":
				result = "inputOutput";
				break;
			case "set_contacts":
				result = "inputOnly";
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

	/** fromField ROUTE name for SFBool field named <i>autoDisable</i>. */
	public static final String fromField_AUTODISABLE = "autoDisable";

	/** toField ROUTE name for SFBool field named <i>autoDisable</i>. */
	public static final String toField_AUTODISABLE = "autoDisable";

	/** fromField ROUTE name for MFNode field named <i>bodies</i>. */
	public static final String fromField_BODIES = "bodies";

	/** toField ROUTE name for MFNode field named <i>bodies</i>. */
	public static final String toField_BODIES = "bodies";

	/** fromField ROUTE name for SFFloat field named <i>constantForceMix</i>. */
	public static final String fromField_CONSTANTFORCEMIX = "constantForceMix";

	/** toField ROUTE name for SFFloat field named <i>constantForceMix</i>. */
	public static final String toField_CONSTANTFORCEMIX = "constantForceMix";

	/** fromField ROUTE name for SFFloat field named <i>contactSurfaceThickness</i>. */
	public static final String fromField_CONTACTSURFACETHICKNESS = "contactSurfaceThickness";

	/** toField ROUTE name for SFFloat field named <i>contactSurfaceThickness</i>. */
	public static final String toField_CONTACTSURFACETHICKNESS = "contactSurfaceThickness";

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

	/** fromField ROUTE name for SFFloat field named <i>errorCorrection</i>. */
	public static final String fromField_ERRORCORRECTION = "errorCorrection";

	/** toField ROUTE name for SFFloat field named <i>errorCorrection</i>. */
	public static final String toField_ERRORCORRECTION = "errorCorrection";

	/** fromField ROUTE name for SFVec3f field named <i>gravity</i>. */
	public static final String fromField_GRAVITY = "gravity";

	/** toField ROUTE name for SFVec3f field named <i>gravity</i>. */
	public static final String toField_GRAVITY = "gravity";

	/** fromField ROUTE name for SFInt32 field named <i>iterations</i>. */
	public static final String fromField_ITERATIONS = "iterations";

	/** toField ROUTE name for SFInt32 field named <i>iterations</i>. */
	public static final String toField_ITERATIONS = "iterations";

	/** fromField ROUTE name for MFNode field named <i>joints</i>. */
	public static final String fromField_JOINTS = "joints";

	/** toField ROUTE name for MFNode field named <i>joints</i>. */
	public static final String toField_JOINTS = "joints";

	/** fromField ROUTE name for SFFloat field named <i>maxCorrectionSpeed</i>. */
	public static final String fromField_MAXCORRECTIONSPEED = "maxCorrectionSpeed";

	/** toField ROUTE name for SFFloat field named <i>maxCorrectionSpeed</i>. */
	public static final String toField_MAXCORRECTIONSPEED = "maxCorrectionSpeed";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFBool field named <i>preferAccuracy</i>. */
	public static final String fromField_PREFERACCURACY = "preferAccuracy";

	/** toField ROUTE name for SFBool field named <i>preferAccuracy</i>. */
	public static final String toField_PREFERACCURACY = "preferAccuracy";

	/** toField ROUTE name for MFNode field named <i>set_contacts</i>. */
	public static final String toField_SET_CONTACTS = "set_contacts";

	/** Constructor for RigidBodyCollectionObject to initialize member variables with default values. */
	public RigidBodyCollectionObject()
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

		autoDisable = AUTODISABLE_DEFAULT_VALUE;
		bodies = new ArrayList<>();
		collider = null; // clear out any prior node
		constantForceMix = CONSTANTFORCEMIX_DEFAULT_VALUE;
		contactSurfaceThickness = CONTACTSURFACETHICKNESS_DEFAULT_VALUE;
		disableAngularSpeed = DISABLEANGULARSPEED_DEFAULT_VALUE;
		disableLinearSpeed = DISABLELINEARSPEED_DEFAULT_VALUE;
		disableTime = DISABLETIME_DEFAULT_VALUE;
		enabled = ENABLED_DEFAULT_VALUE;
		errorCorrection = ERRORCORRECTION_DEFAULT_VALUE;
		gravity = GRAVITY_DEFAULT_VALUE;
		iterations = ITERATIONS_DEFAULT_VALUE;
		joints = new ArrayList<>();
		maxCorrectionSpeed = MAXCORRECTIONSPEED_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		preferAccuracy = PREFERACCURACY_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setAutoDisable(boolean newValue)
	{
		autoDisable = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool autoDisable field, similar to {@link #setAutoDisable(boolean)}.
	 * @param newValue is new value for the autoDisable field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setAutoDisable(SFBoolObject newValue)
	{
		setAutoDisable(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of RigidBody results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>bodies</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to RigidBody.
	 * @see org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyObject
	 * @return value of bodies field
	 */
	@Override
	public X3DNode[] getBodies()
	{
		final X3DNode[] valuesArray = new X3DNode[bodies.size()];
		int i = 0;
		for (RigidBody arrayElement : bodies) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode bodies field, similar to {@link #getBodies()}.

	 * @return value of bodies field
	 */
	public ArrayList<RigidBody> getBodiesList()
	{
		return bodies;
	}

	/**
	 * Assign RigidBody array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>bodies</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to RigidBody.
	 * @param newValue is new value for the bodies field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setBodies(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearBodies(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		bodies.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof RigidBody)
			{
				bodies.add((RigidBody)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof RigidBody; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode bodies field, similar to {@link #setBodies(X3DNode[])}.
	 * @param newValue is new value for the bodies field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setBodies(ArrayList<RigidBody> newValue)
	{
		if (newValue == null)
		{
			clearBodies(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		bodies = newValue;
		for (RigidBody element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child bodies node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to RigidBody.
	 * @param newValue is new value to be appended the bodies field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public RigidBodyCollectionObject addBodies(RigidBodyObject newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		bodies.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child bodies nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to RigidBody.
	 * @param newValue is new value array to be appended the bodies field.
	 */
	@Override
	public void addBodies(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof RigidBody)
			{
				bodies.add((RigidBody)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof RigidBody; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child bodies node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to RigidBody.
	 * @param newValue is new node for the bodies field (restricted to RigidBody)
	 */
	@Override
	public void setBodies(X3DNode newValue)
	{
		if (newValue == null)
		{
			bodies.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof RigidBody)
		{
			for (RigidBody element : bodies)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			bodies.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			bodies.add((RigidBody)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof RigidBody; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of bodies field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public RigidBodyCollectionObject clearBodies()
	{
		for (RigidBody element : bodies)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		bodies.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>bodies</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getBodies()
	 */
	public boolean hasBodies()
	{
		return (!bodies.isEmpty());
	}
	/**
	 * Provide CollisionCollection instance (using a properly typed node) from initializeOnly SFNode field <i>collider</i>.
	 * @see #getColliderProtoInstance()
	 * @return value of collider field
	 */
	@Override
	public CollisionCollection getCollider()
	{
		return collider;
	}

	/**
	 * Assign CollisionCollection instance (using a properly typed node) to initializeOnly SFNode field <i>collider</i>.
	 * @see #setCollider(ProtoInstanceObject)
	 * @param newValue is new value for the collider field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setCollider(CollisionCollection newValue)
	{
		collider = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) collider).setParentObject(this); // parentTest15
		}
		if (colliderProtoInstance != null)
		{
			colliderProtoInstance.setParentObject(null); // housekeeping, clear prior object
			colliderProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of collider field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public RigidBodyCollectionObject clearCollider()
	{
		((X3DConcreteElement) collider).clearParentObject(); // remove references to facilitate Java memory management
		collider = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>collider</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type CollisionCollection.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the collider field
	 * @see #setCollider(CollisionCollection)
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public RigidBodyCollectionObject setCollider(ProtoInstanceObject newProtoInstanceNode)
	{
		if (collider != null)
		{
			((X3DConcreteElement) collider).setParentObject(null); // housekeeping, clear prior object
			collider = null;
		}
		colliderProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for initializeOnly SFNode field <i>collider</i>, if available.
	 * @see #getCollider()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getColliderProtoInstance()
	{
		return colliderProtoInstance;
	}

	/**
	 * Indicate whether an object is available for initializeOnly SFNode field <i>collider</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getCollider()
	 * @see #getColliderProtoInstance()
	 */
	public boolean hasCollider()
	{
		return (collider != null) || (colliderProtoInstance != null);
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>constantForceMix</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) constantForceMix modifies damping calculations by violating normal constraints while applying small, constant forces in those calculations.
 * <ul>
 *  <li> <i>Hint:</i> this allows joints and bodies to be a fraction springy, and helps to eliminate numerical instability. </li> 
 *  <li> <i>Hint:</i>  spring-driven or spongy connections can be emulated by combined use of errorCorrection and constantForceMix. </li> 
 * </ul>
	 * @return value of constantForceMix field
	 */
	@Override
	public float getConstantForceMix()
	{
		return constantForceMix;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>constantForceMix</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) constantForceMix modifies damping calculations by violating normal constraints while applying small, constant forces in those calculations. Hint: this allows joints and bodies to be a fraction springy, and helps to eliminate numerical instability. Hint: spring-driven or spongy connections can be emulated by combined use of errorCorrection and constantForceMix.
	 * @param newValue is new value for the constantForceMix field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setConstantForceMix(float newValue)
	{
		constantForceMix = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat constantForceMix field, similar to {@link #setConstantForceMix(float)}.
	 * @param newValue is new value for the constantForceMix field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setConstantForceMix(SFFloatObject newValue)
	{
		setConstantForceMix(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>contactSurfaceThickness</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) contactSurfaceThickness defines how far bodies may interpenetrate after a collision, allowing simulation of softer bodies that deform somewhat during collision.  * <br>

	 * @return value of contactSurfaceThickness field
	 */
	@Override
	public float getContactSurfaceThickness()
	{
		return contactSurfaceThickness;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>contactSurfaceThickness</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) contactSurfaceThickness defines how far bodies may interpenetrate after a collision, allowing simulation of softer bodies that deform somewhat during collision.
	 * @param newValue is new value for the contactSurfaceThickness field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setContactSurfaceThickness(float newValue)
	{
		contactSurfaceThickness = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat contactSurfaceThickness field, similar to {@link #setContactSurfaceThickness(float)}.
	 * @param newValue is new value for the contactSurfaceThickness field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setContactSurfaceThickness(SFFloatObject newValue)
	{
		setContactSurfaceThickness(newValue.getPrimitiveValue());
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setDisableAngularSpeed(float newValue)
	{
		disableAngularSpeed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat disableAngularSpeed field, similar to {@link #setDisableAngularSpeed(float)}.
	 * @param newValue is new value for the disableAngularSpeed field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setDisableAngularSpeed(SFFloatObject newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setDisableLinearSpeed(float newValue)
	{
		disableLinearSpeed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat disableLinearSpeed field, similar to {@link #setDisableLinearSpeed(float)}.
	 * @param newValue is new value for the disableLinearSpeed field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setDisableLinearSpeed(SFFloatObject newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setDisableTime(double newValue)
	{
		disableTime = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime disableTime field, similar to {@link #setDisableTime(double)}.
	 * @param newValue is new value for the disableTime field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setDisableTime(SFTimeObject newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setEnabled(boolean newValue)
	{
		enabled = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool enabled field, similar to {@link #setEnabled(boolean)}.
	 * @param newValue is new value for the enabled field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setEnabled(SFBoolObject newValue)
	{
		setEnabled(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>errorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] errorCorrection describes how quickly intersection errors due to floating-point inaccuracies are resolved (0=no correction, 1=all corrected in single step).  * <br>

	 * @return value of errorCorrection field
	 */
	@Override
	public float getErrorCorrection()
	{
		return errorCorrection;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>errorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] errorCorrection describes how quickly intersection errors due to floating-point inaccuracies are resolved (0=no correction, 1=all corrected in single step).
	 * @param newValue is new value for the errorCorrection field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setErrorCorrection(float newValue)
	{
		errorCorrection = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat errorCorrection field, similar to {@link #setErrorCorrection(float)}.
	 * @param newValue is new value for the errorCorrection field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setErrorCorrection(SFFloatObject newValue)
	{
		setErrorCorrection(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>gravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  gravity indicates direction and strength of local gravity vector for this collection of bodies (units m/sec^2).  * <br>

	 * @return value of gravity field
	 */
	@Override
	public float[] getGravity()
	{
		return gravity;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>gravity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> gravity indicates direction and strength of local gravity vector for this collection of bodies (units m/sec^2).
	 * @param newValue is new value for the gravity field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setGravity(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBodyCollection gravity newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		gravity = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f gravity field, similar to {@link #setGravity(float[])}.
	 * @param newValue is new value for the gravity field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setGravity(SFVec3fObject newValue)
	{
		setGravity(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f gravity field, similar to {@link #setGravity(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setGravity(float x, float y, float z)
	{
		setGravity(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>iterations</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) iterations controls number of iterations performed over collectioned joints and bodies during each evaluation.  * <br>

	 * @return value of iterations field
	 */
	@Override
	public int getIterations()
	{
		return iterations;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>iterations</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) iterations controls number of iterations performed over collectioned joints and bodies during each evaluation.
	 * @param newValue is new value for the iterations field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setIterations(int newValue)
	{
		iterations = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 iterations field, similar to {@link #setIterations(int)}.
	 * @param newValue is new value for the iterations field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setIterations(SFInt32Object newValue)
	{
		setIterations(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of X3DRigidJointNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DRigidJointNode.
	 * @see org.web3d.x3d.sai.RigidBodyPhysics.X3DRigidJointNode
	 * @return value of joints field
	 */
	@Override
	public X3DNode[] getJoints()
	{
		final X3DNode[] valuesArray = new X3DNode[joints.size()];
		int i = 0;
		for (X3DRigidJointNode arrayElement : joints) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode joints field, similar to {@link #getJoints()}.

	 * @return value of joints field
	 */
	public ArrayList<X3DRigidJointNode> getJointsList()
	{
		return joints;
	}

	/**
	 * Assign X3DRigidJointNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DRigidJointNode.
	 * @param newValue is new value for the joints field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setJoints(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearJoints(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		joints.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DRigidJointNode)
			{
				joints.add((X3DRigidJointNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DRigidJointNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode joints field, similar to {@link #setJoints(X3DNode[])}.
	 * @param newValue is new value for the joints field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setJoints(ArrayList<X3DRigidJointNode> newValue)
	{
		if (newValue == null)
		{
			clearJoints(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		joints = newValue;
		for (X3DRigidJointNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child joints node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DRigidJointNode.
	 * @param newValue is new value to be appended the joints field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public RigidBodyCollectionObject addJoints(X3DRigidJointNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		joints.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child joints nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DRigidJointNode.
	 * @param newValue is new value array to be appended the joints field.
	 */
	@Override
	public void addJoints(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DRigidJointNode)
			{
				joints.add((X3DRigidJointNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DRigidJointNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child joints node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DRigidJointNode.
	 * @param newValue is new node for the joints field (restricted to X3DRigidJointNode)
	 */
	@Override
	public void setJoints(X3DNode newValue)
	{
		if (newValue == null)
		{
			joints.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DRigidJointNode)
		{
			for (X3DRigidJointNode element : joints)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			joints.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			joints.add((X3DRigidJointNode)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DRigidJointNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of joints field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public RigidBodyCollectionObject clearJoints()
	{
		for (X3DRigidJointNode element : joints)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		joints.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>joints</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getJoints()
	 */
	public boolean hasJoints()
	{
		return (!joints.isEmpty());
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>maxCorrectionSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) or -1, maxCorrectionSpeed .  * <br>

	 * @return value of maxCorrectionSpeed field
	 */
	@Override
	public float getMaxCorrectionSpeed()
	{
		return maxCorrectionSpeed;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>maxCorrectionSpeed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) or -1, maxCorrectionSpeed .
	 * @param newValue is new value for the maxCorrectionSpeed field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setMaxCorrectionSpeed(float newValue)
	{
		maxCorrectionSpeed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat maxCorrectionSpeed field, similar to {@link #setMaxCorrectionSpeed(float)}.
	 * @param newValue is new value for the maxCorrectionSpeed field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setMaxCorrectionSpeed(SFFloatObject newValue)
	{
		setMaxCorrectionSpeed(newValue.getPrimitiveValue());
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public RigidBodyCollectionObject clearMetadata()
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public RigidBodyCollectionObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide boolean value from inputOutput SFBool field named <i>preferAccuracy</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  preferAccuracy provides hint for performance preference: higher accuracy or faster computational speed.  * <br>

	 * @return value of preferAccuracy field
	 */
	@Override
	public boolean getPreferAccuracy()
	{
		return preferAccuracy;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>preferAccuracy</i>.
	 * <br><br>
	 * <i>Tooltip:</i> preferAccuracy provides hint for performance preference: higher accuracy or faster computational speed.
	 * @param newValue is new value for the preferAccuracy field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setPreferAccuracy(boolean newValue)
	{
		preferAccuracy = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool preferAccuracy field, similar to {@link #setPreferAccuracy(boolean)}.
	 * @param newValue is new value for the preferAccuracy field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setPreferAccuracy(SFBoolObject newValue)
	{
		setPreferAccuracy(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final RigidBodyCollectionObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to RigidBodyCollection
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBodyCollection DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("RigidBodyCollection DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setDEF(SFStringObject newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final RigidBodyCollectionObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to RigidBodyCollection
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("RigidBodyCollection USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("RigidBodyCollection USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final RigidBodyCollectionObject setCssClass(String newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setCssClass(SFStringObject newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public RigidBodyCollectionObject setIS(ISObject newValue)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public RigidBodyCollectionObject setUSE(RigidBodyCollectionObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on RigidBodyCollectionObject" +
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
	public RigidBodyCollectionObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public RigidBodyCollectionObject addComments (String newComment)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public RigidBodyCollectionObject addComments (String[] newComments)
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
	 * @return {@link RigidBodyCollectionObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public RigidBodyCollectionObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (!bodies.isEmpty()) || (collider != null) || (colliderProtoInstance != null) || (!joints.isEmpty()) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<RigidBodyCollection"); // start opening tag
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
                            
			if (((getAutoDisable() != AUTODISABLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" autoDisable='").append(SFBoolObject.toString(getAutoDisable())).append("'");
			}
			if (((getConstantForceMix() != CONSTANTFORCEMIX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" constantForceMix='").append(SFFloatObject.toString(getConstantForceMix())).append("'");
			}
			if (((getContactSurfaceThickness() != CONTACTSURFACETHICKNESS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" contactSurfaceThickness='").append(SFFloatObject.toString(getContactSurfaceThickness())).append("'");
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
			if (((getErrorCorrection() != ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" errorCorrection='").append(SFFloatObject.toString(getErrorCorrection())).append("'");
			}
			if ((!Arrays.equals(getGravity(), GRAVITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" gravity='").append(SFVec3fObject.toString(getGravity())).append("'");
			}
			if (((getIterations() != ITERATIONS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" iterations='").append(SFInt32Object.toString(getIterations())).append("'");
			}
			if (((getMaxCorrectionSpeed() != MAXCORRECTIONSPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" maxCorrectionSpeed='").append(SFFloatObject.toString(getMaxCorrectionSpeed())).append("'");
			}
			if (((getPreferAccuracy() != PREFERACCURACY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" preferAccuracy='").append(SFBoolObject.toString(getPreferAccuracy())).append("'");
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
			for (RigidBody element : bodies)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			if      (collider != null)
			{
				stringX3D.append(((X3DConcreteElement)collider).toStringX3D(indentLevel + indentIncrement));
			}
			else if (colliderProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)colliderProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (X3DRigidJointNode element : joints)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</RigidBodyCollection>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!bodies.isEmpty()) || (collider != null) || (colliderProtoInstance != null) || (!joints.isEmpty()) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("RigidBodyCollection").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("constantForceMix"))
						{
							stringClassicVRML.append(indentCharacter).append("constantForceMix").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getConstantForceMix() != CONSTANTFORCEMIX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("constantForceMix ").append(SFFloatObject.toString(getConstantForceMix())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("contactSurfaceThickness"))
						{
							stringClassicVRML.append(indentCharacter).append("contactSurfaceThickness").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getContactSurfaceThickness() != CONTACTSURFACETHICKNESS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("contactSurfaceThickness ").append(SFFloatObject.toString(getContactSurfaceThickness())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("errorCorrection"))
						{
							stringClassicVRML.append(indentCharacter).append("errorCorrection").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getErrorCorrection() != ERRORCORRECTION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("errorCorrection ").append(SFFloatObject.toString(getErrorCorrection())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("gravity"))
						{
							stringClassicVRML.append(indentCharacter).append("gravity").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getGravity(), GRAVITY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("gravity ").append(SFVec3fObject.toString(getGravity())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("iterations"))
						{
							stringClassicVRML.append(indentCharacter).append("iterations").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getIterations() != ITERATIONS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("iterations ").append(SFInt32Object.toString(getIterations())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("maxCorrectionSpeed"))
						{
							stringClassicVRML.append(indentCharacter).append("maxCorrectionSpeed").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMaxCorrectionSpeed() != MAXCORRECTIONSPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("maxCorrectionSpeed ").append(SFFloatObject.toString(getMaxCorrectionSpeed())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("preferAccuracy"))
						{
							stringClassicVRML.append(indentCharacter).append("preferAccuracy").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getPreferAccuracy() != PREFERACCURACY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("preferAccuracy ").append(SFBoolObject.toString(getPreferAccuracy())).append("\n").append(indent).append(indentCharacter);
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
			if (bodies.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("bodies").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (RigidBody element : bodies)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (collider != null)
			{
				stringClassicVRML.append(indentCharacter).append("collider").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) collider).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (colliderProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("collider").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) colliderProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (joints.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("joints").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DRigidJointNode element : joints)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
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
		for (RigidBody element : bodies) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		if (collider != null)
		{
			referenceElement = ((X3DConcreteElement) collider).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (colliderProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) colliderProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		for (X3DRigidJointNode element : joints) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
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
		for (RigidBody element : bodies) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		if (collider != null)
		{
			referenceNode = ((X3DConcreteElement) collider).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (X3DRigidJointNode element : joints) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
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

		setAutoDisable(getAutoDisable()); // exercise field checks, simple types

		setConstantForceMix(getConstantForceMix()); // exercise field checks, simple types

		setContactSurfaceThickness(getContactSurfaceThickness()); // exercise field checks, simple types

		setDisableAngularSpeed(getDisableAngularSpeed()); // exercise field checks, simple types

		setDisableLinearSpeed(getDisableLinearSpeed()); // exercise field checks, simple types

		setDisableTime(getDisableTime()); // exercise field checks, simple types

		setEnabled(getEnabled()); // exercise field checks, simple types

		setErrorCorrection(getErrorCorrection()); // exercise field checks, simple types

		setGravity(getGravity()); // exercise field checks, simple types

		setIterations(getIterations()); // exercise field checks, simple types

		setMaxCorrectionSpeed(getMaxCorrectionSpeed()); // exercise field checks, simple types

		setPreferAccuracy(getPreferAccuracy()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		for (RigidBody element : bodies) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setBodies(getBodies()); // also test getter/setter validation

		if (isUSE() && hasBodies()) // test USE restrictions
		{
			String errorNotice = "RigidBodyCollection USE='" + getUSE() + "' is not allowed to have contained MFNode bodies";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		if (collider != null)
		{
			setCollider(getCollider());
			((X3DConcreteElement) collider).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) collider).getValidationResult());
		}
		if (colliderProtoInstance != null)
		{
			setCollider(getColliderProtoInstance());
			((X3DConcreteElement) colliderProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) colliderProtoInstance).getValidationResult());
		}
		if ((collider != null) && (colliderProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both collider and colliderProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasCollider()) // test USE restrictions
		{
			String errorNotice = "RigidBodyCollection USE='" + getUSE() + "' is not allowed to have contained SFNode collider";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "RigidBodyCollection USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		for (X3DRigidJointNode element : joints) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setJoints(getJoints()); // also test getter/setter validation

		if (isUSE() && hasJoints()) // test USE restrictions
		{
			String errorNotice = "RigidBodyCollection USE='" + getUSE() + "' is not allowed to have contained MFNode joints";
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
			String errorNotice = "RigidBodyCollection USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "RigidBodyCollection USE='" + getUSE() + "' is not allowed to have contained comments";
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
