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

package org.web3d.x3d.jsail;


import java.util.Arrays;
import org.web3d.x3d.sai.Core.*;  // making sure #3
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;


/**
 * Abstract parent class for concrete X3D statements, containing common methods and member variables.
 * 
 * <br><br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public abstract class X3DConcreteStatement extends org.web3d.x3d.jsail.X3DConcreteElement
{
	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	/**
	 * Utility method to indicate whether this element is an X3D Graphics node (implementing X3DConcreteNode), returns <i>false</i>.
	 * <br><br>
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/glossary.html#Node">X3D Abstract Specification, Terms and definitions: node</a>
	 * @return whether this element is an X3D Graphics node: false
	 */
	public static final boolean isNode()
	{
            // (this instanceof org.web3d.x3d.jsail.X3DConcreteNode)
            return false;
	}
	/**
	 * Utility method to indicate whether this element is an X3D Graphics statement (implementing X3DConcreteStatement), returns <i>true</i>.  (Does not include CommentsBlock objects.)
	 * <br><br>
	 * @see CommentsBlock
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#AbstractX3DStructure">X3D Abstract Specification: 7.2.5 Abstract X3D structure</a>
	 * @return whether this element is an X3D Graphics statement: true
	 */
	public static final boolean isStatement()
	{
            //  (this instanceof org.web3d.x3d.jsail.X3DConcreteStatement) && 
            // !(this instanceof org.web3d.x3d.jsail.Core.CommentsBlock)
            return true;
	}

	/** Initialize all member variables to default values. */
	public void initialize()
	{
		setParentObject(null);
	}}
