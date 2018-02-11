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

package org.web3d.x3d.jsail.Followers;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Followers.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) PositionDamper2D generates a series of 2D floating-point values that progressively change from initial value to destination value.
 * <ul>
 *  <li> <i> Hint:</i>  value_changed output events can be ROUTEd to a &amp;lt;TextureTransform&amp;gt; node's translation field, for example. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/followers.html#PositionDamper2D" target="blank">X3D Abstract Specification: PositionDamper2D</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#PositionDamper2D" target="_blank">X3D Tooltips: PositionDamper2D</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class PositionDamper2DObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Followers.PositionDamper2D
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float[] initialDestination; // SFVec2f

	private float[] initialValue; // SFVec2f

	private boolean isActive; // SFBool

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private int order; // SFInt32

	private float[] destination; // SFVec2f

	private float[] value; // SFVec2f

	private double tau; // SFTime

	private float tolerance; // SFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>PositionDamper2D</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "PositionDamper2D";

	/** Provides name of this element: <i>PositionDamper2D</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>PositionDamper2D</i> element: <i>Followers</i> */
	public static final String COMPONENT = "Followers";

	/** Defines X3D component for the <i>PositionDamper2D</i> element: <i>Followers</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Followers</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFVec2f field named <i>initialDestination</i> has default value <i>{0f,0f}</i> (Java syntax) or <i>0 0</i> (XML syntax). */
	public static final float[] INITIALDESTINATION_DEFAULT_VALUE = {0f,0f};

	/** SFVec2f field named <i>initialValue</i> has default value <i>{0f,0f}</i> (Java syntax) or <i>0 0</i> (XML syntax). */
	public static final float[] INITIALVALUE_DEFAULT_VALUE = {0f,0f};

	/** SFInt32 field named <i>order</i> has default value <i>3</i> (Java syntax) or <i>3</i> (XML syntax). */
	public static final int ORDER_DEFAULT_VALUE = 3;

	/** SFTime field named <i>tau</i> has default value <i>0.3</i> (Java syntax) or <i>0.3</i> (XML syntax). */
	public static final double TAU_DEFAULT_VALUE = 0.3;

	/** SFFloat field named <i>tolerance</i> has default value <i>-1f</i> (Java syntax) or <i>-1</i> (XML syntax). */
	public static final float TOLERANCE_DEFAULT_VALUE = -1f;

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
			case "initialDestination":
				result = "SFVec2f";
				break;
			case "initialValue":
				result = "SFVec2f";
				break;
			case "isActive":
				result = "SFBool";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "order":
				result = "SFInt32";
				break;
			case "destination":
				result = "SFVec2f";
				break;
			case "value":
				result = "SFVec2f";
				break;
			case "tau":
				result = "SFTime";
				break;
			case "tolerance":
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
			case "initialDestination":
				result = "initializeOnly";
				break;
			case "initialValue":
				result = "initializeOnly";
				break;
			case "isActive":
				result = "outputOnly";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "order":
				result = "initializeOnly";
				break;
			case "set_destination":
				result = "inputOnly";
				break;
			case "set_value":
				result = "inputOnly";
				break;
			case "tau":
				result = "inputOutput";
				break;
			case "tolerance":
				result = "inputOutput";
				break;
			case "value_changed":
				result = "outputOnly";
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

	/** fromField ROUTE name for SFBool field named <i>isActive</i>. */
	public static final String fromField_ISACTIVE = "isActive";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** toField ROUTE name for SFVec2f field named <i>set_destination</i>. */
	public static final String toField_SET_DESTINATION = "set_destination";

	/** toField ROUTE name for SFVec2f field named <i>set_value</i>. */
	public static final String toField_SET_VALUE = "set_value";

	/** fromField ROUTE name for SFTime field named <i>tau</i>. */
	public static final String fromField_TAU = "tau";

	/** toField ROUTE name for SFTime field named <i>tau</i>. */
	public static final String toField_TAU = "tau";

	/** fromField ROUTE name for SFFloat field named <i>tolerance</i>. */
	public static final String fromField_TOLERANCE = "tolerance";

	/** toField ROUTE name for SFFloat field named <i>tolerance</i>. */
	public static final String toField_TOLERANCE = "tolerance";

	/** fromField ROUTE name for SFVec2f field named <i>value_changed</i>. */
	public static final String fromField_VALUE_CHANGED = "value_changed";

	/** Constructor for PositionDamper2DObject to initialize member variables with default values. */
	public PositionDamper2DObject()
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

		initialDestination = INITIALDESTINATION_DEFAULT_VALUE;
		initialValue = INITIALVALUE_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		order = ORDER_DEFAULT_VALUE;
		tau = TAU_DEFAULT_VALUE;
		tolerance = TOLERANCE_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 2-tuple float results from initializeOnly SFVec2f field named <i>initialDestination</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Initial destination value for this node.  * <br>

	 * @return value of initialDestination field
	 */
	@Override
	public float[] getInitialDestination()
	{
		return initialDestination;
	}

	/**
	 * Assign 2-tuple float array to initializeOnly SFVec2f field named <i>initialDestination</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial destination value for this node.
	 * @param newValue is new value for the initialDestination field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PositionDamper2DObject setInitialDestination(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 2) // 2-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("PositionDamper2D initialDestination newValue=" + SFVec2fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 2");
		}
		initialDestination = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec2f initialDestination field, similar to {@link #setInitialDestination(float[])}.
	 * @param newValue is new value for the initialDestination field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setInitialDestination(SFVec2fObject newValue)
	{
		setInitialDestination(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec2f initialDestination field, similar to {@link #setInitialDestination(float[])}.

	 * @param x first component
	 * @param y second component

	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setInitialDestination(float x, float y)
	{
		setInitialDestination(new float[] {x, y});
		return this;
	}
	/**
	 * Provide array of 2-tuple float results from initializeOnly SFVec2f field named <i>initialValue</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Initial starting value for this node.  * <br>

	 * @return value of initialValue field
	 */
	@Override
	public float[] getInitialValue()
	{
		return initialValue;
	}

	/**
	 * Assign 2-tuple float array to initializeOnly SFVec2f field named <i>initialValue</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial starting value for this node.
	 * @param newValue is new value for the initialValue field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PositionDamper2DObject setInitialValue(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 2) // 2-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("PositionDamper2D initialValue newValue=" + SFVec2fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 2");
		}
		initialValue = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec2f initialValue field, similar to {@link #setInitialValue(float[])}.
	 * @param newValue is new value for the initialValue field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setInitialValue(SFVec2fObject newValue)
	{
		setInitialValue(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec2f initialValue field, similar to {@link #setInitialValue(float[])}.

	 * @param x first component
	 * @param y second component

	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setInitialValue(float x, float y)
	{
		setInitialValue(new float[] {x, y});
		return this;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  isActive true/false events are sent when follower-node computation starts/stops.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive()
	{
		return isActive;
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PositionDamper2DObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public PositionDamper2DObject clearMetadata()
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public PositionDamper2DObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide int value within allowed range of [0,5] from initializeOnly SFInt32 field named <i>order</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,5] order defines the number of internal filters (larger means smoother response, longer delay).  * <br>

	 * @return value of order field
	 */
	@Override
	public int getOrder()
	{
		return order;
	}

	/**
	 * Assign int value within allowed range of [0,5] to initializeOnly SFInt32 field named <i>order</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,5] order defines the number of internal filters (larger means smoother response, longer delay).
	 * @param newValue is new value for the order field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PositionDamper2DObject setOrder(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("PositionDamper2D order newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
            if (newValue > 5) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("PositionDamper2D order newValue=" + SFInt32Object.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=5");
            }
		order = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 order field, similar to {@link #setOrder(int)}.
	 * @param newValue is new value for the order field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setOrder(SFInt32Object newValue)
	{
		setOrder(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide double value in seconds within allowed range of [0,infinity) from inputOutput SFTime field named <i>tau</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,+infinity) tau is the exponential-decay time constant for filter response in seconds.  * <br>

	 * @return value of tau field
	 */
	@Override
	public double getTau()
	{
		return tau;
	}

	/**
	 * Assign double value in seconds within allowed range of [0,infinity) to inputOutput SFTime field named <i>tau</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) tau is the exponential-decay time constant for filter response in seconds.
	 * @param newValue is new value for the tau field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PositionDamper2DObject setTau(double newValue)
	{
		tau = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime tau field, similar to {@link #setTau(double)}.
	 * @param newValue is new value for the tau field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setTau(SFTimeObject newValue)
	{
		setTau(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>tolerance</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  -1 or [0,+infinity) Absolute value for satisfactory completion proximity (-1 lets browser choose).  * <br>

	 * @return value of tolerance field
	 */
	@Override
	public float getTolerance()
	{
		return tolerance;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>tolerance</i>.
	 * <br><br>
	 * <i>Tooltip:</i> -1 or [0,+infinity) Absolute value for satisfactory completion proximity (-1 lets browser choose).
	 * @param newValue is new value for the tolerance field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PositionDamper2DObject setTolerance(float newValue)
	{
		tolerance = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat tolerance field, similar to {@link #setTolerance(float)}.
	 * @param newValue is new value for the tolerance field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setTolerance(SFFloatObject newValue)
	{
		setTolerance(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 2-tuple float results from outputOnly SFVec2f field named <i>value_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Computed output value that approaches within tolerance of destination value, as determined by elapsed time, order and tau.  * <br>

	 * @return value of value_changed field
	 */
	@Override
	public float[] getValue()
	{
		return value;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final PositionDamper2DObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to PositionDamper2D
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("PositionDamper2D DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("PositionDamper2D DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setDEF(SFStringObject newValue)
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final PositionDamper2DObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to PositionDamper2D
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("PositionDamper2D USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("PositionDamper2D USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final PositionDamper2DObject setCssClass(String newValue)
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setCssClass(SFStringObject newValue)
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PositionDamper2DObject setIS(ISObject newValue)
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PositionDamper2DObject setUSE(PositionDamper2DObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on PositionDamper2DObject" +
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
	public PositionDamper2DObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public PositionDamper2DObject addComments (String newComment)
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public PositionDamper2DObject addComments (String[] newComments)
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
	 * @return {@link PositionDamper2DObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public PositionDamper2DObject addComments (CommentsBlock newCommentsBlock)
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

		stringX3D.append(indent).append("<PositionDamper2D"); // start opening tag
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
                            
			if ((!Arrays.equals(getInitialDestination(), INITIALDESTINATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" initialDestination='").append(SFVec2fObject.toString(getInitialDestination())).append("'");
			}
			if ((!Arrays.equals(getInitialValue(), INITIALVALUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" initialValue='").append(SFVec2fObject.toString(getInitialValue())).append("'");
			}
			if (((getOrder() != ORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" order='").append(SFInt32Object.toString(getOrder())).append("'");
			}
			if (((getTau() != TAU_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" tau='").append(SFTimeObject.toString(getTau())).append("'");
			}
			if (((getTolerance() != TOLERANCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" tolerance='").append(SFFloatObject.toString(getTolerance())).append("'");
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
			stringX3D.append(indent).append("</PositionDamper2D>").append("\n"); // finish closing tag
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
			stringClassicVRML.append("PositionDamper2D").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("initialDestination"))
						{
							stringClassicVRML.append(indentCharacter).append("initialDestination").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getInitialDestination(), INITIALDESTINATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("initialDestination ").append(SFVec2fObject.toString(getInitialDestination())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("initialValue"))
						{
							stringClassicVRML.append(indentCharacter).append("initialValue").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getInitialValue(), INITIALVALUE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("initialValue ").append(SFVec2fObject.toString(getInitialValue())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("order"))
						{
							stringClassicVRML.append(indentCharacter).append("order").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getOrder() != ORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("order ").append(SFInt32Object.toString(getOrder())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("tau"))
						{
							stringClassicVRML.append(indentCharacter).append("tau").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTau() != TAU_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("tau ").append(SFTimeObject.toString(getTau())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("tolerance"))
						{
							stringClassicVRML.append(indentCharacter).append("tolerance").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTolerance() != TOLERANCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("tolerance ").append(SFFloatObject.toString(getTolerance())).append("\n").append(indent).append(indentCharacter);
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

		setInitialDestination(getInitialDestination()); // exercise field checks, simple types

		setInitialValue(getInitialValue()); // exercise field checks, simple types

		setOrder(getOrder()); // exercise field checks, simple types

		setTau(getTau()); // exercise field checks, simple types

		setTolerance(getTolerance()); // exercise field checks, simple types

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
			String errorNotice = "PositionDamper2D USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "PositionDamper2D USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("Followers") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Followers' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Followers\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
