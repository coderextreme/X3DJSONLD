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

package org.web3d.x3d.sai.DIS;


import org.web3d.x3d.sai.Grouping.X3DGroupingNode;
import org.web3d.x3d.sai.Networking.X3DNetworkSensorNode;

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
 * <i>X3D node tooltip</i>: EspduTransform is a networked Transform node that can contain most nodes. If activated, EspduTransform can send or receive Entity State Protocol Data Unit (PDU) packets, also integrating functionality for the following DIS PDUs: EntityStatePdu, CollisionPdu, DetonatePdu, FirePdu, CreateEntity and RemoveEntity PDUs.
 * <ul>
 *  <li> <i>Hint:</i> these PDU packets use the IEEE Distributed Interactive Simulation (DIS) protocol. </li> 
 *  <li> <i>Hint:</i> Savage Developers Guide on DIS <br> <a href="https://savage.nps.edu/Savage/developers.html#DIS" target="_blank">https://savage.nps.edu/Savage/developers.html#DIS</a> </li> 
 *  <li> <i>Hint:</i> insert a Shape node before adding geometry or Appearance. </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='DIS' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#EspduTransform" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/dis.html#EspduTransform" target="blank">X3D Abstract Specification: EspduTransform</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#EspduTransform" target="_blank">X3D Tooltips: EspduTransform</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface EspduTransform extends X3DGroupingNode, X3DNetworkSensorNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>address</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Multicast network address, or else "localhost" Example: 224.2.181.145.  * <br>

	 * @return value of address field
	 */
	public String getAddress();

	/**
	 * Assign String value to inputOutput SFString field named <i>address</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Multicast network address, or else "localhost" Example: 224.2.181.145.
	 * @param newValue is new value for the address field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setAddress(String newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>applicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise applicationID is unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.  * <br>

	 * @return value of applicationID field
	 */
	public int getApplicationID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>applicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise applicationID is unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.
	 * @param newValue is new value for the applicationID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setApplicationID(int newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>articulationParameterArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Information required for representation of the entity's visual appearance and position of its articulated parts.
 * <ul>
 *  <li> <i> Hint:</i>  renamed as Variable Parameter in IEEE DIS 2012 revised standard. </li> 
 * </ul>
	 * @return value of articulationParameterArray field
	 */
	public float[] getArticulationParameterArray();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>articulationParameterArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Information required for representation of the entity's visual appearance and position of its articulated parts. Hint: renamed as Variable Parameter in IEEE DIS 2012 revised standard.
	 * @param newValue is new value for the articulationParameterArray field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setArticulationParameterArray(float[] newValue);

	/**
	 * Provide array of int results from inputOutput MFInt32 field named <i>articulationParameterChangeIndicatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of change counters, each incremented when an articulated parameter is updated.#IMPLIED] .  * <br>

	 * @return value of articulationParameterChangeIndicatorArray field
	 */
	public int[] getArticulationParameterChangeIndicatorArray();

	/**
	 * Assign int array to inputOutput MFInt32 field named <i>articulationParameterChangeIndicatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of change counters, each incremented when an articulated parameter is updated.#IMPLIED] .
	 * @param newValue is new value for the articulationParameterChangeIndicatorArray field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setArticulationParameterChangeIndicatorArray(int[] newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>articulationParameterCount</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Number of articulated parameters attached to this entity state PDU.  * <br>

	 * @return value of articulationParameterCount field
	 */
	public int getArticulationParameterCount();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>articulationParameterCount</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Number of articulated parameters attached to this entity state PDU.
	 * @param newValue is new value for the articulationParameterCount field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setArticulationParameterCount(int newValue);

	/**
	 * Provide array of int results from inputOutput MFInt32 field named <i>articulationParameterDesignatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of designators for each articulated parameter.  * <br>

	 * @return value of articulationParameterDesignatorArray field
	 */
	public int[] getArticulationParameterDesignatorArray();

	/**
	 * Assign int array to inputOutput MFInt32 field named <i>articulationParameterDesignatorArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of designators for each articulated parameter.
	 * @param newValue is new value for the articulationParameterDesignatorArray field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setArticulationParameterDesignatorArray(int[] newValue);

	/**
	 * Provide array of int results from inputOutput MFInt32 field named <i>articulationParameterIdPartAttachedToArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of ID parts that each articulated parameter is attached to.  * <br>

	 * @return value of articulationParameterIdPartAttachedToArray field
	 */
	public int[] getArticulationParameterIdPartAttachedToArray();

	/**
	 * Assign int array to inputOutput MFInt32 field named <i>articulationParameterIdPartAttachedToArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of ID parts that each articulated parameter is attached to.
	 * @param newValue is new value for the articulationParameterIdPartAttachedToArray field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setArticulationParameterIdPartAttachedToArray(int[] newValue);

	/**
	 * Provide array of int results from inputOutput MFInt32 field named <i>articulationParameterTypeArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of type enumerations for each articulated parameter element.  * <br>

	 * @return value of articulationParameterTypeArray field
	 */
	public int[] getArticulationParameterTypeArray();

	/**
	 * Assign int array to inputOutput MFInt32 field named <i>articulationParameterTypeArray</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of type enumerations for each articulated parameter element.
	 * @param newValue is new value for the articulationParameterTypeArray field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setArticulationParameterTypeArray(int[] newValue);

	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue0_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue0_changed field
	 */
	public float getArticulationParameterValue0();
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue1_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue1_changed field
	 */
	public float getArticulationParameterValue1();
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue2_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue2_changed field
	 */
	public float getArticulationParameterValue2();
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue3_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue3_changed field
	 */
	public float getArticulationParameterValue3();
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue4_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue4_changed field
	 */
	public float getArticulationParameterValue4();
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue5_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue5_changed field
	 */
	public float getArticulationParameterValue5();
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue6_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue6_changed field
	 */
	public float getArticulationParameterValue6();
	/**
	 * Provide float value from outputOnly SFFloat field named <i>articulationParameterValue7_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Get element of user-defined payload array.  * <br>

	 * @return value of articulationParameterValue7_changed field
	 */
	public float getArticulationParameterValue7();
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
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setBboxCenter(float[] newValue);

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
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setBboxSize(float[] newValue);

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
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setCenter(float[] newValue);

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
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setChildren(X3DNode[] newValue); // acceptable node types: X3DChildNode

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
	 * Provide double value in seconds from outputOnly SFTime field named <i>collideTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  When were we collided with?.  * <br>

	 * @return value of collideTime field
	 */
	public double getCollideTime();
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>collisionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumeration for type of collision: ELASTIC or INELASTIC.  * <br>

	 * @return value of collisionType field
	 */
	public int getCollisionType();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>collisionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumeration for type of collision: ELASTIC or INELASTIC.
	 * @param newValue is new value for the collisionType field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setCollisionType(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>deadReckoning</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Dead reckoning algorithm being used to project position/orientation with velocities/accelerations.  * <br>

	 * @return value of deadReckoning field
	 */
	public int getDeadReckoning();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>deadReckoning</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Dead reckoning algorithm being used to project position/orientation with velocities/accelerations.
	 * @param newValue is new value for the deadReckoning field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setDeadReckoning(int newValue);

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>detonateTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  When were we detonated?.  * <br>

	 * @return value of detonateTime field
	 */
	public double getDetonateTime();
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>detonationLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  World coordinates for detonationLocation.  * <br>

	 * @return value of detonationLocation field
	 */
	public float[] getDetonationLocation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>detonationLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> World coordinates for detonationLocation.
	 * @param newValue is new value for the detonationLocation field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setDetonationLocation(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>detonationRelativeLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Relative coordinates for detonation location.  * <br>

	 * @return value of detonationRelativeLocation field
	 */
	public float[] getDetonationRelativeLocation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>detonationRelativeLocation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Relative coordinates for detonation location.
	 * @param newValue is new value for the detonationRelativeLocation field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setDetonationRelativeLocation(float[] newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>detonationResult</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumeration for type of detonation and result that occurred., if any.  * <br>

	 * @return value of detonationResult field
	 */
	public int getDetonationResult();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>detonationResult</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumeration for type of detonation and result that occurred., if any.
	 * @param newValue is new value for the detonationResult field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setDetonationResult(int newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables the sensor node.  * <br>

	 * @return value of enabled field
	 */
	@Override
	public boolean getEnabled();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables the sensor node.
	 * @param newValue is new value for the enabled field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setEnabled(boolean newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityCategory</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for main category that describes the entity, semantics of each code varies according to domain. See DIS Enumerations values.  * <br>

	 * @return value of entityCategory field
	 */
	public int getEntityCategory();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityCategory</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for main category that describes the entity, semantics of each code varies according to domain. See DIS Enumerations values.
	 * @param newValue is new value for the entityCategory field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntityCategory(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityCountry</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for country to which the design of the entity or its design specification is attributed.  * <br>

	 * @return value of entityCountry field
	 */
	public int getEntityCountry();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityCountry</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for country to which the design of the entity or its design specification is attributed.
	 * @param newValue is new value for the entityCountry field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntityCountry(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityDomain</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.  * <br>

	 * @return value of entityDomain field
	 */
	public int getEntityDomain();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityDomain</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.
	 * @param newValue is new value for the entityDomain field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntityDomain(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityExtra</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Any extra information required to describe a particular entity. The contents of this field shall depend on the type of entity represented.  * <br>

	 * @return value of entityExtra field
	 */
	public int getEntityExtra();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityExtra</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Any extra information required to describe a particular entity. The contents of this field shall depend on the type of entity represented.
	 * @param newValue is new value for the entityExtra field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntityExtra(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise entityID is a unique ID for a single entity within that application.  * <br>

	 * @return value of entityID field
	 */
	public int getEntityID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise entityID is a unique ID for a single entity within that application.
	 * @param newValue is new value for the entityID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntityID(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entityKind</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.  * <br>

	 * @return value of entityKind field
	 */
	public int getEntityKind();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entityKind</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.
	 * @param newValue is new value for the entityKind field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntityKind(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entitySpecific</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Specific information about an entity based on the Subcategory field. See DIS Enumerations values.  * <br>

	 * @return value of entitySpecific field
	 */
	public int getEntitySpecific();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entitySpecific</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Specific information about an entity based on the Subcategory field. See DIS Enumerations values.
	 * @param newValue is new value for the entitySpecific field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntitySpecific(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>entitySubcategory</i>.
	 * @return value of entitySubcategory field
	 */
	public int getEntitySubcategory();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>entitySubcategory</i>.
	 * @param newValue is new value for the entitySubcategory field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEntitySubcategory(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise eventApplicationID is unique for events generated from application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.  * <br>

	 * @return value of eventApplicationID field
	 */
	public int getEventApplicationID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise eventApplicationID is unique for events generated from application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.
	 * @param newValue is new value for the eventApplicationID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEventApplicationID(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  For a given event, simulation/exercise entityID is a unique ID for a single entity within that application.  * <br>

	 * @return value of eventEntityID field
	 */
	public int getEventEntityID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> For a given event, simulation/exercise entityID is a unique ID for a single entity within that application.
	 * @param newValue is new value for the eventEntityID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEventEntityID(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventNumber</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Sequential number of each event issued by an application.
 * <ul>
 *  <li> <i> Warning:</i>  reuse of numbers may be necessary during long simulation exercises. </li> 
 * </ul>
	 * @return value of eventNumber field
	 */
	public int getEventNumber();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventNumber</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Sequential number of each event issued by an application. Warning: reuse of numbers may be necessary during long simulation exercises.
	 * @param newValue is new value for the eventNumber field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEventNumber(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>eventSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise siteID of the participating LAN or organization.  * <br>

	 * @return value of eventSiteID field
	 */
	public int getEventSiteID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>eventSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise siteID of the participating LAN or organization.
	 * @param newValue is new value for the eventSiteID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setEventSiteID(int newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>fired1</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has the primary weapon (Fire PDU) been fired?.  * <br>

	 * @return value of fired1 field
	 */
	public boolean getFired1();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>fired1</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Has the primary weapon (Fire PDU) been fired?.
	 * @param newValue is new value for the fired1 field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setFired1(boolean newValue);

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>fired2</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has the secondary weapon (Fire PDU) been fired?.  * <br>

	 * @return value of fired2 field
	 */
	public boolean getFired2();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>fired2</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Has the secondary weapon (Fire PDU) been fired?.
	 * @param newValue is new value for the fired2 field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setFired2(boolean newValue);

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>firedTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  When did we shoot a weapon (Fire PDU)?.  * <br>

	 * @return value of firedTime field
	 */
	public double getFiredTime();
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>fireMissionIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  .  * <br>

	 * @return value of fireMissionIndex field
	 */
	public int getFireMissionIndex();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>fireMissionIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> .
	 * @param newValue is new value for the fireMissionIndex field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setFireMissionIndex(int newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>firingRange</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Range (three dimension, straight-line distance) that the firing entity's fire control system has assumed for computing the fire control solution if a weapon and if the value is known.  * <br>

	 * @return value of firingRange field
	 */
	public float getFiringRange();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>firingRange</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Range (three dimension, straight-line distance) that the firing entity's fire control system has assumed for computing the fire control solution if a weapon and if the value is known.
	 * @param newValue is new value for the firingRange field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setFiringRange(float newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>firingRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Rate at which munitions are fired.  * <br>

	 * @return value of firingRate field
	 */
	public int getFiringRate();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>firingRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Rate at which munitions are fired.
	 * @param newValue is new value for the firingRate field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setFiringRate(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>forceID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  forceID determines the team membership of the issuing entity, and whether FRIENDLY OPPOSING or NEUTRAL or OTHER.  * <br>

	 * @return value of forceID field
	 */
	public int getForceID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>forceID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> forceID determines the team membership of the issuing entity, and whether FRIENDLY OPPOSING or NEUTRAL or OTHER.
	 * @param newValue is new value for the forceID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setForceID(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>fuse</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for type of fuse on the munition.  * <br>

	 * @return value of fuse field
	 */
	public int getFuse();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>fuse</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for type of fuse on the munition.
	 * @param newValue is new value for the fuse field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setFuse(int newValue);

	/**
	 * Provide array of 3-tuple double results from inputOutput SFVec3d field named <i>geoCoords</i>.
	 * @return value of geoCoords field
	 */
	public double[] getGeoCoords();

	/**
	 * Assign 3-tuple double array to inputOutput SFVec3d field named <i>geoCoords</i>.
	 * @param newValue is new value for the geoCoords field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setGeoCoords(double[] newValue);

	/**
	 * Provide array of String results from initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.3 or later) Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type.
 * <ul>
 *  <li> <i>Hint:</i> see X3D Specification 25.2.2 Spatial reference frames <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes</a> </li> 
 *  <li> <i>Hint:</i> see X3D Specification 25.2.4 Specifying geospatial coordinates <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords</a> </li> 
 *  <li> <i>Hint:</i> UTM is Universal Transverse Mercator coordinate system <br> <a href="https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system" target="_blank">https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system</a> </li> 
 *  <li> <i>Warning:</i>  deprecated values are GDC (replaced by GD) and GCC (replaced by GC). </li> 
 * </ul>
	 * @return value of geoSystem field
	 */
	public String[] getGeoSystem();

	/**
	 * Assign String array to initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.3 or later) Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type. Hint: see X3D Specification 25.2.2 Spatial reference frames http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes Hint: see X3D Specification 25.2.4 Specifying geospatial coordinates http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords Hint: UTM is Universal Transverse Mercator coordinate system https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system Warning: deprecated values are GDC (replaced by GD) and GCC (replaced by GC).
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setGeoSystem(String[] newValue);

	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Have we received a network update recently?.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isCollided</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has a matching CollisionPDU reported a collision?.  * <br>

	 * @return value of isCollided field
	 */
	public boolean getIsCollided();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isDetonated</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Has a matching DetonationPDU reported a detonation?.  * <br>

	 * @return value of isDetonated field
	 */
	public boolean getIsDetonated();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isNetworkReader</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether networkMode="remote" (listen to network as copy of remote entity).  * <br>

	 * @return value of isNetworkReader field
	 */
	public boolean getIsNetworkReader();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isNetworkWriter</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether networkMode="master" (output to network as master entity at writeInterval).  * <br>

	 * @return value of isNetworkWriter field
	 */
	public boolean getIsNetworkWriter();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isRtpHeaderHeard</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether incoming DIS packets have an RTP header prepended.  * <br>

	 * @return value of isRtpHeaderHeard field
	 */
	public boolean getIsRtpHeaderHeard();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isStandAlone</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether networkMode="local" (ignore network but still respond to local events).  * <br>

	 * @return value of isStandAlone field
	 */
	public boolean getIsStandAlone();
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>linearAcceleration</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Acceleration of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.  * <br>

	 * @return value of linearAcceleration field
	 */
	public float[] getLinearAcceleration();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>linearAcceleration</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Acceleration of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.
	 * @param newValue is new value for the linearAcceleration field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setLinearAcceleration(float[] newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Velocity of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.  * <br>

	 * @return value of linearVelocity field
	 */
	public float[] getLinearVelocity();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>linearVelocity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Velocity of the entity relative to the rotating Earth in either world or entity coordinates, depending on the dead reckoning algorithm used.
	 * @param newValue is new value for the linearVelocity field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setLinearVelocity(float[] newValue);

	/**
	 * Provide String value from inputOutput SFString field named <i>marking</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Maximum of 11 characters for simple entity label.  * <br>

	 * @return value of marking field
	 */
	public String getMarking();

	/**
	 * Assign String value to inputOutput SFString field named <i>marking</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Maximum of 11 characters for simple entity label.
	 * @param newValue is new value for the marking field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMarking(String newValue);

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
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide String value from inputOutput SFString field named <i>multicastRelayHost</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Fallback server address if multicast not available locally. Example: track.nps.edu.  * <br>

	 * @return value of multicastRelayHost field
	 */
	public String getMulticastRelayHost();

	/**
	 * Assign String value to inputOutput SFString field named <i>multicastRelayHost</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Fallback server address if multicast not available locally. Example: track.nps.edu.
	 * @param newValue is new value for the multicastRelayHost field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMulticastRelayHost(String newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>multicastRelayPort</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Fallback server port if multicast not available locally. Example: 8010.  * <br>

	 * @return value of multicastRelayPort field
	 */
	public int getMulticastRelayPort();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>multicastRelayPort</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Fallback server port if multicast not available locally. Example: 8010.
	 * @param newValue is new value for the multicastRelayPort field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMulticastRelayPort(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  munitionApplicationID, unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.  * <br>

	 * @return value of munitionApplicationID field
	 */
	public int getMunitionApplicationID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionApplicationID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> munitionApplicationID, unique for application at that site. Each simulation application that can respond to simulation management PDUs needs to have a unique applicationID.
	 * @param newValue is new value for the munitionApplicationID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMunitionApplicationID(int newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>munitionEndPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Final point of the munition path from firing weapon to detonation or impact, in exercise coordinates.  * <br>

	 * @return value of munitionEndPoint field
	 */
	public float[] getMunitionEndPoint();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>munitionEndPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Final point of the munition path from firing weapon to detonation or impact, in exercise coordinates.
	 * @param newValue is new value for the munitionEndPoint field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMunitionEndPoint(float[] newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  munitionEntityID is unique ID for entity firing munition within that application.  * <br>

	 * @return value of munitionEntityID field
	 */
	public int getMunitionEntityID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionEntityID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> munitionEntityID is unique ID for entity firing munition within that application.
	 * @param newValue is new value for the munitionEntityID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMunitionEntityID(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionQuantity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Quantity of munitions fired.  * <br>

	 * @return value of munitionQuantity field
	 */
	public int getMunitionQuantity();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionQuantity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Quantity of munitions fired.
	 * @param newValue is new value for the munitionQuantity field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMunitionQuantity(int newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>munitionSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Munition siteID of the participating LAN or organization.  * <br>

	 * @return value of munitionSiteID field
	 */
	public int getMunitionSiteID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>munitionSiteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Munition siteID of the participating LAN or organization.
	 * @param newValue is new value for the munitionSiteID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMunitionSiteID(int newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>munitionStartPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Initial point of the munition path from firing weapon to detonation or impact, in exercise coordinates.  * <br>

	 * @return value of munitionStartPoint field
	 */
	public float[] getMunitionStartPoint();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>munitionStartPoint</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Initial point of the munition path from firing weapon to detonation or impact, in exercise coordinates.
	 * @param newValue is new value for the munitionStartPoint field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setMunitionStartPoint(float[] newValue);

	/**
	 * Provide String enumeration value ['standAlone'|'networkReader'|'networkWriter'] from inputOutput SFString field named <i>networkMode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether this entity is ignoring the network, sending DIS packets to the network, or receiving DIS packets from the network. (1) standAlone: ignore network but still respond to events in local scene. (2) networkReader: listen to network and read PDU packets at readInterval, act as remotely linked copy of entity. (3) networkWriter: send PDU packets to network at writeInterval, act as master entity. Default value "standAlone" ensures that DIS network activation within a scene as networkReader or networkWriter is intentional.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Warning:</i>  network activity may have associated security issues. </li> 
 * </ul>
	 * @return value of networkMode field
	 */
	public String getNetworkMode();

	/**
	 * Assign String enumeration value ("standAlone"|"networkReader"|"networkWriter") ['standAlone'|'networkReader'|'networkWriter'] to inputOutput SFString field named <i>networkMode</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether this entity is ignoring the network, sending DIS packets to the network, or receiving DIS packets from the network. (1) standAlone: ignore network but still respond to events in local scene. (2) networkReader: listen to network and read PDU packets at readInterval, act as remotely linked copy of entity. (3) networkWriter: send PDU packets to network at writeInterval, act as master entity. Default value "standAlone" ensures that DIS network activation within a scene as networkReader or networkWriter is intentional. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Warning: network activity may have associated security issues.
	 * @param newValue is new value for the networkMode field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setNetworkMode(String newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>port</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Network connection port number (EXAMPLE 62040) for sending or receiving DIS messages. Example: 62040.  * <br>

	 * @return value of port field
	 */
	public int getPort();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>port</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Network connection port number (EXAMPLE 62040) for sending or receiving DIS messages. Example: 62040.
	 * @param newValue is new value for the port field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setPort(int newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>readInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Seconds between read updates, 0 means no reading.  * <br>

	 * @return value of readInterval field
	 */
	public double getReadInterval();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>readInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Seconds between read updates, 0 means no reading.
	 * @param newValue is new value for the readInterval field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setReadInterval(double newValue);

	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Orientation of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.  * <br>

	 * @return value of rotation field
	 */
	public float[] getRotation();

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.
	 * @param newValue is new value for the rotation field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setRotation(float[] newValue);

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>rtpHeaderExpected</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether RTP headers are prepended to DIS PDUs.  * <br>

	 * @return value of rtpHeaderExpected field
	 */
	public boolean getRtpHeaderExpected();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>rtpHeaderExpected</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether RTP headers are prepended to DIS PDUs.
	 * @param newValue is new value for the rtpHeaderExpected field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setRtpHeaderExpected(boolean newValue);

	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.  * <br>

	 * @return value of scale field
	 */
	public float[] getScale();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.
	 * @param newValue is new value for the scale field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setScale(float[] newValue);

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
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setScaleOrientation(float[] newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>siteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Simulation/exercise siteID of the participating LAN or organization.  * <br>

	 * @return value of siteID field
	 */
	public int getSiteID();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>siteID</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Simulation/exercise siteID of the participating LAN or organization.
	 * @param newValue is new value for the siteID field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setSiteID(int newValue);

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>timestamp</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  DIS timestamp in VRML time units from latest update.  * <br>

	 * @return value of timestamp field
	 */
	public double getTimestamp();
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Position of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.  * <br>

	 * @return value of translation field
	 */
	public float[] getTranslation();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system, usually read from (or written to) remote, networked EspduTransform nodes.
	 * @param newValue is new value for the translation field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setTranslation(float[] newValue);

	/**
	 * Provide int value from inputOutput SFInt32 field named <i>warhead</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for type of warhead on the munition.  * <br>

	 * @return value of warhead field
	 */
	public int getWarhead();

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>warhead</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for type of warhead on the munition.
	 * @param newValue is new value for the warhead field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setWarhead(int newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>writeInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Seconds between write updates, 0 means no writing (sending).  * <br>

	 * @return value of writeInterval field
	 */
	public double getWriteInterval();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>writeInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Seconds between write updates, 0 means no writing (sending).
	 * @param newValue is new value for the writeInterval field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public EspduTransform setWriteInterval(double newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setDEF(String newValue);


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
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link EspduTransform} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public EspduTransform setCssClass(String newValue);

}
