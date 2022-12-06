<?xml version='1.0'?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
<!--
Copyright (c) 2000-2022 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the names of the Naval Postgraduate School (NPS)
      Modeling Virtual Environments and Simulation (MOVES) Institute
      (https://www.nps.edu and https://www.MovesInstitute.org)
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
-->
<!--
  <head>
   <meta name="filename"    content="X3dUnwrap.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="1 June 2000" />
   <meta name="revised"     content="6 March 2004" />
   <meta name="description" content="XSL stylesheet to add x3d-compromise.dtd wrapper tags where needed, remove attributes with default values, pretty-print X3D source, etc." />
   <meta name="url"         content="https://www.web3d.org/TaskGroups/x3d/content/X3dUnwrap.xslt" />
  </head>

Recommended tool:

-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://users.iclway.co.uk/mhkay/saxon

Can also be used with Apache server.  Point of contact:  Jeff Sonstein.

Problems:

- DTD fragment at beginning of source file handled OK, but with literals instead of XSL constructs.
  Need to read and retain parameter entities defined in file, if possible.  Future work for XSL.
- Disable output escaping and use apostrophes/quotes for attributes containing quotes/apostrophes.

-->  

<!--	XSL names spaces are in transition!  Tools are slow to catch up.  
    ***	Edit the topmost stylesheet tag on line 2 of this file to match your XSL tool. ***
	W3C:             
	Saxon:           <xsl:stylesheet xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>
	IBM XSLEditor:   <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform/1.0'>
	IE 5:            <xsl:stylesheet xmlns:xsl='http://www.w3.org/TR/WD-xsl'>
	XT:              <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform'>
-->

<xsl:preserve-space elements="Script" />
<xsl:strip-space elements="*" />
<xsl:output method="xml" encoding="utf-8" indent="yes" media-type="text/xml" omit-xml-declaration="no" />
<!-- xsl:output attributes for DOCTYPE (handled via text output by root tag)
	doctype-public="https://www.web3d.org/TaskGroups/x3d/content/x3d-compromise.dtd"
	doctype-system="file:///C:/www.web3D.org/TaskGroups/x3d/content/x3d-compromise.dtd"
or
	doctype-public="https://www.web3d.org/TaskGroups/x3d/content/x3d-compact.dtd"
	doctype-system="file:///C:/www.web3D.org/TaskGroups/x3d/content/x3d-compact.dtd"

	cdata-section-elements="@string"
-->

<!-- ****** root:  start of file ****** -->
<xsl:template match="/">
  <xsl:text disable-output-escaping="yes">&#10;&lt;!DOCTYPE X3D PUBLIC&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes">	"https://www.web3d.org/TaskGroups/x3d/content/x3d-compact.dtd"&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes">	"/www.web3D.org/TaskGroups/x3d/content/x3d-compact.dtd"</xsl:text>
<!--
  <xsl:text disable-output-escaping="yes">[&#10;</xsl:text>

  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % BaseLineProfile    "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % CoreProfile        "IGNORE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % DisJavaVrmlProfile "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % GeoVrmlProfile     "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes"> &lt;!ENTITY % HAnimProfile       "INCLUDE"&gt;&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes">]</xsl:text>
-->
  <xsl:text disable-output-escaping="yes"> &gt;&#10;</xsl:text>

  <xsl:apply-templates/>
  <xsl:text>&#10;</xsl:text>
</xsl:template>


<!-- ****** recurse through each of the tree node elements ****** -->
<xsl:template match="*">
    <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:if test="@*">
         <xsl:apply-templates select="@DEF | @USE | @*[not(local-name()='DEF') and not(local-name()='USE')]"/>
    </xsl:if>
    <xsl:choose>
      <xsl:when test="*">
         <xsl:text disable-output-escaping="yes">&gt;&#10;</xsl:text>
         <xsl:apply-templates select="*"/>
         <xsl:text disable-output-escaping="yes">&#10;&lt;/</xsl:text>
         <xsl:value-of select="local-name()"/>
         <xsl:text disable-output-escaping="yes">&gt;&#10;</xsl:text>
      </xsl:when>
      <xsl:otherwise>
         <xsl:text disable-output-escaping="yes">/&gt;&#10;</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<!-- ****** recurse through each of the tree node elements ****** -->
<xsl:template match="comment()">
  <!-- Xeena (the X3D-Edit engine) is garbling comments, so (otherwise-unnecessary) normalization will ungarble them. -->
  <xsl:comment><xsl:value-of select="normalize-space(string(.))"/></xsl:comment>
</xsl:template>

<!-- ****** children:  ignore wrapper tags (since redundant with VRML definitions) ****** -->
<xsl:template match="appearance[local-name(..)='Shape'] |
                     children[local-name(..)='Anchor' or local-name(..)='Billboard' or local-name(..)='Collision' or
                              local-name(..)='Group'  or local-name(..)='Transform' or local-name(..)='Contour2D' or
                              local-name(..)='CoordinateDeformer' or local-name(..)='EspduTransform' or
                              local-name(..)='GeoInline' or local-name(..)='GeoLocation' or local-name(..)='GeoLOD' or
                              local-name(..)='Humanoid' or local-name(..)='Joint' or local-name(..)='NurbsGroup' or
                              local-name(..)='ReceiverPdu' or local-name(..)='Segment' or local-name(..)='SignalPdu'
                              or local-name(..)='Site' or local-name(..)='TransmitterPdu'] |
                     choice[local-name(..)='Switch'] |
                     color[local-name(..)='ElevationGrid'  or local-name(..)='IndexedFaceSet' or
                           local-name(..)='IndexedLineSet' or local-name(..)='PointSet' or local-name(..)='GeoElevationGrid' ] |
                     coord[local-name(..)='IndexedFaceSet' or
                           local-name(..)='IndexedLineSet' or local-name(..)='PointSet'] |
                     fontStyle[local-name(..)='Text'] |
                     geometry[local-name(..)='Shape'] |
                     level[local-name(..)='LOD'] |
                     material[local-name(..)='Appearance'] |
                     normal[local-name(..)='ElevationGrid' or local-name(..)='IndexedFaceSet' or local-name(..)='GeoElevationGrid'] |
                     source[local-name(..)='Sound'] |
                     texCoord[local-name(..)='ElevationGrid' or local-name(..)='IndexedFaceSet' or local-name(..)='GeoElevationGrid' or
                     	 local-name(..)='NurbsSurface'] |
                     texture[local-name(..)='Appearance'] |
                     textureTransform[local-name(..)='Appearance'] |
                     joints[local-name(..)='Humanoid'] |
                     segments[local-name(..)='Humanoid'] |
                     viewpoints[local-name(..)='Humanoid'] |
                     sites[local-name(..)='Humanoid']">
  <xsl:apply-templates select="*"/>
</xsl:template>


<!-- ****** recurse through each of the attributes ****** -->
<xsl:template match="@*">
  <!-- eliminate default attribute values, otherwise they will _all_ appear in output  -->
  <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3dom.xslt X3dUnwrap.xslt X3dWrap.xslt and X3dToJson.xslt -->
  <!-- check values with/without .0 suffix since these are string checks and autogenerated/DOM output might have either -->
  <!-- do not check ProtoInstance fields or natively defined nodes, since they might have different user-defined defaults -->
  <!-- tool-bug workaround:  split big boolean queries into pieces to avoid overloading the Xalan/lotusxml query buffer -->
  <xsl:variable name="notImplicitEvent"
	select="not(local-name(..)='AudioClip'	and	(local-name()='duration' or local-name()='isActive')) and
		not(contains(local-name(..),'Interpolator') and (local-name()='fraction' or local-name()='value')) and
		not(((local-name(..)='Background') or (local-name(..)='TextureBackground'))	and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound')) and
		not(local-name(..)='CylinderSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint')) and
		not(local-name(..)='Fog'		and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound')) and
		not(local-name(..)='IndexedLineSet' and	 local-name()='lineWidth') and
        not(((local-name(..)='IndexedFaceSet') or contains(local-name(..),'TriangleFanSet') or contains(local-name(..),'TriangleSet') or contains(local-name(..),'TriangleStripSet') or contains(local-name(..),'QuadSet')) and starts-with(local-name(),'set_') and contains(local-name(),'ndex')) and
		not(local-name(..)='NavigationInfo' and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound')) and
		not(local-name(..)='PointSet'	and	 local-name()='pointSize') and
		not(local-name(..)='PlaneSensor' and	(local-name()='isActive' or local-name()='translation' or local-name()='trackPoint')) and
		not(local-name(..)='ProximitySensor' and (local-name()='isActive' or local-name()='position' or local-name()='orientation' or
						 	 local-name()='enterTime' or local-name()='exitTime')) and
		not(local-name(..)='SphereSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint')) and
		not(local-name(..)='TimeSensor'	and	(local-name()='isActive' or local-name()='cycleTime' or local-name()='fraction' or
							 local-name()='time')) and
		not(local-name(..)='TouchSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='hitNormal' or
							 local-name()='touchTime' or local-name()='hitPoint' or local-name()='hitTexCoord')) and
		not(local-name(..)='Viewpoint'	and	(local-name()='bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine'))" />
  <xsl:variable name="notDefaultFieldValue1"
                      select="not( local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) and
                      not( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) and
                      not( local-name()='bboxDisplay' and string(.)='false') and
                      not( local-name()='castShadow' and string(.)='true') and
                      not( local-name()='channelCountMode' and string(.)='max') and
                      not( local-name()='channelInterpretation' and string(.)='speakers') and
                      not( local-name()='detune' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='gain' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='enabled' and string(.)='true') and
                      not( local-name()='load' and string(.)='true') and
                      not( local-name()='loop' and string(.)='false') and
                      not( local-name()='farDistance'  and (string(.)='-1' or string(.)='-1.0')) and
                      not( local-name()='nearDistance' and (string(.)='-1' or string(.)='-1.0')) and
                      not( local-name()='pitch' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='startTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='qualityFactor'  and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='autoRefresh' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='autoRefreshTimeLimit' and (string(.)='3600' or string(.)='3600.0')) and
                      not( local-name()='tailTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='shadows' and string(.)='false') and
                      not( local-name()='shadowIntensity' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='visible' and string(.)='true') and
                      not( local-name(..)='AudioClip'	and
                      ((local-name()='loop' and string(.)='false') or
                      (local-name()='pitch' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')))) and
                      not( (local-name(..)='Appearance') and ((local-name()='alphaMode' and (string(.)='AUTO')) or (local-name()='alphaCutoff' and (string(.)='0.5' or string(.)='.5')))) and
                      not( ((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) and
                      not( local-name(..)='BooleanToggle' and local-name()='toggle' and string(.)='false') and
                      not( local-name(..)='Box'	and ((local-name()='size' and (string(.)='2 2 2' or string(.)='2.0 2.0 2.0')) or (local-name()='solid' and string(.)='true'))) and
                      not( local-name(..)='Collision'	and local-name()='enabled' and string(.)='true') and
                      not( local-name(..)='Cone' and	
                      ((local-name()='bottomRadius' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='height' and (string(.)='2' or string(.)='2.0')) or
                      (local-name()='side' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='bottom' and string(.)='true')))"/>  
        <xsl:variable name="notDefaultFieldValue1a"
                      select="not( local-name(..)='Cylinder' and
                      ((local-name()='height' and (string(.)='2' or string(.)='2.0')) or
                      (local-name()='radius' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='bottom' and string(.)='true') or
                      (local-name()='side' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='top' and string(.)='true'))) and
                      not( local-name(..)='CylinderSensor' and
                      ((local-name()='autoOffset' and string(.)='true') or
                      (local-name()='axisRotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='diskAngle' and string(.)='0.26179167') or
                      (local-name()='offset' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxAngle' and (string(.)='-1' or string(.)='-1.0')) or
                      (local-name()='minAngle' and (string(.)='0' or string(.)='0.0'))))" />
  <xsl:variable name="notDefaultFieldValue2"
	select="not( local-name(..)='DirectionalLight' and
						((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
						 (local-name()='direction' and (string(.)='0 0 -1' or string(.)='0.0 0.0 -1.0')) or
                         (local-name()='global' and string(.)='false') or
						 (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='on' and string(.)='true'))) and
		not( local-name(..)='ElevationGrid' and
						((local-name()='ccw' and string(.)='true') or
						 (local-name()='colorPerVertex' and string(.)='true') or
						 (local-name()='normalPerVertex' and string(.)='true') or
						 (local-name()='solid' and string(.)='true') or
						 (local-name()='xDimension' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='xSpacing' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='zDimension' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='zSpacing' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
		not( local-name(..)='Extrusion'	and
						((local-name()='beginCap' and string(.)='true') or
						 (local-name()='ccw' and string(.)='true') or
						 (local-name()='convex' and string(.)='true') or
						 (local-name()='endCap' and string(.)='true') or
						 (local-name()='solid' and string(.)='true') or
						 (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						 (local-name()='scale' and (string(.)='1 1' or string(.)='1.0 1.0')) or
						 (local-name()='crossSection' and string(.)='1 1, 1 -1, -1 -1, -1 1, 1  1') or
						 (local-name()='spine' and string(.)='0 0 0, 0 1 0')))" />
  <xsl:variable name="notDefaultFieldValue3"
	select="not( local-name(..)='Fog' and 	((local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
						 (local-name()='visibilityRange' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='fogType' and string(.)='LINEAR'))) and
		not( local-name(..)='FontStyle'	and
						((local-name()='horizontal' and string(.)='true') or
						 (local-name()='leftToRight' and string(.)='true') or
						 (local-name()='topToBottom' and string(.)='true') or
						 (local-name()='size' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='spacing' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='family' and string(.)='&quot;SERIF&quot;') or
						 (local-name()='justify' and string(.)='&quot;BEGIN&quot;') or
						 (local-name()='style' and string(.)='PLAIN'))) and
		not( local-name(..)='ImageTexture' and
						((local-name()='repeatS' and string(.)='true') or
						 (local-name()='repeatT' and string(.)='true'))) and
		not( local-name(..)='IndexedFaceSet' and
						((local-name()='ccw' and string(.)='true') or
						 (local-name()='colorPerVertex' and string(.)='true') or
						 (local-name()='convex' and string(.)='true') or
						 (local-name()='normalPerVertex' and string(.)='true') or
						 (local-name()='solid' and string(.)='true') or
						 (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
		not( local-name(..)='IndexedLineSet' and local-name()='colorPerVertex' and string(.)='true') and
		not( local-name(..)='Inline' and ((local-name()='load' and string(.)='true') or (local-name()='global' and string(.)='false'))) and
        not( local-name(..)='LoadSensor' and
                      ((local-name()='enabled' and string(.)='true') or
                      (local-name()='timeOut' and (string(.)='0' or string(.)='0.0')))) and
		not( local-name(..)='LOD '	and	 local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) and
		not( ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
                      	((local-name()='ambientIntensity' and string(.)='0.2') or
						 (local-name()='diffuseColor' and string(.)='0.8 0.8 0.8') or
						 (local-name()='emissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='metallic' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='normalScale' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='occlusionStrength' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='roughness' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='shininess' and string(.)='0.2') or
						 (local-name()='specularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
        not( local-name(..)='TwoSidedMaterial'	and
                      ((local-name()='backAmbientIntensity' and string(.)='0.2') or
                      (local-name()='backDiffuseColor' and string(.)='0.8 0.8 0.8') or
                      (local-name()='backEmissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='backShininess' and string(.)='0.2') or
                      (local-name()='backSpecularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='backTransparency' and (string(.)='0' or string(.)='0.0')))) and
                      not(ends-with(local-name(..),'Material')	and
                      ((ends-with(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
                      (local-name()='baseColor' and ((string(.)='1 1 1') or (string(.)='1. 1. 1.') or (string(.)='1.0 1.0 1.0'))) or
                      (ends-with(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
                      (local-name()='emissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='metallic' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='normalScale' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='occlusionStrength' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='roughness' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='transparency' and (string(.)='0' or string(.)='0.0'))))" />
  <xsl:variable name="notDefaultFieldValue4"
	select="not( local-name(..)='MovieTexture' and
						((local-name()='loop' and string(.)='false') or
						 (local-name()='speed' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='repeatS' and string(.)='true') or
						 (local-name()='repeatT' and string(.)='true'))) and
		not( local-name(..)='NavigationInfo' and
						((local-name()='avatarSize' and string(.)='0.25 1.6 0.75') or
						 (local-name()='headlight' and string(.)='true') or
						 (local-name()='speed' and (string(.)='1' or string(.)='1.0')) or
                         (local-name()='transitionTime' and (string(.)='1' or string(.)='1.0')) or
                         (local-name()='transitionType' and (string(.)='&quot;LINEAR&quot;')) or
					     (local-name()='type' and (string(.)='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
						 (local-name()='visibilityLimit' and (string(.)='0' or string(.)='0.0')))) and
		not( local-name(..)='PixelTexture' and
						((local-name()='repeatS' and string(.)='true') or
						 (local-name()='repeatT' and string(.)='true') or
						 (local-name()='image' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
		not( local-name(..)='PlaneSensor' and
						((local-name()='autoOffset' and string(.)='true') or
						 (local-name()='enabled' and string(.)='true') or
						 (local-name()='maxPosition' and (string(.)='-1 -1' or string(.)='-1.0 -1.0')) or
						 (local-name()='minPosition' and (string(.)='0 0' or string(.)='0.0 0.0')) or
						 (local-name()='offset' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
		not( ((local-name(..)='PointLight') or (local-name(..)='EnvironmentLight')) and
						((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0'))or
						 (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
						 (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
						 (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='on' and string(.)='true') or
						 (local-name()='radius' and (string(.)='100' or string(.)='100.0'))))" />
  <xsl:variable name="notDefaultFieldValue5"
	select="not( local-name(..)='ProximitySensor' and
						((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='enabled' and string(.)='true'))) and
		not( local-name(..)='Script' and ((local-name()='directOutput' and string(.)='false') or
						 (local-name()='mustEvaluate' and string(.)='false'))) and
		not( local-name(..)='Sound' and ((local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
						 (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='priority' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='maxBack' and (string(.)='10' or string(.)='10.0')) or
						 (local-name()='maxFront' and (string(.)='10' or string(.)='10.0')) or
						 (local-name()='minBack' and (string(.)='1' or string(.)='1.0'))  or
						 (local-name()='minFront' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='spatialize' and string(.)='true'))) and
		not( local-name(..)='Sphere' and  local-name()='radius' and (string(.)='1' or string(.)='1.0')) and
		not( local-name(..)='SphereSensor' and
						((local-name()='autoOffset' and string(.)='true') or
						 (local-name()='enabled' and string(.)='true') or
						 (local-name()='offset' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0'))))" />
  <xsl:variable name="notDefaultFieldValue6"
	select="not( local-name(..)='SpotLight'	and
						((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                         (local-name()='beamWidth' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854'))) or
                         (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                         (local-name()='cutOffAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
						 (local-name()='direction' and (string(.)='0 0 -1' or string(.)='0.0 0.0 -1.0')) or
						 (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='on' and string(.)='true') or
						 (local-name()='radius' and (string(.)='100' or string(.)='100.0')))) and
		not( local-name(..)='Switch' and  local-name()='whichChoice' and (string(.)='-1' or string(.)='-1.0')) and
		not( local-name(..)='Text'   and ((local-name()='maxExtent' and (string(.)='0' or string(.)='0.0')) or (local-name()='solid' and (string(.)='false')))) and
		not( local-name(..)='TextureTransform' and
						((local-name()='center' and (string(.)='0 0' or string(.)='0.0 0.0')) or
						 (local-name()='rotation' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='scale ' and (string(.)='1 1' or string(.)='1.0 1.0')) or
						 (local-name()='translation' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
		not( local-name(..)='Switch' and  local-name()='whichChoice' and (string(.)='-1' or string(.)='-1.0'))" />
  <xsl:variable name="notDefaultFieldValue7"
	select="not( local-name(..)='TimeSensor' and
						((local-name()='cycleInterval' and (string(.)='1' or string(.)='1.0')) or
						 (local-name()='enabled' and string(.)='true') or
						 (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
						 (local-name()='loop' and string(.)='false'))) and
		not( local-name(..)='TouchSensor' and
						  local-name()='enabled' and string(.)='true') and
		not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
						((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						 (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
						 (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						 (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
		not( local-name(..)='Viewpoint' and
						((local-name()='fieldOfView' and string(.)='0.785398') or
						 (local-name()='jump' and string(.)='true') or
						 (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						 (local-name()='position' and (string(.)='0 0 10' or string(.)='0.0 0.0 10.0')))) and
		not( local-name(..)='VisibilitySensor' and
						((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
						 (local-name()='enabled' and string(.)='true') or
						 (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue8"
                      select="not( local-name(..)='FillProperties' and
                      ((local-name()='filled' and string(.)='true') or
                      (local-name()='hatched' and string(.)='true') or
                      (local-name()='hatchStyle' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='hatchColor' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')))) and
                      not( local-name(..)='LineProperties' and
                      ((local-name()='applied' and string(.)='true') or
                      (local-name()='linetype' and (string(.)='1')) or
                      (local-name()='linewidthScaleFactor' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PointProperties' and
                      ((local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                      (starts-with(local-name(),'pointSize') and (string(.)='1' or string(.)='1.0')))) and
                      not( local-name(..)='ClipPlane' and
                      ((local-name()='enabled' and string(.)='true') or
                      (local-name()='plane' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0')))) and
                      not( local-name(..)='ViewpointGroup' and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='displayed' and string(.)='true') or
                      (local-name()='retainUserOffsets' and string(.)='false') or
                      (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue9"
                      select="not( local-name(..)='MultiTexture' and
                      ((local-name()='alpha' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')))) and
                      not( contains(local-name(..),'Texture') and
                      ((local-name() = 'mapping') and (string-length(string(.)) = 0))) and
                      not( local-name(..)='TextureCoordinateGenerator' and
                      ((local-name()='mode' and string(.)='SPHERE'))) and
                      not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                      ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and string(.)='false')) and
                      not( local-name(..)='PixelTexture3D' and
                      (local-name()='image' and (string(.)='0 0 0 0')))" />
        <xsl:variable name="notDefaultFieldValue10"
                      select="not( local-name(..)='AcousticProperties' and
                      ((local-name()='containerField' and string(.)='acousticProperties') or
                      (local-name()='absorption' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='diffuse' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='refraction' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='specular' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Analyser' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequencyBinCount' and (string(.)='1024' or string(.)='1024.0')) or
                      (local-name()='fftSize' and (string(.)='2048' or string(.)='2048.0')) or
                      (local-name()='minDecibels' and (string(.)='-100' or string(.)='-100.0')) or
                      (local-name()='maxDecibels' and (string(.)='-30' or string(.)='-30.0')) or
                      (local-name()='smoothingTimeConstant' and (string(.)='.8' or string(.)='0.8')))) and
                      not( local-name(..)='BufferAudioSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='bufferDuration' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='type' and (string(.)='lowpass')) or
                      (local-name()='loopStart' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='loopEnd' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='numberOfChannels' and string(.)='0') or
                      (local-name()='playbackRate' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='sampleRate' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='AudioDestination' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='maxChannelCount' and (string(.)='2')))) and   
                      not( local-name(..)='BiquadFilter' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequency' and (string(.)='350' or string(.)='350.0')) or
                      (local-name()='qualityFactor' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='type' and (string(.)='lowpass')))) and
                      not( local-name(..)='ChannelMerger' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='ChannelSelector' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='channelSelection' and (string(.)='0')))) and
                      not( local-name(..)='ChannelSplitter' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='Convolver' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='normalize' and (string(.)='false')))) and
                      not( local-name(..)='Delay' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='delayTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxDelayTime' and (string(.)='1' or string(.)='1.0')))) and
                      not( local-name(..)='DynamicsCompressor' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='attack' and (string(.)='0.003' or string(.)='.003')) or
                      (local-name()='gain' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='knee' and (string(.)='30' or string(.)='30.0')) or
                      (local-name()='ratio' and (string(.)='12' or string(.)='12.0')) or
                      (local-name()='release' and (string(.)='.25' or string(.)='0.25')) or
                      (local-name()='threshold' and (string(.)='-24' or string(.)='-24.0')))) and
                      not( local-name(..)='Gain' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='ListenerPointSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='dopplerEnabled' and (string(.)='false')) or
                      (local-name()='interauralDistance' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='position' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='trackCurrentView' and (string(.)='false')))) and
                      not( local-name(..)='MicrophoneSource' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='OscillatorSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PeriodicWave' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='type' and (string(.)='square')))) and
                      not( local-name(..)='SpatialSound' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='coneInnerAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterGain' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                      (local-name()='distanceModel' and (string(.)='inverse')) or
                      (local-name()='dopplerEnabled' and (string(.)='false')) or
                      (local-name()='enableHRTF' and (string(.)='false')) or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='maxDistance' and (string(.)='10000' or string(.)='10000.0')) or
                      (local-name()='priority' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='referenceDistance' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='rolloffFactor' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='spatialize' and (string(.)='true')))) and
                      not( local-name(..)='StreamAudioDestination' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='StreamAudioSource' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='WaveShaper' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='oversample' and (string(.)='none'))))" />
        <xsl:variable name="notDefaultContainerField1"
	select="not((local-name()='containerField' and string(.)='children')	and 
			(contains(local-name(..),'Interpolator') or
			 contains(local-name(..),'Light') or
			 contains(local-name(..),'Sensor') or
			 local-name(..)='Anchor' or
			 local-name(..)='Background' or
			 local-name(..)='Billboard' or
			 local-name(..)='Collision' or
			 local-name(..)='Fog' or
			 local-name(..)='Group' or
			 local-name(..)='Inline' or
			 local-name(..)='LOD' or
			 local-name(..)='NavigationInfo' or
			 local-name(..)='Script' or
			 local-name(..)='Shape' or
			 local-name(..)='Sound' or
			 local-name(..)='Switch' or
			 local-name(..)='TextureBackground' or
             starts-with(local-name(..),'TextureProjector') or
			 local-name(..)='Transform' or
			 local-name(..)='Viewpoint' or
			 local-name(..)='WorldInfo')) and
		not((local-name()='containerField' and string(.)='geometry')	and
			(local-name(..)='Box' or
			 local-name(..)='Cone' or
			 local-name(..)='Cylinder' or
			 local-name(..)='ElevationGrid' or
			 local-name(..)='GeoElevationGrid' or
			 local-name(..)='Extrusion' or
			 local-name(..)='IndexedFaceSet' or
			 local-name(..)='IndexedLineSet' or
			 local-name(..)='PointSet' or
			 local-name(..)='Sphere' or
			 local-name(..)='Text' or
			 local-name(..)='XvlShell'))" />
  <xsl:variable name="notDefaultContainerField2"
	select="not((local-name()='containerField' and string(.)='source')	and (local-name(..)='AudioClip')) and
		not((local-name()='containerField' and string(.)='appearance')	and (local-name(..)='Appearance')) and
		not((local-name()='containerField' and string(.)='material')	and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))) and
		not((local-name()='containerField' and string(.)='color')	and (local-name(..)='ColorNode' or local-name(..)='Color')) and
		not((local-name()='containerField' and string(.)='coord')	and ((local-name(..)='Coordinate') or (local-name(..)='CoordinateDouble') or (local-name(..)='GeoCoordinate'))) and
		not((local-name()='containerField' and string(.)='normal')	and (local-name(..)='Normal')) and
		not((local-name()='containerField' and string(.)='texture')	and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
		not((local-name()='containerField' and string(.)='fontStyle')	and (local-name(..)='FontStyle')) and
		not((local-name()='containerField' and string(.)='texCoord')	and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
		not((local-name()='containerField' and string(.)='textureTransform')	and (local-name(..)='TextureTransform'))" />
  <!-- also need GeoSpatial, HAnim, NURBS, DIS, new nodes -->
<xsl:choose>
  <xsl:when test="(local-name(..)='NavigationInfo' and (local-name()='type' and contains(string(.),'&#34;'))) or
  		  (local-name(..)='FontStyle' and (local-name()='family'  and contains(string(.),'&#34;'))) or
  		  (local-name(..)='FontStyle' and (local-name()='justify' and contains(string(.),'&#34;')))">
    <!-- strip extraneous &quot; (i.e. &#34;) characters -->
    <xsl:message>
      <xsl:text>value=</xsl:text>
      <xsl:value-of select="."/>
    </xsl:message>
    <xsl:text> </xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:text>='</xsl:text>
    <xsl:value-of select="translate(string(.),'&#34;','')"/>
    <xsl:text>'</xsl:text>
  </xsl:when>
  <xsl:when test="
  		$notImplicitEvent and
                $notDefaultFieldValue1 and
                $notDefaultFieldValue2 and
                $notDefaultFieldValue3 and
                $notDefaultFieldValue4 and
                $notDefaultFieldValue5 and
                $notDefaultFieldValue6 and
                $notDefaultFieldValue7 and
                $notDefaultFieldValue8 and
                $notDefaultFieldValue9 and
                $notDefaultFieldValue10 and
                $notDefaultContainerField1 and
                $notDefaultContainerField2 and
                not(local-name()='containerField' and string(.)='') and
                not (local-name()='class' and string(.)='') and
                not((local-name(..)='Script' or local-name(..)='field') and (local-name()='xml:space' or local-name()='space'))" >
    <!--   valid field found by the preceding checks, now output accordingly  -->
    <xsl:text> </xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:text>='</xsl:text>
    <!-- try to make exceptionally long strings more readable by most applications -->
    <xsl:choose>
      <xsl:when test="string-length(string(.)) > 1000">
        <xsl:value-of select="translate(string(.),' ','&#10;')"/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:value-of select="."/>
      </xsl:otherwise>
    </xsl:choose>
    <xsl:text>'</xsl:text>
  </xsl:when>
</xsl:choose>
</xsl:template>


<!-- ******nodeTypeHint => nodeType ****** -->
<xsl:template match="@nodeTypeHint">
  <xsl:text> nodeType='</xsl:text>
  <xsl:value-of select="."/>
  <xsl:text>' </xsl:text>
</xsl:template>


<!-- ****** proxy field => Proxy node ****** -->
<!-- no longer legal

<xsl:template match="proxy">
  <xsl:element name="proxy">
    <xsl:apply-templates select="@*"/>
    <xsl:apply-templates select="*"/>
  </xsl:element>
</xsl:template>


<xsl:template match="Proxy">
  <xsl:element name="proxy">
    <xsl:apply-templates select="@*"/>
    <xsl:apply-templates select="*"/>
  </xsl:element>
</xsl:template>
-->

<!-- ****** Script node CDATA content ****** -->
<xsl:template match="Script">
  <xsl:copy>
    <xsl:apply-templates select="@name | @DEF | @*[not(local-name()='DEF') and not(local-name()='USE')]"/>
    <xsl:apply-templates select="field | comment()"/>
    <xsl:if test="text()">
	<!-- contained content for Script node is scripting code, output as url -->
	<xsl:if test="@url"><xsl:text># XSL-translation warning:  found url pointing to external script code and also contained code in CDATA section&#10;</xsl:text></xsl:if>
	<!-- CosmoPlayer url must start with javascript: or else it fails.  Update to handle other script language source when supported. -->
	<xsl:text>&#10;</xsl:text>
	<xsl:text disable-output-escaping="yes">&lt;!</xsl:text>
	<xsl:text>[CDATA[javascript:</xsl:text>
	<xsl:for-each select="text()">
		<xsl:choose>
			<xsl:when test="substring-before(.,'javascript:') or 'j'=substring-before(.,'avascript:')"><xsl:value-of select="substring-after(.,'javascript:')" disable-output-escaping="yes" /></xsl:when>
	  		<xsl:otherwise><xsl:value-of select="." disable-output-escaping="yes" /></xsl:otherwise>
	 	</xsl:choose>
	</xsl:for-each>
	<xsl:text>&#10;]</xsl:text>
	<xsl:text disable-output-escaping="yes">]&gt;&#10;</xsl:text>
    </xsl:if>
  </xsl:copy>
</xsl:template>


<!-- ****** tag renames !!! (get rid of these when content converted to avoid future name collisions with user nodes) ****** -->

<!-- defaultValue changed to fieldValue -->
<xsl:template match="defaultValue[local-name(..)='Script' or local-name(..)='ProtoInstance']">
  <xsl:element name="fieldValue">
    <xsl:apply-templates select="@name | @*"/>
    <xsl:apply-templates select="*"/>
  </xsl:element>
</xsl:template>


<!-- Header changed to head -->
<xsl:template match="Header">
  <xsl:element name="head">
    <xsl:apply-templates select="@*"/>
    <xsl:apply-templates select="*"/>
  </xsl:element>
</xsl:template>


<!-- ROUTE -->
<xsl:template match="Route[local-name(..)='Scene']"> <!-- match Route and rename ROUTE -->
  <xsl:element name="ROUTE">
    <xsl:apply-templates select="@*"/>
  </xsl:element>
</xsl:template>


</xsl:stylesheet>
