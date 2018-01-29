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

package org.web3d.x3d.sai;

import java.util.*;

/**
 * Set of constants corresponding to each X3D field type and accessType.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#FieldTypes" target="blank">X3D Abstract Specification: 5.3 Field types</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface X3DFieldTypes
{
	/** Enumeration constant <i>INPUT_ONLY</i> has value <i>1</i>. */
	public final int INPUT_ONLY = 1;
	/** Enumeration constant <i>INITIALIZE_ONLY</i> has value <i>2</i>. */
	public final int INITIALIZE_ONLY = 2;
	/** Enumeration constant <i>INPUT_OUTPUT</i> has value <i>3</i>. */
	public final int INPUT_OUTPUT = 3;
	/** Enumeration constant <i>OUTPUT_ONLY</i> has value <i>4</i>. */
	public final int OUTPUT_ONLY = 4;

	/** Enumeration constant <i>SFBOOL</i> has value <i>1</i>. */
	public final int SFBOOL = 1;
	/** Enumeration constant <i>MFBOOL</i> has value <i>2</i>. */
	public final int MFBOOL = 2;
	/** Enumeration constant <i>SFINT32</i> has value <i>3</i>. */
	public final int SFINT32 = 3;
	/** Enumeration constant <i>MFINT32</i> has value <i>4</i>. */
	public final int MFINT32 = 4;
	/** Enumeration constant <i>SFFLOAT</i> has value <i>5</i>. */
	public final int SFFLOAT = 5;
	/** Enumeration constant <i>MFFLOAT</i> has value <i>6</i>. */
	public final int MFFLOAT = 6;
	/** Enumeration constant <i>SFDOUBLE</i> has value <i>7</i>. */
	public final int SFDOUBLE = 7;
	/** Enumeration constant <i>MFDOUBLE</i> has value <i>8</i>. */
	public final int MFDOUBLE = 8;
	/** Enumeration constant <i>SFTIME</i> has value <i>9</i>. */
	public final int SFTIME = 9;
	/** Enumeration constant <i>MFTIME</i> has value <i>10</i>. */
	public final int MFTIME = 10;
	/** Enumeration constant <i>SFNODE</i> has value <i>11</i>. */
	public final int SFNODE = 11;
	/** Enumeration constant <i>MFNODE</i> has value <i>12</i>. */
	public final int MFNODE = 12;
	/** Enumeration constant <i>SFVEC2F</i> has value <i>13</i>. */
	public final int SFVEC2F = 13;
	/** Enumeration constant <i>MFVEC2F</i> has value <i>14</i>. */
	public final int MFVEC2F = 14;
	/** Enumeration constant <i>SFVEC3F</i> has value <i>15</i>. */
	public final int SFVEC3F = 15;
	/** Enumeration constant <i>MFVEC3F</i> has value <i>16</i>. */
	public final int MFVEC3F = 16;
	/** Enumeration constant <i>SFVEC3D</i> has value <i>17</i>. */
	public final int SFVEC3D = 17;
	/** Enumeration constant <i>MFVEC3D</i> has value <i>18</i>. */
	public final int MFVEC3D = 18;
	/** Enumeration constant <i>SFROTATION</i> has value <i>19</i>. */
	public final int SFROTATION = 19;
	/** Enumeration constant <i>MFROTATION</i> has value <i>20</i>. */
	public final int MFROTATION = 20;
	/** Enumeration constant <i>SFCOLOR</i> has value <i>21</i>. */
	public final int SFCOLOR = 21;
	/** Enumeration constant <i>MFCOLOR</i> has value <i>22</i>. */
	public final int MFCOLOR = 22;
	/** Enumeration constant <i>SFCOLORRGBA</i> has value <i>23</i>. */
	public final int SFCOLORRGBA = 23;
	/** Enumeration constant <i>MFCOLORRGBA</i> has value <i>24</i>. */
	public final int MFCOLORRGBA = 24;
	/** Enumeration constant <i>SFIMAGE</i> has value <i>25</i>. */
	public final int SFIMAGE = 25;
	/** Enumeration constant <i>MFIMAGE</i> has value <i>26</i>. */
	public final int MFIMAGE = 26;
	/** Enumeration constant <i>SFSTRING</i> has value <i>27</i>. */
	public final int SFSTRING = 27;
	/** Enumeration constant <i>MFSTRING</i> has value <i>28</i>. */
	public final int MFSTRING = 28;
	
	// added in v3.3
	/** Enumeration constant <i>SFVEC2D</i> has value <i>29</i>. */
	public final int SFVEC2D = 29;
	/** Enumeration constant <i>MFVEC2D</i> has value <i>30</i>. */
	public final int MFVEC2D = 30;
	/** Enumeration constant <i>SFVEC4F</i> has value <i>31</i>. */
	public final int SFVEC4F = 31;
	/** Enumeration constant <i>MFVEC4F</i> has value <i>32</i>. */
	public final int MFVEC4F = 32;
	/** Enumeration constant <i>SFVEC4D</i> has value <i>33</i>. */
	public final int SFVEC4D = 33;
	/** Enumeration constant <i>MFVEC4D</i> has value <i>34</i>. */
	public final int MFVEC4D = 34;
	/** Enumeration constant <i>SFMATRIX3F</i> has value <i>35</i>. */
	public final int SFMATRIX3F = 35;
	/** Enumeration constant <i>MFMATRIX3F</i> has value <i>36</i>. */
	public final int MFMATRIX3F = 36;
	/** Enumeration constant <i>SFMATRIX3D</i> has value <i>37</i>. */
	public final int SFMATRIX3D = 37;
	/** Enumeration constant <i>MFMATRIX3D</i> has value <i>38</i>. */
	public final int MFMATRIX3D = 38;
	/** Enumeration constant <i>SFMATRIX4F</i> has value <i>39</i>. */
	public final int SFMATRIX4F = 39;
	/** Enumeration constant <i>MFMATRIX4F</i> has value <i>40</i>. */
	public final int MFMATRIX4F = 40;
	/** Enumeration constant <i>SFMATRIX4D</i> has value <i>41</i>. */
	public final int SFMATRIX4D = 41;
	/** Enumeration constant <i>MFMATRIX4D</i> has value <i>42</i>. */
	public final int MFMATRIX4D = 42;
}
