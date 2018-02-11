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

package org.web3d.x3d.sai.PointingDeviceSensor;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: PlaneSensor converts pointing device motion into 2D translation parallel to the local Z=0 plane.
 * <ul>
 *  <li> <i>Hint:</i> create a LineSensor by constraining one axis: (minPosition.x=maxPosition.x) or (minPosition.y=maxPosition.y). </li> 
 *  <li> <i>Hint:</i> this sensor detects user interactions affecting peer nodes and their child geometry. </li> 
 *  <li> <i>Hint:</i> add semi-transparent surrounding geometry to see the effect of the sensor. </li> 
 *  <li> <i>Hint:</i> see X3D Specification 20.2.1 Overview of pointing device sensors <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/pointingsensor.html#OverviewOfPointingDeviceSensors" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/pointingsensor.html#OverviewOfPointingDeviceSensors</a> </li> 
 *  <li> <i>Hint:</i> see X3D Specification 20.2.2 Drag sensors <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/pointingsensor.html#DragSensors" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/pointingsensor.html#DragSensors</a> </li> 
 *  <li> <i>Hint:</i>  see X3D Specification 20.2.3 Activating and manipulating pointing device sensors <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/pointingsensor.html#Activatingandmanipulating" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/pointingsensor.html#Activatingandmanipulating</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#PlaneSensor" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/pointingsensor.html#PlaneSensor" target="blank">X3D Abstract Specification: PlaneSensor</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#PlaneSensor" target="_blank">X3D Tooltips: PlaneSensor</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface PlaneSensor extends X3DDragSensorNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>autoOffset</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Determines whether previous offset values are remembered/accumulated.  * <br>

	 * @return value of autoOffset field
	 */
	@Override
	public boolean getAutoOffset();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>autoOffset</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Determines whether previous offset values are remembered/accumulated.
	 * @param newValue is new value for the autoOffset field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PlaneSensor setAutoOffset(boolean newValue);

	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>axisRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axisRotation determines local sensor coordinate system by rotating the local coordinate system.  * <br>

	 * @return value of axisRotation field
	 */
	public float[] getAxisRotation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>axisRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axisRotation determines local sensor coordinate system by rotating the local coordinate system.
	 * @param newValue is new value for the axisRotation field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PlaneSensor setAxisRotation(float[] newValue);

	/**
	 * Provide String value from inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-provided text tooltip that tells users the expected action of this node.
 * <ul>
 *  <li> <i>Hint:</i> include space characters since a description is not a DEF identifier. Write short phrases that make descriptions clear and readable. </li> 
 *  <li> <i>Hint:</i>  many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character). </li> 
 * </ul>
	 * @return value of description field
	 */
	@Override
	public String getDescription();

	/**
	 * Assign String value to inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Author-provided text tooltip that tells users the expected action of this node. Hint: include space characters since a description is not a DEF identifier. Write short phrases that make descriptions clear and readable. Hint: many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character).
	 * @param newValue is new value for the description field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PlaneSensor setDescription(String newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables node operation.  * <br>

	 * @return value of enabled field
	 */
	@Override
	public boolean getEnabled();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables node operation.
	 * @param newValue is new value for the enabled field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PlaneSensor setEnabled(boolean newValue);

	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Select geometry by activating the pointing device (e.g. clicking the mouse) to generate isActive events. Output event isActive=true is sent when geometry is selected (e.g. when primary mouse button is pressed), output event isActive=false is sent when geometry is deselected (e.g. when primary mouse button is released).  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isOver</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Hover over geometry by aiming the mouse (or pointing device) to generate isOver events. Sensor sends output event isOver=true event when pointing device moves over sensor's geometry, and later sends output event isOver=false event when pointing device moves off.  * <br>

	 * @return value of isOver field
	 */
	@Override
	public boolean getIsOver();
	/**
	 * Provide array of 2-tuple float results from inputOutput SFVec2f field named <i>maxPosition</i>.
	 * <br><br>
	 * <i>Tooltip:</i> minPosition and maxPosition clamp translations to a range of values measured from origin of Z=0 plane default maxPosition &amp;lt; minPosition means no clamping.
 * <ul>
 *  <li> <i> Hint:</i>  create a LineSensor by constraining one axis (minPosition.x=maxPosition.x) or (minPosition.y=maxPosition.y). </li> 
 * </ul>
	 * @return value of maxPosition field
	 */
	public float[] getMaxPosition();

	/**
	 * Assign 2-tuple float array to inputOutput SFVec2f field named <i>maxPosition</i>.
	 * <br><br>
	 * <i>Tooltip:</i> minPosition and maxPosition clamp translations to a range of values measured from origin of Z=0 plane default maxPosition &lt; minPosition means no clamping. Hint: create a LineSensor by constraining one axis (minPosition.x=maxPosition.x) or (minPosition.y=maxPosition.y).
	 * @param newValue is new value for the maxPosition field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PlaneSensor setMaxPosition(float[] newValue);

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata(); // acceptable node types: X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PlaneSensor setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide array of 2-tuple float results from inputOutput SFVec2f field named <i>minPosition</i>.
	 * <br><br>
	 * <i>Tooltip:</i> minPosition and maxPosition clamp translations to a range of values measured from origin of Z=0 plane default maxPosition &amp;lt; minPosition means no clamping.
 * <ul>
 *  <li> <i> Hint:</i>  create a LineSensor by constraining one axis (minPosition.x=maxPosition.x) or (minPosition.y=maxPosition.y). </li> 
 * </ul>
	 * @return value of minPosition field
	 */
	public float[] getMinPosition();

	/**
	 * Assign 2-tuple float array to inputOutput SFVec2f field named <i>minPosition</i>.
	 * <br><br>
	 * <i>Tooltip:</i> minPosition and maxPosition clamp translations to a range of values measured from origin of Z=0 plane default maxPosition &lt; minPosition means no clamping. Hint: create a LineSensor by constraining one axis (minPosition.x=maxPosition.x) or (minPosition.y=maxPosition.y).
	 * @param newValue is new value for the minPosition field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PlaneSensor setMinPosition(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>offset</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Sends event and remembers last value sensed.
 * <ul>
 *  <li> <i> Warning:</i>  ROUTE connecting translation_changed to set_offset creates a self-reinforcing positive feedback loop and results in unmanageable response. </li> 
 * </ul>
	 * @return value of offset field
	 */
	public float[] getOffset();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>offset</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Sends event and remembers last value sensed. Warning: ROUTE connecting translation_changed to set_offset creates a self-reinforcing positive feedback loop and results in unmanageable response.
	 * @param newValue is new value for the offset field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public PlaneSensor setOffset(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from outputOnly SFVec3f field named <i>trackPoint_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  trackPoint_changed events give intersection point of bearing with sensor's virtual geometry.  * <br>

	 * @return value of trackPoint_changed field
	 */
	@Override
	public float[] getTrackPoint();
	/**
	 * Provide array of 3-tuple float results from outputOnly SFVec3f field named <i>translation_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  translation_changed events equal sum of relative translation change plus offset value.  * <br>

	 * @return value of translation_changed field
	 */
	public float[] getTranslation();

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PlaneSensor setDEF(String newValue);


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
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PlaneSensor setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link PlaneSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public PlaneSensor setCssClass(String newValue);

}
