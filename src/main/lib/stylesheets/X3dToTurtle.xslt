<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3dToTurtle.xslt
    created     : 16 September 2019
    creator     : Jakub Flotyński and Don Brutzman
    description : Export stylesheet to convert X3D XML models into Turtle RDF/OWL triples
    reference   : https://www.w3.org/TR/xslt
    reference   : https://www.web3d.org/x3d/content/semantics/semantics.html
    identifier  : https://www.web3d.org/x3d/stylesheets/X3dToTurtle.xslt
    license     : license.html
-->

<xsl:stylesheet version="2.0" exclude-result-prefixes="ds saxon"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#"
				xmlns:saxon="http://saxon.sf.net/"><!-- http://www.saxonica.com/documentation9.5/extensions/attributes -->

    <xsl:param name="defaultModelPrefix"><xsl:text></xsl:text></xsl:param>

	<!--  extension-element-prefixes="xs" -->
    <xsl:output method="text"/> <!-- output methods:  xml html text -->
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
        <!-- default namespace for scene matches meta identifier, if given -->
        <xsl:choose>
            <xsl:when test="(string-length($defaultModelPrefix) > 0)">
                <xsl:text disable-output-escaping="yes"><![CDATA[@prefix dc: <]]></xsl:text>
                <xsl:value-of select="$defaultModelPrefix"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[#> .]]></xsl:text>
				<xsl:text>&#10;</xsl:text>
            </xsl:when>
            <xsl:when test="not(count(//meta[@name='identifier']) = 1) or (string-length(//meta[@name='identifier']/@content) > 0)">
                <xsl:choose>
                    <xsl:when test="(count(//meta[@name='identifier']) = 0)">
                        <xsl:message>
                            <xsl:text>*** warning, no meta element with name=identifier found, unique entry needed</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <xsl:when test="(count(//meta[@name='identifier']) > 1)">
                        <xsl:message>
                            <xsl:text>*** warning, more than one meta element with name=identifier found, this must be unique</xsl:text>
                        </xsl:message>
                    </xsl:when>
                </xsl:choose>
                <xsl:text disable-output-escaping="yes"><![CDATA[@prefix :       <]]></xsl:text>
                <xsl:variable name="modelName">
                    <xsl:choose>
                        <xsl:when test="not(string-length(substring-before(//meta[@name='identifier']/@content,'.x3d')) > 0) or
                                              starts-with(//meta[@name='identifier']/@content,'*enter')">
                            <xsl:text>https://www.web3d.org/semantics/scenes/UnnamedX3dModel</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="substring-before(//meta[@name='identifier'][1]/@content,'.x3d')"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                <xsl:value-of select="translate($modelName,' ','_')"/>
                <xsl:text>.ttl</xsl:text>
                <xsl:text disable-output-escaping="yes"><![CDATA[#> .]]></xsl:text>
				<xsl:text>&#10;</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text disable-output-escaping="yes"><![CDATA[@prefix : <#> .]]></xsl:text>
				<xsl:text>&#10;</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
		<xsl:text disable-output-escaping="yes"><![CDATA[@prefix dc:     <http://purl.org/dc/terms/> .
@prefix owl:    <http://www.w3.org/2002/07/owl#> .
@prefix rdf:    <http://www.w3.org/1999/02/22-rdf-syntax-ns#> .
@prefix rdfs:   <http://www.w3.org/2000/01/rdf-schema#> .
@prefix schema: <http://schema.org/> .
@prefix xsd:    <http://www.w3.org/2001/XMLSchema#> .
@prefix x3d:    <http://www.web3d.org/specifications/x3d-4.0.xsd#> .
@prefix x3do:   <http://www.web3d.org/specifications/X3dOntology4.0#> .

]]></xsl:text>
<!--
[ rdf:type owl:Ontology ;
   owl:imports <file:/E:/Rackstation-SVN/Papers/2019/IC3D-X3D/Paper/Files/X3dOntology4.0.ttl>
 ] .
-->
		<xsl:apply-templates select="/X3D" >
			<xsl:with-param name="graphLevel" select="0"/>
		</xsl:apply-templates>
	</xsl:template>
	
	<xsl:template match="*">
		<xsl:param name="graphLevel"/>
		<xsl:param name="parentName"/>
		
        <!-- unique name for each element -->
        <xsl:variable name="elementName">
            <!-- unique name, each underscore-separated numeral is child index among peers, starting below Scene element -->
            <xsl:call-template name="compute-node-name">
                <xsl:with-param name="currentNode" select="."/>
            </xsl:call-template>
        </xsl:variable>	
        
        <!-- triple subject -->
		<xsl:text>:</xsl:text>
        <xsl:value-of select ="$elementName"/>
		<xsl:text> a owl:NamedIndividual, x3do:</xsl:text><xsl:value-of select ="local-name()"/>
        
        <!-- hasParent -->
		<xsl:if test="(string-length($parentName) > 0)">
            <xsl:text> ;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>  x3do:hasParent</xsl:text>
            <xsl:text> :</xsl:text>
            <xsl:value-of select="$parentName"/>
        </xsl:if>
        
        <xsl:choose>
            <xsl:when test="(string-length(@USE) > 0)">
                <xsl:text> ;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>  owl:sameAs </xsl:text>
                <xsl:text>:</xsl:text>
                <xsl:value-of select="@USE"/>
            </xsl:when>
            <xsl:otherwise>
                <!-- has child field -->
                <xsl:for-each select="*">

                    <xsl:variable name="fieldName">
                        <xsl:choose>
                            <xsl:when test="@containerField">
                                <xsl:value-of select="@containerField"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="local-name()"/>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:variable name="isFirstSibling" select="(count(preceding-sibling::*[@containerField = $fieldName]) +
                                                                 count(preceding-sibling::*[local-name()    = $fieldName])= 0)"/>
                    <xsl:variable name="isLastSibling"  select="(count(following-sibling::*[@containerField = $fieldName]) +
                                                                 count(following-sibling::*[local-name()    = $fieldName])= 0)"/>
                    <xsl:variable name="UpperCamelCaseName">
                        <xsl:value-of select="translate(substring($fieldName,1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                        <xsl:value-of select=          "substring($fieldName,2)"/>
                    </xsl:variable>
                    <!-- debug diagnostic
                    <xsl:message>
                        <xsl:text>*** $fieldName=</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>, $isFirstSibling=</xsl:text>
                        <xsl:value-of select="$isFirstSibling"/>
                        <xsl:text>, $isLastSibling=</xsl:text>
                        <xsl:value-of select="$isLastSibling"/>
                    </xsl:message> 
                    -->
                    <xsl:if test="$isFirstSibling">
                        <!-- provide output on first occurrence of this containerField -->
                                <xsl:text> ;</xsl:text>
                                <xsl:text>&#10;</xsl:text>
                                <xsl:text>  x3do:has</xsl:text>
                                <xsl:value-of select="$UpperCamelCaseName"/>
                        <xsl:choose>
                            <xsl:when test="$isLastSibling">
                                <!-- SFNode child field -->
                                <xsl:text> :</xsl:text>
                                <!-- unique name, each underscore-separated numeral is child index among peers, starting below Scene element -->
                                <xsl:call-template name="compute-node-name">
                                    <xsl:with-param name="currentNode" select="."/>
                                </xsl:call-template>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- MFNode child field -->
                                <!-- RDF 1.1 Turtle - Terse RDF Triple Language, 2.3 Object Lists https://www.w3.org/TR/turtle/#object-lists -->
                                <xsl:text> :</xsl:text>
                                <xsl:call-template name="compute-node-name">
                                    <xsl:with-param name="currentNode" select="."/>
                                </xsl:call-template>
                                <xsl:for-each select="following-sibling::*[(@containerField = $fieldName) or (local-name() = $fieldName)]">
                                    <xsl:text>, :</xsl:text>
                                    <!-- unique name, each underscore-separated numeral is child index among peers, starting below Scene element -->
                                    <xsl:call-template name="compute-node-name">
                                        <xsl:with-param name="currentNode" select="."/>
                                    </xsl:call-template>
                                </xsl:for-each>
                            </xsl:otherwise>
                        </xsl:choose>

                    </xsl:if>
                </xsl:for-each>

                <xsl:for-each select="@*[(local-name() != 'DEF') and (local-name() != 'USE') and (local-name() != 'containerField')]">

                    <!-- eliminate default attribute values, otherwise they will all appear in output  -->
                    <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3dom.xslt X3dUnwrap.xslt X3dWrap.xslt X3dToJson.xslt X3dToPython.xslt and X3dToTurtle.xslt -->
                    <!-- check values with/without .0 suffix since these are string checks and autogenerated/DOM output might have either -->
                    <!-- do not check ProtoInstance fields or natively defined nodes, since they might have different user-defined defaults -->
                    <!-- tool-bug workaround:  split big boolean queries into pieces to avoid overloading the Xalan/lotusxml query buffer -->
                    <xsl:variable name="notImplicitEvent1"
                                  select="not(local-name(..)='AudioClip'	and	(local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='isActive')) and
                                  not(contains(local-name(..),'Interpolator') and (local-name()='set_fraction' or local-name()='value_changed')) and
                                  not(contains(local-name(..),'Sequencer')    and (local-name()='set_fraction' or local-name()='value_changed' or local-name()='previous' or local-name()='next')) and
                                  not(((local-name(..)='Background') or (local-name(..)='TextureBackground')) and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound')) and
                                  not(local-name(..)='Collision' and (local-name()='isActive' or local-name()='collideTime')) and
                                  not(local-name(..)='CylinderSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='rotation' or local-name()='trackPoint_changed')) and
                                  not(local-name(..)='ElevationGrid'	and	local-name()='set_height') and
                                  not((local-name(..)='Extrusion') and starts-with(local-name(),'set_')) and
                                  not(((local-name(..)='IndexedFaceSet') or contains(local-name(..),'TriangleFanSet') or contains(local-name(..),'TriangleSet') or contains(local-name(..),'TriangleStripSet') or contains(local-name(..),'QuadSet')) and starts-with(local-name(),'set_') and contains(local-name(),'ndex')) and
                                  not(local-name(..)='IndexedLineSet' and	 local-name()='lineWidth') and
                                  not(local-name(..)='MovieTexture' and	(local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='isActive')) and
                                  not(local-name(..)='NavigationInfo' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound'))
                                  " />
                    <xsl:variable name="notImplicitEvent2"
                                  select="not(local-name(..)='PointSet'	and	 local-name()='pointSize') and
                                  not(local-name(..)='PlaneSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='translation_changed' or local-name()='trackPoint_changed')) and
                                  not(local-name(..)='ProximitySensor' and (local-name()='isActive' or local-name()='position' or local-name()='orientation' or
                                  local-name()='enterTime' or local-name()='exitTime')) and
                                  not(local-name(..)='SphereSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint_changed')) and
                                  not(local-name(..)='TimeSensor'	and	(local-name()='isActive' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='cycleTime' or local-name()='set_fraction' or
                                  local-name()='time')) and
                                  not(local-name(..)='TouchSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='hitNormal_changed' or
                                  local-name()='touchTime' or local-name()='hitPoint_changed' or local-name()='hitTexCoord_changed')) and
                                  not(local-name(..)='Viewpoint'	  and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine')) and
                                  not(local-name(..)='GeoViewpoint' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine'))
                                  " />
                    <xsl:variable name="notImplicitEvent3"
                                  select="not(local-name(..)='BooleanTrigger'	and	(local-name()='set_triggerTime' or local-name()='triggerTrue')) and
                                  not(local-name(..)='IntegerTrigger'	and	(local-name()='set_boolean' or local-name()='triggerValue'))
                                  " />
                    <xsl:variable name="notDefaultFieldValue1"
                                  select="not( local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) and
                                  not( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) and
                                  not( local-name()='visible' and .='true') and
                                  not( local-name(..)='AudioClip'	and
                                  ((local-name()='loop' and string(.)='false') or
                                  (local-name()='pitch' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')))) and
                                  not( ((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
                                  not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) and
                                  not( local-name(..)='BooleanToggle' and local-name()='toggle' and string(.)='false') and
                                  not( local-name(..)='Box'	and ((local-name()='size' and (string(.)='2 2 2' or string(.)='2.0 2.0 2.0')) or (local-name()='solid' and string(.)='true'))) and
                                  not( local-name(..)='Collision'	and local-name()='enabled' and string(.)='true') and
                                  not( local-name(..)='Cone' and	((local-name()='bottomRadius' and (string(.)='1' or string(.)='1.0')) or
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
                                  not((local-name(..)='ElevationGrid' or local-name(..)='GeoElevationGrid') and
                                  ((local-name()='ccw' and string(.)='true') or
                                  (local-name()='colorPerVertex' and string(.)='true') or
                                  (local-name()='normalPerVertex' and string(.)='true') or
                                  (local-name()='solid' and string(.)='true') or
                                  (local-name()='xDimension' and (string(.)='2')) or
                                  (local-name()='xSpacing' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='zDimension' and (string(.)='2')) or
                                  (local-name()='zSpacing' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='yScale' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='height' and (string(.)='0 0 0 0' or string(.)='0.0 0.0 0.0 0.0')) or
                                  (local-name()='geoGridOrigin' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
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
                                  (local-name()='crossSection' and string(.)='1 1, 1 -1, -1 -1, -1 1, 1 1') or
                                  (local-name()='crossSection' and string(.)='1 1 1 -1 -1 -1 -1 1 1 1') or
                                  (local-name()='spine' and string(.)='0 0 0, 0 1 0') or
                                  (local-name()='spine' and string(.)='0 0 0 0 1 0')))" />
                    <xsl:variable name="notDefaultFieldValue3"
                                  select="not(contains(local-name(..),'Fog') and 	((local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                  (local-name()='visibilityRange' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='enabled' and string(.)='true') or
                                  (local-name()='fogType' and string(.)='LINEAR'))) and
                                  not(contains(local-name(..),'FontStyle')	and
                                  ((local-name()='horizontal' and string(.)='true') or
                                  (local-name()='leftToRight' and string(.)='true') or
                                  (local-name()='topToBottom' and string(.)='true') or
                                  (local-name()='size' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='spacing' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='pointSize' and (string(.)='12' or string(.)='12.0')) or
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
                                  not( local-name(..)='Inline' and local-name()='load' and string(.)='true') and
                                  not( local-name(..)='LoadSensor' and
                                  ((local-name()='enabled' and string(.)='true') or
                                  (local-name()='timeOut' and (string(.)='0' or string(.)='0.0')))) and
                                  not( local-name(..)='LOD'	and	((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='forceTransitions' and string(.)='false'))) and
                                  not(((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
                                  ((local-name()='ambientIntensity' and string(.)='0.2') or
                                  (local-name()='diffuseColor' and string(.)='0.8 0.8 0.8') or
                                  (local-name()='emissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='shininess' and string(.)='0.2') or
                                  (local-name()='specularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
                                  not( local-name(..)='TwoSidedMaterial'	and
                                  ((local-name()='backAmbientIntensity' and string(.)='0.2') or
                                  (local-name()='backDiffuseColor' and string(.)='0.8 0.8 0.8') or
                                  (local-name()='backEmissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='backShininess' and string(.)='0.2') or
                                  (local-name()='separateBackColor' and string(.)='false') or
                                  (local-name()='backSpecularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='backTransparency' and (string(.)='0' or string(.)='0.0'))))" />
                    <xsl:variable name="notDefaultFieldValue4"
                                  select="not( local-name(..)='MovieTexture' and
                                  ((local-name()='loop' and string(.)='false') or
                                  (local-name()='speed' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) or
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
                                  (local-name()='axisRotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                  (local-name()='enabled' and string(.)='true') or
                                  (local-name()='maxPosition' and (string(.)='-1 -1' or string(.)='-1.0 -1.0')) or
                                  (local-name()='minPosition' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                                  (local-name()='offset' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not( local-name(..)='PointLight' and
                                  ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0'))or
                                  (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                                  (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                  (local-name()='global' and string(.)='true') or
                                  (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='on' and string(.)='true') or
                                  (local-name()='radius' and (string(.)='100' or string(.)='100.0'))))" />
                    <xsl:variable name="notDefaultFieldValue5"
                                  select="not(contains(local-name(..),'ProximitySensor') and
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
                                  not( local-name(..)='Sphere' and ((local-name()='radius' and (string(.)='1' or string(.)='1.0')) or (local-name()='solid' and string(.)='true'))) and
                                  not( local-name(..)='SphereSensor' and
                                  ((local-name()='autoOffset' and string(.)='true') or
                                  (local-name()='enabled' and string(.)='true') or
                                  (local-name()='offset' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0')) and
                                  not( local-name(..)='Switch' and ../IS/connect[@nodeField='whichChoice'])))" />
                    <!-- Switch whichChoice='-1' is very significant and somewhat counterintuitive/nonobvious, so otherwise show it. -->
                    <!--	  and not( local-name(..)='Switch' and  local-name()='whichChoice' and (string(.)='-1' or string(.)='-1.0')) -->
                    <xsl:variable name="notDefaultFieldValue6"
                                  select="not( local-name(..)='SpotLight'	and
                                  ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                                  (local-name()='beamWidth' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854'))) or
                                  (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                  (local-name()='cutOffAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
                                  (local-name()='direction' and (string(.)='0 0 -1' or string(.)='0.0 0.0 -1.0')) or
                                  (local-name()='global' and string(.)='true') or
                                  (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='on' and string(.)='true') or
                                  (local-name()='radius' and (string(.)='100' or string(.)='100.0')))) and
                                  not( local-name(..)='Text'   and ((local-name()='maxExtent' and (string(.)='0' or string(.)='0.0')) or (local-name()='solid' and (string(.)='false')))) and
                                  not( local-name(..)='TextureTransform' and
                                  ((local-name()='center' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                                  (local-name()='rotation' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='scale' and (string(.)='1 1' or string(.)='1.0 1.0')) or
                                  (local-name()='translation' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
                                  not( local-name(..)='TextureTransform3D' and
                                  ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                  (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                  (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not( local-name(..)='TextureTransformMatrix3D' and
                                  ((local-name()='matrix' and (string(.)='1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1' or string(.)='1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0'))))" />
                    <xsl:variable name="notDefaultFieldValue7"
                                  select="not( local-name(..)='TimeSensor' and
                                  ((local-name()='cycleInterval' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='enabled' and string(.)='true') or
                                  (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='loop' and string(.)='false'))) and
                                  not( contains(local-name(..),'TouchSensor') and
                                  local-name()='enabled' and string(.)='true') and
                                  not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
                                  ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                  (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                  (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                  (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not( local-name(..)='Viewpoint' and
                                  (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854')))) and
                                  not( local-name(..)='OrthoViewpoint' and
                                  (local-name()='fieldOfView' and ((string(.)='-1 -1 1 1') or (string(.)='-1.0 -1.0 1.0 1.0')))) and
                                  not( contains(local-name(..),'Viewpoint') and
                                  ((local-name()='centerOfRotation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854'))) or
                                  (local-name()='jump' and string(.)='true') or
                                  (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                  (local-name()='retainUserOffsets' and (string(.)='false')) or
                                  (local-name()='position' and (string(.)='0 0 10' or string(.)='0.0 0.0 10.0')))) and
                                  not( local-name(..)='VisibilitySensor' and
                                  ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='enabled' and string(.)='true') or
                                  (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='enterTime' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='exitTime'  and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='isActive' and string(.)='false')))" />
                    <xsl:variable name="notDefaultFieldValue8"
                                  select="not( local-name(..)='FillProperties' and
                                  (((local-name()='filled' and string(.)='true') or
                                  (local-name()='hatched' and string(.)='true') or
                                  local-name()='hatchStyle' and (string(.)='1' or string(.)='1.0')) or
                                  (local-name()='hatchColor' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')))) and
                                  not( local-name(..)='LineProperties' and
                                  ((local-name()='applied' and string(.)='true') or
                                  (local-name()='linetype' and (string(.)='1')) or
                                  (local-name()='linewidthScaleFactor' and (string(.)='0' or string(.)='0.0')))) and
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
                                  not( local-name(..)='TextureCoordinateGenerator' and
                                  ((local-name()='mode' and string(.)='SPHERE'))) and
                                  not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                                  ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and string(.)='false')) and
                                  not( local-name(..)='PixelTexture3D' and
                                  (local-name()='image' and (string(.)='0 0 0 0'))) and
                                  not( local-name(..)='IntegerTrigger' and
                                  ((local-name()='integerKey' and string(.)='-1'))) and
                                  not( local-name(..)='LayerSet' and
                                  ((local-name()='activeLayer' and string(.)='0') or
                                   (local-name()='order' and string(.)='0'))) and
                                  not(contains(local-name(..),'PickSensor') and
                                  ((local-name()='enabled' and string(.)='true') or
                                   (local-name()='intersectionType' and string(.)='BOUNDS') or
                                   (local-name()='matchCriterion' and string(.)='MATCH_ANY') or
                                   (local-name()='objectType' and string(.)='&quot;ALL&quot;') or
                                   (local-name()='sortOrder' and string(.)='CLOSEST'))) and
                                  not( local-name(..)='ParticleSystem' and
                                  ((local-name()='createParticles' and string(.)='true') or
                                   (local-name()='enabled' and string(.)='true') or
                                   (local-name()='geometryType' and string(.)='QUAD') or
                                   (local-name()='lifetimeVariation' and string(.)='0.25') or
                                   (local-name()='maxParticles' and string(.)='200') or
                                   (local-name()='particleLifetime' and string(.)='5') or
                                   (local-name()='particleSize' and string(.)='0.02 0.02'))) and
                                  not( local-name(..)='PickableGroup' and
                                  ((local-name()='objectType' and string(.)='&quot;ALL&quot;') or
                                   (local-name()='pickable' and string(.)='true'))) and
                                  not(local-name(..)='StringSensor' and
                                  ((local-name()='deletionAllowed' or local-name()='enabled') and (string(.)='true'))) and
                                  not( local-name(..)='TransformSensor' and
                                  ((local-name()='enabled' and string(.)='true') or
                                   (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not( local-name(..)='GeneratedCubeMapTexture' and
                                  ((local-name()='update' and string(.)='NONE') or
                                   (local-name()='size' and string(.)='128'))) and
                                  not(local-name(..)='MovieTexture' and
                                  ((local-name()='pitch' or local-name()='1') and (string(.)='1.0'))) and
                                  not(contains(local-name(..),'Emitter') and
                                  ((local-name()='angle' and string(.)='0.7854') or
                                   (local-name()='direction' and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                                   (local-name()='mass' and (string(.)='0' or string(.)='0.0')) or
                                   (local-name()='position' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='speed' and (string(.)='0' or string(.)='0.0')) or
                                   (local-name()='surfaceArea' and (string(.)='0' or string(.)='0.0')) or
                                   (local-name()='variation' and string(.)='0.25') or
                                   (local-name()='internal' and string(.)='true') or
                                   (local-name()='coordIndex' or local-name()='-1'))) and
                                  not(local-name(..)='Contact' and
                                  ((local-name()='minBounceSpeed' and (string(.)='0' or string(.)='0.0')))) and
                                  not(contains(local-name(..),'Layer') and
                                  ((local-name()='isPickable' and string(.)='true'))) and
                                  not(contains(local-name(..),'Layout') and
                                  ((local-name()='offset' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                                   (local-name()='size'   and (string(.)='1 1' or string(.)='1.0 1.0')) or
                                   (local-name()='align' and string(.)='&quot;CENTER&quot; &quot;CENTER&quot;') or
                                   (local-name()='offsetUnits' and string(.)='&quot;WORLD&quot; &quot;WORLD&quot;') or
                                   (local-name()='scaleMode' and string(.)='&quot;NONE&quot; &quot;NONE&quot;') or
                                   (local-name()='sizeUnits' and string(.)='&quot;WORLD&quot; &quot;WORLD&quot;'))) and
                                  not( local-name(..)='TextureProperties' and
                                  ((local-name()='anisotropicDegree' and (string(.)='1' or string(.)='1.0')) or
                                   (local-name()='borderColor' and (string(.)='0 0 0 0' or string(.)='0.0 0.0 0.0 0.0')) or
                                   (local-name()='borderWidth' and (string(.)='0' or string(.)='0.0')) or
                                   (starts-with(local-name(),'boundaryMode') and string(.)='REPEAT') or
                                   (local-name()='generateMipMaps' and string(.)='false') or
                                   (local-name()='magnificationFilter' and string(.)='FASTEST') or
                                   (local-name()='minificationFilter'  and string(.)='FASTEST') or
                                   (local-name()='textureCompression'  and string(.)='FASTEST') or
                                   (local-name()='texturePriority' and (string(.)='0' or string(.)='0.0')))) and
                                  not(local-name(..)='Viewport' and
                                  ((local-name()='clipBoundary' and (string(.)='0 1 0 1' or string(.)='0.0 1.0 0.0 1.0')))) and
                                  not( local-name(..)='KeySensor' and
                                  ((local-name()='enabled' and string(.)='true')))" />
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
                                  local-name(..)='Transform' or
                                  local-name(..)='Viewpoint' or
                                  local-name(..)='WorldInfo' or
                                  local-name(..)='ProtoInstance')) and
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
                                  not((local-name()='containerField' and string(.)='color')	and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                                  not((local-name()='containerField' and string(.)='coord')	and (local-name(..)='Coordinate')) and
                                  not((local-name()='containerField' and string(.)='normal')	and (local-name(..)='Normal')) and
                                  not((local-name()='containerField' and string(.)='texture')	and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
                                  not((local-name()='containerField' and string(.)='fontStyle')	and (local-name(..)='FontStyle')) and
                                  not((local-name()='containerField' and string(.)='texCoord')	and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
                                  not((local-name()='containerField' and string(.)='textureTransform')	and (local-name(..)='TextureTransform'))" />
                    <xsl:variable name="notDefaultContainerField3"
                                  select="not((local-name()='containerField' and string(.)='geometry')	and
                                  ((local-name(..)='Arc2D') or (local-name(..)='ArcClose2D') or (local-name(..)='Circle2D') or (local-name(..)='Disk2D') or (local-name(..)='Polyline2D') or (local-name(..)='Polypoint2D') or (local-name(..)='Rectangle2D') or (local-name(..)='TriangleSet2D') or contains(local-name(..),'QuadSet'))) and
                                  not((local-name()='containerField' and string(.)='voxels')	and
                                  ((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))) and
                                  not((local-name()='containerField' and string(.)='renderStyle')	and
                                  ((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')))" />
                    <xsl:variable name="notDefaultCAD"
                                  select="not((local-name(..)='CADAssembly' or local-name(..)='CADFace' or local-name(..)='CADLayer') and
                                  ((local-name()='containerField' and (string(.)='children')) or
                                   (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                                  not(local-name(..)='CADPart' and
                                  ((local-name()='containerField' and (string(.)='children')) or
                                   (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                                   (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                   (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
                    <xsl:variable name="notDefaultDIS1"
                                  select="not((local-name(..)='EspduTransform' or contains(local-name(..),'Pdu')) and
                                  ((starts-with(local-name(),'is')) or
                                  (local-name()='address' and (string(.)='localhost')) or
                                  (local-name()='enabled' and (string(.)='true')) or
                                  (local-name()='networkMode' and (string(.)='standAlone')) or
                                  (local-name()='rtpHeaderExpected' and (string(.)='false')) or
                                  (local-name()='readInterval'  and (string(.)='.1' or string(.)='0.1')) or
                                  (local-name()='writeInterval'  and (string(.)='1' or string(.)='1.0')) or
                                  (((local-name()='applicationID') or (local-name()='munitionApplicationID') or (local-name()='whichGeometry')) and (string(.)='1')) or
                                  ((contains(local-name(),'ntityID') or contains(local-name(),'iteID') or (local-name()='applicationID')) and (string(.)='0')) or
                                  ((local-name()='port' or local-name()='multicastRelayPort' or local-name()='fireMissionIndex') and (string(.)='0'))))" />
                    <!-- ='' ='1' '' geoCoords='0 0 0' geoSystem='"GD" "WE"' '1' munitionSiteID='0' ='' '0' '0' -->
                    <xsl:variable name="notDefaultDIS2"
                                  select="not(local-name(..)='EspduTransform' and
                                  ((((local-name()='collisionType') or (local-name()='detonationResult')) and (string(.)='0')) or
                                  (((local-name()='detonationLocation') or (local-name()='detonationRelativeLocation'))  and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='eventApplicationID'  and (string(.)='1')) or
                                  (((local-name()='eventEntityID') or (local-name()='eventNumber') or (local-name()='eventSiteID'))  and (string(.)='0')) or
                                  ((local-name()='fired1' or local-name()='fired2') and (string(.)='false')) or
                                  (local-name()='deadReckoning'  and (string(.)='0')) or
                                  ((local-name()='articulationParameterCount' or local-name()='entityCategory' or local-name()='entitySubcategory' or local-name()='entityCountry' or local-name()='entityDomain' or local-name()='entityExtra' or local-name()='entityKind' or local-name()='entitySpecific' or local-name()='eventApplicationID' or local-name()='firingRange' or local-name()='firingRate' or local-name()='fuse' or local-name()='warhead' or local-name()='forceID' or local-name()='munitionQuantity' or local-name()='munitionApplicationID') and (string(.)='0')) or
                                  ((local-name()='linearVelocity' or local-name()='linearAcceleration' or local-name()='munitionStartPoint' or local-name()='munitionEndPoint') and (string(.)='0 0 0'))))" />
                    <xsl:variable name="notDefaultDIS3"
                                  select="not(local-name(..)='ReceiverPdu' and
                                  (((local-name()='radioID' or local-name()='receiverState' or starts-with(local-name(),'transmitter')) and (string(.)='0')) or
                                  (local-name()='receiverPower'  and (string(.)='0' or string(.)='0.0')))) and
                                  not(local-name(..)='SignalPdu' and
                                  (((local-name()='radioID' or local-name()='encodingScheme' or local-name()='tdlType' or local-name()='sampleRate' or local-name()='samples' or local-name()='dataLength') and (string(.)='0')))) and
                                  not(local-name(..)='TransmitterPdu' and
                                  (((local-name()='radioID' or starts-with(local-name(),'antennaPattern') or starts-with(local-name(),'crypto') or local-name()='frequency' or local-name()='inputSource' or local-name()='lengthOfModulationParameters' or starts-with(local-name(),'modulationType') or starts-with(local-name(),'radioEntityType') or local-name()='transmitFrequencyBandwidth' or local-name()='transmitState') and (string(.)='0')) or
                                  (local-name()='power'  and (string(.)='0' or string(.)='0.0')) or
                                  ((contains(local-name(),'antennaLocation') and (string(.)='0 0 0')))))" />
                    <xsl:variable name="notDefaultDIS4"
                                  select="not(local-name(..)='DISEntityManager' and
                                  (((local-name()='applicationID') and (string(.)='0')) or
                                  (local-name()='address' and (string(.)='localhost')) or
                                  ((local-name()='port' or local-name()='siteID') and (string(.)='0')))) and
                                  not(local-name(..)='DISEntityTypeMapping' and 
                                  ((local-name()='containerField') and (string(.)='mapping')) or
                                  ((local-name()='category' or local-name()='country' or local-name()='domain' or local-name()='extra' or local-name()='kind' or local-name()='specific' or local-name()='subcategory') and (string(.)='0')))" />
                    <xsl:variable name="notDefaultGeo"
                                  select="not((starts-with(local-name(..),'Geo') or (local-name(..)='EspduTransform') or contains(local-name(..),'Pdu')) and 
                                  ((local-name()='geoCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='geoCoords' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                                  not(local-name(..)='GeoLOD' 	  and 
                                  ((local-name()='range' and (string(.)='10' or string(.)='10.0')) or
                                   (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not(local-name(..)='GeoViewpoint' and
                                  ((local-name()='speedFactor' and (string(.)='1' or string(.)='1.0')) or
                                    (local-name()='headlight' and (string(.)='true')) or
                                    (local-name()='jump' and (string(.)='true')) or
                                    (local-name()='navType' and (string(.)='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
                                    (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                    (local-name()='position' and (string(.)='0 0 100000' or string(.)='0.0 0.0 100000.0')) or
                                    (local-name()='fieldOfView' and (string(.)='0.785398' or string(.)='.785398' or string(.)='0.7854' or string(.)='.7854')) or
                                    (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                                  not((local-name(..)='GeoCoordinate' or local-name(..)='GeoOrigin') and
                                  ((local-name()='rotateYUp' and (string(.)='false')) or
                                  (local-name()='containerField' and (string(.)='geoOrigin')) or
                                  (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;'))))" />
                    <xsl:variable name="notDefaultHAnim1"
                                  select="not( local-name(..)='HAnimJoint' and
                                  ((local-name()='containerField' and (string(.)='children')) or
                                   (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='limitOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                   (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='stiffness' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                   (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not( local-name(..)='HAnimSegment' and
                                  ((local-name()='containerField' and (string(.)='children')) or
                                   (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                                   (local-name()='centerOfMass' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='mass' and (string(.)='0' or string(.)='0.0')) or
                                   (local-name()='momentsOfInertia' and
                                    (string(.)='0 0 0 0 0 0 0 0 0' or string(.)='0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0')))) and
                                  not( local-name(..)='HAnimSite' and
                                  ((local-name()='containerField' and (string(.)='children')) or
                                   (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                   (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
                    <xsl:variable name="notDefaultHAnim2"
                                  select="not( local-name(..)='HAnimHumanoid' and
                                  ((local-name()='containerField' and (string(.)='children')) or
                                   (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                                   (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                   (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                                   (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                                   (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not( local-name(..)='HAnimDisplacer' and
                                  ((local-name()='containerField' and (string(.)='children')) or
                                   (local-name()='weight' and (string(.)='0' or string(.)='0.0'))))" />
                    <xsl:variable name="notDefaultNurbs"
                                  select="not((local-name(..)='NurbsCurve' or local-name(..)='NurbsCurve2D') and
                                  ((local-name()='tessellation' and (string(.)='0')) or
                                  (local-name()='closed' and (string(.)='false')) or
                                  (local-name()='order' and (string(.)='3')))) and
                                  not(local-name(..)='NurbsSet' and
                                  ((local-name()='tessellationScale' and (string(.)='1' or string(.)='1.0')) or 
                                  (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                                  not((local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator') and
                                  ((local-name()='order' and (string(.)='3' or string(.)='3.0')))) and
                                  not((local-name(..)='NurbsSurface' or local-name(..)='NurbsPatchSurface' or local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsTextureSurface' or local-name(..)='NurbsTrimmedSurface') and
                                  ((local-name()='uTessellation' and (string(.)='0')) or
                                  (local-name()='vTessellation' and (string(.)='0')) or
                                  (local-name()='uDimension' and (string(.)='0')) or
                                  (local-name()='vDimension' and (string(.)='0')) or
                                  (local-name()='uOrder' and (string(.)='3')) or
                                  (local-name()='vOrder' and (string(.)='3')) or
                                  (local-name()='ccw' and (string(.)='true')) or
                                  (local-name()='solid' and (string(.)='true')) or
                                  ((local-name()='uClosed' or local-name()='vClosed') and (string(.)='false')))) and
                                  not((local-name(..)='NurbsSurfaceInterpolator' or local-name(..)='NurbsTextureCoordinate') and
                                  ((local-name()='uDimension' and (string(.)='0')) or
                                  (local-name()='vDimension' and (string(.)='0')) or
                                  (local-name()='uOrder' and (string(.)='3')) or
                                  (local-name()='vOrder' and (string(.)='3')))) and
                                  not((local-name(..)='NurbsCurve' or local-name(..)='NurbsSwungSurface') and
                                  ((local-name()='ccw' or local-name()='solid') and (string(.)='true'))) and
                                  not((contains(local-name(..),'SplinePositionInterpolator') or local-name(..)='SplineScalarInterpolator' or local-name(..)='SquadOrientationInterpolator') and
                                  ((local-name()='closed' or local-name()='normalizeVelocity') and (string(.)='false')))" />
                    <xsl:variable name="notDefaultGeometry2D"
                                  select="not((local-name(..)='Arc2D' or local-name(..)='ArcClose2D') and
                                  ((local-name()='startAngle' and (string(.)='0' or string(.)='0.0')) or
                                   (local-name()='endAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
                                   (local-name()='radius' and (string(.)='1' or string(.)='1.0')) or
                                   (local-name()='solid' and (string(.)='false')))) and
                                  not(local-name(..)='Circle2D' and
                                  ((local-name()='radius' and (string(.)='1' or string(.)='1.0')))) and
                                  not(local-name(..)='Disk2D' and
                                  ((local-name()='innerRadius' and (string(.)='0' or string(.)='0.0')) or
                                   (local-name()='outerRadius' and (string(.)='1' or string(.)='1.0')) or
                                   (local-name()='solid' and (string(.)='false')))) and
                                  not((local-name(..)='Rectangle2D') and
                                  ((local-name()='size' and ((string(.)='2 2') or (string(.)='2.0 2.0'))) or
                                   (local-name()='solid' and (string(.)='false')))) and
                                  not((local-name(..)='TriangleSet2D') and
                                  ((local-name()='solid' and (string(.)='false')) or
                                   (local-name()='closureType' and (string(.)='PIE'))))" />
                    <xsl:variable name="notDefaultVolume"
                                  select="not(((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))	and
                                  ((local-name()='dimensions' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or 
                                  (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                                  not((local-name(..)='IsoSurfaceVolumeData')	and
                                  ((local-name()='contourStepSize' or local-name()='surfaceTolerance') and (string(.)='0' or string(.)='0.0'))) and
                                  not(((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')) and
                                  (local-name()='enabled' and string(.)='true')) and
                                  not((local-name(..)='BlendedVolumeStyle')	and
                                  (((local-name()='weightConstant1' or local-name()='weightConstant2') and (string(.)='.5' or string(.)='0.5')) or
                                   ((local-name()='weightFunction1' or local-name()='weightFunction2') and (string(.)='CONSTANT')))) and
                                  not((local-name(..)='BoundaryEnhancementVolumeStyle')	and
                                  (((local-name()='boundaryOpacity') and (string(.)='.9' or string(.)='0.9')) or
                                   ((local-name()='opacityFactor') and (string(.)='2' or string(.)='2.0')) or
                                   ((local-name()='retainedOpacity') and (string(.)='.2' or string(.)='0.2')))) and
                                  not((local-name(..)='CartoonVolumeStyle')	and
                                  (((local-name()='colorSteps') and (string(.)='4')) or
                                   ((local-name()='orthogonalColor') and (string(.)='1 1 1 1' or string(.)='1.0 1.0 1.0 1.0')) or
                                   ((local-name()='parallelColor') and (string(.)='0 0 0 1' or string(.)='0.0 0.0 0.0 1.0')))) and
                                  not((local-name(..)='EdgeEnhancementVolumeStyle')	and
                                  (((local-name()='gradientThreshold') and (string(.)='.4' or string(.)='0.4')) or
                                   ((local-name()='edgeColor') and (string(.)='0 0 0 1' or string(.)='0.0 0.0 0.0 1.0')))) and
                                  not((local-name(..)='IsoSurfaceVolumeData')	and
                                  (((local-name()='surfaceTolerance') and (string(.)='0' or string(.)='0.0')))) and
                                  not((local-name(..)='ProjectionVolumeStyle')	and
                                  (((local-name()='intensityThreshold') and (string(.)='0' or string(.)='0.0')) or
                                   ((local-name()='type') and (string(.)='MAX')))) and
                                  not((local-name(..)='ShadedVolumeStyle')	and
                                  (((local-name()='lighting' or local-name()='shadows') and (string(.)='false')) or
                                   ((local-name()='phaseFunction') and (string(.)='Henyey-Greenstein')))) and
                                  not((local-name(..)='SilhouetteEnhancementVolumeStyle')	and
                                  (((local-name()='silhouetteBoundaryOpacity') and (string(.)='0' or string(.)='0.0')) or
                                   ((local-name()='silhouetteRetainedOpacity') and (string(.)='1' or string(.)='1.0')) or
                                   ((local-name()='silhouetteSharpness') and (string(.)='.5' or string(.)='0.5')))) and
                                  not((local-name(..)='ToneMappedVolumeStyle')	and
                                  (((local-name()='colorSteps') and (string(.)='4')) or
                                   ((local-name()='coolColor') and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')) or
                                   ((local-name()='warmColor') and (string(.)='1 1 0 0' or string(.)='1.0 1.0 0.0 0.0'))))" />
                    <xsl:variable name="notDefaultFollower"
                                  select="not(contains(local-name(..),'Chaser') and
                                  ((local-name()='duration' and (string(.)='1' or string(.)='1.0')))) and
                                  not(contains(local-name(..),'Damper') and
                                  ((local-name()='tau' and (string(.)='.3' or string(.)='0.3')) or
                                  (local-name()='tolerance' and (string(.)='-1' or string(.)='-1.0')) or
                                  (local-name()='order ' and (string(.)='3')))) and
                                  not(contains(local-name(..),'Damper') and
                                  (local-name()='order' and (string(.)='3'))) and
                                  not((local-name(..)='ColorChaser' or local-name(..)='ColorDamper') and
                                  ((local-name()='initialDestination' and (string(.)='.8 .8 .8' or string(.)='0.8 0.8 0.8')) or
                                  (local-name()='initialValue' and (string(.)='.8 .8 .8' or string(.)='0.8 0.8 0.8')))) and
                                  not((local-name(..)='CoordinateChaser' or local-name(..)='CoordinateDamper' or local-name(..)='PositionChaser' or local-name(..)='PositionDamper') and
                                  ((local-name()='initialDestination' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='initialValue' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                                  not((local-name(..)='PositionChaser2D' or local-name(..)='PositionDamper2D') and
                                  ((local-name()='initialDestination' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                                  (local-name()='initialValue' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
                                  not((local-name(..)='OrientationChaser' or local-name(..)='OrientationDamper') and
                                  ((local-name()='initialDestination' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')) or
                                  (local-name()='initialValue' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')))) and
                                  not((local-name(..)='ScalarChaser' or local-name(..)='ScalarDamper') and
                                  ((local-name()='initialDestination' and (string(.)='0' or string(.)='0.0')) or
                                  (local-name()='initialValue' and (string(.)='0' or string(.)='0.0'))))" />
                    <xsl:variable name="notDefaultShader"
                                  select="not((local-name(..)='FloatVertexAttribute') and
                                  ((local-name()='numComponents' and (string(.)='4')))) and
                                  not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and
                                  ((local-name()='type' and (string(.)='VERTEX'))))" />
                    <xsl:variable name="notDefaultRigidBodyPhysics"
                                  select="not((local-name(..)='CollidableOffset' or local-name(..)='CollidableShape') and
                                  (((local-name()='enabled') and (string(.)='true')) or
                                  ((local-name()='rotation') and (string(.)='0 0 1 0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0.0 0.0 1.0 0.0')) or
                                  ((local-name()='translation') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='bboxCenter')	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='bboxSize')	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                                  not((local-name(..)='CollisionSpace') and
                                  ((local-name()='enabled' and (string(.)='true')) or
                                  (local-name()='useGeometry' and (string(.)='false')) or
                                  (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  (local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                                  not((local-name(..)='BallJoint' or local-name(..)='DoubleAxisHingeJoint' or local-name(..)='MotorJoint' or local-name(..)='SingleAxisHingeJoint' or local-name(..)='SliderJoint' or local-name(..)='UniversalJoint') and
                                  ((local-name()='forceOutput')	and	(string(.)='&quot;NONE&quot;'))) and
                                  not((local-name(..)='BallJoint') and
                                  ((local-name()='anchorPoint')	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))) and
                                  not((local-name(..)='BoundedPhysicsModel') and
                                  ((local-name()='enabled')	and	(string(.)='true'))) and
                                  not((local-name(..)='ForcePhysicsModel') and
                                  ((local-name()='enabled')	and	(string(.)='true')) or
                                  (local-name()='force'	and	(string(.)='0 -9.8 0' or string(.)='0.0 -9.8 0.0'))) and
                                  not((local-name(..)='WindPhysicsModel') and
                                  ((local-name()='enabled')	and	(string(.)='true')) or
                                  (local-name()='gustiness'	and	(string(.)='0.1')) or
                                  (local-name()='speed'	and	(string(.)='0.1')) or
                                  (local-name()='turbulence'	and	(string(.)='0' or string(.)='0.0')) or
                                  (local-name()='direction'	and	(string(.)='1 0 0' or string(.)='1.0 0.0 0.0'))) and
                                  not((local-name(..)='CollisionCollection') and
                                  (((local-name()='appliedParameters') and (string(.)='&quot;BOUNCE&quot;')) or
                                  ((local-name()='bounce') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='enabled') and (string(.)='true')) or
                                  ((local-name()='frictionCoefficients' or local-name()='slipFactors' or local-name()='surfaceSpeed') and (string(.)='0 0' or string(.)='0.0 0.0')) or
                                  ((local-name()='minBounceSpeed') and (string(.)='.1' or string(.)='0.1')) or
                                  ((local-name()='softnessConstantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                                  ((local-name()='softnessErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                                  not((local-name(..)='CollisionSensor') and
                                  (local-name()='enabled' and string(.)='true')) and
                                  not((local-name(..)='Contact') and
                                  (((local-name()='appliedParameters') and (string(.)='&quot;BOUNCE&quot;')) or
                                  ((local-name()='bounce' or local-name()='depth' or local-name()='minbounceSpeed') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='contactNormal') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                                  ((local-name()='frictionCoefficients' or local-name()='slipCoefficients' or local-name()='surfaceSpeed') and (string(.)='0 0' or string(.)='0.0 0.0')) or
                                  ((local-name()='frictionDirection') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                                  ((local-name()='position') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='softnessConstantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                                  ((local-name()='softnessErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                                  not((local-name(..)='DoubleAxisHingeJoint') and
                                  (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='desiredAngularVelocity1' or local-name()='desiredAngularVelocity2' or local-name()='maxTorque1' or local-name()='maxTorque2' or local-name()='stop1Bounce' or local-name()='suspensionForce') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='maxAngle1') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                                  ((local-name()='minAngle1') and (string(.)='-3.1416' or string(.)='-3.14159' or string(.)='-3.141593' or string(.)='-3.1415926' or string(.)='-3.14159263' or string(.)='-3.141592653')) or
                                  ((local-name()='stop1Bounce') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='stop1ConstantForceMix') and (string(.)='.001' or string(.)='0.001')) or
                                  ((local-name()='stop1ErrorCorrection' or local-name()='suspensionErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                                  not((local-name(..)='MotorJoint') and
                                  (((local-name()='axis1Angle' or local-name()='axis2Angle' or local-name()='axis3Angle' or local-name()='axis1Torque' or local-name()='axis2Torque' or local-name()='axis3Torque' or local-name()='stop1Bounce' or local-name()='stop2Bounce' or local-name()='stop3Bounce') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection' or local-name()='stop3ErrorCorrection') and (string(.)='.8' or string(.)='0.8')) or
                                  ((local-name()='motor1Axis' or local-name()='motor2Axis' or local-name()='motor3Axis') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='enabledAxes') and (string(.)='1')) or
                                  ((local-name()='autoCalc') and (string(.)='false')))) and
                                  not((local-name(..)='RigidBody') and
                                  (((local-name()='angularDampingFactor') and (string(.)='.001' or string(.)='0.001')) or
                                  ((local-name()='angularVelocity' or local-name()='centerOfMass' or local-name()='finiteRotationAxis' or local-name()='linearVelocity' or local-name()='position') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='finiteRotationAxis') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                                  ((local-name()='mass') and (string(.)='1' or string(.)='1.0')) or
                                  ((local-name()='enabled' or local-name()='useGlobalGravity') and (string(.)='true')) or
                                  ((local-name()='autoDamp' or local-name()='autoDisable' or local-name()='fixed' or local-name()='useFiniteRotation') and (string(.)='false')) or
                                  ((local-name()='inertia') and (string(.)='1 0 0 0 1 0 0 0 1' or string(.)='1.0 0 0 0 1.0 0 0 0 1.0' or string(.)='1.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 1.0')) or
                                  ((local-name()='linearDampingFactor') and (string(.)='.001' or string(.)='0.001')) or
                                  ((local-name()='orientation') and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')))) and
                                  not((local-name(..)='RigidBodyCollection') and
                                  (((local-name()='autoDisable' or local-name()='preferAccuracy') and (string(.)='false')) or
                                  ((local-name()='enabled') and (string(.)='true')) or
                                  ((local-name()='constantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                                  ((local-name()='contactSurfaceThickness' or local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='errorCorrection') and (string(.)='.8' or string(.)='0.8')) or
                                  ((local-name()='gravity') and (string(.)='0 -9.8 0' or string(.)='0.0 -9.8 0.0')) or
                                  ((local-name()='iterations') and (string(.)='10')) or
                                  ((local-name()='maxCorrectionSpeed') and (string(.)='-1' or string(.)='-1.0')))) and
                                  not((local-name(..)='SingleAxisHingeJoint') and
                                  (((local-name()='anchorPoint' or local-name()='axis') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='maxAngle') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                                  ((local-name()='minAngle') and (string(.)='-3.1416' or string(.)='-3.14159' or string(.)='-3.141593' or string(.)='-3.1415926' or string(.)='-3.14159263' or string(.)='-3.141592653')) or
                                  ((local-name()='stopBounce') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='stopErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                                  not((local-name(..)='SliderJoint') and
                                  (((local-name()='axis') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                                  ((local-name()='maxSeparation' or local-name()='stopErrorCorrection') and (string(.)='1' or string(.)='1.0')) or
                                  ((local-name()='minSeparation' or local-name()='sliderForce' or local-name()='stopBounce') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='stopErrorCorrection') and (string(.)='1' or string(.)='1.0')))) and
                                  not((local-name(..)='UniversalJoint') and
                                  (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                                  ((local-name()='stop1Bounce' or local-name()='stop2Bounce') and (string(.)='0' or string(.)='0.0')) or
                                  ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection') and (string(.)='.8' or string(.)='0.8'))))" />
                    <xsl:variable name="notFieldSpace"
                                  select="not(local-name(..)='field'  and	(local-name()='space' or local-name()='xml:space')) and
                                  not(local-name(..)='Script' and	(local-name()='space' or local-name()='xml:space'))" />
                    <!-- provide attribute output only if it is not a default value, or if scene has a digital signature -->
                    <!-- note that if digital signature is present, all attributes are included (including default values) and
                                   order of attributes may change, but that should be OK according to Post Schema Validation Infoset (PSVI) -->
                    <xsl:if test="
                            (count(//ds:Signature) > 0) or
                            (
                            $notImplicitEvent1 and
                            $notImplicitEvent2 and
                            $notImplicitEvent3 and
                            $notDefaultFieldValue1 and
                            $notDefaultFieldValue1a and
                            $notDefaultFieldValue2 and
                            $notDefaultFieldValue3 and
                            $notDefaultFieldValue4 and
                            $notDefaultFieldValue5 and
                            $notDefaultFieldValue6 and
                            $notDefaultFieldValue7 and
                            $notDefaultFieldValue8 and
                            $notDefaultFieldValue9 and
                            $notDefaultCAD         and
                            $notDefaultDIS1        and
                            $notDefaultDIS2        and
                            $notDefaultDIS3        and
                            $notDefaultDIS4        and
                            $notDefaultGeo         and
                            $notDefaultHAnim1      and
                            $notDefaultHAnim2      and
                            $notDefaultNurbs       and
                            $notDefaultGeometry2D  and
                            $notDefaultVolume      and
                            $notDefaultFollower    and
                            $notDefaultShader      and
                            $notDefaultRigidBodyPhysics and
                            $notDefaultContainerField1  and
                            $notDefaultContainerField2  and
                            $notDefaultContainerField3  and
                            not(local-name()='containerField' and string(.)='') and
                            not(local-name()='class' and string(.)='') and
                            $notFieldSpace and
                            not(contains(local-name(),'set_')) and
                            not(contains(local-name(),'_changed')) and
                            .)" >

                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  x3do:</xsl:text><xsl:value-of select="local-name()"/>
                        <xsl:text> </xsl:text><!-- tab &#09; -->

                        <!-- figure out precise X3D type of attribute so that numeric values might appear here -->
                        <xsl:variable name="attributeType">
                            <xsl:call-template name="attribute-type"/>
                        </xsl:variable>
                        <xsl:variable name='containsApostrophe' select='contains(.,"&apos;")'/>
                        <xsl:variable name='containsQuote'      select="contains(.,'&quot;')"/>
                        <!-- debug
                        <xsl:if test="(local-name(..) = 'meta')">
                            <xsl:message>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text> $attributeType=</xsl:text>
                                <xsl:value-of select="$attributeType"/>
                                <xsl:text> $containsApostrophe=</xsl:text>
                                <xsl:value-of select="$containsApostrophe"/>
                                <xsl:text> $containsQuote=</xsl:text>
                                <xsl:value-of select="$containsQuote"/>
                            </xsl:message>
                        </xsl:if> -->
                        <xsl:choose>
                            <xsl:when test="$containsApostrophe">
                                <!-- escape apostrophes -->
                                <xsl:variable name='escapedAttributeValue'>
                                    <xsl:choose>
                                        <xsl:when test="$containsQuote">
                                            <xsl:message>
                                                <xsl:text>*** Warning: mixed quotes and apostrophes in a single attribute value </xsl:text>
                                                <xsl:value-of select="."/>
                                            </xsl:message>
                                            <xsl:call-template name="escape-apostrophe-characters"> <!-- tail recursion -->
                                                <!-- do not remove whitespace commas since this is likely an MFString array , too hard to disambiguate -->
                                                <xsl:with-param name="inputString" select='.'/>
                                            </xsl:call-template>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:call-template name="escape-apostrophe-characters"> <!-- tail recursion -->
                                                <!-- do not remove whitespace commas since this is likely an SFString value and they are literals -->
                                                <xsl:with-param name="inputString" select='.'/>
                                            </xsl:call-template>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:variable>
                                <xsl:text>'</xsl:text>
                                <xsl:value-of select="$escapedAttributeValue"/>
                                <xsl:text>'</xsl:text>
                            </xsl:when>
                            <xsl:when test="starts-with(normalize-space(.),'&quot;') and ends-with(normalize-space(.),'&quot;')">
                                <!-- type MFString with quoted SFString values, or possibly SFString -->
                                <xsl:text>'</xsl:text>
                                <!-- do not remove whitespace or commas so that string values are unaffected -->
                                <xsl:value-of select="."/>
                                <xsl:text>'</xsl:text>
                            </xsl:when>
                            <xsl:when test="($attributeType = 'SFString') or ($attributeType = 'MFString')">
                                <xsl:text>'</xsl:text>
                                <!-- do not remove whitespace or commas so that string values are unaffected -->
                                <xsl:value-of select="."/>
                                <xsl:text>'</xsl:text>
                            </xsl:when>
                            <xsl:when test="starts-with($attributeType,'SF') and (contains($attributeType,'Bool') or contains($attributeType,'Int32') or contains($attributeType,'Float') or contains($attributeType,'Double'))">
                                <!-- boolean or simple numeric value stands alone, remove whitespace -->
                                <!-- ARQ parsing-problem cleanups: omit trailing decimal point if followed by whitespace '. ' 
                                     and insert 0 if negative fraction encountered, e.g. -.123 to -0.123
                                     https://www.web3d.org/specifications/X3dRegularExpressions.html#ErrorCorrection -->
                                <xsl:value-of select="replace(normalize-space(replace(concat(replace(., ',', ' '),' '),'([.][ ])', ' ')),'([-][.])', '-0.')"/>
                            </xsl:when>
                            <!-- note SFImage/MFImage and others not included included as numeric if they have hexadecimal values -->
                            <xsl:when test="(contains($attributeType,'Bool')  or contains($attributeType,'Int32')    or contains($attributeType,'Float')  or contains($attributeType,'Double') or contains($attributeType,'Vec') or
                                             contains($attributeType,'Color') or contains($attributeType,'Rotation') or contains($attributeType,'Matrix')) and
                                            not(contains(., '0x'))">
                                <!-- lists of boolean or numeric values are surrounded by parenthesis, remove whitespace -->
                                <xsl:text>( </xsl:text>
                                <!-- ARQ parsing-problem cleanups: omit trailing decimal point if followed by whitespace '. ' 
                                     and insert 0 if negative fraction encountered, e.g. -.123 to -0.123
                                     https://www.web3d.org/specifications/X3dRegularExpressions.html#ErrorCorrection -->
                                <xsl:value-of select="replace(normalize-space(replace(concat(replace(., ',', ' '),' '),'([.][ ])', ' ')),'([-][.])', '-0.')"/>
                                <xsl:text> )</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>'</xsl:text>
                                <!-- replace whitespace commas -->
                                <xsl:value-of select="normalize-space(replace(., ',', ' '))"/>
                                <xsl:text>'</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:if>
                </xsl:for-each>
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- additional properties -->
        
        <!-- TODO hasChildField -->
		<xsl:if test="(string-length($parentName) > 0) and false()">
            <xsl:text>&#10;</xsl:text>
            <!--
            <xsl:text> ;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>:</xsl:text>
            <xsl:value-of select="$parentName"/>
            -->
            <!-- node naming pattern, TODO turn into an XSLT function for guaranteed consistency -->
            <xsl:text># x3do:has</xsl:text>
            <xsl:value-of select="local-name()"/><!-- TODO camel-case fieldname -->
            <xsl:text> :</xsl:text>
            <xsl:choose>
                <xsl:when test="@DEF">
                    <xsl:value-of select="@DEF"/>
                </xsl:when>
                <xsl:when test="@USE">
                    <xsl:variable name="nameUSE" select="@USE"/>
                    <xsl:value-of select="@USE"/>
                    <xsl:text>-USE-</xsl:text>
                    <xsl:value-of select="(count(preceding::*[@USE = $nameUSE]) + 1)"/>
                </xsl:when>
                <xsl:when test="(local-name() = 'head') or (local-name() = 'Scene')">
                     <!-- no suffix since head and Scene are always unique singletons in an X3D model -->
                </xsl:when>
                <xsl:otherwise>
                <!-- unique name, each underscore-separated numeral is child index among peers, starting below Scene element -->
                    <xsl:value-of select ="local-name()"/>
                    <xsl:for-each select="ancestor-or-self::*[not(local-name() = 'X3D')]"><!-- stops at head, Scene -->
                        <xsl:text>_</xsl:text>
                        <xsl:value-of select ="(count(preceding-sibling::*) + 1)"/>
                    </xsl:for-each>
                </xsl:otherwise>
            </xsl:choose>

            <!-- all done -->
            <xsl:text> .</xsl:text>
            <xsl:text>&#10;</xsl:text>
        </xsl:if>
		
		<xsl:text> .</xsl:text>
        <xsl:if test="(string-length(@USE) > 0)">
            <xsl:text> # DEF matching this USE</xsl:text>
        </xsl:if>
		<xsl:text>&#10;</xsl:text>
		
        <!-- node naming pattern, TODO utilize XSLT function compute-node-name for guaranteed consistency -->
		<xsl:choose>
			<xsl:when test="@DEF">
				<xsl:apply-templates select="* | comment()">
					<xsl:with-param name="graphLevel" select="$graphLevel+1"/>
					<xsl:with-param name="parentName" select="$elementName"/>
				</xsl:apply-templates>
			</xsl:when>
			<xsl:otherwise>
				<xsl:apply-templates select="* | comment()">
					<xsl:with-param name="graphLevel" select="$graphLevel+1"/>
					<xsl:with-param name="parentName" select="$elementName"/>
				</xsl:apply-templates>
			</xsl:otherwise>
		</xsl:choose>
    </xsl:template>

    <!-- unique name, each underscore-separated numeral is child index among peers, starting below Scene element -->
    <xsl:template name="compute-node-name">
        <xsl:param name="currentNode"/>

        <xsl:for-each select="$currentNode">
            <!-- establish currentNode as context -->
            <xsl:choose>
                <xsl:when test="@DEF">
                    <!-- ensure no whitespace -->
                    <xsl:value-of select="translate(normalize-space(@DEF),' ','')"/>
                </xsl:when>
                <xsl:when test="@USE">
                    <!-- ensure no whitespace -->
                    <xsl:value-of select="translate(normalize-space(@USE),' ','')"/>
                    <xsl:text>-USE-</xsl:text>
                    <xsl:variable name="nameUSE" select="@USE"/>
                    <xsl:value-of select="(count(preceding::*[@USE = $nameUSE]) + 1)"/>
                </xsl:when>
                <xsl:when test="(local-name() = 'head') or (local-name() = 'Scene')"><!-- same for X3D statement -->
                    <xsl:value-of select ="local-name()"/>
                     <!-- no suffix since head and Scene are always unique singletons in an X3D model -->
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select ="local-name()"/>
                    <!-- suffix showing tree location -->
                    <xsl:for-each select="ancestor-or-self::*[not(local-name() = 'X3D')]"><!-- stops at head, Scene -->
                        <xsl:text>_</xsl:text>
                        <xsl:value-of select ="(count(preceding-sibling::*) + 1)"/>
                    </xsl:for-each>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:for-each>
    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="escape-apostrophe-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:message><xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/></xsl:message> -->
        <!-- debug: 
        <xsl:variable name="apostrophe"><xsl:text disable-output-escaping="yes">'</xsl:text></xsl:variable>
             <xsl:message>
                    <xsl:text>$apostrophe</xsl:text>
                    <xsl:text>=</xsl:text>
                    <xsl:value-of select="$apostrophe" disable-output-escaping="yes"/>
             </xsl:message> -->
        <xsl:choose>
            <xsl:when test='contains($inputString,"&apos;")'>
                <xsl:value-of select='substring-before($inputString,"&apos;")' disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">apos;</xsl:text>
                <xsl:call-template name="escape-apostrophe-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select='substring-after($inputString,"&apos;")'/>
                </xsl:call-template>
            </xsl:when>
			<!-- unneeded
            <xsl:when test='contains($inputString,$apostrophe)'>
                <xsl:message>
                    <xsl:text>...found  </xsl:text>
                    <xsl:value-of select="$apostrophe" disable-output-escaping="no"/>
                    <xsl:text>$apostrophe</xsl:text>
                    <xsl:value-of select="$apostrophe" disable-output-escaping="no"/>
                    <xsl:text>: </xsl:text>
                    <xsl:value-of select="$inputString"/>
                </xsl:message>
                <xsl:value-of select='substring-before($inputString,$apostrophe)'/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="no" >apos;</xsl:text>
                <xsl:call-template name="escape-apostrophe-characters">
                    <xsl:with-param name="inputString" select='substring-after($inputString,$apostrophe)'/>
                </xsl:call-template>
            </xsl:when>-->
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <xsl:template name="attribute-type"> <!-- rule to determine attribute type -->
	
		<!-- Note:  these rules are adapted from X3dToVrml97.xslt X3dToJson.xslt X3dToJava.xslt X3dToES5.xslt etc. so be sure to apply any updates in all stylesheets -->

		<xsl:variable name="attributeName"       select="local-name()"/>
		<xsl:variable name="parentElementName"   select="local-name(..)"/>
		<xsl:variable name="normalizeSpaceValue" select="normalize-space(.)"/>
		<xsl:variable name="localFieldType"      select="normalize-space(../@type)"/> <!-- locally defined field -->

		<xsl:choose>
		  <!-- SFString -->
		  <xsl:when test="($localFieldType='SFString')          or
                          ($attributeName='DEF')                or ($attributeName='USE') or
                          ($attributeName='name')               or
                          ($attributeName='class')              or
                          ($attributeName='description')        or
                          ($attributeName='address')            or
                          ($attributeName='language')           or
                          ($attributeName='marking')            or
                          ($attributeName='multicastAddress')   or
                          ($attributeName='networkMode')        or
                          ($attributeName='reference')          or
					      (starts-with($parentElementName,'field')         and (($attributeName='accessType') or ($attributeName='type')       or ($attributeName='appinfo') or ($attributeName='documentation'))) or
					      (starts-with($parentElementName,'meta')          and (($attributeName='content')    or ($attributeName='http-equiv') or ($attributeName='scheme')  or ($attributeName='dir') or ($attributeName='lang') or ($attributeName='xml:lang'))) or
                          (($parentElementName='component')                and not($attributeName='level')) or
                          (($parentElementName='unit')                     and not($attributeName='conversionFactor')) or
					      ($parentElementName='ArcClose2D'                 and $attributeName='closureType') or
					      ($parentElementName='BlendedVolumeStyle'         and (starts-with($attributeName,'weightFunction') or ($attributeName='magnificationFilter') or ($attributeName='minificationFilter') or ($attributeName='textureCompression'))) or
                          (ends-with($parentElementName,'Fog')             and $attributeName='fogType') or
					      ($parentElementName='IMPORT'                     and (($attributeName='AS') or ($attributeName='importedDEF') or ($attributeName='inlineDEF'))) or
					      ($parentElementName='HAnimHumanoid'              and $attributeName='skeletalConfiguration') or
					      ($parentElementName='HAnimHumanoid'              and $attributeName='version') or
					      (ends-with($parentElementName,'FontStyle')       and $attributeName='style') or
						  ($parentElementName='GeneratedCubeMapTexture'    and $attributeName='update') or
						  ($parentElementName='ParticleSystem'             and $attributeName='geometryType') or
						  (ends-with($parentElementName,'PickSensor')      and ($attributeName='intersectionType' or $attributeName='matchCriterion' or $attributeName='sortOrder')) or
						  ($parentElementName='ProjectionVolumeStyle'      and $attributeName='type') or
						  ($parentElementName='ShadedVolumeStyle'          and $attributeName='phaseFunction') or
					      ($parentElementName='ShaderPart'                 and $attributeName='type') or
					      ($parentElementName='ShaderProgram'              and $attributeName='type') or
					      ($parentElementName='TextureCoordinateGenerator' and $attributeName='mode') or
					      ($parentElementName='TextureProperties'          and (starts-with($attributeName,'boundaryMode') or ($attributeName='magnificationFilter') or ($attributeName='minificationFilter') or ($attributeName='textureCompression'))) or
                          ($parentElementName='WorldInfo'                  and $attributeName='title') or
						  ($parentElementName='X3D'                        and (($attributeName='profile') or ($attributeName='version') or ($attributeName='noNamespaceSchemaLocation'))) or
                          ($parentElementName='XvlShell'                   and $attributeName='shellType')">
			  <xsl:text>SFString</xsl:text>
		  </xsl:when>
		  <!-- Statements: xs:integer as SFInt32 - TODO schema/spec change? -->
		  <!-- SFInt32 -->
		  <xsl:when test="($localFieldType='SFInt32')           or 
					      ($parentElementName='HAnimHumanoid'              and $attributeName='loa') or
                          (($parentElementName='component')                and $attributeName='level')">
			  <xsl:text>SFInt32</xsl:text>
		  </xsl:when>
		  <!-- SFDouble -->
		  <xsl:when test="($localFieldType='SFDouble')          or 
                          ($parentElementName='unit'      and $attributeName='conversionFactor')">
			  <xsl:text>SFDouble</xsl:text>
		  </xsl:when>
		  <!-- X3D statements (i.e. not nodes): SFString according to Object Model for X3D (OM4X3D), not xs:string (including X3D version attribute) -->
		  <xsl:when test="($attributeName='class')       or
                          ($parentElementName='X3D')     or ($parentElementName='ROUTE')   or ($parentElementName='meta')    or
					      ($parentElementName='EXPORT')  or ($parentElementName='IMPORT')  or ($parentElementName='connect')">
			  <!-- includes X3D version. field/fieldValue type logic handled separately -->
			  <xsl:text>SFString</xsl:text> 
		  </xsl:when>
		  <!-- MFString (some are also enumerations) -->
		  <xsl:when test="
					($localFieldType='MFString')   or 
                    ($attributeName='url') or contains($attributeName,'Url') or
					($attributeName='forceOutput') or
					($attributeName='objectType')  or
					($parentElementName='Anchor' and $attributeName='parameter') or
					($parentElementName='CollisionCollection' and $attributeName='appliedParameters') or
					($parentElementName='Contact' and $attributeName='appliedParameters') or
					(ends-with($parentElementName,'FontStyle') and ($attributeName='family' or $attributeName='justify')) or
					(starts-with($parentElementName,'Geo') and ($attributeName='geoSystem')) or
					($parentElementName='GeoMetadata' and $attributeName='summary') or
					($parentElementName='GeoViewpoint' and contains($attributeName,'navType')) or
					($parentElementName='HAnimHumanoid' and $attributeName='info') or
					($parentElementName='Layout' and ($attributeName='align' or $attributeName='offsetUnits' or $attributeName='scaleMode' or $attributeName='sizeUnits')) or
					($parentElementName='MetadataString' and $attributeName='value') or
					($parentElementName='MultiTexture' and ($attributeName='function' or $attributeName='mode' or $attributeName='source')) or
					($parentElementName='NavigationInfo' and ($attributeName='type' or $attributeName='transitionType')) or
					($parentElementName='Text' and $attributeName='string') or
					($parentElementName='UniversalJoint' and $attributeName='forceOutput') or
					($parentElementName='WorldInfo' and $attributeName='info')">
			  <xsl:text>MFString</xsl:text>
		  </xsl:when>
		  <!-- SFBool -->
		  <xsl:when test="
					($localFieldType='SFBool')  or 
                			($attributeName='activate') or
					($attributeName='ccw')      or
					($attributeName='closed')   or
					($attributeName='convex')   or
					($attributeName='colorPerVertex') or
					($attributeName='enabled')  or
					($attributeName='global')   or
					($attributeName='normalPerVertex') or
					($attributeName='on')       or
					($attributeName='loop')     or
					($attributeName='normalizeVelocity') or
					($attributeName='rtpHeaderExpected') or
					($attributeName='solid') or
					($attributeName='uClosed') or ($attributeName='vClosed') or
					($attributeName='visible') or
					($parentElementName='AudioClip' and $attributeName='loop') or
					($parentElementName='BooleanToggle' and $attributeName='toggle') or
					($parentElementName='Collision' and $attributeName='enabled') or
					($parentElementName='CollisionSpace' and $attributeName='useGeometry') or
					($parentElementName='Cone' and ($attributeName='side' or $attributeName='bottom')) or
					($parentElementName='Cylinder' and ($attributeName='side' or $attributeName='bottom' or $attributeName='top')) or
					($parentElementName='CylinderSensor' and $attributeName='autoOffset') or
					($parentElementName='EspduTransform' and ($attributeName='fired1' or $attributeName='fired2')) or
					($parentElementName='Extrusion' and ($attributeName='beginCap' or $attributeName='endCap')) or
					($parentElementName='FillProperties' and ($attributeName='filled' or $attributeName='hatched')) or
					(ends-with($parentElementName,'FontStyle') and ($attributeName='horizontal' or $attributeName='leftToRight' or $attributeName='topToBottom')) or
					($parentElementName='GeoInline' and $attributeName='load') or
					($parentElementName='GeoOrigin' and $attributeName='rotateYUp') or
					($parentElementName='GeoViewpoint' and $attributeName='headlight') or
					($parentElementName='ImageTexture' and ($attributeName='repeatS' or $attributeName='repeatT')) or
					(contains($parentElementName,'Texture3D') and starts-with($attributeName,'repeat')) or
					($parentElementName='Inline' and ($attributeName='load')) or
					(ends-with($parentElementName,'Layer') and ($attributeName='isPickable')) or
					($parentElementName='LineProperties' and ($attributeName='applied')) or
					($parentElementName='LOD' and ($attributeName='forceTransitions')) or
					($parentElementName='MotorJoint' and $attributeName='autoCalc') or
					($parentElementName='MovieTexture' and ($attributeName='repeatS' or $attributeName='repeatT' or $attributeName='loop')) or
					($parentElementName='NurbsPatchSurface' and $attributeName='closedSurface') or
					($parentElementName='ParticleSystem' and $attributeName='createParticles') or
					($parentElementName='VolumeEmitter' and $attributeName='internal') or
					($parentElementName='PickableGroup' and $attributeName='pickable') or
					($parentElementName='PixelTexture' and ($attributeName='repeatS' or $attributeName='repeatT')) or
					($parentElementName='NavigationInfo' and $attributeName='headlight') or
					($parentElementName='PlaneSensor' and $attributeName='autoOffset') or
					($parentElementName='RigidBody' and ($attributeName='autoDamp' or $attributeName='autoDisable' or $attributeName='fixed' or $attributeName='useFiniteRotation' or $attributeName='useGlobalGravity')) or
					($parentElementName='RigidBodyCollection' and ($attributeName='autoDisable' or $attributeName='preferAccuracy')) or
					($parentElementName='SphereSensor' and $attributeName='autoOffset') or
					($parentElementName='StringSensor' and $attributeName='deletionAllowed') or
					($parentElementName='Script' and ($attributeName='directOutput' or $attributeName='mustEvaluate')) or
					($parentElementName='ShadedVolumeStyle' and ($attributeName='lighting' or $attributeName='shadows')) or
					($parentElementName='Sound' and $attributeName='spatialize') or
					($parentElementName='TextureProperties' and $attributeName='generateMipMaps') or
					($parentElementName='TimeSensor' and $attributeName='loop') or
					($parentElementName='TwoSidedMaterial' and $attributeName='separateBackColor') or
					(contains($parentElementName,'Viewpoint') and ($attributeName='jump' or $attributeName='retainUserOffsets' or $attributeName='displayed')) or
					($parentElementName='VolumeEmitter' and $attributeName='internal')">
			  <xsl:text>SFBool</xsl:text>
		  </xsl:when>
		  <!-- MFBool -->
		  <xsl:when test="
					($localFieldType='MFBool')  or 
                    (contains($parentElementName,'BooleanSequencer') and $attributeName='keyValue') or
					($parentElementName='CADLayer'                   and ($attributeName='visible') and starts-with(//X3D/@version,'3')) or
					($parentElementName='HAnimHumanoid'              and $attributeName='motionsEnabled') or
					($parentElementName='MetadataBoolean'            and $attributeName='value') or
					($parentElementName='SegmentedVolumeData'        and $attributeName='segmentEnabled') or
					($parentElementName='XvlShell'                   and ($attributeName='faceEmpty' or $attributeName='faceHidden'))">
			  <xsl:text>MFBool</xsl:text>
		  </xsl:when>
		  <!-- SFColor -->
		  <xsl:when test="
					($localFieldType='SFColor')  or 
                    ($parentElementName='CartoonVolumeStyle' and ($attributeName='orthogonalColor' or $attributeName='parallelColor')) or
					($parentElementName='ColorChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ColorDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					(contains($parentElementName,'Light') and $attributeName='color') or
					($parentElementName='FillProperties' and ($attributeName='hatchColor')) or
					(contains($parentElementName,'Fog') and $attributeName='color') or
					(contains($parentElementName,'Material') and contains($attributeName,'Color')) or
					($parentElementName='MultiTexture' and $attributeName='color')">
			  <xsl:text>SFColor</xsl:text>
		  </xsl:when>
		  <!-- SFColorRGBA -->
		  <xsl:when test="
					($localFieldType='SFColorRGBA')  or 
                    ($parentElementName='EdgeEnhancementVolumeStyle' and $attributeName='edgeColor') or
					($parentElementName='TextureProperties' and $attributeName='borderColor') or
					($parentElementName='ToneMappedVolumeStyle' and ($attributeName='coolColor' or $attributeName='warmColor'))">
			  <xsl:text>SFColorRGBA</xsl:text>
		  </xsl:when>
		  <!-- MFColor -->
		  <xsl:when test="
					($localFieldType='MFColor')  or 
                    ($parentElementName='Color' and $attributeName='color') or
					($parentElementName='ColorInterpolator' and $attributeName='keyValue') or
					(ends-with($parentElementName,'Background') and ($attributeName='groundColor' or $attributeName='skyColor'))">
			  <xsl:text>MFColor</xsl:text>
		  </xsl:when>
		  <!-- MFColorRGBA -->
		  <xsl:when test="
					($localFieldType='MFColorRGBA')  or 
                    ($parentElementName='ColorRGBA' and $attributeName='color')">
			  <xsl:text>MFColorRGBA</xsl:text>
		  </xsl:when>
		  <!-- SFImage -->
		  <xsl:when test="
					($localFieldType='SFImage')  or 
                    ($parentElementName='PixelTexture' and $attributeName='image')">
			  <xsl:text>SFImage</xsl:text>
		  </xsl:when>
		  <!-- no MFImage attributes -->
		  <!-- SFDouble --> <!-- precedes SFFloat since some fields are different than usual -->
		  <xsl:when test="
					($localFieldType='SFDouble')  or 
                    ($parentElementName='GeoElevationGrid' and (($attributeName='creaseAngle') or ($attributeName='xSpacing') or ($attributeName='zSpacing')))">
			  <xsl:text>SFDouble</xsl:text>
		  </xsl:when>
		  <!-- MFDouble -->
		  <xsl:when test="
					($localFieldType='MFDouble')  or 
                    ($parentElementName='GeoElevationGrid'   and $attributeName='height') or
					($parentElementName='MetadataDouble'     and $attributeName='value')  or
					(starts-with($parentElementName,'Nurbs') and (($attributeName='knot') or ($attributeName='weight') or contains($attributeName,'Knot')))">
			  <xsl:text>MFDouble</xsl:text>
		  </xsl:when>
		  <!-- SFFloat -->
		  <xsl:when test="
					($localFieldType='SFFloat')  or 
                    ($attributeName='ambientIntensity') or
					($attributeName='intensity')        or
					($attributeName='creaseAngle')      or
                    ($attributeName='radius')           or ($attributeName='innerRadius') or ($attributeName='outerRadius') or
                    ($attributeName='startAngle')       or ($attributeName='endAngle') or
                    ($attributeName='tolerance')        or
					($attributeName='transparency')     or
					(starts-with($parentElementName,'Arc') and (contains($attributeName,'Angle') or $attributeName='radius')) or
					($parentElementName='AudioClip' and $attributeName='pitch') or
					($parentElementName='BlendedVolumeStyle' and starts-with($attributeName,'weightConstant')) or
					($parentElementName='BoundaryEnhancementVolumeStyle' and (($attributeName='boundaryOpacity') or ($attributeName='opacityFactor') or ($attributeName='retainedOpacity'))) or
					($parentElementName='Circle2D' and $attributeName='radius') or
					($parentElementName='CollisionCollection' and ($attributeName='bounce' or $attributeName='minBounceSpeed' or $attributeName='softnessConstantForceMix' or $attributeName='softnessErrorCorrection')) or
					($parentElementName='Cone' and ($attributeName='bottomRadius' or $attributeName='height')) or
					($parentElementName='Contact' and ($attributeName='bounce' or $attributeName='depth' or $attributeName='minBounceSpeed' or $attributeName='softnessConstantForceMix' or $attributeName='softnessErrorCorrection')) or
					($parentElementName='Cylinder' and ($attributeName='radius' or $attributeName='height')) or
					($parentElementName='CylinderSensor' and ($attributeName='diskAngle' or $attributeName='maxAngle' or $attributeName='minAngle' or $attributeName='offset')) or
					($parentElementName='Disk2D' and contains($attributeName,'Radius')) or
					($parentElementName='DoubleAxisHingeJoint' and (starts-with($attributeName,'desiredAngularVelocity') or starts-with($attributeName,'max') or $attributeName='minAngle1' or starts-with($attributeName,'stop') or starts-with($attributeName,'suspension'))) or
					($parentElementName='EdgeEnhancementVolumeStyle' and $attributeName='gradientThreshold') or
					(contains($parentElementName,'ElevationGrid') and ($attributeName='xSpacing' or $attributeName='zSpacing')) or
					(ends-with($parentElementName,'Emitter') and ($attributeName='angle' or $attributeName='speed' or $attributeName='variation' or $attributeName='mass' or $attributeName='surfaceArea')) or
					($parentElementName='EspduTransform' and $attributeName='firingRange') or
					(ends-with($parentElementName,'Fog') and $attributeName='visibilityRange') or
					($parentElementName='FontStyle' and ($attributeName='size' or $attributeName='spacing')) or
					($parentElementName='GeoElevationGrid' and $attributeName='yScale') or
					($parentElementName='GeoLOD' and $attributeName='range') or
					($parentElementName='GeoViewpoint' and $attributeName='speedFactor') or
					($parentElementName='HAnimDisplacer' and $attributeName='weight') or
					($parentElementName='HAnimSegment' and $attributeName='mass') or
					($parentElementName='IsoSurfaceVolumeData' and ($attributeName='contourStepSize' or $attributeName='surfaceTolerance')) or
					($parentElementName='LineProperties'       and ($attributeName='linewidthScaleFactor')) or
					(ends-with($parentElementName,'Material')  and ($attributeName='ambientIntensity'     or $attributeName='shininess'     or $attributeName='transparency')) or
					($parentElementName='ParticleSystem'       and ($attributeName='lifetimeVariation' or $attributeName='particleLifetime')) or
					($parentElementName='TwoSidedMaterial'     and ($attributeName='backAmbientIntensity' or $attributeName='backShininess' or $attributeName='backTransparency')) or
					($parentElementName='MotorJoint'           and (starts-with($attributeName,'axis') or starts-with($attributeName,'stop'))) or
					($parentElementName='MovieTexture'         and ($attributeName='pitch' or $attributeName='speed')) or
					($parentElementName='MultiTexture'         and $attributeName='alpha') or
					($parentElementName='NavigationInfo'       and ($attributeName='speed' or $attributeName='visibilityLimit' or $attributeName='transitionTime')) or
					($parentElementName='NurbsSet' and $attributeName='tessellationScale') or
					($parentElementName='PointLight' and $attributeName='radius') or
					($parentElementName='ProjectionVolumeStyle' and $attributeName='intensityThreshold') or
					($parentElementName='ReceiverPdu' and $attributeName='receivedPower') or
					($parentElementName='RigidBody' and ($attributeName='angularDampingFactor' or starts-with($attributeName,'disable') or $attributeName='linearDampingFactor' or $attributeName='mass')) or
					($parentElementName='RigidBodyCollection' and ($attributeName='constantForceMix' or $attributeName='contactSurfaceThickness' or starts-with($attributeName,'disable') or $attributeName='errorCorrection' or $attributeName='maxCorrectionSpeed')) or
					($parentElementName='ScalarChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ScalarDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ScreenFontStyle' and ($attributeName='pointSize' or $attributeName='spacing')) or
					($parentElementName='SilhouetteEnhancementVolumeStyle' and starts-with($attributeName,'silhouette')) or
					($parentElementName='SingleAxisHingeJoint' and ($attributeName='maxAngle' or $attributeName='minAngle' or $attributeName='stopBounce' or $attributeName='stopErrorCorrection')) or
					($parentElementName='SliderJoint' and ($attributeName='maxSeparation' or $attributeName='minSeparation' or $attributeName='sliderForce' or $attributeName='stopBounce' or $attributeName='stopErrorCorrection')) or
					($parentElementName='SpotLight' and ($attributeName='radius' or $attributeName='cutOffAngle' or $attributeName='beamWidth')) or
					($parentElementName='Sound' and ($attributeName='maxBack' or $attributeName='minBack' or $attributeName='maxFront' or $attributeName='minFront' or $attributeName='priority')) or
					($parentElementName='Sphere' and $attributeName='radius') or
					($parentElementName='Text' and $attributeName='maxExtent') or
					($parentElementName='TextureProperties' and ($attributeName='anisotropicDegree' or $attributeName='texturePriority')) or
					($parentElementName='TextureTransform' and $attributeName='rotation') or
					($parentElementName='TransmitterPdu' and ($attributeName='power' or $attributeName='transmitFrequencyBandwidth')) or
					($parentElementName='UniversalJoint' and starts-with($attributeName,'stop')) or
					(contains($parentElementName,'Viewpoint') and $attributeName='fieldOfView') or
					($parentElementName='WindPhysicsModel'    and ($attributeName='gustiness' or $attributeName='speed' or $attributeName='turbulence'))">
			  <xsl:text>SFFloat</xsl:text>
		  </xsl:when>
		  <!-- MFFloat -->
		  <xsl:when test="
					($localFieldType='MFFloat')  or 
                    ($attributeName='key')       or
					(contains($parentElementName,'ElevationGrid') and $attributeName='height') or
					(contains($parentElementName,'LOD') and $attributeName='range') or
					(ends-with($parentElementName,'Background') and ($attributeName='groundAngle' or $attributeName='skyAngle')) or
					($parentElementName='EspduTransform' and $attributeName='articulationParameterArray') or
					($parentElementName='FloatVertexAttribute' and $attributeName='value') or
					($parentElementName='FogCoordinate' and $attributeName='depth') or
					($parentElementName='HAnimSisplacer' and $attributeName='weight') or
					($parentElementName='HAnimJoint' and ($attributeName='llimit' or $attributeName='ulimit' or $attributeName='skinCoordWeight' or $attributeName='stiffness')) or
					($parentElementName='HAnimSegment' and $attributeName='momentsOfInertia') or
					($parentElementName='IsoSurfaceVolumeData' and $attributeName='surfaceValues') or
					($parentElementName='Layout' and ($attributeName='offset' or $attributeName='size')) or
					($parentElementName='MetadataFloat' and $attributeName='value') or
					($parentElementName='NavigationInfo' and $attributeName='avatarSize') or
					($parentElementName='NurbsTextureCoordinate' and $attributeName='weight') or
					($parentElementName='ParticleSystem' and ($attributeName='colorKey' or $attributeName='texCoordKey')) or
					($parentElementName='ScalarInterpolator' and $attributeName='keyValue') or
					($parentElementName='SplineScalarInterpolator' and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
					($parentElementName='Text' and $attributeName='length') or
					($parentElementName='TextureCoordinateGenerator' and $attributeName='parameter') or
					($parentElementName='Viewport' and $attributeName='clipBoundary') or
					($parentElementName='XvlShell' and ($attributeName='vertexRound' or $attributeName='edgeRound'))">
			  <xsl:text>MFFloat</xsl:text>
		  </xsl:when>
		  <!-- SFTime -->
		  <xsl:when test="
					($localFieldType='SFTime')        or 
                    ($parentElementName='TimeSensor') or
                    ($attributeName='duration')       or
                    ($attributeName='tau')            or
                    ($attributeName='timestamp')      or
                    ($attributeName='readInterval')   or
                    ($attributeName='writeInterval')  or
                    ($parentElementName='LoadSensor'     and $attributeName='timeOut')  or
                    ($parentElementName='AudioClip'      and ends-with($attributeName,'Time'))  or
                    ($parentElementName='EspduTransform' and ends-with($attributeName,'Time'))  or
                    ($parentElementName='MovieTexture'   and ends-with($attributeName,'Time'))"> 
			  <!-- TimeSensor loop & enabled are caught by SFBool tests, all other TimeSensorfields are SFTime -->
			  <xsl:text>SFTime</xsl:text>
		  </xsl:when>
		  <!-- no MFTime -->
		  <!-- SFVec2f -->
		  <xsl:when test="
					($localFieldType='SFVec2f')  or 
                    ($parentElementName='CollisionCollection' and ($attributeName='frictionCoefficients' or $attributeName='slipFactors' or $attributeName='surfaceSpeed')) or
					($parentElementName='Contact' and ($attributeName='frictionCoefficients' or $attributeName='slipCoefficients' or $attributeName='surfaceSpeed')) or
					($parentElementName='ParticleSystem' and $attributeName='particleSize') or
					($parentElementName='PlaneSensor' and ($attributeName='maxPosition' or $attributeName='minPosition')) or
					($parentElementName='PositionChaser2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='PositionDamper2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='Rectangle2D' and ($attributeName='size')) or
					($parentElementName='TextureTransform' and ($attributeName='center' or $attributeName='scale' or $attributeName='translation'))">
			  <xsl:text>SFVec2f</xsl:text>
		  </xsl:when>
		  <!-- MFVec2f -->
		  <xsl:when test="
					($localFieldType='MFVec2f')  or 
                    ($parentElementName='EaseInEaseOut' and $attributeName='easeInEaseOut') or
					($parentElementName='Extrusion' and ($attributeName='crossSection' or $attributeName='scale')) or
					(($parentElementName='CoordinateInterpolator2D' or $parentElementName='PositionInterpolator2D') and $attributeName='keyValue') or
					(($parentElementName='ContourPolyline2D' or $parentElementName='Polypoint2D' or $parentElementName='TextureCoordinate') and $attributeName='point') or
					(($parentElementName='NurbsCurve2D' or $parentElementName='NurbsTextureSurface') and $attributeName='controlPoint') or
					(($parentElementName='Polyline2D') and $attributeName='lineSegments') or
					(($parentElementName='SplinePositionInterpolator2D') and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
					($parentElementName='TexCoordChaser2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='TexCoordDamper2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					(($parentElementName='TriangleSet2D') and $attributeName='vertices')">
			  <xsl:text>MFVec2f</xsl:text>
		  </xsl:when>
		  <!-- SFVec3d -->
		  <xsl:when test="
					($localFieldType='SFVec3d')  or 
                    ($attributeName='geoCenter') or
					($attributeName='geoCoords') or
					($parentElementName='GeoElevationGrid'   and $attributeName='geoGridOrigin') or
					($parentElementName='GeoLOD'             and $attributeName='center') or
					($parentElementName='GeoProximitySensor' and $attributeName='center') or
					($parentElementName='GeoViewpoint'       and ($attributeName='centerOfRotation' or $attributeName='position'))">
			  <xsl:text>MFVec2f</xsl:text>
		  </xsl:when>
		  <!-- MFVec3d -->
		  <xsl:when test="
					($localFieldType='MFVec3d')  or 
                    ($parentElementName='ContourPolyline2D'       and $attributeName='controlPoint') or
					($parentElementName='CoordinateDouble'        and $attributeName='point') or
					($parentElementName='GeoCoordinate'           and $attributeName='point') or
					($parentElementName='GeoPositionInterpolator' and $attributeName='keyValue') or
					($parentElementName='GeoViewpoint'            and contains($attributeName,'position'))">
			  <xsl:text>MFVec3d</xsl:text>
		  </xsl:when>
		  <!-- SFVec3f -->
		  <!-- note TextureTransform tests must precede these default checks -->
		  <xsl:when test="
					($localFieldType='SFVec3f')    or 
                    ($attributeName='anchorPoint') or
					($attributeName='bboxCenter')  or
					($attributeName='bboxSize')    or
					($attributeName='center')      or
					($attributeName='scale')       or
					($attributeName='translation') or
					($parentElementName='Billboard' and $attributeName='axisOfRotation') or
					($parentElementName='Box' and $attributeName='size') or
					(ends-with($parentElementName,'Emitter') and ($attributeName='direction' or $attributeName='position')) or
					($parentElementName='Contact' and ($attributeName='contactNormal' or $attributeName='frictionDirection' or $attributeName='position')) or
					($parentElementName='DirectionalLight' and $attributeName='direction') or
					($parentElementName='DoubleAxisHingeJoint' and ($attributeName='axis1' or $attributeName='axis2')) or
					($parentElementName='EspduTransform' and (ends-with($attributeName,'Location') or $attributeName='linearVelocity' or $attributeName='linearAcceleration' or ends-with($attributeName,'Point'))) or
					($parentElementName='ForcePhysicsModel' and $attributeName='force') or
					($parentElementName='GeoProximitySensor' and $attributeName='size') or
					(starts-with($parentElementName,'HAnim') and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
					($parentElementName='HAnimSegment' and $attributeName='centerOfMass') or
					(contains($parentElementName,'LOD') and $attributeName='center') or
					($parentElementName='MotorJoint' and ($attributeName='motor1Axis' or $attributeName='motor2Axis' or $attributeName='motor3Axis')) or
					($parentElementName='PlaneSensor' and $attributeName='offset') or
					($parentElementName='PositionChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='PositionDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ProximitySensor' and ($attributeName='center' or $attributeName='size')) or
					($parentElementName='PointLight' and ($attributeName='attenuation' or $attributeName='location')) or
					($parentElementName='RigidBody' and ($attributeName='angularVelocity' or $attributeName='centerOfMass' or $attributeName='finiteRotationAxis' or $attributeName='linearVelocity' or $attributeName='position')) or
					($parentElementName='RigidBodyCollection' and ($attributeName='gravity')) or
					($parentElementName='SingleAxisHingeJoint' and ($attributeName='axis')) or
					($parentElementName='SliderJoint' and ($attributeName='axis')) or
					($parentElementName='Sound' and ($attributeName='direction' or $attributeName='location')) or
					($parentElementName='SpotLight' and ($attributeName='attenuation' or $attributeName='direction' or $attributeName='location')) or
					($parentElementName='Transform' and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
					($parentElementName='TransformSensor' and ($attributeName='size')) or
					($parentElementName='TransmitterPdu' and (ends-with($attributeName,'Location'))) or
					($parentElementName='UniversalJoint' and ($attributeName='axis1' or $attributeName='axis2')) or
					(($parentElementName='Viewpoint' or $parentElementName='OrthoViewpoint') and ($attributeName='position' or $attributeName='centerOfRotation')) or
					($parentElementName='ViewpointGroup'   and $attributeName='size') or
					($parentElementName='VisibilitySensor' and $attributeName='size') or
					(contains($parentElementName,'VolumeData') and $attributeName='dimensions') or
					($parentElementName='WindPhysicsModel' and $attributeName='direction')">
			  <xsl:text>SFVec3f</xsl:text>
		  </xsl:when>
		  <!-- MFVec3f -->
		  <xsl:when test="
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='CoordinateChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='CoordinateDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='CoordinateInterpolator'     and $attributeName='keyValue') or
                    ($parentElementName='HAnimHumanoid'              and $attributeName='jointBindingPositions') or
                    ($parentElementName='HAnimHumanoid'              and $attributeName='jointBindingScales') or
					($parentElementName='NormalInterpolator'         and $attributeName='keyValue') or
					($parentElementName='PositionInterpolator'       and $attributeName='keyValue') or
					($parentElementName='SplinePositionInterpolator' and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
					(contains($parentElementName,'Coordinate') and $attributeName='point') or
					($parentElementName='Extrusion' and $attributeName='spine') or
					($parentElementName='Normal' and $attributeName='vector') or
					($parentElementName='HAnimDisplacer' and $attributeName='displacements') or
					($parentElementName='XvlShell' and ($attributeName='edgeBeginVector' or $attributeName='edgeEndVector'))">
			  <xsl:text>MFVec3f</xsl:text>
		  </xsl:when>
		  <!-- SFVec4f -->
		  <xsl:when test="
					($localFieldType='SFVec4f')    or 
                    ($parentElementName='ClipPlane' and $attributeName='plane')">
			  <xsl:text>SFVec4f</xsl:text>
		  </xsl:when>
		  <!-- SFRotation -->
		  <!-- note TextureTransform tests must precede these default checks -->
		  <xsl:when test="
					($localFieldType='SFRotation')    or 
                    ($attributeName='rotation') or
					($attributeName='scaleOrientation') or
					(($parentElementName='CylinderSensor' or $parentElementName='PlaneSensor') and $attributeName='axisRotation') or
					($parentElementName='OrientationChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='OrientationDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='RigidBody' and $attributeName='orientation') or
					($parentElementName='SphereSensor' and $attributeName='offset') or
					($parentElementName='Transform' and ($attributeName='rotation' or $attributeName='scaleOrientation')) or
					(contains($parentElementName,'Viewpoint') and $attributeName='orientation') or
					($parentElementName='HAnimJoint' and ($attributeName='limitOrientation' or $attributeName='rotation' or $attributeName='scaleOrientation')) or
					($parentElementName='HAnimSite' and ($attributeName='rotation' or $attributeName='scaleOrientation'))">
			  <xsl:text>SFRotation</xsl:text>
		  </xsl:when>
		  <!-- MFRotation -->
		  <xsl:when test="
					($localFieldType='MFRotation')    or 
                    ($parentElementName='Extrusion' and $attributeName='orientation') or
					($parentElementName='HAnimHumanoid'              and $attributeName='jointBindingRotations') or
					(ends-with($parentElementName,'OrientationInterpolator') and $attributeName='keyValue')">
			  <xsl:text>MFRotation</xsl:text>
		  </xsl:when>
		  <!-- SFMatrix3f -->
		  <xsl:when test="
					($localFieldType='SFMatrix3f')    or 
                    ($parentElementName='RigidBody' and $attributeName='inertia')">
			  <xsl:text>SFMatrix3f</xsl:text>
		  </xsl:when>
		  <!-- MFMatrix3f -->
		  <xsl:when test="
					($localFieldType='MFMatrix3f')    or 
                    ($parentElementName='Matrix3VertexAttribute' and $attributeName='value')">
			  <xsl:text>MFMatrix3f</xsl:text>
		  </xsl:when>
		  <!-- SFMatrix4f -->
		  <xsl:when test="
					($localFieldType='SFMatrix4f')    or 
                    ($parentElementName='TextureTransformMatrix3D' and $attributeName='matrix')">
			  <xsl:text>SFMatrix4f</xsl:text>
		  </xsl:when>
		  <!-- MFMatrix4f -->
		  <xsl:when test="
					($localFieldType='MFMatrix4f')    or 
                    ($parentElementName='Matrix4VertexAttribute' and $attributeName='value')">
			  <xsl:text>MFMatrix4f</xsl:text>
		  </xsl:when>
		  <!-- MFInt32 --> <!-- must precede MFInt32 -->
		  <xsl:when test="
					($localFieldType='MFInt32')    or 
                    ($attributeName='colorIndex') or
					($attributeName='coordIndex') or
					($attributeName='normalIndex') or
					($attributeName='texCoordIndex') or
					($attributeName='faceCoordIndex') or
					($attributeName='faceTexCoordIndex') or
					($attributeName='edgeBeginCoordIndex') or
					($attributeName='edgeEndCoordIndex') or
					($attributeName='fanCount') or
					($attributeName='stripCount') or
					($parentElementName='ContourPolyline2D' and $attributeName='index') or
					($parentElementName='EspduTransform' and starts-with($attributeName,'articulationParameter') and ends-with($attributeName,'Array')) or
					($parentElementName='HAnimJoint' and $attributeName='skinCoordIndex') or
					(starts-with($parentElementName,'IndexedTriangle') and $attributeName='index') or
					($parentElementName='IndexedQuadSet'               and $attributeName='index') or
					($parentElementName='IntegerSequencer' and $attributeName='keyValue') or
					($parentElementName='LayerSet' and ($attributeName='order')) or
					($parentElementName='LineSet' and $attributeName='vertexCount') or
					($parentElementName='MetadataInteger' and $attributeName='value') or
					($parentElementName='PixelTexture3D'  and $attributeName='image') or
					($parentElementName='SignalPdu' and $attributeName='data')">
			  <xsl:text>MFInt32</xsl:text>
		  </xsl:when>
		  <!-- SFInt32 --> <!-- Note that other DIS attibutes must get tested before this, including MFInt32 -->
		  <xsl:when test="
                    ($localFieldType='SFInt32')    or 
                     ends-with($attributeName,'ID')             or
                    ($attributeName='order')                    or
					($attributeName='uOrder')                   or
					($attributeName='vOrder')                   or
					($attributeName='uDimension')               or
					($attributeName='vDimension')               or
					($parentElementName='DISEntityManager')     or
					($parentElementName='DISEntityTypeMapping') or
					($parentElementName='EspduTransform')       or
					($parentElementName='SignalPdu')            or
					($parentElementName='ReceiverPdu')          or
					($parentElementName='TransmitterPdu')       or
					($parentElementName='CartoonVolumeStyle' and $attributeName='colorSteps') or
					($parentElementName='IntegerTrigger' and $attributeName='integerKey') or
					(contains($parentElementName,'ElevationGrid') and ($attributeName='xDimension' or $attributeName='zDimension')) or
					($parentElementName='FillProperties' and ($attributeName='hatchStyle')) or
					($parentElementName='FloatVertexAttribute' and $attributeName='numComponents') or
					($parentElementName='GeneratedCubeMapTexture' and $attributeName='size') or
					($parentElementName='LayerSet' and ($attributeName='activeLayer')) or
					($parentElementName='LineProperties' and ($attributeName='linetype')) or
					($parentElementName='MotorJoint' and $attributeName='enabledAxe') or
					($parentElementName='ParticleSystem' and $attributeName='maxParticles') or
					($parentElementName='RigidBodyCollection' and $attributeName='iterations') or
					($parentElementName='Switch' and $attributeName='whichChoice') or
					($parentElementName='TextureProperties' and $attributeName='borderWidth') or
					(starts-with($parentElementName,'Nurbs') and ($attributeName='order' or $attributeName='tessellation' or $attributeName='uTessellation' or $attributeName='vTessellation' or $attributeName='uTessellation' or $attributeName='dimension' or $attributeName='UDimension' or $attributeName='vDimension')) or
					($parentElementName='XvlShell' and $attributeName='numberOfDivisions')">
			  <xsl:text>SFInt32</xsl:text>
		  </xsl:when>
		  <xsl:otherwise>
			  <xsl:choose>
				<xsl:when test="($parentElementName='field')">
					<xsl:value-of select="$localFieldType"/>
				</xsl:when>
				<!-- Other statement values require special handling, do not warn here -->
				<xsl:when test="($parentElementName='field')          or ($parentElementName='fieldValue') or contains($parentElementName,'Proto') or
                                ($parentElementName='meta')">
					<xsl:text></xsl:text>
				</xsl:when>
				<xsl:when test="preceding::*[(local-name() = $parentElementName) and (starts-with($parentElementName,'Xvl'))]">
					<!-- avoid repetitious warnings, no message.  TODO fix, test is not trapping properly. -->
					<xsl:text></xsl:text>
				</xsl:when>
				<xsl:otherwise>
					<xsl:text></xsl:text>
					<xsl:message>
						  <xsl:text>Warning: X3dToTurtle.xslt attribute type not found for </xsl:text>
						  <xsl:value-of select="$parentElementName"/>
						  <xsl:text> </xsl:text>
						  <xsl:value-of select="$attributeName"/>
					</xsl:message>
				</xsl:otherwise>
			  </xsl:choose>
		  </xsl:otherwise>
		</xsl:choose>

    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()">
        <!-- TODO rule to process each comment -->
	</xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="text()">
        <!-- TODO rule to process each CDATA text block -->
	</xsl:template>

    <!-- ===================================================== -->

</xsl:stylesheet>