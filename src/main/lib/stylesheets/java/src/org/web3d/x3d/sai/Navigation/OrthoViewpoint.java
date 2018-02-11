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

package org.web3d.x3d.sai.Navigation;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: OrthoViewpoint provides an orthographic perspective-free view of a scene from a specific location and direction.
 * <ul>
 *  <li> <i>Hint:</i> NavigationInfo, Background, TextureBackground, Fog, GeoViewpoint, OrthoViewpoint and Viewpoint are bindable nodes, meaning that no more than one of each node type can be active at a given time. </li> 
 *  <li> <i>Hint:</i> GeoViewpoint OrthoViewpoint and Viewpoint share the same binding stack, so no more than one of these nodes can be bound and active at a given time. </li> 
 *  <li> <i>Warning:</i> do not include GeoViewpoint OrthoViewpoint or Viewpoint as a child of LOD or Switch, instead use ViewpointGroup as parent to constrain location proximity where the viewpoint is available to user. </li> 
 *  <li> <i>Hint:</i> Regardless of viewpoint jump value at bind time, the relative viewing transformation between user's view and defined position/orientation is stored for later use when un-jumping (returning to the viewpoint when subsequent viewpoint is unbound). </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Viewpoints <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#OrthoViewpoint" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#OrthoViewpoint" target="blank">X3D Abstract Specification: OrthoViewpoint</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#OrthoViewpoint" target="_blank">X3D Tooltips: OrthoViewpoint</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints" target="_blank">X3D Scene Authoring Hints: Viewpoints</a>
 */
