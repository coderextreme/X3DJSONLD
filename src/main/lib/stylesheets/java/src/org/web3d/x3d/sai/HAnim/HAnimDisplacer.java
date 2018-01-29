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


import org.web3d.x3d.sai.Rendering.X3DGeometricPropertyNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: HAnimDisplacer nodes alter the shape of coordinate-based geometry within parent HAnimSegment or parent HAnimBody/HanimHumanoid nodes. Displacer effects are scaled by the corresponding weight field.
 * <ul>
 *  <li> <i>Hint:</i> HAnimDisplacer can be used in three different ways: (a) identify vertices corresponding to a particular feature in a parent HAnimSegment node, (b) represent a particular muscular action for a parent HAnimJoint node by displacing corresponding HAnimHumanoid skin vertices in various directions (linearly or radially), or (c) represent a complete configuration of coordinate vertices in a parent HAnimSegment node or parent HAnimJoint/HAnimHumanoid nodes. Example: in the case of a face, there might be a separate HAnimDisplacer node for each facial expression. </li> 
 *  <li> <i>Hint:</i> name suffixes include _feature, _action and _config. </li> 
 *  <li> <i>Hint:</i> multiple HAnimDisplacer nodes must appear consecutively inside parent HAnimSegment for proper content validationi in XML encoding. </li> 
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Displacer <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Displacer" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Displacer</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#HAnimDisplacer" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimDisplacer" target="blank">X3D Abstract Specification: HAnimDisplacer</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimDisplacer" target="_blank">X3D Tooltips: HAnimDisplacer</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface HAnimDisplacer extends X3DGeometricPropertyNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of int results within allowed range of [0,infinity) from initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Defines index values into the parent HAnimSegment or HAnimBody/HAnimHumanoid coordinate array for the mesh of vertices affected by this HAnimDisplacer. Values start at index 0.
 * <ul>
 *  <li> <i> Warning:</i>  -1 sentinel values are not allowed. </li> 
 * </ul>
	 * @return value of coordIndex field
	 */
	public int[] getCoordIndex();

	/**
	 * Assign int array within allowed range of [0,infinity) to initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Defines index values into the parent HAnimSegment or HAnimBody/HAnimHumanoid coordinate array for the mesh of vertices affected by this HAnimDisplacer. Values start at index 0. Warning: -1 sentinel values are not allowed.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacer setCoordIndex(int[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput MFVec3f field named <i>displacements</i>.
	 * <br><br>
	 * <i>Tooltip:</i> displacements are a set of SFVec3f values added to neutral/resting position of each of the corresponding HAnimSegment vertices (or HAnimJoint/HAnimHumanoid vertices) referenced by coordIndex field.
 * <ul>
 *  <li> <i>Hint:</i> Individual displacement values are scaled by the weight factor, if present. </li> 
 *  <li> <i>Hint:</i>  since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. </li> 
 * </ul>
	 * @return value of displacements field
	 */
	public float[] getDisplacements();

	/**
	 * Assign 3-tuple float array to inputOutput MFVec3f field named <i>displacements</i>.
	 * <br><br>
	 * <i>Tooltip:</i> displacements are a set of SFVec3f values added to neutral/resting position of each of the corresponding HAnimSegment vertices (or HAnimJoint/HAnimHumanoid vertices) referenced by coordIndex field. Hint: Individual displacement values are scaled by the weight factor, if present. Hint: since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid.
	 * @param newValue is new value for the displacements field.
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacer setDisplacements(float[] newValue);

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
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacer setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide String enumeration value ['sellion'|'r_infraorbitale'|'l_infraorbitale'|'supramenton'|'r_tragion'|'r_gonion'|'l_tragion'|'l_gonion'|'nuchale'|'r_clavicale'|'suprasternale'|'l_clavicale'|'r_thelion'|'l_thelion'|'substernale'|'r_rib10'|'r_asis'|'l_rib10'|'l_asis'|'r_iliocristale'|'r_trochanterion'|'l_iliocristale'|'l_trochanterion'|'cervicale'|'rib10_midspine'|'r_psis'|'l_psis'|'waist_preferred_post'|'r_acromion'|'r_axilla_ant'|'r_radial_styloid'|'r_axilla_post'|'r_olecranon'|'r_humeral_lateral_epicn'|'r_humeral_medial_epicn'|'r_radiale'|'r_metacarpal_pha2'|'r_dactylion'|'r_ulnar_styloid'|'r_metacarpal_pha5'|'l_acromion'|'l_axilla_ant'|'l_radial_styloid'|'l_axilla_post'|'l_olecranon'|'l_humeral_lateral_epicn'|'l_humeral_medial_epicn'|'l_radiale'|'l_metacarpal_pha2'|'l_dactylion'|'l_ulnar_styloid'|'l_metacarpal_pha5'|'r_knee_crease'|'r_femoral_lateral_epicn'|'r_femoral_medial_epicn'|'r_metatarsal_pha5'|'r_lateral_malleolus'|'r_medial_malleolus'|'r_sphyrion'|'r_metatarsal_pha1'|'r_calcaneous_post'|'r_digit2'|'l_knee_crease'|'l_femoral_lateral_epicn'|'l_femoral_medial_epicn'|'l_metatarsal_pha5'|'l_lateral_malleolus'|'l_medial_malleolus'|'l_sphyrion'|'l_metatarsal_pha1'|'l_calcaneous_post'|'l_digit2'|'crotch'|'r_neck_base'|'l_neck_base'|'navel'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimDisplacer node can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Warning:</i> name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. Examples: sellion r_infraorbitale etc. as listed in H-Anim Specification. </li> 
 *  <li> <i>Hint:</i> H-Anim Feature Points <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSurfaceFeaturePoints19774V1.0.txt" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSurfaceFeaturePoints19774V1.0.txt</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Feature points for the human body <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html</a> </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	public String getName();

	/**
	 * Assign String enumeration value ("sellion"|"r_infraorbitale"|"l_infraorbitale"|"supramenton"|"r_tragion"|"r_gonion"|"l_tragion"|"l_gonion"|"nuchale"|"r_clavicale"|"suprasternale"|"l_clavicale"|"r_thelion"|"l_thelion"|"substernale"|"r_rib10"|"r_asis"|"l_rib10"|"l_asis"|"r_iliocristale"|"r_trochanterion"|"l_iliocristale"|"l_trochanterion"|"cervicale"|"rib10_midspine"|"r_psis"|"l_psis"|"waist_preferred_post"|"r_acromion"|"r_axilla_ant"|"r_radial_styloid"|"r_axilla_post"|"r_olecranon"|"r_humeral_lateral_epicn"|"r_humeral_medial_epicn"|"r_radiale"|"r_metacarpal_pha2"|"r_dactylion"|"r_ulnar_styloid"|"r_metacarpal_pha5"|"l_acromion"|"l_axilla_ant"|"l_radial_styloid"|"l_axilla_post"|"l_olecranon"|"l_humeral_lateral_epicn"|"l_humeral_medial_epicn"|"l_radiale"|"l_metacarpal_pha2"|"l_dactylion"|"l_ulnar_styloid"|"l_metacarpal_pha5"|"r_knee_crease"|"r_femoral_lateral_epicn"|"r_femoral_medial_epicn"|"r_metatarsal_pha5"|"r_lateral_malleolus"|"r_medial_malleolus"|"r_sphyrion"|"r_metatarsal_pha1"|"r_calcaneous_post"|"r_digit2"|"l_knee_crease"|"l_femoral_lateral_epicn"|"l_femoral_medial_epicn"|"l_metatarsal_pha5"|"l_lateral_malleolus"|"l_medial_malleolus"|"l_sphyrion"|"l_metatarsal_pha1"|"l_calcaneous_post"|"l_digit2"|"crotch"|"r_neck_base"|"l_neck_base"|"navel") ['sellion'|'r_infraorbitale'|'l_infraorbitale'|'supramenton'|'r_tragion'|'r_gonion'|'l_tragion'|'l_gonion'|'nuchale'|'r_clavicale'|'suprasternale'|'l_clavicale'|'r_thelion'|'l_thelion'|'substernale'|'r_rib10'|'r_asis'|'l_rib10'|'l_asis'|'r_iliocristale'|'r_trochanterion'|'l_iliocristale'|'l_trochanterion'|'cervicale'|'rib10_midspine'|'r_psis'|'l_psis'|'waist_preferred_post'|'r_acromion'|'r_axilla_ant'|'r_radial_styloid'|'r_axilla_post'|'r_olecranon'|'r_humeral_lateral_epicn'|'r_humeral_medial_epicn'|'r_radiale'|'r_metacarpal_pha2'|'r_dactylion'|'r_ulnar_styloid'|'r_metacarpal_pha5'|'l_acromion'|'l_axilla_ant'|'l_radial_styloid'|'l_axilla_post'|'l_olecranon'|'l_humeral_lateral_epicn'|'l_humeral_medial_epicn'|'l_radiale'|'l_metacarpal_pha2'|'l_dactylion'|'l_ulnar_styloid'|'l_metacarpal_pha5'|'r_knee_crease'|'r_femoral_lateral_epicn'|'r_femoral_medial_epicn'|'r_metatarsal_pha5'|'r_lateral_malleolus'|'r_medial_malleolus'|'r_sphyrion'|'r_metatarsal_pha1'|'r_calcaneous_post'|'r_digit2'|'l_knee_crease'|'l_femoral_lateral_epicn'|'l_femoral_medial_epicn'|'l_metatarsal_pha5'|'l_lateral_malleolus'|'l_medial_malleolus'|'l_sphyrion'|'l_metatarsal_pha1'|'l_calcaneous_post'|'l_digit2'|'crotch'|'r_neck_base'|'l_neck_base'|'navel'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that HAnimDisplacer node can be identified at run time for animation purposes. Warning: name prefix must match ancestor HAnimHumanoid name followed by underscore character, for example 'Nancy_' prepended before location name. Warning: name is not included if this instance is a USE node. Examples: sellion r_infraorbitale etc. as listed in H-Anim Specification. Hint: H-Anim Feature Points http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/tables/HAnimSurfaceFeaturePoints19774V1.0.txt Hint: H-Anim Specification, Feature points for the human body http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/FeaturePoints.html Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacer setName(String newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The weigh factor has typical range [0,1] and defines the scale factor applied to displacement values before adding them to neutral vertex positions.
 * <ul>
 *  <li> <i> Hint:</i>  apply a non-zero weight factor to see the effect of HAnimDisplacer displacements. </li> 
 * </ul>
	 * @return value of weight field
	 */
	public float getWeight();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The weigh factor has typical range [0,1] and defines the scale factor applied to displacement values before adding them to neutral vertex positions. Hint: apply a non-zero weight factor to see the effect of HAnimDisplacer displacements.
	 * @param newValue is new value for the weight field.
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimDisplacer setWeight(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes.
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacer setDEF(String newValue);


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
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacer setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimDisplacer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimDisplacer setCssClass(String newValue);

}
