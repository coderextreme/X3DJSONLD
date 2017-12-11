<?xml version='1.0'?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0"
                xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
<!--
Copyright (c) 2000-2014 held by the author(s).  All rights reserved.

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
      (http://www.nps.edu and http://www.MovesInstitute.org)
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
   <meta name="url"         content="http://www.web3D.org/TaskGroups/x3d/content/X3dUnwrap.xslt" />
  </head>

Recommended tool:

-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://users.iclway.co.uk/mhkay/saxon

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
	doctype-public="http://www.web3D.org/TaskGroups/x3d/content/x3d-compromise.dtd"
	doctype-system="file:///C:/www.web3D.org/TaskGroups/x3d/content/x3d-compromise.dtd"
or
	doctype-public="http://www.web3D.org/TaskGroups/x3d/content/x3d-compact.dtd"
	doctype-system="file:///C:/www.web3D.org/TaskGroups/x3d/content/x3d-compact.dtd"

	cdata-section-elements="@string"
-->

<!-- ****** root:  start of file ****** -->
<xsl:template match="/">
  <xsl:text disable-output-escaping="yes">&#10;&lt;!DOCTYPE X3D PUBLIC&#10;</xsl:text>
  <xsl:text disable-output-escaping="yes">	"http://www.web3D.org/TaskGroups/x3d/content/x3d-compact.dtd"&#10;</xsl:text>
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
  <xsl:comment><xsl:value-of select="normalize-space(.)"/></xsl:comment>
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
	select="not( local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) and
		not( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) and
		not( local-name(..)='AudioClip'	and
						((local-name()='loop' and .='false') or
						 (local-name()='pitch' and (.='1' or .='1.0')) or
						 (local-name()='startTime' and (.='0' or .='0.0')) or
						 (local-name()='stopTime' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( ((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='transparency' and (.='0' or .='0.0')))) and
        not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (.='0 1 0' or .='0.0 1.0 0.0')) and
		not( local-name(..)='BooleanToggle' and local-name()='toggle' and .='false') and
        not( local-name(..)='Box'	and local-name()='size' and (.='2 2 2' or .='2.0 2.0 2.0')) and
		not( local-name(..)='Collision'	and local-name()='collide' and .='true') and
		not( local-name(..)='Cone' and	((local-name()='bottomRadius' and (.='1' or .='1.0')) or
						 (local-name()='height' and (.='2' or .='2.0')) or
						 (local-name()='side' and .='true') or
						 (local-name()='bottom' and .='true'))) and
		not( local-name(..)='Cylinder' and
						((local-name()='height' and (.='2' or .='2.0')) or
						 (local-name()='radius' and (.='1' or .='1.0')) or
						 (local-name()='bottom' and .='true') or
						 (local-name()='side' and .='true') or
						 (local-name()='top' and .='true'))) and
		not( local-name(..)='CylinderSensor' and
						((local-name()='autoOffset' and .='true') or
						 (local-name()='enabled' and .='true') or
						 (local-name()='diskAngle' and .='0.262') or
						 (local-name()='offset' and (.='0' or .='0.0')) or
						 (local-name()='maxAngle' and (.='-1' or .='-1.0')) or
						 (local-name()='minAngle' and (.='0' or .='0.0'))))" />
  <xsl:variable name="notDefaultFieldValue2"
	select="not( local-name(..)='DirectionalLight' and
						((local-name()='ambientIntensity' and (.='0' or .='0.0')) or
						 (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='direction' and (.='0 0 -1' or .='0.0 0.0 -1.0')) or
                         (local-name()='global' and .='false') or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='on' and .='true'))) and
		not( local-name(..)='ElevationGrid' and
						((local-name()='ccw' and .='true') or
						 (local-name()='colorPerVertex' and .='true') or
						 (local-name()='normalPerVertex' and .='true') or
						 (local-name()='solid' and .='true') or
						 (local-name()='xDimension' and (.='0' or .='0.0')) or
						 (local-name()='xSpacing' and (.='1' or .='1.0')) or
						 (local-name()='zDimension' and (.='0' or .='0.0')) or
						 (local-name()='zSpacing' and (.='1' or .='1.0')) or
						 (local-name()='creaseAngle' and (.='0' or .='0.0')))) and
		not( local-name(..)='Extrusion'	and
						((local-name()='beginCap' and .='true') or
						 (local-name()='ccw' and .='true') or
						 (local-name()='convex' and .='true') or
						 (local-name()='endCap' and .='true') or
						 (local-name()='solid' and .='true') or
						 (local-name()='creaseAngle' and (.='0' or .='0.0')) or
						 (local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='scale' and (.='1 1' or .='1.0 1.0')) or
						 (local-name()='crossSection' and .='1 1, 1 -1, -1 -1, -1 1, 1  1') or
						 (local-name()='spine' and .='0 0 0, 0 1 0')))" />
  <xsl:variable name="notDefaultFieldValue3"
	select="not( local-name(..)='Fog' and 	((local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='visibilityRange' and (.='0' or .='0.0')) or
						 (local-name()='fogType' and .='LINEAR'))) and
		not( local-name(..)='FontStyle'	and
						((local-name()='horizontal' and .='true') or
						 (local-name()='leftToRight' and .='true') or
						 (local-name()='topToBottom' and .='true') or
						 (local-name()='size' and (.='1' or .='1.0')) or
						 (local-name()='spacing' and (.='1' or .='1.0')) or
						 (local-name()='family' and .='&quot;SERIF&quot;') or
						 (local-name()='justify' and .='&quot;BEGIN&quot;') or
						 (local-name()='style' and .='PLAIN'))) and
		not( local-name(..)='ImageTexture' and
						((local-name()='repeatS' and .='true') or
						 (local-name()='repeatT' and .='true'))) and
		not( local-name(..)='IndexedFaceSet' and
						((local-name()='ccw' and .='true') or
						 (local-name()='colorPerVertex' and .='true') or
						 (local-name()='convex' and .='true') or
						 (local-name()='normalPerVertex' and .='true') or
						 (local-name()='solid' and .='true') or
						 (local-name()='creaseAngle' and (.='0' or .='0.0')))) and
		not( local-name(..)='IndexedLineSet' and local-name()='colorPerVertex' and .='true') and
		not( local-name(..)='Inline' and local-name()='load' and .='true') and
        not( local-name(..)='LoadSensor' and
                      ((local-name()='enabled' and .='true') or
                      (local-name()='timeOut' and (.='0' or .='0.0')))) and
		not( local-name(..)='LOD '	and	 local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) and
		not( ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))	and
						((local-name()='ambientIntensity' and .='0.2') or
						 (local-name()='diffuseColor' and .='0.8 0.8 0.8') or
						 (local-name()='emissiveColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='shininess' and .='0.2') or
						 (local-name()='specularColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='transparency' and (.='0' or .='0.0')))) and
        not( local-name(..)='TwoSidedMaterial'	and
                      ((local-name()='backAmbientIntensity' and .='0.2') or
                      (local-name()='backDiffuseColor' and .='0.8 0.8 0.8') or
                      (local-name()='backEmissiveColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='backShininess' and .='0.2') or
                      (local-name()='backSpecularColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='backTransparency' and (.='0' or .='0.0'))))" />
  <xsl:variable name="notDefaultFieldValue4"
	select="not( local-name(..)='MovieTexture' and
						((local-name()='loop' and .='false') or
						 (local-name()='speed' and (.='1' or .='1.0')) or
						 (local-name()='startTime' and (.='0' or .='0.0')) or
						 (local-name()='stopTime' and (.='0' or .='0.0')) or
						 (local-name()='repeatS' and .='true') or
						 (local-name()='repeatT' and .='true'))) and
		not( local-name(..)='NavigationInfo' and
						((local-name()='avatarSize' and .='0.25 1.6 0.75') or
						 (local-name()='headlight' and .='true') or
						 (local-name()='speed' and (.='1' or .='1.0')) or
                         (local-name()='transitionTime' and (.='1' or .='1.0')) or
                         (local-name()='transitionType' and (.='&quot;LINEAR&quot;')) or
					     (local-name()='type' and (.='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
						 (local-name()='visibilityLimit' and (.='0' or .='0.0')))) and
		not( local-name(..)='PixelTexture' and
						((local-name()='repeatS' and .='true') or
						 (local-name()='repeatT' and .='true') or
						 (local-name()='image' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='PlaneSensor' and
						((local-name()='autoOffset' and .='true') or
						 (local-name()='enabled' and .='true') or
						 (local-name()='maxPosition' and (.='-1 -1' or .='-1.0 -1.0')) or
						 (local-name()='minPosition' and (.='0 0' or .='0.0 0.0')) or
						 (local-name()='offset' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='PointLight' and
						((local-name()='ambientIntensity' and (.='0' or .='0.0'))or
						 (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
						 (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='on' and .='true') or
						 (local-name()='radius' and (.='100' or .='100.0'))))" />
  <xsl:variable name="notDefaultFieldValue5"
	select="not( local-name(..)='ProximitySensor' and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='enabled' and .='true'))) and
		not( local-name(..)='Script' and ((local-name()='directOutput' and .='false') or
						 (local-name()='mustEvaluate' and .='false'))) and
		not( local-name(..)='Sound' and ((local-name()='direction' and (.='0 0 1' or .='0.0 0.0 1.0')) or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='priority' and (.='0' or .='0.0')) or
						 (local-name()='maxBack' and (.='10' or .='10.0')) or
						 (local-name()='maxFront' and (.='10' or .='10.0')) or
						 (local-name()='minBack' and (.='1' or .='1.0'))  or
						 (local-name()='minFront' and (.='1' or .='1.0')) or
						 (local-name()='spatialize' and .='true'))) and
		not( local-name(..)='Sphere' and  local-name()='radius' and (.='1' or .='1.0')) and
		not( local-name(..)='SphereSensor' and
						((local-name()='autoOffset' and .='true') or
						 (local-name()='enabled' and .='true') or
						 (local-name()='offset' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0'))))" />
  <xsl:variable name="notDefaultFieldValue6"
	select="not( local-name(..)='SpotLight'	and
						((local-name()='ambientIntensity' and (.='0' or .='0.0')) or
						 (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
                         (local-name()='beamWidth' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854'))) or
                         (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                         (local-name()='cutOffAngle' and (.='1.5708' or .='1.570796')) or
						 (local-name()='direction' and (.='0 0 -1' or .='0.0 0.0 -1.0')) or
						 (local-name()='intensity' and (.='1' or .='1.0')) or
						 (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='on' and .='true') or
						 (local-name()='radius' and (.='100' or .='100.0')))) and
		not( local-name(..)='Switch' and  local-name()='whichChoice' and (.='-1' or .='-1.0')) and
		not( local-name(..)='Text'   and ((local-name()='maxExtent' and (.='0' or .='0.0')) or (local-name()='solid' and (.='false')))) and
		not( local-name(..)='TextureTransform' and
						((local-name()='center' and (.='0 0' or .='0.0 0.0')) or
						 (local-name()='rotation' and (.='0' or .='0.0')) or
						 (local-name()='scale ' and (.='1 1' or .='1.0 1.0')) or
						 (local-name()='translation' and (.='0 0' or .='0.0 0.0')))) and
		not( local-name(..)='Switch' and  local-name()='whichChoice' and (.='-1' or .='-1.0'))" />
  <xsl:variable name="notDefaultFieldValue7"
	select="not( local-name(..)='TimeSensor' and
						((local-name()='cycleInterval' and (.='1' or .='1.0')) or
						 (local-name()='enabled' and .='true') or
						 (local-name()='startTime' and (.='0' or .='0.0')) or
						 (local-name()='stopTime' and (.='0' or .='0.0')) or
						 (local-name()='loop' and .='false'))) and
		not( local-name(..)='TouchSensor' and
						  local-name()='enabled' and .='true') and
		not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
						 (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
		not( local-name(..)='Viewpoint' and
						((local-name()='fieldOfView' and .='0.785398') or
						 (local-name()='jump' and .='true') or
						 (local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						 (local-name()='position' and (.='0 0 10' or .='0.0 0.0 10.0')))) and
		not( local-name(..)='VisibilitySensor' and
						((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
						 (local-name()='enabled' and .='true') or
						 (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue8"
                      select="not( local-name(..)='FillProperties' and
                      (((local-name()='filled' and .='true') or
                      (local-name()='hatched' and .='true') or
                      local-name()='hatchStyle' and (.='1' or .='1.0')) or
                      (local-name()='hatchColor' and (.='1 1 1' or .='1.0 1.0 1.0')))) and
                      not( local-name(..)='LineProperties' and
                      ((local-name()='applied' and .='true') or
                      (local-name()='linetype' and (.='1')) or
                      (local-name()='linewidthScaleFactor' and (.='0' or .='0.0')))) and
                      not( local-name(..)='ClipPlane' and
                      ((local-name()='enabled' and .='true') or
                      (local-name()='plane' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0')))) and
                      not( local-name(..)='ViewpointGroup' and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='displayed' and .='true') or
                      (local-name()='retainUserOffsets' and .='false') or
                      (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue9"
                      select="not( local-name(..)='MultiTexture' and
                      ((local-name()='alpha' and (.='1' or .='1.0')) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')))) and
                      not( local-name(..)='TextureCoordinateGenerator' and
                      ((local-name()='mode' and .='SPHERE'))) and
                      not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                      ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and .='false')) and
                      not( local-name(..)='PixelTexture3D' and
                      (local-name()='image' and (.='0 0 0 0')))" />
  <xsl:variable name="notDefaultContainerField1"
	select="not((local-name()='containerField' and .='children')	and 
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
			 local-name(..)='Transform' or
			 local-name(..)='Viewpoint' or
			 local-name(..)='WorldInfo')) and
		not((local-name()='containerField' and .='geometry')	and
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
	select="not((local-name()='containerField' and .='source')	and (local-name(..)='AudioClip')) and
		not((local-name()='containerField' and .='appearance')	and (local-name(..)='Appearance')) and
		not((local-name()='containerField' and .='material')	and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))) and
		not((local-name()='containerField' and .='color')	and (local-name(..)='ColorNode' or local-name(..)='Color')) and
		not((local-name()='containerField' and .='coord')	and (local-name(..)='Coordinate')) and
		not((local-name()='containerField' and .='normal')	and (local-name(..)='Normal')) and
		not((local-name()='containerField' and .='texture')	and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
		not((local-name()='containerField' and .='fontStyle')	and (local-name(..)='FontStyle')) and
		not((local-name()='containerField' and .='texCoord')	and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
		not((local-name()='containerField' and .='textureTransform')	and (local-name(..)='TextureTransform'))" />
  <!-- also need GeoSpatial, H-Anim, NURBS, DIS, new nodes -->
<xsl:choose>
  <xsl:when test="(local-name(..)='NavigationInfo' and (local-name()='type' and contains(.,'&#34;'))) or
  		  (local-name(..)='FontStyle' and (local-name()='family'  and contains(.,'&#34;'))) or
  		  (local-name(..)='FontStyle' and (local-name()='justify' and contains(.,'&#34;')))">
    <!-- strip extraneous &quot; (i.e. &#34;) characters -->
    <xsl:message>
      <xsl:text>value=</xsl:text>
      <xsl:value-of select="."/>
    </xsl:message>
    <xsl:text> </xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:text>='</xsl:text>
    <xsl:value-of select="translate(.,'&#34;','')"/>
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
                $notDefaultContainerField1 and
                $notDefaultContainerField2 and
                not(local-name()='containerField' and .='') and
                not (local-name()='class' and .='') and
                not((local-name(..)='Script' or local-name(..)='field') and (local-name()='xml:space' or local-name()='space'))" >
    <!--   valid field found by the preceding checks, now output accordingly  -->
    <xsl:text> </xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:text>='</xsl:text>
    <!-- try to make exceptionally long strings more readable by most applications -->
    <xsl:choose>
      <xsl:when test="string-length(.) > 1000">
        <xsl:value-of select="translate(.,' ','&#10;')"/>
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
