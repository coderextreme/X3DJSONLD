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

package org.web3d.x3d.sai.HAnim;


import org.web3d.x3d.sai.Core.X3DChildNode;
import org.web3d.x3d.sai.Grouping.X3DBoundedObject;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Core.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: Each joint in the body is represented by an HAnimJoint node.
 * <ul>
 *  <li> <i>Hint:</i> HAnimJoint may only get inserted as one (or more) root nodes of HAnimHumanoid skeleton field, as a child of another HAnimJoint node, or as a USE node in the HAnimHumanoid joints field. </li> 
 *  <li> <i>Hint:</i> HAnimJoint can only contain nodes HAnimJoint, HAnimSegment, HAnimSite with containerField='children' and also HAnimDisplacer nodes with containerField='displacers'. </li> 
 *  <li> <i>Hint:</i> visualization shapes for HAnimJoint nodes can be placed in child HAnimSegment or HAnimSite nodes. </li> 
 *  <li> <i>Warning:</i> an HAnimJoint may not be a child of an HAnimSegment. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Joint <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Joint" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Joint</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 *  <li> <i>Warning:</i>  the number of contained &amp;lt;HAnimJoint USE='*' containerField='joints'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#HAnimJoint" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimJoint" target="blank">X3D Abstract Specification: HAnimJoint</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimJoint" target="_blank">X3D Tooltips: HAnimJoint</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface HAnimJoint extends X3DChildNode, X3DBoundedObject
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 3-tuple float results from initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxCenter field
	 */
	@Override
	public float[] getBboxCenter();

	/**
	 * Assign 3-tuple float array to initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJoint setBboxCenter(float[] newValue);

	/**
	 * Provide array of 3-tuple float results within allowed range of [0,infinity), or default value [-1 -1 -1], from initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint.
 * <ul>
 *  <li> <i>Hint:</i> can be useful for collision computations or inverse-kinematics (IK) engines. </li> 
 *  <li> <i>Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxSize field
	 */
	@Override
	public float[] getBboxSize();

	/**
	 * Assign 3-tuple float array within allowed range of [0,infinity), or default value [-1 -1 -1], to initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint. Hint: can be useful for collision computations or inverse-kinematics (IK) engines. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJoint setBboxSize(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Translation offset from origin of local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  usually HAnimJoint position is controlled by the center field, not the translation field. </li> 
 * </ul>
	 * @return value of center field
	 */
	public float[] getCenter();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Translation offset from origin of local coordinate system. Hint: usually HAnimJoint position is controlled by the center field, not the translation field.
	 * @param newValue is new value for the center field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setCenter(float[] newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSegment|HAnimSite, from inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSegment|HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimJointObject
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSegmentObject
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of children field
	 */
	public X3DNode[] getChildren(); // acceptable node types: HAnimJoint|HAnimSegment|HAnimSite

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSegment|HAnimSite, to inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSegment|HAnimSite.
	 * @param newValue is new value for the children field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setChildren(X3DNode[] newValue); // acceptable node types: HAnimJoint|HAnimSegment|HAnimSite

	/**
	 * Add array of children nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSegment|HAnimSite.
	 * @param newValue is new value array to be appended the children field.
	 */
	public void addChildren(X3DNode[] newValue); // acceptable node types: HAnimJoint|HAnimSegment|HAnimSite
	/**
	 * Set single children node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the children field
	 */
	public void setChildren(X3DNode newValue); // acceptable node types: HAnimJoint|HAnimSegment|HAnimSite
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>displacers</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimDisplacerObject
	 * @return value of displacers field
	 */
	public X3DNode[] getDisplacers(); // acceptable node types: HAnimDisplacer

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>displacers</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @param newValue is new value for the displacers field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setDisplacers(X3DNode[] newValue); // acceptable node types: HAnimDisplacer

	/**
	 * Add array of child displacers nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @param newValue is new value array to be appended the displacers field.
	 */
	public void addDisplacers(X3DNode[] newValue); // acceptable node types: HAnimDisplacer
	/**
	 * Set single child displacers node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the displacers field
	 */
	public void setDisplacers(X3DNode newValue); // acceptable node types: HAnimDisplacer
	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>limitOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Orientation of upper/lower rotation limits, relative to HAnimJoint center.  * <br>

	 * @return value of limitOrientation field
	 */
	public float[] getLimitOrientation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>limitOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of upper/lower rotation limits, relative to HAnimJoint center.
	 * @param newValue is new value for the limitOrientation field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setLimitOrientation(float[] newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>llimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Lower limit for minimum joint rotation in radians.
 * <ul>
 *  <li> <i> Hint:</i>  always contains 3 values, one for each local axis. </li> 
 * </ul>
	 * @return value of llimit field
	 */
	public float[] getLlimit();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>llimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Lower limit for minimum joint rotation in radians. Hint: always contains 3 values, one for each local axis.
	 * @param newValue is new value for the llimit field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setLlimit(float[] newValue);

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
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJoint setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide String enumeration value ['HumanoidRoot'|'sacroiliac'|'l_hip'|'l_knee'|'l_ankle'|'l_subtalar'|'l_midtarsal'|'l_metatarsal'|'r_hip'|'r_knee'|'r_ankle'|'r_subtalar'|'r_midtarsal'|'r_metatarsal'|'vl5'|'vl4'|'vl3'|'vl2'|'vl1'|'vt12'|'vt11'|'vt10'|'vt9'|'vt8'|'vt7'|'vt6'|'vt5'|'vt4'|'vt3'|'vt2'|'vt1'|'vc7'|'vc6'|'vc5'|'vc4'|'vc3'|'vc2'|'vc1'|'skullbase'|'l_eyelid_joint'|'r_eyelid_joint'|'l_eyeball_joint'|'r_eyeball_joint'|'l_eyebrow_joint'|'r_eyebrow_joint'|'temporomandibular'|'l_sternoclavicular'|'l_acromioclavicular'|'l_shoulder'|'l_elbow'|'l_wrist'|'l_thumb1'|'l_thumb2'|'l_thumb3'|'l_index0'|'l_index1'|'l_index2'|'l_index3'|'l_middle0'|'l_middle1'|'l_middle2'|'l_middle3'|'l_ring0'|'l_ring1'|'l_ring2'|'l_ring3'|'l_pinky0'|'l_pinky1'|'l_pinky2'|'l_pinky3'|'r_sternoclavicular'|'r_acromioclavicular'|'r_shoulder'|'r_elbow'|'r_wrist'|'r_thumb1'|'r_thumb2'|'r_thumb3'|'r_index0'|'r_index1'|'r_index2'|'r_index3'|'r_middle0'|'r_middle1'|'r_middle2'|'r_middle3'|'r_ring0'|'r_ring1'|'r_ring2'|'r_ring3'|'r_pinky0'|'r_pinky1'|'r_pinky2'|'r_pinky3'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimJoint node can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Warning:</i> name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. Examples: HumanoidRoot sacroiliac l_hip l_knee l_ankle etc. as listed in H-Anim Specification. </li> 
 *  <li> <i>Hint:</i> H-Anim Humanoid Joint Names <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimJointNames19774V1.0.txt" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimJointNames19774V1.0.txt</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Humanoid Joint-Segment Hierarchy <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy</a> </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	public String getName();

	/**
	 * Assign String enumeration value ("HumanoidRoot"|"sacroiliac"|"l_hip"|"l_knee"|"l_ankle"|"l_subtalar"|"l_midtarsal"|"l_metatarsal"|"r_hip"|"r_knee"|"r_ankle"|"r_subtalar"|"r_midtarsal"|"r_metatarsal"|"vl5"|"vl4"|"vl3"|"vl2"|"vl1"|"vt12"|"vt11"|"vt10"|"vt9"|"vt8"|"vt7"|"vt6"|"vt5"|"vt4"|"vt3"|"vt2"|"vt1"|"vc7"|"vc6"|"vc5"|"vc4"|"vc3"|"vc2"|"vc1"|"skullbase"|"l_eyelid_joint"|"r_eyelid_joint"|"l_eyeball_joint"|"r_eyeball_joint"|"l_eyebrow_joint"|"r_eyebrow_joint"|"temporomandibular"|"l_sternoclavicular"|"l_acromioclavicular"|"l_shoulder"|"l_elbow"|"l_wrist"|"l_thumb1"|"l_thumb2"|"l_thumb3"|"l_index0"|"l_index1"|"l_index2"|"l_index3"|"l_middle0"|"l_middle1"|"l_middle2"|"l_middle3"|"l_ring0"|"l_ring1"|"l_ring2"|"l_ring3"|"l_pinky0"|"l_pinky1"|"l_pinky2"|"l_pinky3"|"r_sternoclavicular"|"r_acromioclavicular"|"r_shoulder"|"r_elbow"|"r_wrist"|"r_thumb1"|"r_thumb2"|"r_thumb3"|"r_index0"|"r_index1"|"r_index2"|"r_index3"|"r_middle0"|"r_middle1"|"r_middle2"|"r_middle3"|"r_ring0"|"r_ring1"|"r_ring2"|"r_ring3"|"r_pinky0"|"r_pinky1"|"r_pinky2"|"r_pinky3") ['HumanoidRoot'|'sacroiliac'|'l_hip'|'l_knee'|'l_ankle'|'l_subtalar'|'l_midtarsal'|'l_metatarsal'|'r_hip'|'r_knee'|'r_ankle'|'r_subtalar'|'r_midtarsal'|'r_metatarsal'|'vl5'|'vl4'|'vl3'|'vl2'|'vl1'|'vt12'|'vt11'|'vt10'|'vt9'|'vt8'|'vt7'|'vt6'|'vt5'|'vt4'|'vt3'|'vt2'|'vt1'|'vc7'|'vc6'|'vc5'|'vc4'|'vc3'|'vc2'|'vc1'|'skullbase'|'l_eyelid_joint'|'r_eyelid_joint'|'l_eyeball_joint'|'r_eyeball_joint'|'l_eyebrow_joint'|'r_eyebrow_joint'|'temporomandibular'|'l_sternoclavicular'|'l_acromioclavicular'|'l_shoulder'|'l_elbow'|'l_wrist'|'l_thumb1'|'l_thumb2'|'l_thumb3'|'l_index0'|'l_index1'|'l_index2'|'l_index3'|'l_middle0'|'l_middle1'|'l_middle2'|'l_middle3'|'l_ring0'|'l_ring1'|'l_ring2'|'l_ring3'|'l_pinky0'|'l_pinky1'|'l_pinky2'|'l_pinky3'|'r_sternoclavicular'|'r_acromioclavicular'|'r_shoulder'|'r_elbow'|'r_wrist'|'r_thumb1'|'r_thumb2'|'r_thumb3'|'r_index0'|'r_index1'|'r_index2'|'r_index3'|'r_middle0'|'r_middle1'|'r_middle2'|'r_middle3'|'r_ring0'|'r_ring1'|'r_ring2'|'r_ring3'|'r_pinky0'|'r_pinky1'|'r_pinky2'|'r_pinky3'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimJoint node can be identified at run time for animation purposes. Warning: name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. Warning: name is not included if this instance is a USE node. Examples: HumanoidRoot sacroiliac l_hip l_knee l_ankle etc. as listed in H-Anim Specification. Hint: H-Anim Humanoid Joint Names http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimJointNames19774V1.0.txt Hint: H-Anim Specification, Humanoid Joint-Segment Hierarchy http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setName(String newValue);

	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system.
 * <ul>
 *  <li> <i> Warning:</i>  default pose is typically empty (or an identity rotation) to avoid distorted body animations. </li> 
 * </ul>
	 * @return value of rotation field
	 */
	public float[] getRotation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system. Warning: default pose is typically empty (or an identity rotation) to avoid distorted body animations.
	 * @param newValue is new value for the rotation field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setRotation(float[] newValue);

	/**
	 * Provide array of 3-tuple float results within allowed range of (0,infinity) from inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.  * <br>

	 * @return value of scale field
	 */
	public float[] getScale();

	/**
	 * Assign 3-tuple float array within allowed range of (0,infinity) to inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.
	 * @param newValue is new value for the scale field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setScale(float[] newValue);

	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>scaleOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Preliminary rotation of coordinate system before scaling (to allow scaling around arbitrary orientations).  * <br>

	 * @return value of scaleOrientation field
	 */
	public float[] getScaleOrientation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>scaleOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Preliminary rotation of coordinate system before scaling (to allow scaling around arbitrary orientations).
	 * @param newValue is new value for the scaleOrientation field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setScaleOrientation(float[] newValue);

	/**
	 * Provide array of int results within allowed range of [0,infinity) from inputOutput MFInt32 field named <i>skinCoordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Coordinate index values referencing which vertices are influenced by the HAnimJoint.
 * <ul>
 *  <li> <i>Warning:</i> -1 sentinel values are not allowed. </li> 
 *  <li> <i>Hint:</i> corresponding skinCoord Coordinate and skinNormal Normal nodes are directly contained within the ancestor HAnimHumanoid node for this HAnimJoint. </li> 
 *  <li> <i>Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * @return value of skinCoordIndex field
	 */
	public int[] getSkinCoordIndex();

	/**
	 * Assign int array within allowed range of [0,infinity) to inputOutput MFInt32 field named <i>skinCoordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Coordinate index values referencing which vertices are influenced by the HAnimJoint. Warning: -1 sentinel values are not allowed. Hint: corresponding skinCoord Coordinate and skinNormal Normal nodes are directly contained within the ancestor HAnimHumanoid node for this HAnimJoint. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * @param newValue is new value for the skinCoordIndex field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setSkinCoordIndex(int[] newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>skinCoordWeight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Weight deformation values for the corresponding values in the skinCoordIndex field.
 * <ul>
 *  <li> <i> Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * @return value of skinCoordWeight field
	 */
	public float[] getSkinCoordWeight();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>skinCoordWeight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Weight deformation values for the corresponding values in the skinCoordIndex field. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * @param newValue is new value for the skinCoordWeight field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setSkinCoordWeight(float[] newValue);

	/**
	 * Provide array of float results within allowed range of [0,1] from inputOutput MFFloat field named <i>stiffness</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Axial values (0,1) indicating willingness of joint to move (about local X, Y, Z axes), larger stiffness values means greater resistance.
 * <ul>
 *  <li> <i> Hint:</i>  used by inverse kinematics (IK) systems. </li> 
 * </ul>
	 * @return value of stiffness field
	 */
	public float[] getStiffness();

	/**
	 * Assign float array within allowed range of [0,1] to inputOutput MFFloat field named <i>stiffness</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Axial values (0,1) indicating willingness of joint to move (about local X, Y, Z axes), larger stiffness values means greater resistance. Hint: used by inverse kinematics (IK) systems.
	 * @param newValue is new value for the stiffness field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setStiffness(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system.
 * <ul>
 *  <li> <i>Warning:</i> usually HAnimJoint position is controlled by the center field, not the translation field. </li> 
 *  <li> <i>Hint:</i>  since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. </li> 
 * </ul>
	 * @return value of translation field
	 */
	public float[] getTranslation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system. Warning: usually HAnimJoint position is controlled by the center field, not the translation field. Hint: since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid.
	 * @param newValue is new value for the translation field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setTranslation(float[] newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>ulimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Upper limit for maximum joint rotation in radians.
 * <ul>
 *  <li> <i> Hint:</i>  always contains 3 values, one for each local axis. </li> 
 * </ul>
	 * @return value of ulimit field
	 */
	public float[] getUlimit();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>ulimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Upper limit for maximum joint rotation in radians. Hint: always contains 3 values, one for each local axis.
	 * @param newValue is new value for the ulimit field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimJoint setUlimit(float[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJoint setDEF(String newValue);


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
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJoint setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimJoint setCssClass(String newValue);

}
