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


import org.web3d.x3d.sai.Grouping.X3DGroupingNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Core.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: Each body segment is stored in an HAnimSegment node. HAnimSegment contains Coordinate|CoordinateDouble with containerField='coord', HAnimDisplacer with containerField='displacers' and Shape or grouping nodes with containerField='children'.
 * <ul>
 *  <li> <i>Hint:</i> HAnimSegment displays geometry between parent HAnimJoint and sibling HAnimJoint nodes. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Segment <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Segment" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Segment</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 *  <li> <i>Warning:</i>  the number of contained &amp;lt;HAnimSegment USE='*' containerField='segments'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#HAnimSegment" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimSegment" target="blank">X3D Abstract Specification: HAnimSegment</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimSegment" target="_blank">X3D Tooltips: HAnimSegment</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface HAnimSegment extends X3DGroupingNode
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
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegment setBboxCenter(float[] newValue);

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
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegment setBboxSize(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Location within segment of center of mass.  * <br>

	 * @return value of centerOfMass field
	 */
	public float[] getCenterOfMass();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>centerOfMass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Location within segment of center of mass.
	 * @param newValue is new value for the centerOfMass field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegment setCenterOfMass(float[] newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of children field
	 */
	@Override
	public X3DNode[] getChildren(); // acceptable node types: X3DChildNode

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value for the children field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegment setChildren(X3DNode[] newValue); // acceptable node types: X3DChildNode

	/**
	 * Add array of children nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value array to be appended the children field.
	 */
	@Override
	public void addChildren(X3DNode[] newValue); // acceptable node types: X3DChildNode
	/**
	 * Set single children node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the children field
	 */
	public void setChildren(X3DNode newValue); // acceptable node types: X3DChildNode
	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>coord</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] the coord field is used for HAnimSegment objects that have deformable meshes and shall contain coordinates referenced from the IndexedFaceSet for the paarent HAnimSegment object. The coordinates are given the same name as the HAnim Segment object, but with "_coords" appended to the name (e.g., "skull_coords").
 * <ul>
 *  <li> <i> Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * @return value of coord field
	 */
	public X3DCoordinateNode getCoord(); // acceptable node types: X3DCoordinateNode

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>coord</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] the coord field is used for HAnimSegment objects that have deformable meshes and shall contain coordinates referenced from the IndexedFaceSet for the paarent HAnimSegment object. The coordinates are given the same name as the HAnim Segment object, but with "_coords" appended to the name (e.g., "skull_coords"). Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * @param newValue is new value for the coord field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegment setCoord(X3DCoordinateNode newValue); // acceptable node types: X3DCoordinateNode

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>displacers</i>.
	 * <br><br>
	 * <i>Tooltip:</i> HAnimDisplacer] the displacers field stores the Displacer objects for a particular Segment object.
 * <ul>
 *  <li> <i> Warning:</i>  index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimDisplacerObject
	 * @return value of displacers field
	 */
	public X3DNode[] getDisplacers(); // acceptable node types: HAnimDisplacer

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>displacers</i>.
	 * <br><br>
	 * <i>Tooltip:</i> HAnimDisplacer] the displacers field stores the Displacer objects for a particular Segment object. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimDisplacer.
	 * @param newValue is new value for the displacers field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegment setDisplacers(X3DNode[] newValue); // acceptable node types: HAnimDisplacer

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
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Total mass of the segment, 0 if not available.  * <br>

	 * @return value of mass field
	 */
	public float getMass();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>mass</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Total mass of the segment, 0 if not available.
	 * @param newValue is new value for the mass field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegment setMass(float newValue);

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
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegment setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide array of float results within allowed range of [0,infinity) from inputOutput MFFloat field named <i>momentsOfInertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  3x3 moments of inertia matrix. default: 0 0 0 0 0 0 0 0 0.  * <br>

	 * @return value of momentsOfInertia field
	 */
	public float[] getMomentsOfInertia();

	/**
	 * Assign float array within allowed range of [0,infinity) to inputOutput MFFloat field named <i>momentsOfInertia</i>.
	 * <br><br>
	 * <i>Tooltip:</i> 3x3 moments of inertia matrix. default: 0 0 0 0 0 0 0 0 0.
	 * @param newValue is new value for the momentsOfInertia field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegment setMomentsOfInertia(float[] newValue);

	/**
	 * Provide String enumeration value ['sacrum'|'pelvis'|'l_thigh'|'l_calf'|'l_hindfoot'|'l_midproximal'|'l_middistal'|'l_forefoot'|'r_thigh'|'r_calf'|'r_hindfoot'|'r_midproximal'|'r_middistal'|'r_forefoot'|'l5'|'l4'|'l3'|'l2'|'l1'|'t12'|'t11'|'t10'|'t9'|'t8'|'t7'|'t6'|'t5'|'t4'|'t3'|'t2'|'t1'|'c7'|'c6'|'c5'|'c4'|'c3'|'c2'|'c1'|'skull'|'l_eyelid'|'r_eyelid'|'l_eyeball'|'r_eyeball'|'l_eyebrow'|'r_eyebrow'|'jaw'|'l_clavicle'|'l_scapula'|'l_upperarm'|'l_forearm'|'l_hand'|'l_thumb_metacarpal'|'l_thumb_proximal'|'l_thumb_distal'|'l_index_metacarpal'|'l_index_proximal'|'l_index_middle'|'l_index_distal'|'l_middle_metacarpal'|'l_middle_proximal'|'l_middle_middle'|'l_middle_distal'|'l_ring_metacarpal'|'l_ring_proximal'|'l_ring_middle'|'l_ring_distal'|'l_pinky_metacarpal'|'l_pinky_proximal'|'l_pinky_middle'|'l_pinky_distal'|'r_clavicle'|'r_scapula'|'r_upperarm'|'r_forearm'|'r_hand'|'r_thumb_metacarpal'|'r_thumb_proximal'|'r_thumb_distal'|'r_index_metacarpal'|'r_index_proximal'|'r_index_middle'|'r_index_distal'|'r_middle_metacarpal'|'r_middle_proximal'|'r_middle_middle'|'r_middle_distal'|'r_ring_metacarpal'|'r_ring_proximal'|'r_ring_middle'|'r_ring_distal'|'r_pinky_metacarpal'|'r_pinky_proximal'|'r_pinky_middle'|'r_pinky_distal'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimSegment node can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Warning:</i> name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. Examples: sacrum pelvis l_thigh l_calf etc. as listed in H-Anim Specification. </li> 
 *  <li> <i>Hint:</i> for abitrary humanoids, HAnimSegment name can describe geometry between parent HAnimJoint and sibling HAnimJoint nodes (for example LeftHip_to_LeftKnee). </li> 
 *  <li> <i>Hint:</i> H-Anim Humanoid Segment Names H-Anim Specification, Humanoid Joint-Segment Hierarchy <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSegmentNames19774V1.0.txt" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSegmentNames19774V1.0.txt</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Humanoid Joint-Segment Hierarchy <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy</a> </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	public String getName();

	/**
	 * Assign String enumeration value ("sacrum"|"pelvis"|"l_thigh"|"l_calf"|"l_hindfoot"|"l_midproximal"|"l_middistal"|"l_forefoot"|"r_thigh"|"r_calf"|"r_hindfoot"|"r_midproximal"|"r_middistal"|"r_forefoot"|"l5"|"l4"|"l3"|"l2"|"l1"|"t12"|"t11"|"t10"|"t9"|"t8"|"t7"|"t6"|"t5"|"t4"|"t3"|"t2"|"t1"|"c7"|"c6"|"c5"|"c4"|"c3"|"c2"|"c1"|"skull"|"l_eyelid"|"r_eyelid"|"l_eyeball"|"r_eyeball"|"l_eyebrow"|"r_eyebrow"|"jaw"|"l_clavicle"|"l_scapula"|"l_upperarm"|"l_forearm"|"l_hand"|"l_thumb_metacarpal"|"l_thumb_proximal"|"l_thumb_distal"|"l_index_metacarpal"|"l_index_proximal"|"l_index_middle"|"l_index_distal"|"l_middle_metacarpal"|"l_middle_proximal"|"l_middle_middle"|"l_middle_distal"|"l_ring_metacarpal"|"l_ring_proximal"|"l_ring_middle"|"l_ring_distal"|"l_pinky_metacarpal"|"l_pinky_proximal"|"l_pinky_middle"|"l_pinky_distal"|"r_clavicle"|"r_scapula"|"r_upperarm"|"r_forearm"|"r_hand"|"r_thumb_metacarpal"|"r_thumb_proximal"|"r_thumb_distal"|"r_index_metacarpal"|"r_index_proximal"|"r_index_middle"|"r_index_distal"|"r_middle_metacarpal"|"r_middle_proximal"|"r_middle_middle"|"r_middle_distal"|"r_ring_metacarpal"|"r_ring_proximal"|"r_ring_middle"|"r_ring_distal"|"r_pinky_metacarpal"|"r_pinky_proximal"|"r_pinky_middle"|"r_pinky_distal") ['sacrum'|'pelvis'|'l_thigh'|'l_calf'|'l_hindfoot'|'l_midproximal'|'l_middistal'|'l_forefoot'|'r_thigh'|'r_calf'|'r_hindfoot'|'r_midproximal'|'r_middistal'|'r_forefoot'|'l5'|'l4'|'l3'|'l2'|'l1'|'t12'|'t11'|'t10'|'t9'|'t8'|'t7'|'t6'|'t5'|'t4'|'t3'|'t2'|'t1'|'c7'|'c6'|'c5'|'c4'|'c3'|'c2'|'c1'|'skull'|'l_eyelid'|'r_eyelid'|'l_eyeball'|'r_eyeball'|'l_eyebrow'|'r_eyebrow'|'jaw'|'l_clavicle'|'l_scapula'|'l_upperarm'|'l_forearm'|'l_hand'|'l_thumb_metacarpal'|'l_thumb_proximal'|'l_thumb_distal'|'l_index_metacarpal'|'l_index_proximal'|'l_index_middle'|'l_index_distal'|'l_middle_metacarpal'|'l_middle_proximal'|'l_middle_middle'|'l_middle_distal'|'l_ring_metacarpal'|'l_ring_proximal'|'l_ring_middle'|'l_ring_distal'|'l_pinky_metacarpal'|'l_pinky_proximal'|'l_pinky_middle'|'l_pinky_distal'|'r_clavicle'|'r_scapula'|'r_upperarm'|'r_forearm'|'r_hand'|'r_thumb_metacarpal'|'r_thumb_proximal'|'r_thumb_distal'|'r_index_metacarpal'|'r_index_proximal'|'r_index_middle'|'r_index_distal'|'r_middle_metacarpal'|'r_middle_proximal'|'r_middle_middle'|'r_middle_distal'|'r_ring_metacarpal'|'r_ring_proximal'|'r_ring_middle'|'r_ring_distal'|'r_pinky_metacarpal'|'r_pinky_proximal'|'r_pinky_middle'|'r_pinky_distal'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimSegment node can be identified at run time for animation purposes. Warning: name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. Warning: name is not included if this instance is a USE node. Examples: sacrum pelvis l_thigh l_calf etc. as listed in H-Anim Specification. Hint: for abitrary humanoids, HAnimSegment name can describe geometry between parent HAnimJoint and sibling HAnimJoint nodes (for example LeftHip_to_LeftKnee). Hint: H-Anim Humanoid Segment Names H-Anim Specification, Humanoid Joint-Segment Hierarchy http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSegmentNames19774V1.0.txt Hint: H-Anim Specification, Humanoid Joint-Segment Hierarchy http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/concepts.html#Hierarchy Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSegment setName(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegment setDEF(String newValue);


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
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegment setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimSegment} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSegment setCssClass(String newValue);

}
