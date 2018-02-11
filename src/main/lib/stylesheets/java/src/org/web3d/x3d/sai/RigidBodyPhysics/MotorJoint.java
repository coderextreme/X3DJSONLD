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

package org.web3d.x3d.sai.RigidBodyPhysics;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) MotorJoint drives relative angular velocities between body1 and body2 within a common reference frame. Contains two RigidBody nodes (containerField values body1, body2).
 * <ul>
 *  <li> <i>Hint:</i> useful in combination with BallJoint. </li> 
 *  <li> <i>Hint:</i>  RigidBodyPhysics component, level 2. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#MotorJoint" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rigid_physics.html#MotorJoint" target="blank">X3D Abstract Specification: MotorJoint</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MotorJoint" target="_blank">X3D Tooltips: MotorJoint</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface MotorJoint extends X3DRigidJointNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>autoCalc</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  autoCalc controls whether user manually provides individual angle rotations each frame (false) or if angle values are automatically calculated by motor implementations (true).  * <br>

	 * @return value of autoCalc field
	 */
	public boolean getAutoCalc();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>autoCalc</i>.
	 * <br><br>
	 * <i>Tooltip:</i> autoCalc controls whether user manually provides individual angle rotations each frame (false) or if angle values are automatically calculated by motor implementations (true).
	 * @param newValue is new value for the autoCalc field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setAutoCalc(boolean newValue);

	/**
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>axis1Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis1Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis1Angle field
	 */
	public float getAxis1Angle();

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>axis1Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis1Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis1Angle field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setAxis1Angle(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>axis1Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis1Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis1Torque field
	 */
	public float getAxis1Torque();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>axis1Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis1Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis1Torque field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setAxis1Torque(float newValue);

	/**
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>axis2Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis2Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis2Angle field
	 */
	public float getAxis2Angle();

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>axis2Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis2Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis2Angle field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setAxis2Angle(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>axis2Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis2Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis2Torque field
	 */
	public float getAxis2Torque();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>axis2Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis2Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis2Torque field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setAxis2Torque(float newValue);

	/**
	 * Provide float value unit axis, angle (in radians) from inputOutput SFFloat field named <i>axis3Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis3Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis3Angle field
	 */
	public float getAxis3Angle();

	/**
	 * Assign float value unit axis, angle (in radians) to inputOutput SFFloat field named <i>axis3Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis3Angle (radians) is rotation angle for corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis3Angle field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setAxis3Angle(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>axis3Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  axis3Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.  * <br>

	 * @return value of axis3Torque field
	 */
	public float getAxis3Torque();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>axis3Torque</i>.
	 * <br><br>
	 * <i>Tooltip:</i> axis3Torque is rotational torque applied by corresponding motor axis when in user-calculated mode.
	 * @param newValue is new value for the axis3Torque field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setAxis3Torque(float newValue);

	/**
	 * Provide RigidBody instance (using a properly typed node) from inputOutput SFNode field <i>body1</i>.
	 * @return value of body1 field
	 */
	@Override
	public RigidBody getBody1(); // acceptable node types: RigidBody

	/**
	 * Assign RigidBody instance (using a properly typed node) to inputOutput SFNode field <i>body1</i>.
	 * @param newValue is new value for the body1 field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJoint setBody1(RigidBody newValue); // acceptable node types: RigidBody

	/**
	 * Provide RigidBody instance (using a properly typed node) from inputOutput SFNode field <i>body2</i>.
	 * @return value of body2 field
	 */
	@Override
	public RigidBody getBody2(); // acceptable node types: RigidBody

	/**
	 * Assign RigidBody instance (using a properly typed node) to inputOutput SFNode field <i>body2</i>.
	 * @param newValue is new value for the body2 field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJoint setBody2(RigidBody newValue); // acceptable node types: RigidBody

	/**
	 * Provide int value within allowed range of [0,3] from inputOutput SFInt32 field named <i>enabledAxes</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,3] enabledAxes indicates which motor axes are active. (0) none, (1) axis 1, (2) axes 1 and 2, (3) all three axes.  * <br>

	 * @return value of enabledAxes field
	 */
	public int getEnabledAxes();

	/**
	 * Assign int value within allowed range of [0,3] to inputOutput SFInt32 field named <i>enabledAxes</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,3] enabledAxes indicates which motor axes are active. (0) none, (1) axis 1, (2) axes 1 and 2, (3) all three axes.
	 * @param newValue is new value for the enabledAxes field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setEnabledAxes(int newValue);

	/**
	 * Provide array of String enumeration results ['"ALL"'|'"NONE"'|'"etc."'] from inputOutput MFString field named <i>forceOutput</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  forceOutput controls which output fields are generated for the next frame. Values are ALL, NONE, or exact names of output fields updated at start of next frame.  * <br>

	 * @return value of forceOutput field
	 */
	@Override
	public String[] getForceOutput();

	/**
	 * Assign String enumeration array (""ALL""|""NONE"") ['"ALL"'|'"NONE"'|'"etc."'] to inputOutput MFString field named <i>forceOutput</i>.
	 * <br><br>
	 * <i>Tooltip:</i> forceOutput controls which output fields are generated for the next frame. Values are ALL, NONE, or exact names of output fields updated at start of next frame.
	 * @param newValue is new value for the forceOutput field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJoint setForceOutput(String[] newValue);

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
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJoint setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor1Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor1Angle provides calculated angle of rotation (radians) for this motor joint from last frame.  * <br>

	 * @return value of motor1Angle field
	 */
	public float getMotor1Angle();
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor1AngleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor1AngleRate provides calculated anglular rotation rate (radians/second) for this motor joint from last frame.  * <br>

	 * @return value of motor1AngleRate field
	 */
	public float getMotor1AngleRate();
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>motor1Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor1Axis defines axis vector of corresponding motor axis.
 * <ul>
 *  <li> <i> Hint:</i>  0 0 0 means motor disabled. </li> 
 * </ul>
	 * @return value of motor1Axis field
	 */
	public float[] getMotor1Axis();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>motor1Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor1Axis defines axis vector of corresponding motor axis. Hint: 0 0 0 means motor disabled.
	 * @param newValue is new value for the motor1Axis field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setMotor1Axis(float[] newValue);

	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor2Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor2Angle provides calculated angle of rotation (radians) for this motor joint from last frame.  * <br>

	 * @return value of motor2Angle field
	 */
	public float getMotor2Angle();
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor2AngleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor2AngleRate provides calculated anglular rotation rate (radians/second) for this motor joint from last frame.  * <br>

	 * @return value of motor2AngleRate field
	 */
	public float getMotor2AngleRate();
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>motor2Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor2Axis defines axis vector of corresponding motor axis.
 * <ul>
 *  <li> <i> Hint:</i>  0 0 0 means motor disabled. </li> 
 * </ul>
	 * @return value of motor2Axis field
	 */
	public float[] getMotor2Axis();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>motor2Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor2Axis defines axis vector of corresponding motor axis. Hint: 0 0 0 means motor disabled.
	 * @param newValue is new value for the motor2Axis field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setMotor2Axis(float[] newValue);

	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor3Angle</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor3Angle provides calculated angle of rotation (radians) for this motor joint from last frame.  * <br>

	 * @return value of motor3Angle field
	 */
	public float getMotor3Angle();
	/**
	 * Provide float value unit axis, angle (in radians) from outputOnly SFFloat field named <i>motor3AngleRate</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  motor3AngleRate provides calculated anglular rotation rate (radians/second) for this motor joint from last frame.  * <br>

	 * @return value of motor3AngleRate field
	 */
	public float getMotor3AngleRate();
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>motor3Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor3Axis defines axis vector of corresponding motor axis.
 * <ul>
 *  <li> <i> Hint:</i>  0 0 0 means motor disabled. </li> 
 * </ul>
	 * @return value of motor3Axis field
	 */
	public float[] getMotor3Axis();

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>motor3Axis</i>.
	 * <br><br>
	 * <i>Tooltip:</i> motor3Axis defines axis vector of corresponding motor axis. Hint: 0 0 0 means motor disabled.
	 * @param newValue is new value for the motor3Axis field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setMotor3Axis(float[] newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop1Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1Bounce is velocity factor for bounce back once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no bounce, 1 means return velocity matches. </li> 
 * </ul>
	 * @return value of stop1Bounce field
	 */
	public float getStop1Bounce();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop1Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1Bounce is velocity factor for bounce back once stop point is reached. Hint: 0 means no bounce, 1 means return velocity matches.
	 * @param newValue is new value for the stop1Bounce field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setStop1Bounce(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop1ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1ErrorCorrection is fraction of error correction performed during time step once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no error correction, 1 means all error corrected in single step. </li> 
 * </ul>
	 * @return value of stop1ErrorCorrection field
	 */
	public float getStop1ErrorCorrection();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop1ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop1ErrorCorrection is fraction of error correction performed during time step once stop point is reached. Hint: 0 means no error correction, 1 means all error corrected in single step.
	 * @param newValue is new value for the stop1ErrorCorrection field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setStop1ErrorCorrection(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop2Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2Bounce is velocity factor for bounce back once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no bounce, 1 means return velocity matches. </li> 
 * </ul>
	 * @return value of stop2Bounce field
	 */
	public float getStop2Bounce();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop2Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2Bounce is velocity factor for bounce back once stop point is reached. Hint: 0 means no bounce, 1 means return velocity matches.
	 * @param newValue is new value for the stop2Bounce field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setStop2Bounce(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop2ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2ErrorCorrection is fraction of error correction performed during time step once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no error correction, 1 means all error corrected in single step. </li> 
 * </ul>
	 * @return value of stop2ErrorCorrection field
	 */
	public float getStop2ErrorCorrection();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop2ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop2ErrorCorrection is fraction of error correction performed during time step once stop point is reached. Hint: 0 means no error correction, 1 means all error corrected in single step.
	 * @param newValue is new value for the stop2ErrorCorrection field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setStop2ErrorCorrection(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop3Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3Bounce is velocity factor for bounce back once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no bounce, 1 means return velocity matches. </li> 
 * </ul>
	 * @return value of stop3Bounce field
	 */
	public float getStop3Bounce();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop3Bounce</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3Bounce is velocity factor for bounce back once stop point is reached. Hint: 0 means no bounce, 1 means return velocity matches.
	 * @param newValue is new value for the stop3Bounce field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setStop3Bounce(float newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>stop3ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3ErrorCorrection is fraction of error correction performed during time step once stop point is reached.
 * <ul>
 *  <li> <i> Hint:</i>  0 means no error correction, 1 means all error corrected in single step. </li> 
 * </ul>
	 * @return value of stop3ErrorCorrection field
	 */
	public float getStop3ErrorCorrection();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>stop3ErrorCorrection</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] stop3ErrorCorrection is fraction of error correction performed during time step once stop point is reached. Hint: 0 means no error correction, 1 means all error corrected in single step.
	 * @param newValue is new value for the stop3ErrorCorrection field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MotorJoint setStop3ErrorCorrection(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJoint setDEF(String newValue);


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
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJoint setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link MotorJoint} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public MotorJoint setCssClass(String newValue);

}
