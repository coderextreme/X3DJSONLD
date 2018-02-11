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

package org.web3d.x3d.sai.Time;

import org.web3d.x3d.sai.Core.X3DSensorNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: TimeSensor continuously generates events as time passes. Typical use: ROUTE thisTimeSensor.fraction_changed TO someInterpolator.set_fraction. Interchange profile hint: TimeSensor may be ignored if cycleInterval &amp;lt; 0.01 second.
 * <ul>
 *  <li> <i> Hint:</i>  event timing details are explained in 4.4.8.3 Execution model <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/concepts.html#ExecutionModel" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/concepts.html#ExecutionModel</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#TimeSensor" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/time.html#TimeSensor" target="blank">X3D Abstract Specification: TimeSensor</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#TimeSensor" target="_blank">X3D Tooltips: TimeSensor</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface TimeSensor extends X3DTimeDependentNode, X3DSensorNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide double value in seconds within allowed range of (0,infinity) from inputOutput SFTime field named <i>cycleInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i> cycleInterval is loop duration in seconds. Interchange profile hint: TimeSensor may be ignored if cycleInterval &amp;lt; 0.01 second.
 * <ul>
 *  <li> <i> Warning:</i>  An active TimeSensor node ignores set_cycleInterval and set_startTime events. </li> 
 * </ul>
	 * @return value of cycleInterval field
	 */
	public double getCycleInterval();

	/**
	 * Assign double value in seconds within allowed range of (0,infinity) to inputOutput SFTime field named <i>cycleInterval</i>.
	 * <br><br>
	 * <i>Tooltip:</i> cycleInterval is loop duration in seconds. Interchange profile hint: TimeSensor may be ignored if cycleInterval &lt; 0.01 second. Warning: An active TimeSensor node ignores set_cycleInterval and set_startTime events.
	 * @param newValue is new value for the cycleInterval field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TimeSensor setCycleInterval(double newValue);

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>cycleTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  cycleTime sends a time outputOnly at startTime, and also at the beginning of each new cycle (useful for synchronization with other time-based objects).  * <br>

	 * @return value of cycleTime field
	 */
	public double getCycleTime();
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>elapsedTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Current elapsed time since TimeSensor activated/running, cumulative in seconds, and not counting any paused time.
 * <ul>
 *  <li> <i> Warning:</i>  not supported in VRML97. </li> 
 * </ul>
	 * @return value of elapsedTime field
	 */
	@Override
	public double getElapsedTime();
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
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setEnabled(boolean newValue);

	/**
	 * Provide float value from outputOnly SFFloat field named <i>fraction_changed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  fraction_changed continuously sends value in range [0,1] showing time progress in the current cycle.  * <br>

	 * @return value of fraction_changed field
	 */
	public float getFraction();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isActive</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  isActive true/false events are sent when TimeSensor starts/stops running.  * <br>

	 * @return value of isActive field
	 */
	@Override
	public boolean getIsActive();
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isPaused</i>.
	 * <br><br>
	 * <i>Tooltip:</i> isPaused true/false events are sent when TimeSensor is paused/resumed.
 * <ul>
 *  <li> <i> Warning:</i>  not supported in VRML97. </li> 
 * </ul>
	 * @return value of isPaused field
	 */
	@Override
	public boolean getIsPaused();
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>loop</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Repeat indefinitely when loop=true, repeat only once when loop=false.  * <br>

	 * @return value of loop field
	 */
	@Override
	public boolean getLoop();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>loop</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Repeat indefinitely when loop=true, repeat only once when loop=false.
	 * @param newValue is new value for the loop field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setLoop(boolean newValue);

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
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>pauseTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When time now &amp;gt;= pauseTime, isPaused becomes true and TimeSensor becomes paused. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i>Hint:</i> usually receives a ROUTEd time value. </li> 
 *  <li> <i>Warning:</i>  not supported in VRML97. </li> 
 * </ul>
	 * @return value of pauseTime field
	 */
	@Override
	public double getPauseTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>pauseTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When time now &gt;= pauseTime, isPaused becomes true and TimeSensor becomes paused. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value. Warning: not supported in VRML97.
	 * @param newValue is new value for the pauseTime field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setPauseTime(double newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>resumeTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When resumeTime becomes &amp;lt;= time now, isPaused becomes false and TimeSensor becomes inactive. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i>Hint:</i> usually receives a ROUTEd time value. </li> 
 *  <li> <i>Warning:</i>  not supported in VRML97. </li> 
 * </ul>
	 * @return value of resumeTime field
	 */
	@Override
	public double getResumeTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>resumeTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When resumeTime becomes &lt;= time now, isPaused becomes false and TimeSensor becomes inactive. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value. Warning: not supported in VRML97.
	 * @param newValue is new value for the resumeTime field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setResumeTime(double newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>startTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When time now &amp;gt;= startTime, isActive becomes true and TimeSensor becomes active. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i> Hint:</i>  usually receives a ROUTEd time value. </li> 
 * </ul>
	 * @return value of startTime field
	 */
	@Override
	public double getStartTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>startTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When time now &gt;= startTime, isActive becomes true and TimeSensor becomes active. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value.
	 * @param newValue is new value for the startTime field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setStartTime(double newValue);

	/**
	 * Provide double value in seconds from inputOutput SFTime field named <i>stopTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When stopTime becomes &amp;lt;= time now, isActive becomes false and TimeSensor becomes inactive. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT.
 * <ul>
 *  <li> <i>Hint:</i> usually receives a ROUTEd time value. </li> 
 *  <li> <i>Warning:</i> An active TimeSensor node ignores set_cycleInterval and set_startTime events. </li> 
 *  <li> <i>Warning:</i> An active TimeSensor node ignores set_stopTime event values less than or equal to startTime. </li> 
 * </ul>
	 * @return value of stopTime field
	 */
	@Override
	public double getStopTime();

	/**
	 * Assign double value in seconds to inputOutput SFTime field named <i>stopTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> When stopTime becomes &lt;= time now, isActive becomes false and TimeSensor becomes inactive. Absolute time: number of seconds since January 1, 1970, 00:00:00 GMT. Hint: usually receives a ROUTEd time value. Warning: An active TimeSensor node ignores set_cycleInterval and set_startTime events. Warning:An active TimeSensor node ignores set_stopTime event values less than or equal to startTime.
	 * @param newValue is new value for the stopTime field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setStopTime(double newValue);

	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>time</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Time continuously sends the absolute time (since January 1, 1970) for a given simulation tick.  * <br>

	 * @return value of time field
	 */
	public double getTime();

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setDEF(String newValue);


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
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link TimeSensor} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TimeSensor setCssClass(String newValue);

}
