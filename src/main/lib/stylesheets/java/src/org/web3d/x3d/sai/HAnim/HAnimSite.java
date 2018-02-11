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
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Core.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: An HAnimSite node serves three purposes: (a) define an "end effector" location which can be used by an inverse kinematics system, (b) define an attachment point for accessories such as jewelry and clothing, and (c) define a location for a Viewpoint virtual camera in the reference frame of an HAnimSegment (such as a view "through the eyes" of the humanoid for use in multi-user worlds).
 * <ul>
 *  <li> <i>Hint:</i> HAnimSite nodes are stored as children of an HAnimSegment node. </li> 
 *  <li> <i>Warning:</i> ensure that visible HAnimSite locations are not inadvertantly obscured by skin animation. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Site <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Site" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Site</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Annex B, Feature points for the human body <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 *  <li> <i>Warning:</i>  the number of contained &amp;lt;HAnimSite USE='*' containerField='sites'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSite node instances found within the skeleton hierarchy. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#HAnimSite" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimSite" target="blank">X3D Abstract Specification: HAnimSite</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimSite" target="_blank">X3D Tooltips: HAnimSite</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface HAnimSite extends X3DGroupingNode
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
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSite setBboxCenter(float[] newValue);

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
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSite setBboxSize(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Default location of this HAnimSite, i.e. offset of center from origin of local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  center field indicates default origin relative to overall humanoid body and is rarely modified. For HAnimSite animation, ROUTE position-change events to translation field instead. </li> 
 * </ul>
	 * @return value of center field
	 */
	public float[] getCenter();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Default location of this HAnimSite, i.e. offset of center from origin of local coordinate system. Hint: center field indicates default origin relative to overall humanoid body and is rarely modified. For HAnimSite animation, ROUTE position-change events to translation field instead.
	 * @param newValue is new value for the center field.
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSite setCenter(float[] newValue);

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
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSite setChildren(X3DNode[] newValue); // acceptable node types: X3DChildNode

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
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSite setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide String enumeration value ['cervicale'|'crotch'|'l_acromion'|'l_asis'|'l_axilla_ant'|'l_axilla_post'|'l_calcaneous_post'|'l_clavicale'|'l_dactylion'|'l_digit2'|'l_femoral_lateral_epicn'|'l_femoral_medial_epicn'|'l_forefoot_tip'|'l_gonion'|'l_hand_tip'|'l_humeral_lateral_epicn'|'l_humeral_medial_epicn'|'l_iliocristale'|'l_index_distal_tip'|'l_infraorbitale'|'l_knee_crease'|'l_lateral_malleolus'|'l_medial_malleolus'|'l_metacarpal_pha2'|'l_metacarpal_pha5'|'l_metatarsal_pha1'|'l_metatarsal_pha5'|'l_middle_distal_tip'|'l_neck_base'|'l_olecranon'|'l_pinky_distal_tip'|'l_psis'|'l_radial_styloid'|'l_radiale'|'l_rib10'|'l_ring_distal_tip'|'l_sphyrion'|'l_thelion'|'l_thumb_distal_tip'|'l_tragion'|'l_trochanterion'|'l_ulnar_styloid'|'navel'|'nuchale'|'r_acromion'|'r_asis'|'r_axilla_ant'|'r_axilla_post'|'r_calcaneous_post'|'r_clavicale'|'r_dactylion'|'r_digit2'|'r_femoral_lateral_epicn'|'r_femoral_medial_epicn'|'r_forefoot_tip'|'r_gonion'|'r_hand_tip'|'r_humeral_lateral_epicn'|'r_humeral_medial_epicn'|'r_iliocristale'|'r_index_distal_tip'|'r_infraorbitale'|'r_knee_crease'|'r_lateral_malleolus'|'r_medial_malleolus'|'r_metacarpal_pha2'|'r_metacarpal_pha5'|'r_metatarsal_pha1'|'r_metatarsal_pha5'|'r_middle_distal_tip'|'r_neck_base'|'r_olecranon'|'r_pinky_distal_tip'|'r_psis'|'r_radial_styloid'|'r_radiale'|'r_rib10'|'r_ring_distal_tip'|'r_sphyrion'|'r_thelion'|'r_thumb_distal_tip'|'r_tragion'|'r_trochanterion'|'r_ulnar_styloid'|'rib10_midspine'|'sellion'|'skull_tip'|'substernale'|'supramenton'|'suprasternale'|'waist_preferred_post'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimSite node can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Warning:</i> name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. </li> 
 *  <li> <i>Hint:</i> HAnimSite nodes used as end effectors have '_tip' suffix appended to the name. </li> 
 *  <li> <i>Hint:</i> HAnimSite nodes containing a Viewpoint location have '_view' suffix appended to the name. </li> 
 *  <li> <i>Hint:</i> HAnimSite nodes serving other purposes have '_pt' suffix appended to the name. </li> 
 *  <li> <i>Warning:</i> HAnimSite name must end in '_tip' or '_view' or '_pt' suffix. </li> 
 *  <li> <i>Hint:</i> additional example name bases (such as cervicale l_infraorbitale supramenton etc.) are listed in H-Anim Specification. </li> 
 *  <li> <i>Hint:</i> H-Anim Humanoid Site Names LOA-3 <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSiteLoa3Names19774V1.0.txt" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSiteLoa3Names19774V1.0.txt</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, LOA-3 default Site object translations <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LOA3DefaultSiteTranslations" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LOA3DefaultSiteTranslations</a> </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	public String getName();

	/**
	 * Assign String enumeration value ("cervicale"|"crotch"|"l_acromion"|"l_asis"|"l_axilla_ant"|"l_axilla_post"|"l_calcaneous_post"|"l_clavicale"|"l_dactylion"|"l_digit2"|"l_femoral_lateral_epicn"|"l_femoral_medial_epicn"|"l_forefoot_tip"|"l_gonion"|"l_hand_tip"|"l_humeral_lateral_epicn"|"l_humeral_medial_epicn"|"l_iliocristale"|"l_index_distal_tip"|"l_infraorbitale"|"l_knee_crease"|"l_lateral_malleolus"|"l_medial_malleolus"|"l_metacarpal_pha2"|"l_metacarpal_pha5"|"l_metatarsal_pha1"|"l_metatarsal_pha5"|"l_middle_distal_tip"|"l_neck_base"|"l_olecranon"|"l_pinky_distal_tip"|"l_psis"|"l_radial_styloid"|"l_radiale"|"l_rib10"|"l_ring_distal_tip"|"l_sphyrion"|"l_thelion"|"l_thumb_distal_tip"|"l_tragion"|"l_trochanterion"|"l_ulnar_styloid"|"navel"|"nuchale"|"r_acromion"|"r_asis"|"r_axilla_ant"|"r_axilla_post"|"r_calcaneous_post"|"r_clavicale"|"r_dactylion"|"r_digit2"|"r_femoral_lateral_epicn"|"r_femoral_medial_epicn"|"r_forefoot_tip"|"r_gonion"|"r_hand_tip"|"r_humeral_lateral_epicn"|"r_humeral_medial_epicn"|"r_iliocristale"|"r_index_distal_tip"|"r_infraorbitale"|"r_knee_crease"|"r_lateral_malleolus"|"r_medial_malleolus"|"r_metacarpal_pha2"|"r_metacarpal_pha5"|"r_metatarsal_pha1"|"r_metatarsal_pha5"|"r_middle_distal_tip"|"r_neck_base"|"r_olecranon"|"r_pinky_distal_tip"|"r_psis"|"r_radial_styloid"|"r_radiale"|"r_rib10"|"r_ring_distal_tip"|"r_sphyrion"|"r_thelion"|"r_thumb_distal_tip"|"r_tragion"|"r_trochanterion"|"r_ulnar_styloid"|"rib10_midspine"|"sellion"|"skull_tip"|"substernale"|"supramenton"|"suprasternale"|"waist_preferred_post") ['cervicale'|'crotch'|'l_acromion'|'l_asis'|'l_axilla_ant'|'l_axilla_post'|'l_calcaneous_post'|'l_clavicale'|'l_dactylion'|'l_digit2'|'l_femoral_lateral_epicn'|'l_femoral_medial_epicn'|'l_forefoot_tip'|'l_gonion'|'l_hand_tip'|'l_humeral_lateral_epicn'|'l_humeral_medial_epicn'|'l_iliocristale'|'l_index_distal_tip'|'l_infraorbitale'|'l_knee_crease'|'l_lateral_malleolus'|'l_medial_malleolus'|'l_metacarpal_pha2'|'l_metacarpal_pha5'|'l_metatarsal_pha1'|'l_metatarsal_pha5'|'l_middle_distal_tip'|'l_neck_base'|'l_olecranon'|'l_pinky_distal_tip'|'l_psis'|'l_radial_styloid'|'l_radiale'|'l_rib10'|'l_ring_distal_tip'|'l_sphyrion'|'l_thelion'|'l_thumb_distal_tip'|'l_tragion'|'l_trochanterion'|'l_ulnar_styloid'|'navel'|'nuchale'|'r_acromion'|'r_asis'|'r_axilla_ant'|'r_axilla_post'|'r_calcaneous_post'|'r_clavicale'|'r_dactylion'|'r_digit2'|'r_femoral_lateral_epicn'|'r_femoral_medial_epicn'|'r_forefoot_tip'|'r_gonion'|'r_hand_tip'|'r_humeral_lateral_epicn'|'r_humeral_medial_epicn'|'r_iliocristale'|'r_index_distal_tip'|'r_infraorbitale'|'r_knee_crease'|'r_lateral_malleolus'|'r_medial_malleolus'|'r_metacarpal_pha2'|'r_metacarpal_pha5'|'r_metatarsal_pha1'|'r_metatarsal_pha5'|'r_middle_distal_tip'|'r_neck_base'|'r_olecranon'|'r_pinky_distal_tip'|'r_psis'|'r_radial_styloid'|'r_radiale'|'r_rib10'|'r_ring_distal_tip'|'r_sphyrion'|'r_thelion'|'r_thumb_distal_tip'|'r_tragion'|'r_trochanterion'|'r_ulnar_styloid'|'rib10_midspine'|'sellion'|'skull_tip'|'substernale'|'supramenton'|'suprasternale'|'waist_preferred_post'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimSite node can be identified at run time for animation purposes. Warning: name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. Warning: name is not included if this instance is a USE node. Hint: HAnimSite nodes used as end effectors have '_tip' suffix appended to the name. Hint: HAnimSite nodes containing a Viewpoint location have '_view' suffix appended to the name. Hint: HAnimSite nodes serving other purposes have '_pt' suffix appended to the name. Warning: HAnimSite name must end in '_tip' or '_view' or '_pt' suffix. Hint: additional example name bases (such as cervicale l_infraorbitale supramenton etc.) are listed in H-Anim Specification. Hint: H-Anim Humanoid Site Names LOA-3 http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSiteLoa3Names19774V1.0.txt Hint: H-Anim Specification, LOA-3 default Site object translations http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LOA3DefaultSiteTranslations Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSite setName(String newValue);

	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Orientation of children relative to local coordinate system.  * <br>

	 * @return value of rotation field
	 */
	public float[] getRotation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system.
	 * @param newValue is new value for the rotation field.
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSite setRotation(float[] newValue);

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
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSite setScale(float[] newValue);

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
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSite setScaleOrientation(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system.
 * <ul>
 *  <li> <i>Hint:</i> since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. </li> 
 *  <li> <i>Hint:</i>  center field indicates default origin relative to overall humanoid body and is rarely modified. For HAnimSite animation, ROUTE position-change events to translation field instead. </li> 
 * </ul>
	 * @return value of translation field
	 */
	public float[] getTranslation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system. Hint: since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. Hint: center field indicates default origin relative to overall humanoid body and is rarely modified. For HAnimSite animation, ROUTE position-change events to translation field instead.
	 * @param newValue is new value for the translation field.
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimSite setTranslation(float[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSite setDEF(String newValue);


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
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSite setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimSite} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimSite setCssClass(String newValue);

}
