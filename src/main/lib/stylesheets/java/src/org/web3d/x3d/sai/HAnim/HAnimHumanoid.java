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
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.HAnim.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: The HAnimHumanoid node is used to: (a) store references to the joints, segments, sites, skeleton, optional skin, and fixed viewpoints, (b) serve as a container for the entire humanoid, (c) provide a convenient way of moving the humanoid through its environment, and (d) store human-readable metadata such as name, version, author, copyright, age, gender and other information. HAnimHumanoid contains a skeleton consisting of HAnimJoint, HAnimSegment and HAnimSite nodes. HAnimHumanoid can also contain an optional skin consisting of an IndexedFaceSet mesh with corresponding skinCoord Coordinate|CoordinateDouble vertices and skinNormal Normal vectors.
 * <ul>
 *  <li> <i>Hint:</i> MFNode arrays for the joints, segments, sites, and viewpoints fields provide lists for all HAnim nodes found in the skeleton hierarchy and thus only contain USE node references. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Humanoid <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Humanoid" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Humanoid</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#HAnimHumanoid" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimHumanoid" target="blank">X3D Abstract Specification: HAnimHumanoid</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimHumanoid" target="_blank">X3D Tooltips: HAnimHumanoid</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface HAnimHumanoid extends X3DChildNode, X3DBoundedObject
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
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoid setBboxCenter(float[] newValue);

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
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoid setBboxSize(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Translation offset from origin of local coordinate system.  * <br>

	 * @return value of center field
	 */
	public float[] getCenter();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Translation offset from origin of local coordinate system.
	 * @param newValue is new value for the center field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setCenter(float[] newValue);

	/**
	 * Provide array of String results from inputOutput MFString field named <i>info</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains metadata keyword=value pairs, where approved keyword terms are humanoidVersion authorName authorEmail copyright creationDate usageRestrictions age gender height and weight.
 * <ul>
 *  <li> <i> Hint:</i>  alternate metadata keywords are also allowed. </li> 
 * </ul>
	 * @return value of info field
	 */
	public String[] getInfo();

	/**
	 * Assign String array to inputOutput MFString field named <i>info</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains metadata keyword=value pairs, where approved keyword terms are humanoidVersion authorName authorEmail copyright creationDate usageRestrictions age gender height and weight. Hint: alternate metadata keywords are also allowed.
	 * @param newValue is new value for the info field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setInfo(String[] newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint] joints field contains a list of USE references for all HAnimJoint node instances found within the skeleton hierarchy.
 * <ul>
 *  <li> <i>Hint:</i> order is irrelevant since names are contained in the original DEF objects. </li> 
 *  <li> <i>Hint:</i> these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. </li> 
 *  <li> <i>Warning:</i> the number of contained &amp;lt;HAnimJoint USE='*' containerField='joints'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimJoint USE nodes must include containerField='joints' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimJointObject
	 * @return value of joints field
	 */
	public X3DNode[] getJoints(); // acceptable node types: HAnimJoint

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint] joints field contains a list of USE references for all HAnimJoint node instances found within the skeleton hierarchy. Hint: order is irrelevant since names are contained in the original DEF objects. Hint: these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. Warning: the number of contained &lt;HAnimJoint USE='*' containerField='joints'/&gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. Warning: top-level HAnimJoint USE nodes must include containerField='joints' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint.
	 * @param newValue is new value for the joints field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setJoints(X3DNode[] newValue); // acceptable node types: HAnimJoint

	/**
	 * Add array of child joints nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint.
	 * @param newValue is new value array to be appended the joints field.
	 */
	public void addJoints(X3DNode[] newValue); // acceptable node types: HAnimJoint
	/**
	 * Set single child joints node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the joints field
	 */
	public void setJoints(X3DNode newValue); // acceptable node types: HAnimJoint
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
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoid setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide String value from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that each HAnimHumanoid node in a scene can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Hint:</i> this same name is a required name prefix for all other HAnim nodes within the HAnimHumanoid. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	public String getName();

	/**
	 * Assign String value to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that each HAnimHumanoid node in a scene can be identified at run time for animation purposes. Hint: this same name is a required name prefix for all other HAnim nodes within the HAnimHumanoid. Warning: name is not included if this instance is a USE node. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setName(String newValue);

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
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setRotation(float[] newValue);

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
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setScale(float[] newValue);

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
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setScaleOrientation(float[] newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>segments</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSegment] segments field contains a list of USE references for all HAnimSegment node instances found within the skeleton hierarchy.
 * <ul>
 *  <li> <i>Hint:</i> order is irrelevant since names are contained in the original DEF objects. </li> 
 *  <li> <i>Hint:</i> these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. </li> 
 *  <li> <i>Warning:</i> the number of contained &amp;lt;HAnimSegment USE='*' containerField='segments'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSegment node instances found within the skeleton hierarchy. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimSegment USE nodes must include containerField='segments' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSegment.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSegmentObject
	 * @return value of segments field
	 */
	public X3DNode[] getSegments(); // acceptable node types: HAnimSegment

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>segments</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSegment] segments field contains a list of USE references for all HAnimSegment node instances found within the skeleton hierarchy. Hint: order is irrelevant since names are contained in the original DEF objects. Hint: these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. Warning: the number of contained &lt;HAnimSegment USE='*' containerField='segments'/&gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSegment node instances found within the skeleton hierarchy. Warning: top-level HAnimSegment USE nodes must include containerField='segments' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSegment.
	 * @param newValue is new value for the segments field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setSegments(X3DNode[] newValue); // acceptable node types: HAnimSegment

	/**
	 * Add array of child segments nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSegment.
	 * @param newValue is new value array to be appended the segments field.
	 */
	public void addSegments(X3DNode[] newValue); // acceptable node types: HAnimSegment
	/**
	 * Set single child segments node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the segments field
	 */
	public void setSegments(X3DNode newValue); // acceptable node types: HAnimSegment
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>sites</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] sites field contains a list of USE references for all HAnimSite node instances found within the skeleton hierarchy.
 * <ul>
 *  <li> <i>Hint:</i> order is irrelevant since names are contained in the original DEF objects. </li> 
 *  <li> <i>Hint:</i> these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. </li> 
 *  <li> <i>Warning:</i> the number of contained &amp;lt;HAnimSite USE='*' containerField='sites'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSite node instances found within the skeleton hierarchy. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimSite USE nodes must include containerField='sites' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of sites field
	 */
	public X3DNode[] getSites(); // acceptable node types: HAnimSite

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>sites</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] sites field contains a list of USE references for all HAnimSite node instances found within the skeleton hierarchy. Hint: order is irrelevant since names are contained in the original DEF objects. Hint: these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. Warning: the number of contained &lt;HAnimSite USE='*' containerField='sites'/&gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSite node instances found within the skeleton hierarchy. Warning: top-level HAnimSite USE nodes must include containerField='sites' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value for the sites field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setSites(X3DNode[] newValue); // acceptable node types: HAnimSite

	/**
	 * Add array of child sites nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value array to be appended the sites field.
	 */
	public void addSites(X3DNode[] newValue); // acceptable node types: HAnimSite
	/**
	 * Set single child sites node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the sites field
	 */
	public void setSites(X3DNode newValue); // acceptable node types: HAnimSite
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSite, from inputOutput MFNode field <i>skeleton</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint, HAnimSite] skeleton field contains the HumanoidRoot Joint object and the entire hierarchy of HAnimJoint/HAnimSegment nodes making up the articulated skeleton.
 * <ul>
 *  <li> <i>Hint:</i> immediate children in the skeleton field can also include top-level HAnimSite node declarations, which are landmarks for the overall humanoid figure that are not affected by HAnimJoint movement. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimJoint and HAnimSite nodes must include containerField='skeleton' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimJointObject
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of skeleton field
	 */
	public X3DNode[] getSkeleton(); // acceptable node types: HAnimJoint|HAnimSite

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSite, to inputOutput MFNode field <i>skeleton</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint, HAnimSite] skeleton field contains the HumanoidRoot Joint object and the entire hierarchy of HAnimJoint/HAnimSegment nodes making up the articulated skeleton. Hint: immediate children in the skeleton field can also include top-level HAnimSite node declarations, which are landmarks for the overall humanoid figure that are not affected by HAnimJoint movement. Warning: top-level HAnimJoint and HAnimSite nodes must include containerField='skeleton' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSite.
	 * @param newValue is new value for the skeleton field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setSkeleton(X3DNode[] newValue); // acceptable node types: HAnimJoint|HAnimSite

	/**
	 * Add array of child skeleton nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSite.
	 * @param newValue is new value array to be appended the skeleton field.
	 */
	public void addSkeleton(X3DNode[] newValue); // acceptable node types: HAnimJoint|HAnimSite
	/**
	 * Set single child skeleton node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the skeleton field
	 */
	public void setSkeleton(X3DNode newValue); // acceptable node types: HAnimJoint|HAnimSite
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to Group|Transform|Shape|IndexedFaceSet, from inputOutput MFNode field <i>skin</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [IndexedFaceSet|Group|Transform|Shape] skin field contains one or more IndexedFaceSet definitions. Those IndexedFaceSet definitions utilize the point and normal data that is defined within the skinCoord and skinNormal fields, respectively, of the Humanoid object.
 * <ul>
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Warning:</i>  top-level node must include containerField='skin' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Group|Transform|Shape|IndexedFaceSet.
	 * @see org.web3d.x3d.jsail.Grouping.GroupObject
	 * @see org.web3d.x3d.jsail.Grouping.TransformObject
	 * @see org.web3d.x3d.jsail.Shape.ShapeObject
	 * @see org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject
	 * @return value of skin field
	 */
	public X3DNode[] getSkin(); // acceptable node types: Group|Transform|Shape|IndexedFaceSet

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to Group|Transform|Shape|IndexedFaceSet, to inputOutput MFNode field <i>skin</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [IndexedFaceSet|Group|Transform|Shape] skin field contains one or more IndexedFaceSet definitions. Those IndexedFaceSet definitions utilize the point and normal data that is defined within the skinCoord and skinNormal fields, respectively, of the Humanoid object. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. Warning: top-level node must include containerField='skin' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Group|Transform|Shape|IndexedFaceSet.
	 * @param newValue is new value for the skin field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setSkin(X3DNode[] newValue); // acceptable node types: Group|Transform|Shape|IndexedFaceSet

	/**
	 * Add array of child skin nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Group|Transform|Shape|IndexedFaceSet.
	 * @param newValue is new value array to be appended the skin field.
	 */
	public void addSkin(X3DNode[] newValue); // acceptable node types: Group|Transform|Shape|IndexedFaceSet
	/**
	 * Set single child skin node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the skin field
	 */
	public void setSkin(X3DNode newValue); // acceptable node types: Group|Transform|Shape|IndexedFaceSet
	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>skinCoord</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] skinCoord field contains a single sequence of points, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry.
 * <ul>
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Warning:</i> top-level Coordinate or CoordinateDouble node must include containerField='skinCoord' for proper validation and operation. </li> 
 *  <li> <i>Hint:</i>  a single node is used so that coordIndex references are consistent for all references to these coordinates. </li> 
 * </ul>
	 * @return value of skinCoord field
	 */
	public X3DCoordinateNode getSkinCoord(); // acceptable node types: X3DCoordinateNode

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>skinCoord</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] skinCoord field contains a single sequence of points, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. Warning: top-level Coordinate or CoordinateDouble node must include containerField='skinCoord' for proper validation and operation. Hint: a single node is used so that coordIndex references are consistent for all references to these coordinates.
	 * @param newValue is new value for the skinCoord field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setSkinCoord(X3DCoordinateNode newValue); // acceptable node types: X3DCoordinateNode

	/**
	 * Provide X3DNormalNode instance (using a properly typed node) from inputOutput SFNode field <i>skinNormal</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DNormalNode] skinNormal field contains a single sequence of normal values, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry.
 * <ul>
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Warning:</i>  top-level Normal node must include containerField='skinNormal' for proper validation and operation. </li> 
 * </ul>
	 * @return value of skinNormal field
	 */
	public X3DNormalNode getSkinNormal(); // acceptable node types: X3DNormalNode

	/**
	 * Assign X3DNormalNode instance (using a properly typed node) to inputOutput SFNode field <i>skinNormal</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DNormalNode] skinNormal field contains a single sequence of normal values, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. Warning: top-level Normal node must include containerField='skinNormal' for proper validation and operation.
	 * @param newValue is new value for the skinNormal field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setSkinNormal(X3DNormalNode newValue); // acceptable node types: X3DNormalNode

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. </li> 
 * </ul>
	 * @return value of translation field
	 */
	public float[] getTranslation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system. Hint: since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid.
	 * @param newValue is new value for the translation field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setTranslation(float[] newValue);

	/**
	 * Provide String enumeration value ['2.0'|'2.2'|'etc.'] from inputOutput SFString field named <i>version</i>.
	 * <br><br>
	 * <i>Tooltip:</i> HAnimHumanoid version, where value is 2.0 for standardized ISO 19774 initial version from 2006, and value is 2.2 for draft ISO 19774 version from 2018.
 * <ul>
 *  <li> <i> Warning:</i>  prior versions of HAnim nodes might not validate correctly due to small changes in the contained-node content model. </li> 
 * </ul>
	 * @return value of version field
	 */
	public String getVersion();

	/**
	 * Assign String enumeration value ("2.0"|"2.2") ['2.0'|'2.2'|'etc.'] to inputOutput SFString field named <i>version</i>.
	 * <br><br>
	 * <i>Tooltip:</i> HAnimHumanoid version, where value is 2.0 for standardized ISO 19774 initial version from 2006, and value is 2.2 for draft ISO 19774 version from 2018. Warning: prior versions of HAnim nodes might not validate correctly due to small changes in the contained-node content model.
	 * @param newValue is new value for the version field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setVersion(String newValue);

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>viewpoints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] The viewpoints field contains zero or more special HAnimSite nodes that are only affected by HAnimHumanoid transformations (and no HAnimJoint transformations). Each HAnimSite can contain a Viewpoint as virtual camera in the HAnimHumanoid reference frame (such as viewing the face or profile of the human figure).
 * <ul>
 *  <li> <i>Warning:</i> these are actual node declarations, not USE nodes. </li> 
 *  <li> <i>Hint:</i> the viewpoint field has different functionality than the joints, segments and sites fields. </li> 
 *  <li> <i>Hint:</i> the viewpoints field connects internal Site nodes that in turn hold relative Viewpoint nodes, such as &amp;lt;HAnimSite USE='ObserveFaceSite_view' containerField='viewpoints'/&amp;gt; which has corresponding counterpart nodes &amp;lt;HAnimSite DEF='ObserveFaceSite_view' name='ObserveFaceSite_view' containerField='children'&amp;gt; &amp;lt;Viewpoint description='look at me!'/&amp;gt; &amp;lt;/HAnimSite&amp;gt;. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimSite nodes (in turn containing Viewpoint nodes) must include containerField='viewpoints' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of viewpoints field
	 */
	public X3DNode[] getViewpoints(); // acceptable node types: HAnimSite

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>viewpoints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] The viewpoints field contains zero or more special HAnimSite nodes that are only affected by HAnimHumanoid transformations (and no HAnimJoint transformations). Each HAnimSite can contain a Viewpoint as virtual camera in the HAnimHumanoid reference frame (such as viewing the face or profile of the human figure). Warning: these are actual node declarations, not USE nodes. Hint: the viewpoint field has different functionality than the joints, segments and sites fields. Hint: the viewpoints field connects internal Site nodes that in turn hold relative Viewpoint nodes, such as &lt;HAnimSite USE='ObserveFaceSite_view' containerField='viewpoints'/&gt; which has corresponding counterpart nodes &lt;HAnimSite DEF='ObserveFaceSite_view' name='ObserveFaceSite_view' containerField='children'&gt; &lt;Viewpoint description='look at me!'/&gt; &lt;/HAnimSite&gt;. Warning: top-level HAnimSite nodes (in turn containing Viewpoint nodes) must include containerField='viewpoints' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value for the viewpoints field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoid setViewpoints(X3DNode[] newValue); // acceptable node types: HAnimSite

	/**
	 * Add array of child viewpoints nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value array to be appended the viewpoints field.
	 */
	public void addViewpoints(X3DNode[] newValue); // acceptable node types: HAnimSite
	/**
	 * Set single child viewpoints node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the viewpoints field
	 */
	public void setViewpoints(X3DNode newValue); // acceptable node types: HAnimSite

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoid setDEF(String newValue);


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
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoid setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimHumanoid} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoid setCssClass(String newValue);

}