public interface OrthoViewpoint extends X3DViewpointNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>bindTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Event sent reporting timestamp when node becomes active/inactive.  * <br>

	 * @return value of bindTime field
	 */
	@Override
	public double getBindTime();
	/**
	 * Provide array of 3-tuple float results unit axis, angle (in radians) from inputOutput SFVec3f field named <i>centerOfRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  centerOfRotation specifies center point about which to rotate user's eyepoint when in EXAMINE or LOOKAT mode.  * <br>

	 * @return value of centerOfRotation field
	 */
	public float[] getCenterOfRotation();

	/**
	 * Assign 3-tuple float array unit axis, angle (in radians) to inputOutput SFVec3f field named <i>centerOfRotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> centerOfRotation specifies center point about which to rotate user's eyepoint when in EXAMINE or LOOKAT mode.
	 * @param newValue is new value for the centerOfRotation field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public OrthoViewpoint setCenterOfRotation(float[] newValue);

	/**
	 * Provide String value from inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Text description or navigation hint to describe the significance of this model Viewpoint.
 * <ul>
 *  <li> <i>Hint:</i> a sequence of good Viewpoints with understandable descriptions can provide a guided tour of a model. </li> 
 *  <li> <i>Hint:</i> the currently bound NavigationInfo node has a major effect on how a user might change viewing position and orientation after reaching this Viewpoint. </li> 
 *  <li> <i>Hint:</i> consider paired Viewpoint/NavigationInfo node combinations by defining ROUTE connections between corresponding isBound/set_bind fields. </li> 
 *  <li> <i>Hint:</i> include space characters since a description is not a DEF identifier. Write short phrases that make descriptions clear and readable. </li> 
 *  <li> <i>Warning:</i> without description, this OrthoViewpoint is unlikely to appear on browser Viewpoint menus. </li> 
 *  <li> <i>Hint:</i>  many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character). </li> 
 * </ul>
	 * @return value of description field
	 */
	@Override
	public String getDescription();

	/**
	 * Assign String value to inputOutput SFString field named <i>description</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Text description or navigation hint to describe the significance of this model Viewpoint. Hint: a sequence of good Viewpoints with understandable descriptions can provide a guided tour of a model. Hint: the currently bound NavigationInfo node has a major effect on how a user might change viewing position and orientation after reaching this Viewpoint. Hint: consider paired Viewpoint/NavigationInfo node combinations by defining ROUTE connections between corresponding isBound/set_bind fields. Hint: include space characters since a description is not a DEF identifier. Write short phrases that make descriptions clear and readable. Warning: without description, this OrthoViewpoint is unlikely to appear on browser Viewpoint menus. Hint: many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character).
	 * @param newValue is new value for the description field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setDescription(String newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>fieldOfView</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Minimum and maximum extents of view in units of local coordinate system. Small field of view roughly corresponds to a telephoto lens, large field of view roughly corresponds to a wide-angle lens.
 * <ul>
 *  <li> <i>Warning:</i> minimum corner must remain less than maximum corner. </li> 
 *  <li> <i>Hint:</i>  rectangular display width/height = (maxX-minX) / (maxY-minY). </li> 
 * </ul>
	 * @return value of fieldOfView field
	 */
	public float[] getFieldOfView();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>fieldOfView</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Minimum and maximum extents of view in units of local coordinate system. Small field of view roughly corresponds to a telephoto lens, large field of view roughly corresponds to a wide-angle lens. Warning: minimum corner must remain less than maximum corner. Hint: rectangular display width/height = (maxX-minX) / (maxY-minY).
	 * @param newValue is new value for the fieldOfView field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public OrthoViewpoint setFieldOfView(float[] newValue);

	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isBound</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Output event true gets sent when node becomes bound and activated, otherwise output event false gets sent when node becomes unbound and deactivated.
 * <ul>
 *  <li> <i> Hint:</i>  paired node operations can be established by connecting set_bind and isBound fields of corresponding bindable nodes. </li> 
 * </ul>
	 * @return value of isBound field
	 */
	@Override
	public boolean getIsBound();
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>jump</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Transition instantly by jumping, otherwise smoothly adjust offsets in place when changing to this Viewpoint.
 * <ul>
 *  <li> <i>Hint:</i> see NavigationInfo.transitionType for the manner in which animated Viewpoint transistions occur. </li> 
 *  <li> <i>Hint:</i> set jump=true for instantaneous camera motion when going to this viewpoint. </li> 
 *  <li> <i>Warning:</i>  for VR/AR/MAR users wearing head-mounted displays, animating transitions between viewpoints may induce motion sickness. </li> 
 * </ul>
	 * @return value of jump field
	 */
	@Override
	public boolean getJump();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>jump</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Transition instantly by jumping, otherwise smoothly adjust offsets in place when changing to this Viewpoint. Hint: see NavigationInfo.transitionType for the manner in which animated Viewpoint transistions occur. Hint: set jump=true for instantaneous camera motion when going to this viewpoint. Warning: for VR/AR/MAR users wearing head-mounted displays, animating transitions between viewpoints may induce motion sickness.
	 * @param newValue is new value for the jump field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setJump(boolean newValue);

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
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Rotation (axis, angle in radians) of Viewpoint, relative to default -Z axis direction in local coordinate system.
 * <ul>
 *  <li> <i>Warning:</i> for VR/AR/MAR users wearing a head-mounted display (HMD), animating this field may induce motion sickness. </li> 
 *  <li> <i>Hint:</i> this is orientation _change_ from default direction (0 0 -1). </li> 
 *  <li> <i>Hint:</i>  complex rotations can be accomplished axis-by-axis using parent Transforms. </li> 
 * </ul>
	 * @return value of orientation field
	 */
	@Override
	public float[] getOrientation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>orientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Rotation (axis, angle in radians) of Viewpoint, relative to default -Z axis direction in local coordinate system. Warning: for VR/AR/MAR users wearing a head-mounted display (HMD), animating this field may induce motion sickness. Hint: this is orientation _change_ from default direction (0 0 -1). Hint: complex rotations can be accomplished axis-by-axis using parent Transforms.
	 * @param newValue is new value for the orientation field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setOrientation(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  position (x, y, z in meters) relative to local coordinate system.  * <br>

	 * @return value of position field
	 */
	public float[] getPosition();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>position</i>.
	 * <br><br>
	 * <i>Tooltip:</i> position (x, y, z in meters) relative to local coordinate system.
	 * @param newValue is new value for the position field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public OrthoViewpoint setPosition(float[] newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>retainUserOffsets</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Retain (true) or reset to zero (false) any prior user navigation offsets from defined viewpoint position, orientation.  * <br>

	 * @return value of retainUserOffsets field
	 */
	@Override
	public boolean getRetainUserOffsets();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>retainUserOffsets</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Retain (true) or reset to zero (false) any prior user navigation offsets from defined viewpoint position, orientation.
	 * @param newValue is new value for the retainUserOffsets field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setRetainUserOffsets(boolean newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setDEF(String newValue);


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
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link OrthoViewpoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public OrthoViewpoint setCssClass(String newValue);

}
