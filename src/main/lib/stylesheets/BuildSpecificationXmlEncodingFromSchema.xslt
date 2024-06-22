<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
		version="2.0"
        xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions">
            <!--
        extension-element-prefixes="xs"
        extension-element-prefixes="saxon xs">
                saxon:trace="true"
                xmlns:saxon="http://icl.com/saxon"
                xmlns:date="http://exslt.org/dates-and-times"
                xmlns:xeena="../content/profile.dtd"
                xmlns:x3d="../content/x3d-3.3.xsd"
            -->
  <xsl:param name="LinkDom" select="true()"/>

<!--	XSL namespaces are in transition!  Tools are slow to catch up.
    ***	Edit the topmost stylesheet tag on line 2 of this file to match the xmlns namespace URI for your XSL tool. ***
	W3C:
	Saxon:           <xsl:stylesheet xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>
	IBM XSLEditor:   <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform/1.0'>
	IE 5:            <xsl:stylesheet xmlns:xsl='http://www.w3.org/TR/WD-xsl'>
	XT:              <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform'>
-->

<!--
  <head>
   <meta name="filename"    content="BuildSpecificationXmlEncodingFromSchema.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="14 July 2002" />
   <meta name="description" content="XSL stylesheet to convert X3D XML Schema to XHTML files for X3D specification." />
   <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt" />
   <meta name="reference"   content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt?revision=9169&view=markup" />
   <meta name="reference"   content="BuildX3dSceneAccessInterfacesJava.xslt" />
  </head>

Recommended tool:
-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
   Especially necessary since this stylesheet uses saxon-specific extensions for file handling
- Netbeans 7.*

Invocation:
-  cd   C:\www.web3d.org\x3d\stylesheets
   c:\xml\saxon\saxon ../../specifications/x3d-3.3.xsd  BuildSpecificationXmlEncodingFromSchema.xslt

-->
<!-- &nbsp; is &#160; -->

<xsl:output method="xml" encoding="UTF-8" indent="yes" omit-xml-declaration="yes"/>

<xsl:strip-space elements="*" />

<!-- ===================================================================================== -->
<!-- Configuration values -->

  <xsl:variable name="nameX3dEncodingOfNodes">
    <xsl:text>EncodingOfNodes.html</xsl:text>
  </xsl:variable>
    <!--<xsl:text>part03/EncodingOfNodes.html</xsl:text>-->

  <xsl:variable name="nameX3dEncodingOfStatements">
    <xsl:text>EncodingOfStatements.html</xsl:text>
  </xsl:variable>
  
  <xsl:variable name="nameUtf8EncodingsFile">
    <xsl:text>part04/Utf8Encodings.html</xsl:text>
  </xsl:variable>

  <xsl:variable name="nameAllX3dElementsAttributesFile">
    <xsl:text>AllX3dElementsAttributes</xsl:text>
    <xsl:value-of select="//xs:schema/@version"/>
    <xsl:text>.xml</xsl:text>
  </xsl:variable>
  
<!-- ===================================================================================== -->
<!-- Global values -->

<xsl:variable name="schemaFullVersionNumber">
  <xsl:value-of select="//xs:schema/@version"/>
</xsl:variable>

<xsl:variable name="schemaVersionNumber">
  <xsl:value-of select="substring-before($schemaFullVersionNumber, '.')"/>
  <xsl:text>.</xsl:text>
  <xsl:value-of select="substring-before(substring-after($schemaFullVersionNumber, '.'), '.')"/>
</xsl:variable>

<xsl:variable name="X3dTooltipsFile">
    <xsl:text>x3d-</xsl:text>
    <xsl:value-of select="$schemaVersionNumber"/>
    <xsl:text>.profile.xml</xsl:text>
</xsl:variable>

<!-- ****************** root:  start of file ****************** -->
<xsl:template match="/">

<xsl:message>
  <xsl:text>BuildSpecificationXmlEncodingFromSchema: process X3D schema version </xsl:text>
  <xsl:value-of select="//xs:schema/@version"/>
  <xsl:text> using BuildSpecificationXmlEncodingFromSchema.xslt </xsl:text>
 </xsl:message>

<!-- X3D schema validity checks  -->

<!-- check for duplicate accessType definitions -->
<xsl:for-each select="//xs:schema/xs:simpleType[contains(@name,'AccessType')]/xs:restriction/xs:enumeration">
  <xsl:variable name="enumerationValue">
  	<xsl:value-of select="@value"/>
  </xsl:variable>
  <xsl:variable name="reducedEnumerationValue">
    <xsl:choose>
      <xsl:when test="starts-with($enumerationValue,'set_')">
        <xsl:value-of select="substring-after($enumerationValue,'set_')"/>
      </xsl:when>
      <xsl:when test="contains($enumerationValue,'_changed')">
        <xsl:value-of select="substring-before($enumerationValue,'_changed')"/>
      </xsl:when>
    </xsl:choose>
  </xsl:variable>
  <!-- debug
  <xsl:message>
    <xsl:text>$reducedEnumerationValue=</xsl:text>
    <xsl:value-of select="$reducedEnumerationValue"/>
   </xsl:message>
   -->
	<xsl:if test="(count(preceding-sibling::*[@value=$enumerationValue])>1) and (count(following-sibling::*[@value=$enumerationValue])=0)">
		<xsl:message>
		  <xsl:text>*** [Warning] accessType enumeration '</xsl:text>
		  <xsl:value-of select="$enumerationValue"/>
		  <xsl:text>' has </xsl:text>
		  <xsl:value-of select="count(preceding-sibling::*[@value=$enumerationValue])+1"/>
		  <xsl:text> definitions</xsl:text>
		 </xsl:message>
	</xsl:if>
	<!-- don't need to flag missing inputOnly, outputOnly fields since they are not included in the element definitions
	<xsl:if test="not(//xs:attribute[@name=$enumerationValue]) and not(//xs:attribute[@name=$reducedEnumerationValue])">
		<xsl:message>
		  <xsl:text>*** [Warning] accessType enumeration '</xsl:text>
		  <xsl:value-of select="$enumerationValue"/>
		  <xsl:text>' has no corresponding attribute definition</xsl:text>
		 </xsl:message>
	</xsl:if>
    -->
</xsl:for-each>

<!-- check for missing accessType definitions -->
<xsl:for-each select="//xs:attribute[not(@name='DEF' or @name='USE' or @name='containerField' or @name='class'
		or @name='AS' or @name='http-equiv' or @name='lang' or @name='profile'
		or @name='nodeField' or @name='protoField'  or @name='additionalInterface'
		or @name='inlineDEF' or @name='importedDEF' or @name='localDEF'
		or @name='fromNode'  or @name='fromField' or @name='toNode' or @name='toField')]">
 <xsl:variable name="attributeName"><xsl:value-of select="@name"/></xsl:variable>
 <xsl:variable name="elementName">
	 <xsl:choose>
			<xsl:when test="../../../../@name">
				<xsl:value-of select="../../../../@name"/>
			</xsl:when>
			<xsl:when test="../../../@name">
				<xsl:value-of select="../../../@name"/>
			</xsl:when>
			<xsl:when test="../../@name">
				<xsl:value-of select="../../@name"/>
			</xsl:when>
			<xsl:when test="parent::*[@name!='']">
				<xsl:value-of select="parent::*[@name!='']/@name"/>
				<!--<xsl:message><xsl:text>[found parent name] </xsl:text></xsl:message>-->
			</xsl:when>
			<xsl:when test="(local-name(../../..)='enumeration')">
                                <xsl:text>&gt;xs:enumeration value='</xsl:text>
								<xsl:value-of select="../../../@value"/>
                                <xsl:text>'&lt;</xsl:text>
			</xsl:when>
			<xsl:otherwise>
                            <xsl:text>NoNameFound</xsl:text>
                            <xsl:message>
                              <xsl:text>*** [Warning] </xsl:text>
                              <xsl:value-of select="../../@name"/>
                              <xsl:text> </xsl:text>
                              <xsl:value-of select="../@name"/>
                              <xsl:text> attribute '</xsl:text>
                              <xsl:value-of select="@name"/>
                              <xsl:text>' has no name definition</xsl:text>
                             </xsl:message>
                        </xsl:otherwise>
	</xsl:choose>
 </xsl:variable>
 <!-- check attribute definition completeness -->
 <xsl:if test="not(($elementName='component') or ($elementName='field') or ($elementName='meta') or ($elementName='unit') or ($elementName='ExternProtoDeclare') or ($elementName='ProtoDeclare') or ($elementName='ROUTE')
 	 or ($elementName='X3DPrototype') or ($elementName='IMPORT') or ($elementName='fieldValue') or ($elementName='HAnimSite'))"> <!-- HAnimSite attribute @name has no default value -->
	<xsl:if test="not(@type) and not(xs:simpleType)">
		<xsl:message>
		  <xsl:text>*** [Warning] </xsl:text>
		  <xsl:value-of select="$elementName"/>
		  <xsl:text> attribute '</xsl:text>
		  <xsl:value-of select="@name"/>
		  <xsl:text>' has no type definition</xsl:text>
		 </xsl:message>
	</xsl:if>
	<xsl:if test="(starts-with(@type,'SF') or (@type='xs:NMTOKEN')) and not($elementName='SFNode') and not(@type='SFString') and (not(@default) or (@default='')) and not((@fixed='inputOnlyField') or (@fixed='outputOnlyField')) and
			not((@name='componentName') and (string-length(@fixed) > 0)) and not(@name='name') and 
                        not(ends-with(@name,'Mapping')) and not(@name='synonym') and not(@name='id') and not(@name='mapping') and (string-length(@fixed) = 0) and
                        not(contains($elementName, 'xs:enumeration'))">
		<xsl:message>
		  <xsl:text>*** [Warning] </xsl:text>
		  <xsl:value-of select="$elementName"/>
                  <xsl:if test="parent::xs:appinfo">
		      <xsl:text> appinfo</xsl:text>
                  </xsl:if>
		  <xsl:text> attribute '</xsl:text>
		  <xsl:value-of select="@name"/>
		  <xsl:text>' type </xsl:text>
		  <xsl:value-of select="@type"/>
                  <xsl:choose>
                      <xsl:when test="(ancestor::xs:appinfo) and (string-length(@fixed) = 0)">
                        <xsl:text> has no default accessType in the @fixed attribute</xsl:text>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:text> has no default value</xsl:text>
                        <xsl:if test="($elementName='X3DLightNode') and (@name='global') and (@type='SFBool')">
                            <xsl:text> (since default values vary and are defined for each implementing node)</xsl:text>
                        </xsl:if>
                      </xsl:otherwise>
                  </xsl:choose>
		 </xsl:message>
	</xsl:if>
 </xsl:if>
 <!-- accessType checks -->
 <xsl:choose>
	<xsl:when test="local-name(..)='appinfo'">
		<!-- ignore, documentation -->
	</xsl:when>
	<xsl:when test="($elementName='component') or ($elementName='field') or ($elementName='meta') or ($elementName='unit') or ($elementName='ExternProtoDeclare') or ($elementName='ProtoDeclare') or ($elementName='IMPORT') or ($elementName='ROUTE')">
		<!-- ignore, scene graph structural elements (not actual nodes) -->
	</xsl:when>
	<!-- incidentally ensure UrlNodes are on X3DNetworkSensorNode list, except for deliberate exceptions already in specification.
             specification bug submitted for DISEntityTypeMapping which should likely include this interface.
	<xsl:when test="($attributeName='url') and
                        ($elementName!='X3DUrlObject') and
                        ($elementName!='Anchor') and ($elementName!='DISEntityTypeMapping') and ($elementName!='GeoMetadata') and ($elementName!='Script') and
                        not(//xs:complexType[@name='X3DUrlObject']//xs:element[@ref=$elementName])">
		<xsl:message>
		  <xsl:text>*** [Error]   </xsl:text>
		  <xsl:value-of select="$elementName"/>
		  <xsl:text> has attribute '</xsl:text>
		  <xsl:value-of select="$attributeName"/>
		  <xsl:text>' and so needs to reference X3DUrlObject interface</xsl:text>
		 </xsl:message>
	</xsl:when>
        -->
	<xsl:when test="contains(attributeName,'additionalInterface')">
		<xsl:message>
		  <xsl:text>*** [Error]   </xsl:text>
		  <xsl:value-of select="$elementName"/>
		  <xsl:text> attribute '</xsl:text>
		  <xsl:value-of select="$attributeName"/>
		  <xsl:text>' needs to be defined within appinfo, not as a regular attribute</xsl:text>
		 </xsl:message>
	</xsl:when>
	<xsl:when test="not(//xs:enumeration[@value=$attributeName]) and not(preceding-sibling::*[@name=$attributeName])"> 
        <!-- TODO confirm or delete:  and starts-with(@type,'SF') -->
		<xsl:message>
		  <xsl:text>*** [Warning] </xsl:text>
		  <xsl:value-of select="$elementName"/>
		  <xsl:text> attribute '</xsl:text>
		  <xsl:value-of select="$attributeName"/>
		  <xsl:text>' has no corresponding *AccessTypes enumeration defined</xsl:text>
		 </xsl:message>
	</xsl:when>
	<!-- corresponding accessType is found here -->
	<xsl:otherwise>
		<xsl:variable name="accessType">
		  <xsl:choose>
		     <xsl:when test="($attributeName='angle') and ($elementName='ConeEmitter')">
		       <xsl:text>inputOutput</xsl:text>
		     </xsl:when>
		     <xsl:when test="($attributeName='name') and ($elementName='X3DVertexAttributeNode')">
		       <xsl:text>initializeOnly</xsl:text>
		     </xsl:when>
		     <xsl:when test="($attributeName='name')">
		       <xsl:text>inputOutput</xsl:text>
		     </xsl:when>
		     <xsl:when test="($attributeName='type') and (($elementName='ShaderPart') or ($elementName='ShaderProgram'))">
		       <xsl:text>initializeOnly</xsl:text>
		     </xsl:when>
		     <xsl:when test="($attributeName='type')">
		       <xsl:text>inputOutput</xsl:text>
		     </xsl:when>
		     <xsl:when test="($attributeName='info') and ($elementName='WorldInfo')">
		       <xsl:text>initializeOnly</xsl:text>
		     </xsl:when>
		     <xsl:when test="($attributeName='info')">
		       <xsl:text>inputOutput</xsl:text>
		     </xsl:when>
		     <xsl:otherwise>
                         <xsl:variable name="schemaTableAccessTypeReference" select="//xs:simpleType[(xs:restriction/xs:enumeration/@value)=$attributeName][1]"/>
                         <!-- debug section if more than one accessType is found and throwing an XSLT error
                         <xsl:message>
                             <xsl:value-of select="$elementName"/>
                             <xsl:text> </xsl:text>
                             <xsl:value-of select="$attributeName"/>
                             <xsl:text>: </xsl:text>
                             <xsl:value-of select="$schemaTableAccessTypeReference/@name"/>
                         </xsl:message>
                         -->
                         <xsl:value-of select="substring-before($schemaTableAccessTypeReference,'AccessTypes')"/>
                     </xsl:otherwise>
		  </xsl:choose>
		</xsl:variable>
		<xsl:choose>
			<xsl:when test="not(starts-with(@type,'SF') or starts-with(@type,'MF'))">
				<!-- skip derived types -->
			</xsl:when>
			<xsl:when test="(@type='SFNode' or @type='MFNode') and (@default!='')">
					<xsl:message>
					  <xsl:text>*** [Error]   </xsl:text>
					  <xsl:value-of select="$elementName"/>
					  <xsl:text> attribute '</xsl:text>
					  <xsl:value-of select="$attributeName"/>
					  <xsl:text>' has accessType </xsl:text>
					  <xsl:value-of select="$accessType"/>
					  <xsl:text>, type </xsl:text>
					  <xsl:value-of select="@type"/>
					  <xsl:text> with initializing value </xsl:text>
					  <xsl:value-of select="@default"/>
				</xsl:message>
			</xsl:when>
			<xsl:when test="(@type='SFNode' or @type='MFNode')">
				<!-- no value is correct, no action -->
			</xsl:when>
			<xsl:when test="($accessType='inputOnly' or $accessType='outputOnly') and (@default!='')">
					<xsl:message>
					  <xsl:text>*** [Error]   </xsl:text>
					  <xsl:value-of select="$elementName"/>
					  <xsl:text> attribute '</xsl:text>
					  <xsl:value-of select="$attributeName"/>
					  <xsl:text>' has accessType </xsl:text>
					  <xsl:value-of select="$accessType"/>
					  <xsl:text>, type </xsl:text>
					  <xsl:value-of select="@type"/>
					  <xsl:text> and initializing value</xsl:text>
					  <xsl:value-of select="@default"/>
				</xsl:message>
			</xsl:when>
			<xsl:when test="($accessType='inputOnly' or $accessType='outputOnly')">
				<!-- no value is correct, no action -->
			</xsl:when>
			<xsl:when test="(@type='SFString')">
				<!-- SFString can be null -->
			</xsl:when>
			<xsl:when test="($accessType='initializeOnly' or $accessType='inputOutput') and starts-with(@type,'MF')">
				<!-- no value is allowed for MF types, no action -->
			</xsl:when>
			<xsl:when test="($accessType='initializeOnly' or $accessType='inputOutput') and not(@default)">
					<xsl:message>
					  <xsl:text>*** [Error]   </xsl:text>
					  <xsl:value-of select="$elementName"/>
					  <xsl:text> attribute '</xsl:text>
					  <xsl:value-of select="$attributeName"/>
					  <xsl:text>' has accessType </xsl:text>
					  <xsl:value-of select="$accessType"/>
					  <xsl:text>, type </xsl:text>
					  <xsl:value-of select="@type"/>
					  <xsl:text> and no initializing value</xsl:text>
				</xsl:message>
			</xsl:when>
		</xsl:choose>
	</xsl:otherwise>
 </xsl:choose>
</xsl:for-each>

<!-- <xsl:message><xsl:text>$LinkDom=</xsl:text><xsl:value-of select="$LinkDom"/><xsl:text>&#10;</xsl:text></xsl:message> -->

<xsl:variable name="todaysDate">
    <xsl:value-of select="fn:day-from-date(current-date())"/>
    <xsl:text> </xsl:text>
    <!-- adapted from https://www.xsltfunctions.com/xsl/functx_month-name-en.html -->
    <xsl:sequence select="
        ('January', 'February', 'March', 'April', 'May', 'June',
        'July', 'August', 'September', 'October', 'November', 'December')
        [fn:month-from-date(current-date())]"/>
    <!-- <xsl:value-of select="fn:month-from-date(current-date())"/> -->
    <xsl:text> </xsl:text>
    <xsl:value-of select="fn:year-from-date(current-date())"/>
</xsl:variable>

<!-- ===================================================================================== -->
<!-- Clause 6 Encoding of nodes -->

<!-- create HTML output -->
  
<xsl:result-document href="{$nameX3dEncodingOfNodes}" method="html" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

<!-- <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html>]]></xsl:text> -->
<!-- <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">]]></xsl:text> -->
<!-- <xsl:text><!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"></xsl:text> -->
<!-- <xsl:text>&#10;</xsl:text> -->

<xsl:element name="html">
  <xsl:attribute name="lang"><xsl:text>en</xsl:text></xsl:attribute>
  <xsl:text>&#10;</xsl:text>
  <xsl:element name="head">
    <xsl:element name="title">
      <!-- mdash = 8212 -->
      <xsl:text disable-output-escaping="yes">X3D XML encoding &amp;#8212; ISO/IEC 19776-1:202x &amp;#8212; 6 Encoding of nodes</xsl:text>
    </xsl:element> <!-- title -->
    <xsl:element name="link">
      <xsl:attribute name="rel"><xsl:text>stylesheet</xsl:text></xsl:attribute>
      <xsl:attribute name="href"><xsl:text>X3D.css</xsl:text></xsl:attribute>
      <xsl:attribute name="type"><xsl:text>text/css</xsl:text></xsl:attribute>
    </xsl:element> <!-- link -->
    <xsl:element name="meta">
      <xsl:attribute name="http-equiv"><xsl:text>Content-Type</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>text/html; charset=utf-8</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>created</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
	<xsl:value-of select="$todaysDate"/>
      </xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>creator</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>Don Brutzman, Dick Puk, Leonard Daly, Roy Walmsley</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>description</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>This stylesheet uses the latest X3D XML Schema to autogenerate the following specification document: </xsl:text>
        <xsl:text>ISO/IEC 19776-1:2015 Extensible 3D (X3D) encodings Part 1 XML encoding, Clause 6 Encoding of nodes</xsl:text>
      </xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/EncodingOfNodes.html</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>version</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:value-of select="$schemaVersionNumber"/></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>identifier</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>https://www.web3d.org/files/specifications/19776-1/V</xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
        <xsl:text>/Part01/EncodingOfNodes.html</xsl:text>
      </xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/standards/active</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>https://www.web3d.org/specifications/x3d-</xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
        <xsl:text>.xsd</xsl:text>
      </xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications/x3d-schema-changelog.txt</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>https://x3d.svn.sourceforge.net/viewvc/x3d/www.web3d.org/specifications/x3d-</xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
        <xsl:text>.xsd?view=log</xsl:text>
      </xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt?view=log</xsl:text></xsl:attribute>
    </xsl:element> <!-- meta -->
  </xsl:element> <!-- head -->
  <xsl:text>&#10;</xsl:text>

  <xsl:element name="body">
    <xsl:attribute name="style"><xsl:text>background-position: top center; background-attachment: fixed; background-image:url(../Images/WatermarkWorkingDraft.png);</xsl:text></xsl:attribute>
    <xsl:text>&#10;</xsl:text>
    <xsl:comment> Autogenerated field-attribute encodings for each X3D node follow </xsl:comment>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
      <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>X3D_XML.html</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>to index page</xsl:text></xsl:attribute>
        <xsl:text>&#10;</xsl:text>
        <xsl:element name="img">
	  <xsl:attribute name="class"><xsl:text>x3dlogo</xsl:text></xsl:attribute>
	  <xsl:attribute name="src"><xsl:text>../Images/x3d.png</xsl:text></xsl:attribute>
	  <xsl:attribute name="alt"><xsl:text>X3D logo</xsl:text></xsl:attribute>
	  <xsl:attribute name="style"><xsl:text>border-width: 0px; width: 176px; height: 88px</xsl:text></xsl:attribute>
        </xsl:element> <!-- img -->
      </xsl:element> <!-- a -->    
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
      <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="p"> <!-- p -->
	<xsl:attribute name="class"><xsl:text>HeadingPart</xsl:text></xsl:attribute>
	<xsl:text>Extensible 3D (X3D) encodings</xsl:text>
	<xsl:element name="br"/>
	<xsl:text>&#10;</xsl:text>
	<xsl:text>Part 1: Extensible Markup Language (XML) encoding</xsl:text>
      </xsl:element> <!-- p -->
      <xsl:element name="p">
	<xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
	<xsl:text>6 Encoding of nodes</xsl:text>
      </xsl:element> <!-- p -->
      <xsl:text>&#10;</xsl:text>
      
      <xsl:element name="p">
        <xsl:element name="span">
            <xsl:attribute name="class"><xsl:text>editorsNote</xsl:text></xsl:attribute>
            <xsl:attribute name="title"><xsl:text>editorsNote</xsl:text></xsl:attribute>
            <xsl:text>(NOTE this is an autogenerated page, produced using X3D XML Schema version 4.0)</xsl:text>
        </xsl:element>
      </xsl:element> 
      
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>
                      
    <!-- divider X3D separator bar that links back to Topics table -->
    <xsl:element name="a">
      <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
      <xsl:attribute name="title"><xsl:text>to Topics</xsl:text></xsl:attribute>
      <xsl:element name="img">
        <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
        <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
        <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
      </xsl:element>  <!-- img -->
      <xsl:text>&#10;</xsl:text>
    </xsl:element> <!-- a-->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h1">
      <xsl:element name="img">
	<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
	<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
	<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
      </xsl:element> <!-- img -->
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>Introduction</xsl:text></xsl:attribute>
	<xsl:text>6.1&#160;&#160;Introduction</xsl:text>
      </xsl:element> <!-- a -->
    </xsl:element> <!-- h1 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h2">
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>Topics</xsl:text></xsl:attribute>
	<xsl:text>6.1.1&#160;&#160;Topics</xsl:text>
      </xsl:element> <!-- a-->
    </xsl:element> <!-- h2 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
      <xsl:text>This clause provides a detailed specification of the XML encoding for each node defined in </xsl:text>
      <xsl:text>&#10;</xsl:text>
      <xsl:element name="a">
	<xsl:attribute name="href"><xsl:text>references.html#I19775_1</xsl:text></xsl:attribute>
	<xsl:text>ISO/IEC&#160;19775-1</xsl:text>
      </xsl:element> <!-- a-->
      <xsl:text>.</xsl:text>
      <xsl:text>&#10;</xsl:text>

      <xsl:text>The topics in this clause are listed in </xsl:text>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>#t-Topics</xsl:text></xsl:attribute>
	<xsl:text>Table&#160;6.1</xsl:text>
      </xsl:element> <!-- a -->
      <xsl:text>.&#10;</xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
      <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="p">
	<xsl:attribute name="class"><xsl:text>TableCaption</xsl:text></xsl:attribute>
	<xsl:element name="a">
	  <xsl:attribute name="name"><xsl:text>t-Topics</xsl:text></xsl:attribute>
	  <!-- mdash = 8212 -->
	  <xsl:text disable-output-escaping="yes">Table 6.1 &amp;mdash; Topics in this clause</xsl:text>
	</xsl:element> <!-- a -->
      </xsl:element> <!-- p -->
      <xsl:text>&#10;</xsl:text>

      <!-- Loop over elements, build index -->

      <xsl:element name="table">
	<xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
	<xsl:attribute name="summary"><xsl:text>Table of contents</xsl:text></xsl:attribute>
	<xsl:text>&#10;</xsl:text>
	<xsl:element name="tr">
	  <xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
	  <xsl:text>&#10;</xsl:text>
	  <xsl:element name="td">
	  <xsl:attribute name="valign"><xsl:text>top</xsl:text></xsl:attribute>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#Introduction</xsl:text></xsl:attribute>
	      <xsl:text>6.1&#160;Introduction</xsl:text>
	    </xsl:element> <!-- a -->
	    <xsl:element name="br"/>

	    <xsl:text>&#10;&#160;&#160;</xsl:text>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
	      <xsl:text>6.1.1&#160;Topics</xsl:text>
	    </xsl:element> <!-- a -->
	    <xsl:element name="br"/>
	    <xsl:text>&#10;&#160;&#160;</xsl:text>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#XmlEncodingDescription</xsl:text></xsl:attribute>
              <xsl:text>6.1.2&#160;XML encoding description</xsl:text>
	    </xsl:element> <!-- a -->
	    <xsl:element name="br"/>
            <xsl:element name="br"/>
                    
            <xsl:text>&#10;</xsl:text>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#Nodes</xsl:text></xsl:attribute>
	      <xsl:text>6.2&#160;&#160;Nodes</xsl:text>
	    </xsl:element> <!-- a -->
	    <xsl:element name="br"/>
            <xsl:text>&#10;</xsl:text>

            <!-- The first test below selects all elements derived by extension that are not statements -->
            <!-- The second test below below is needed to capture those elements that, because of Schema limitations, are defined directly without extension  -->
	    <xsl:for-each select="//xs:schema/xs:element[(*//xs:extension/@base!='X3DStatement') or (not (*//xs:extension/@base))]">
	      <xsl:sort select="translate(@name,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')" order="ascending"/>
	      <!-- html bookmarks -->
	      <xsl:text>&#160;&#160;</xsl:text>
	      <xsl:element name="a">
		<xsl:attribute name="href">
		  <xsl:text>#</xsl:text>
		  <xsl:value-of select="@name"/>
		</xsl:attribute>
		<xsl:text>6.2.</xsl:text>
		<xsl:value-of select="position()"/>
		<xsl:text>&#160;</xsl:text>
		<xsl:value-of select="@name"/>
	      </xsl:element> <!-- a -->
	      <xsl:text> </xsl:text>
	      <xsl:element name="br"/>
	      <xsl:text>&#10;</xsl:text>
	      <!-- three-column index, the following numbers decide column breaks, requires fine tuning
                   for total of 260 + 24 = 284 entries plus section breaks -->
              <xsl:if test="((position()=92) or (position()=189))">
		<xsl:text>&#10;</xsl:text>
		<xsl:text disable-output-escaping="yes"><![CDATA[</td>]]></xsl:text>
		<xsl:text>&#10;</xsl:text>
		<xsl:text disable-output-escaping="yes"><![CDATA[<td valign="top">]]></xsl:text>
		<xsl:text>&#10;</xsl:text>
	      </xsl:if>
	    </xsl:for-each>
            <xsl:element name="br"/>

	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#ContentModels</xsl:text></xsl:attribute>
	      <xsl:text>6.3&#160;Content models</xsl:text>
	    </xsl:element> <!-- a -->
	    <xsl:element name="br"/>
	    <xsl:text>&#10;</xsl:text>

	    <xsl:text>&#160;&#160;</xsl:text>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#Overview</xsl:text></xsl:attribute>
	      <xsl:text>6.3.1&#160;Overview</xsl:text>
	    </xsl:element> <!-- a -->
	    <xsl:element name="br"/>
	    <xsl:text>&#10;</xsl:text>

	    <!-- now append index entries for the pertinent content models -->
            <xsl:for-each select="//xs:schema/xs:group[@name=//xs:schema/xs:element[(*//xs:extension/@base!='X3DStatement') or (not (*//xs:extension/@base))]//xs:group/@ref
                                                    or @name=//xs:schema/xs:complexType//xs:group/@ref[.!='ChildContentModelSceneGraphStructure']]">
              <xsl:sort select="translate(@name,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')" order="ascending"/>

	      <xsl:variable name="contentModelGroupName">
		<xsl:value-of select="@name"/>
	      </xsl:variable>
	<!--	debug
	      <xsl:text>$contentModelGroupName=</xsl:text>
	      <xsl:value-of select="$contentModelGroupName"/> -->
	      <!-- html bookmarks -->
	      <xsl:text>&#160;&#160;</xsl:text>
	      <xsl:element name="a">
		<xsl:attribute name="href">
		  <xsl:text>#</xsl:text>
		  <xsl:value-of select="$contentModelGroupName"/>
		</xsl:attribute>
		<xsl:text>6.3.</xsl:text>
		<xsl:value-of select="position()+1"/>
		<xsl:text>&#160;</xsl:text>
		<xsl:value-of select="$contentModelGroupName"/>
	      </xsl:element> <!-- a-->
	      <xsl:element name="br"/>
	      <xsl:text>&#10;</xsl:text>
	    </xsl:for-each>
	  </xsl:element> <!-- td -->
	  <xsl:text>&#10;</xsl:text>
	</xsl:element> <!-- tr -->
	<xsl:text>&#10;</xsl:text>
      </xsl:element> <!-- table -->
      <xsl:text>&#10;</xsl:text>
      <xsl:text>&#10;</xsl:text>

    </xsl:element>  <!-- div -->
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h2">
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>XmlEncodingDescription</xsl:text></xsl:attribute>
        <xsl:text>6.1.2&#160;&#160;XML encoding description</xsl:text>
      </xsl:element> <!-- a -->
    </xsl:element> <!-- h2 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
        <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
    <xsl:element name="p">
      <xsl:text>This XML encoding is autogenerated using the </xsl:text>
      <xsl:text>&#10;</xsl:text>
      <xsl:text>XML Schema for the Extensible 3D (X3D) Graphics Specification tagset defined in </xsl:text>
      <xsl:text>&#10;</xsl:text>
      <xsl:element name="a">
	<xsl:attribute name="href"><xsl:text>Schema.html</xsl:text></xsl:attribute>
	<xsl:attribute name="target">SchemaAnnex</xsl:attribute>
	<xsl:text>Annex&#160;B&#160;X3D&#160;XML&#160;Schema</xsl:text>
      </xsl:element> <!-- a -->
      <xsl:text>.</xsl:text>
<!--  <xsl:text> version </xsl:text>
      <xsl:value-of select="xs:schema/@version"/>
      <xsl:text>.  </xsl:text> -->
    </xsl:element>  <!-- p -->
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>The well-formed syntax of an XML file is governed by the Extensible Markup Language (</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#XML</xsl:text></xsl:attribute>
            <xsl:text>XML</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>).</xsl:text>
    </xsl:element>  <!-- p -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>X3D nodes and statements are represented by XML elements.</xsl:text>
        <xsl:text> Content models indicate the node and statement elements that can be contained by a given statement element.</xsl:text>
        <xsl:text> The validity of these parent-child element relationships can be checked using the </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#DTD</xsl:text></xsl:attribute>
            <xsl:text>X3D DTD</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text> and </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#Schema</xsl:text></xsl:attribute>
            <xsl:text>X3D XML Schema</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>.</xsl:text>
    </xsl:element>  <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>Simple-type X3D fields (meaning other than SFNode and MFNode) are represented by </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#XML</xsl:text></xsl:attribute>
            <xsl:text>XML</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text> attributes.</xsl:text>
        <xsl:text> Field values can be validated with progressive degrees of precision and strictness using </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>DTD.html</xsl:text></xsl:attribute>
            <xsl:text>X3D DTD</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>, </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>Schema.html</xsl:text></xsl:attribute>
            <xsl:text>X3D XML Schema</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>, </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#Schematron</xsl:text></xsl:attribute>
            <xsl:text>X3D Schematron</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>, </xsl:text>
        <xsl:text> and X3D Regular Expressions (</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DREGEX</xsl:text></xsl:attribute>
            <xsl:text>regexes</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>).</xsl:text>
       <xsl:text>&#10;</xsl:text>
    </xsl:element>  <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial, moved</xsl:text></xsl:attribute>
      <xsl:text>Content models indicate the node elements that can be contained by other node elements.</xsl:text>
    </xsl:element>  <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="div">
        <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial, moved</xsl:text></xsl:attribute>
        <xsl:element name="p">
          <xsl:text>Notational conventions for this section are as follows.</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="ol">
          <xsl:attribute name="type"><xsl:text>a</xsl:text></xsl:attribute>
          <xsl:element name="li">	Each node name is followed by a list of fields (if any). </xsl:element>
          <xsl:element name="li">	Each field attribute name is followed by the default&#160;value (if any), type and accessType. </xsl:element>
          <xsl:element name="li">	After field attributes, the contained-node content model (if any) is listed. </xsl:element>
          <xsl:element name="li">	Singleton tags or open/close tag pairs are used to complete each element, as appropriate. </xsl:element>
        </xsl:element> <!-- ol -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="p">
      <xsl:attribute name="class"><xsl:text>Note</xsl:text></xsl:attribute>
      <xsl:text>NOTE 1&#160; Field type and accessType designations shown for each node in this section are solely informational, and are not part of the valid XML encoding for an X3D scene. </xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p"> Default attribute values and empty attributes are optional.</xsl:element>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p"> Fields with accessType inputOnly or outputOnly are transient, and thus shall not be written out in an .x3d file. They are therefore excluded from the list of fields for each node. </xsl:element>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
        <xsl:text>It is illegal to use both the </xsl:text>
        <xsl:element name="code"><xsl:text>DEF</xsl:text></xsl:element>
        <xsl:text>and the </xsl:text>
        <xsl:element name="code"><xsl:text>USE</xsl:text></xsl:element>
        <xsl:text>attributes at the same time within a single element.</xsl:text>
    </xsl:element>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
      <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
      <xsl:attribute name="title"><xsl:text>Mantis 1458</xsl:text></xsl:attribute>
      <xsl:text>The </xsl:text>
      <xsl:element name="code"><xsl:text>containerfield</xsl:text></xsl:element>
      <xsl:text> attribute is a field-label prefix to indicate the parent-child field relationship between the current node and its parent node. </xsl:text>
      <xsl:text> Default </xsl:text>
      <xsl:element name="code"><xsl:text>containerfield</xsl:text></xsl:element>
      <xsl:text> values for each node are defined identically by the </xsl:text>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>DTD.html</xsl:text></xsl:attribute>
        <xsl:text>X3D Document Type Definition (DTD)</xsl:text>
      </xsl:element> <!-- a -->
      <xsl:text> or </xsl:text>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>Schema.html</xsl:text></xsl:attribute>
        <xsl:text>X3D XML Schema</xsl:text>
      </xsl:element> <!-- a -->
      <xsl:text>. </xsl:text>
      <xsl:text> These default values are correct in most cases, so the need to override default </xsl:text>
      <xsl:element name="code"><xsl:text>containerfield</xsl:text></xsl:element>
      <xsl:text> values is rare.</xsl:text>
      <xsl:text> The value of </xsl:text>
      <xsl:element name="code"><xsl:text>containerfield</xsl:text></xsl:element>
      <xsl:text> in a USE node can be different from the original DEF node, in order to support varied reuse of nodes. </xsl:text>
      <xsl:text> The </xsl:text>
      <xsl:element name="code"><xsl:text>containerfield</xsl:text></xsl:element>
      <xsl:text> attribute is only part of XML encoding for X3D scenes, and is incorrect if explicitly defined in other encodings. </xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>
    <xsl:element name="p">
	<xsl:attribute name="class"><xsl:text>Example</xsl:text></xsl:attribute>
        <xsl:element name="span">
            <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
            <xsl:attribute name="title"><xsl:text>Mantis 1458</xsl:text></xsl:attribute>
            <!-- &nbsp; is &#160; -->
            <xsl:text>EXAMPLE 1&#160; &lt;Transform&gt;&lt;Shape containerField='children'/&gt;&lt;/Transform&gt;</xsl:text>
        </xsl:element> <!-- span -->
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
        <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
          <xsl:text>NOTE 2&#160;  </xsl:text>
        </xsl:element><!-- span -->
        <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
          <xsl:text>Precise ordering is necessary for </xsl:text>
        </xsl:element><!-- span -->
      <xsl:element name="code">
          <xsl:text>&lt;IS&gt;&lt;connect/&gt;&lt;/IS&gt;</xsl:text>
      </xsl:element>
      <xsl:text> connections, which are only allowed inside a ProtoDeclare body, </xsl:text>
      <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
          <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
          <xsl:text>and placed</xsl:text>
      </xsl:element>
      <xsl:text> </xsl:text>
      <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
          <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
          <xsl:text>are defined</xsl:text>
      </xsl:element>
      <xsl:text> prior to any contained nodes.</xsl:text>
      <xsl:text>Similarly, when defined inside a Script, ComposedShader, PackagedShader or ShaderProgram node, </xsl:text>
      <xsl:element name="code">
          <xsl:text>&lt;IS&gt;&lt;connect/&gt;&lt;/IS&gt;</xsl:text>
      </xsl:element>
      <xsl:text> connections are placed following &lt;field/&gt; definitions and prior to any contained script/shader source code.</xsl:text>
    </xsl:element> <!--  p -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
        <xsl:element name="a">
            <xsl:attribute name="href">
                <xsl:text>#ChildContentModelCore</xsl:text>
            </xsl:attribute>
            <xsl:text>ChildContentModelCore</xsl:text>
        </xsl:element>
	<xsl:text>enables the first child of any node to be a </xsl:text>
        <xsl:element name="code"><xsl:text>metadata</xsl:text></xsl:element>
        <xsl:text> field,namely a MetadataBoolean, MetadataDouble, MetadataFloat, MetadataInteger, MetadataSet or MetadataString node.</xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
      <xsl:text>The XML </xsl:text>
      <xsl:element name="code">class</xsl:element>
      <xsl:text> attribute is also implicitly available throughout for all elements, enabling the use of X3D-aware Cascading Style Sheets </xsl:text>
      <xsl:element name="a">
	<xsl:attribute name="href"><xsl:text>references.html#W3C-CSS-Snapshot</xsl:text></xsl:attribute>
	<xsl:text>[W3C-CSS-Snapshot]</xsl:text>
      </xsl:element> <!-- a -->
      <xsl:text>.  The </xsl:text>
      <xsl:element name="code">class</xsl:element>
      <xsl:text> attribute is only present in the XML and compressed binary encodings for X3D, and is not a field of any X3D node.</xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="div">
        <xsl:attribute name="class"><xsl:text>note</xsl:text></xsl:attribute>
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>Note&#160; Additional information about X3D XML scene structure, allowed field values, </xsl:text>
        <xsl:text> data type restrictions, authoring hints, warnings, and errors can be found in X3D&#160;Tooltips </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DTOOLTIPS</xsl:text></xsl:attribute>
            <xsl:text>[X3DTOOLTIPS]</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text> and X3D Unified Object Model [</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DUOM</xsl:text></xsl:attribute>
            <xsl:text>X3DUOM</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>].</xsl:text>
        <xsl:text> Validation assets are maintained in human-readable and machine-readable forms, in version control, and with corresponding documentation at [</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DVALIDATION</xsl:text></xsl:attribute>
            <xsl:text>X3DVALIDATION</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>].</xsl:text>
    </xsl:element>  <!-- p -->
    </xsl:element>  <!-- div -->
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
                     
    <!-- divider X3D separator bar that links back to Topics table -->
    <xsl:element name="a">
      <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
      <xsl:attribute name="title"><xsl:text>to Topics</xsl:text></xsl:attribute>
      <xsl:element name="img">
        <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
        <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
        <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
      </xsl:element>  <!-- img -->
      <xsl:text>&#10;</xsl:text>
    </xsl:element> <!-- a-->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h1">
      <xsl:element name="img">
	<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
	<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
	<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
      </xsl:element> <!-- img -->
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>Nodes</xsl:text></xsl:attribute>
	<xsl:text>6.2&#160;&#160;Nodes</xsl:text>
      </xsl:element> <!-- a -->
    </xsl:element> <!-- h1 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial, moved</xsl:text></xsl:attribute>
        <xsl:element name="p">
          <xsl:text>Notational conventions for this section are as follows.</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="ol">
          <xsl:attribute name="type"><xsl:text>a</xsl:text></xsl:attribute>
          <xsl:element name="li">	Each node name is followed by a list of fields (if any). </xsl:element>
          <xsl:element name="li">	Each field attribute name is followed by the default&#160;value (if any), type and accessType. </xsl:element>
          <xsl:element name="li">	After field attributes, the contained-node content model (if any) is listed. </xsl:element>
          <xsl:element name="li">	Singleton tags or open/close tag pairs are used to complete each element, as appropriate. </xsl:element>
        </xsl:element> <!-- ol -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:element name="p">
            <xsl:element name="span">
                <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
                <xsl:text>NOTE 1</xsl:text>
            </xsl:element> <!-- span -->
          <xsl:text> Type and access type designations shown for each node in this section are solely informational, and are not part of the valid XML encoding for an X3D scene. </xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>

    <!-- Loop over elements, for each detailed page entry -->
    <xsl:for-each select="//xs:schema/xs:element[(*//xs:extension/@base!='X3DStatement') or (not (*//xs:extension/@base))]">
      <xsl:sort select="translate(@name,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')" order="ascending"/>
            
      <xsl:variable name="nodeName" select="@name"/>
      <xsl:variable name="nodeType">
	<xsl:value-of select="xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="parentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="grandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
     <xsl:variable name="greatGrandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="greatGreatGrandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="attributeNodeList" select="
		      //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attribute
		    | //xs:schema/xs:complexType[@name=$nodeType]/xs:attribute
		    | xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
		    | xs:complexType/xs:attribute
            | //xs:schema/xs:attributeGroup[@name='globalAttributes'         ]/xs:attribute">
      </xsl:variable>
      <xsl:variable name="elementNodeList">
        <!-- choose only picks nearest one, rather than select which picks all -->
        <xsl:choose>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$nodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
        </xsl:choose>
      </xsl:variable>
      <xsl:variable name="extensionName"   select="*//xs:extension/@base"/>
      <xsl:variable name="restrictionName" select="*//xs:restriction/@base"/>
      <xsl:variable name="contentModelGroups" select="xs:complexType//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                       | //xs:schema/xs:complexType[@name=$nodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                 | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
            | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
       | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
  | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]"/>
<!--  <xsl:message>
	<xsl:value-of select="$nodeName"/>
        <xsl:text> found </xsl:text>
        <xsl:value-of select="count($contentModelGroups)"/>
        <xsl:text> groups &#8212; </xsl:text>
        <xsl:value-of select="$contentModelGroups/@ref"/>
      </xsl:message> -->

      <xsl:variable name='contentModelElements' select=".//xs:complexType//xs:element[@ref]
                            | //xs:schema/xs:complexType[@name=$nodeType]//xs:element[@ref]
                      | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:element[@ref]
                 | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:element[@ref]
            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:element[@ref]
       | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:element[@ref]"/>
      <xsl:variable name='hasCDATA' select="(@name='Script') or (@name='ShaderPart') or (@name='ShaderProgram')"/>
      <xsl:variable name='hasContentModel' select="((count($contentModelGroups) + count ($contentModelElements)) gt 0) or $hasCDATA"/>
                
<!--  <xsl:message>
	<xsl:value-of select="$nodeName"/>
        <xsl:text> node &#8212; hasCDATA: </xsl:text>
        <xsl:value-of select="$hasCDATA"/>
        <xsl:text> hasContentModel: </xsl:text>
        <xsl:value-of select="$hasContentModel"/>
      </xsl:message> -->

      <!-- Additional error checks -->

      <xsl:variable name="containerFieldFound">
	<xsl:call-template name="includes-containerField">
	  <xsl:with-param name="inputAttributeNodeList" select="$attributeNodeList"/>
	</xsl:call-template>
      </xsl:variable>
					
      <xsl:if test="($containerFieldFound='false' and $nodeName!='field' and $nodeName!='fieldValue' and $nodeName!='unit')">
        <xsl:message>
          <xsl:text>*** [Error]   </xsl:text>
          <xsl:value-of select="$nodeName"/>
          <xsl:text> containerField definition not found</xsl:text>
        </xsl:message>
      </xsl:if>
					
      <xsl:if test="not(//xs:group[contains(@name,'ContentModel')]//xs:element[@ref=$nodeName]) and 
                    not(//xs:element[@name]//xs:element[@ref=$nodeName]) and
                    not(//xs:complexType/xs:complexContent//xs:element[@ref=$nodeName]) and
                    not($nodeName = 'X3D')"> 
        <xsl:message>
          <xsl:text>*** [Error]   </xsl:text>
          <xsl:value-of select="$nodeName"/>
          <xsl:text> is not contained in any ContentModel or by any other elements</xsl:text>
        </xsl:message>
      </xsl:if>
                
      <xsl:element name="h2">
	<!-- html bookmark for node -->
	<xsl:element name="a">
	  <xsl:attribute name="name">
	    <xsl:value-of select="@name"/>
	  </xsl:attribute>
	  <!-- paragraph number -->
	  <xsl:element name="b">
	    <xsl:text>6.2.</xsl:text>
	    <xsl:value-of select="position()"/>
	    <xsl:text>&#160;&#160;</xsl:text>
	    <xsl:value-of select="@name"/>
	  </xsl:element> <!-- b -->
	</xsl:element> <!-- a -->
      </xsl:element> <!-- h2 -->
      <xsl:text>&#10;</xsl:text>

      <xsl:element name="div">
	<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>

	<!-- main table of node characteristics -->
	<xsl:element name="table">
	  <xsl:attribute name="summary">
	    <xsl:value-of select="@name"/>
	    <xsl:text> node characteristics</xsl:text>
	  </xsl:attribute>
	  <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	  <xsl:element name="tbody">

            <!--  header is included -->
	    <xsl:element name="tr">
	      <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	      <xsl:element name="th">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:text>Node, attributes, fields, default&#160;values</xsl:text>
                <xsl:if test="$hasContentModel">
		   <xsl:text>, content&#160;model</xsl:text>
		</xsl:if>
	      </xsl:element> <!-- th -->
	      <xsl:element name="th">
		<xsl:text>Type</xsl:text>
	      </xsl:element> <!-- th -->
	      <xsl:element name="th">
		<xsl:text>Access type</xsl:text>
	      </xsl:element> <!-- th -->
	<!--  <xsl:element name="th">
		<xsl:text>Derives from</xsl:text>
	      </xsl:element> -->
	    </xsl:element> <!-- tr -->

	    <!-- second  row:  element (node) name -->
	    <xsl:element name="tr">
	      <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	      <!-- first column:  node name -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>node1</xsl:text></xsl:attribute>					
		<xsl:element name="b">
		  <xsl:text>&lt;</xsl:text>
		  <xsl:value-of select="@name"/>
		</xsl:element> <!-- b -->
	      </xsl:element> <!-- td -->
	      <!-- 2 empty columns in node row -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:text>&#160;</xsl:text>
	      </xsl:element> <!-- td -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:text>&#160;</xsl:text>
	      </xsl:element> <!-- td -->
	      <!-- node type(s) not used in final spec version
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:if test="$nodeType!=''">
		  <xsl:text> : </xsl:text>
		  <xsl:value-of select="$nodeType"/>
		</xsl:if>
		<xsl:if test="//xs:schema/xs:complexType[@name=$nodeType]
							and $nodeType!='X3dNode'
							and $parentNodeType!=''">
		  <xsl:text> : </xsl:text>
		  <xsl:value-of select="$parentNodeType"/>
		</xsl:if>
		<xsl:if test="//xs:schema/xs:complexType[@name=$parentNodeType]
							and $nodeType!='X3dNode'
							and $parentNodeType!='X3dNode'
							and $grandParentNodeType!=''">
		  <xsl:text> : </xsl:text>
		  <xsl:value-of select="$grandParentNodeType"/>
		</xsl:if>
		<xsl:if test="//xs:schema/xs:complexType[@name=$grandParentNodeType]
							and $nodeType!='X3dNode'
							and $parentNodeType!='X3dNode'
							and $grandParentNodeType!='X3dNode'
							and $greatGrandParentNodeType!=''">
		  <xsl:text> : </xsl:text>
		  <xsl:value-of select="$greatGrandParentNodeType"/>
		</xsl:if>
		<xsl:if test="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]
							and $nodeType!='X3dNode'
							and $parentNodeType!='X3dNode'
							and $grandParentNodeType!='X3dNode'
							and $greatGrandParentNodeType!='X3dNode'
							and $greatGreatGrandParentNodeType!=''">
		  <xsl:text> : </xsl:text>
		  <xsl:value-of select="$greatGreatGrandParentNodeType"/>
		</xsl:if>
		<xsl:if test="xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute[@name='additionalInterface']">
		  <xsl:text>, </xsl:text>
		  <xsl:value-of select="xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute[@name='additionalInterface']/@fixed"/>
		</xsl:if>
	      </xsl:element>
			-->
	    </xsl:element> <!-- tr -->

	    <!-- third row:  detailed attributes -->
	    <xsl:element name="tr">
	      <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	      <!-- first column:  copyable attribute names, defaults -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>node1</xsl:text></xsl:attribute>
		<xsl:element name="div">
		  <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		  <xsl:text>DEF=""</xsl:text>
		  <xsl:element name="br"/>
		  <xsl:text>&#10;</xsl:text>
		  <xsl:text>USE=""</xsl:text>
		  <!-- Loop over attributes -->
		  <xsl:for-each select="$attributeNodeList">
                    <xsl:sort select="@name[. ='class']"/>
                    <xsl:sort select="@name[. ='containerField']"/>
                    <xsl:sort select="@name[.!='containerField' and .!='class']"/>
                    <xsl:if test="not(starts-with(@name,'additionalInterface'))">
                      <xsl:element name="br"/>
                      <xsl:text>&#10;</xsl:text>
                      <xsl:value-of select="@name"/>
                      <xsl:variable name="startQuotationType">
                        <xsl:choose>
                          <xsl:when test="@type='MFString'">
                            <xsl:text>' </xsl:text>
                          </xsl:when>
                          <xsl:otherwise>
                            <xsl:text>"</xsl:text>
                          </xsl:otherwise>
                        </xsl:choose>
                      </xsl:variable>
                      <xsl:variable name="endQuotationType">
                        <xsl:choose>
                          <xsl:when test="@type='MFString'">
                            <xsl:text> '</xsl:text>
                          </xsl:when>
                          <xsl:otherwise>
                            <xsl:text>"</xsl:text>
                          </xsl:otherwise>
                        </xsl:choose>
                      </xsl:variable>
		      <xsl:text>=</xsl:text>
		      <xsl:value-of select="$startQuotationType"/>
                      <!-- default xor fixed value -->
                      <xsl:choose>
                        <xsl:when test="@name='DEF' or @name='USE'">
                          <!-- no output, DEF/USE handled above, don't care here about default or fixed -->
                        </xsl:when>
                        <!-- TODO fix: override schema inheritance error with proper containerField value -->
                        <xsl:when test="($nodeName='AudioClip') and (@name='containerField')">
                          <xsl:text>source</xsl:text>
                        </xsl:when>
                        <!-- TODO fix: override schema inheritance error with proper containerField value -->
                        <xsl:when test="($nodeName='MovieTexture') and (@name='containerField')">
                          <xsl:text>texture</xsl:text>
                        </xsl:when>
                        <xsl:when test="@default">
                          <xsl:value-of select="@default"/>
                        </xsl:when>
                        <xsl:when test="@fixed">
                          <xsl:value-of select="@fixed"/>
                        </xsl:when>
                      </xsl:choose>
                      <xsl:value-of select="$endQuotationType"/>
                      <xsl:text>&#160;</xsl:text>
                    </xsl:if>
		  </xsl:for-each>
		  <!-- no line break here, to maintain page spacing -->
		  <!--	debug
		  <xsl:value-of select="local-name()"/>
		  <xsl:text> </xsl:text>
		  <xsl:value-of select="@name"/>
		  <xsl:text> nodeType=</xsl:text>
		  <xsl:value-of select="$nodeType"/> -->
		  <xsl:text>&#10;</xsl:text>
		  <xsl:element name="br"/><!-- dick's break -->
		  <xsl:text>&#10;</xsl:text>
		  <!-- properly finish opening tag before content model (if any) -->
		  <xsl:choose>
                    <xsl:when test="$hasContentModel">
		      <xsl:element name="b">
			<xsl:text>&gt;</xsl:text>
		      </xsl:element> <!-- b -->
		      <xsl:text>&#10;</xsl:text>
		    </xsl:when>
		    <xsl:otherwise>
		      <xsl:element name="b">
			<xsl:text>/&gt;</xsl:text>
		      </xsl:element> <!-- b -->
		    </xsl:otherwise>
		  </xsl:choose>
		  <xsl:text>&#10;</xsl:text>
		</xsl:element> <!-- div -->
		<xsl:text>&#10;</xsl:text>

		<!-- show content model:  contained node definitions -->
                <xsl:if test="not((count ($contentModelElements)=1) and ($contentModelElements[1]/@ref='ProtoInstance'))">
                  <xsl:for-each select='$contentModelElements'>
                    <xsl:variable name="contentModelElementName" select="@ref"/>
                    <xsl:variable name="isStatement" select="//xs:schema/xs:element[@name=$contentModelElementName]//xs:extension[(@base='X3DStatement')]"/>
                    <xsl:variable name="currentPosition" select="position()"/>
            <!--    <xsl:message>
                      <xsl:text>[Found child content node] </xsl:text>
                      <xsl:value-of select="$nodeName"/>
                      <xsl:text> </xsl:text>
                      <xsl:value-of select="$contentModelElementName"/>
                    </xsl:message> -->
		    <!-- avoid repeats -->
                    <xsl:variable name="indexPositions" select="index-of($contentModelElements/@ref,$contentModelElementName)"/>
		    <xsl:if test="$indexPositions[1]=$currentPosition">
                      <!-- html bookmarks -->
                      <xsl:text>&#160;&#160;&#160;&lt;</xsl:text>
                      <xsl:element name="a">
                        <xsl:attribute name="href">
                          <xsl:choose>
                              <xsl:when test="$isStatement">
                                <xsl:text>EncodingOfStatements.html#</xsl:text>
                              </xsl:when>
                              <xsl:otherwise>
                                <xsl:text>#</xsl:text>
                              </xsl:otherwise>      
                          </xsl:choose>
                          <xsl:value-of select="$contentModelElementName"/>
                        </xsl:attribute>
                        <xsl:value-of select="$contentModelElementName"/>
                      </xsl:element> <!-- a -->
                      <xsl:text>&#160;/&gt;</xsl:text>
                      <xsl:text>&#10;</xsl:text>
                      <xsl:element name="br"/>
                      <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                  </xsl:for-each>
                </xsl:if>
                <!-- show content model:  group type -->
                <xsl:for-each select="$contentModelGroups">
                  <xsl:variable name="contentModelGroupName" select="@ref"/>
		  <!-- avoid repeats -->
                  <xsl:variable name="currentPosition" select="position()"/>
                  <xsl:variable name="indexPositions" select="index-of($contentModelGroups/@ref,$contentModelGroupName)"/>
		  <xsl:if test="$indexPositions[1]=$currentPosition">
                    <!-- Handle problem when multiple space-separated child content models exist, e.g. BlendedVolumeStyle -->
                    <xsl:variable name="spacesCount" select="string-length(          normalize-space($contentModelGroupName)) -
                                                             string-length(translate(normalize-space($contentModelGroupName),' ',''))"/>
            <!--    <xsl:message>
                      <xsl:text>Node </xsl:text>
                      <xsl:value-of select="$nodeName"/>
                      <xsl:text> has </xsl:text>
                      <xsl:value-of select="$spacesCount"/>
                      <xsl:text> spaces in </xsl:text>
                      <xsl:value-of select="$contentModelGroupName"/>
                    </xsl:message> -->
                    <xsl:choose>
                      <xsl:when test="not(contains($contentModelGroupName,' '))">
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="$contentModelGroupName"/>
                        </xsl:call-template>
                      </xsl:when>
                      <xsl:when test="$spacesCount = 1">
                <!--    <xsl:text>foundtwo</xsl:text> -->
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-before($contentModelGroupName,' ')"/>
                        </xsl:call-template>
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-after($contentModelGroupName,' ')"/>
                        </xsl:call-template>
                      </xsl:when>
                      <xsl:when test="$spacesCount = 2">
                <!--    <xsl:text>foundthree</xsl:text> -->
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-before($contentModelGroupName,' ')"/>
                        </xsl:call-template>
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-before(substring-after($contentModelGroupName,' '),' ')"/>
                        </xsl:call-template>
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-after(substring-after($contentModelGroupName,' '),' ')"/>
                        </xsl:call-template>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:message>Found multiple-instance content model {$spacesCount}</xsl:message>
                      </xsl:otherwise>
                    </xsl:choose>
		    <xsl:text>&#10;</xsl:text>
		  </xsl:if>
		</xsl:for-each>
		<!-- special cases -->
                <!-- TODO: Find a way to incorporate cases with specific node types into the Schema -->
		<xsl:if test="@name='Collision'">
		  <xsl:text>&#10;</xsl:text>
		  <xsl:text>&#160;&#160;&#160;&lt;!--&#160;Collision can also have a single X3DChildNode with containerField='proxy'&#160;--&gt;</xsl:text>
		  <xsl:text>&#10;</xsl:text>
		  <xsl:element name="br"/>
		  <xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="@name='Contact'">
		  <xsl:text>&#10;</xsl:text>
                  <xsl:text>&#160;&#160;&#160;&lt;!--&#160;Contact can contain a pair of RigidBody nodes, plus up to two nodes which may be either CollidableOffset or CollidableShape&#160;--&gt;</xsl:text>
		  <xsl:text>&#10;</xsl:text>
		  <xsl:element name="br"/>
		  <xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="@name='MovieTexture'">
		  <xsl:text>&#10;</xsl:text>
                  <xsl:text>&#160;&#160;&#160;&lt;!--&#160;MovieTexture has containField='texture' when parent is an Appearance node, or else containField='source' when parent is a Sound node&#160;--&gt;</xsl:text>
		  <xsl:text>&#10;</xsl:text>
		  <xsl:element name="br"/>
		  <xsl:text>&#10;</xsl:text>
		</xsl:if>
                <xsl:if test="$hasCDATA">
		  <xsl:text>&#10;</xsl:text>
                  <xsl:text>&#160;&#160;&#160;&lt;![CDATA[</xsl:text>
		  <xsl:element name="br"/>
                  <xsl:if test="(@name='Script')">
                    <xsl:text>&#10;&#160;&#160;&#160;&#160;&#160;&#160;ecmascript:&#10;</xsl:text>
                    <xsl:element name="br"/>
                    <xsl:text>&#10;&#160;&#160;&#160;&#160;&#160;&#160;// contained script code here (if any)&#10;</xsl:text>
                    <xsl:element name="br"/>
                  </xsl:if>
                  <xsl:if test="(@name!='Script')">
                    <xsl:text>&#10;&#160;&#160;&#160;&#160;&#160;&#160;// contained shader code here (if any)&#10;</xsl:text>
                    <xsl:element name="br"/>
                  </xsl:if>
                  <xsl:text>&#10;&#160;&#160;&#160;]]&gt;&#10;</xsl:text>
		  <xsl:element name="br"/>
		  <xsl:text>&#10;</xsl:text>
		</xsl:if>

		<!-- closing element -->
                <xsl:if test="$hasContentModel">
		  <xsl:element name="b">
		  <xsl:text>&lt;/</xsl:text>
		  <xsl:value-of select="@name"/>
		  <xsl:text>&gt;</xsl:text>
		  </xsl:element> <!-- b -->
		  <xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:text>&#10;</xsl:text>
	      </xsl:element> <!-- td -->
	      <xsl:text>&#10;</xsl:text>

	      <!--  second column: field (attribute) types -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:text>&#10;</xsl:text>
		<xsl:text>ID</xsl:text>
		<xsl:element name="br"/>
		<xsl:text>&#10;</xsl:text>
		<xsl:text>IDREF</xsl:text>
		<xsl:element name="br"/>
		<xsl:text>&#10;</xsl:text>
		<xsl:for-each select="$attributeNodeList">
		  <xsl:sort select="@name[. ='class']"/>
		  <xsl:sort select="@name[. ='containerField']"/>
		  <xsl:sort select="@name[.!='containerField' and .!='class']"/>
		  <xsl:if test="not(starts-with(@name,'additionalInterface'))">
	    <!--    <xsl:if test="not(@name='additionalInterface') and not(@name='isActive') and not(@name='isOver') and not(@name='isFilled') and not(@name='isLoaded') and not(@name='loadTime') and not(@name='Progress') and not(starts-with (@name,'set_')) and not(contains (@name,'_changed'))"> -->
		    <!-- promote schema-constrained types to native X3D types -->
		    <xsl:variable name="type" select="@type"/>
		    <xsl:variable name="constrainedTypeParent" select="//xs:schema/xs:simpleType[@name=$type]/xs:restriction/@base"/>
		    <xsl:variable name="constrainedTypeGrandParent" select="//xs:schema/xs:simpleType[@name=$constrainedTypeParent]/xs:restriction/@base"/>
	    <!--	debug
		    <xsl:if test="$constrainedTypeParent">
		      <xsl:text>@type=</xsl:text>
		      <xsl:value-of select="@type"/>
		      <xsl:text> $constrainedTypeParent=</xsl:text>
		      <xsl:value-of select="$constrainedTypeParent"/>
		      <xsl:text> </xsl:text>
		    </xsl:if>
		    <xsl:if test="$constrainedTypeGrandParent">
		      <xsl:text>$constrainedTypeGrandParent=</xsl:text>
		      <xsl:value-of select="$constrainedTypeGrandParent"/>
		      <xsl:text> </xsl:text>
		    </xsl:if>
				-->
		    <xsl:variable name="X3dType">
		      <xsl:choose>
			<xsl:when test="starts-with(@type,'SF') or starts-with(@type,'MF')">
			  <xsl:value-of select="@type"/>
			</xsl:when>
			<xsl:when test="starts-with(xs:simpleType/xs:restriction/@base,'SF') or starts-with(xs:simpleType/xs:restriction/@base,'MF')">
			  <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
			</xsl:when>
			<xsl:when test="starts-with($constrainedTypeParent,'SF') or starts-with($constrainedTypeParent,'MF')">
			  <xsl:value-of select="$constrainedTypeParent"/>
			</xsl:when>
			<xsl:when test="$constrainedTypeParent">
			  <xsl:choose>
			    <xsl:when test="($constrainedTypeParent='xs:token')">
			      <xsl:text>SFString</xsl:text>
			    </xsl:when>
			    <xsl:when test="starts-with($constrainedTypeParent,'xs:')">
			      <xsl:value-of select="substring-after($constrainedTypeParent,'xs:')"/>
			    </xsl:when>
			    <xsl:otherwise>
			      <xsl:value-of select="$constrainedTypeParent"/>
			    </xsl:otherwise>
			  </xsl:choose>
			</xsl:when>
			<xsl:when test="$constrainedTypeGrandParent">
			  <xsl:choose>
			    <xsl:when test="($constrainedTypeGrandParent='xs:token')">
			      <xsl:text>SFString</xsl:text>
			    </xsl:when>
			    <xsl:when test="starts-with($constrainedTypeGrandParent,'xs:')">
			      <xsl:value-of select="substring-after($constrainedTypeGrandParent,'xs:')"/>
			    </xsl:when>
			    <xsl:otherwise>
			      <xsl:value-of select="$constrainedTypeGrandParent"/>
			    </xsl:otherwise>
			  </xsl:choose>
			</xsl:when>
			<xsl:otherwise>
			  <xsl:choose>
			    <xsl:when test="starts-with(@type,'xs:')">
			      <xsl:value-of select="substring-after(@type,'xs:')"/>
			    </xsl:when>
			    <xsl:otherwise>
			      <xsl:value-of select="@type"/>
			    </xsl:otherwise>
			  </xsl:choose>
			</xsl:otherwise>
		      </xsl:choose>
		    </xsl:variable>
		    <xsl:value-of select="$X3dType"/>
		    <xsl:text>&#160;</xsl:text>
		    <xsl:element name="br"/>
		    <xsl:text>&#10;</xsl:text>
		  </xsl:if>
		</xsl:for-each>
	      </xsl:element> <!-- td -->
	      <!-- third column:  accessType values -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<!-- skip lines for DEF, USE -->
		<xsl:text>&#10;</xsl:text>
		<xsl:element name="br"/>
		<xsl:element name="br"/>
		<xsl:text>&#10;</xsl:text>
		<xsl:for-each select="$attributeNodeList">
		  <xsl:sort select="@name[. ='class']"/>
		  <xsl:sort select="@name[. ='containerField']"/>
		  <xsl:sort select="@name[.!='containerField' and .!='class']"/>
		  <xsl:variable name="attributeName" select="@name"/>
		  <xsl:choose>
		    <!-- first ignore non-field attributes -->
		    <xsl:when test="(@name='DEF' or @name='USE' or @name='containerField')">
		      <!-- no action required -->
		    </xsl:when>
		    <!-- next ignore non-node elements TODO: Can this test (and the similar occurrences above) be removed? -->
		    <xsl:when test="($nodeName='field' or $nodeName='fieldValue' or $nodeName='unit')">
		      <!-- no action required -->
		    </xsl:when>
  		    <!-- next handle special case accessTypes TODO: Add a listing of special cases to the Schema and then just check the list here -->
  		    <xsl:when test="(($nodeName='GeoCoordinate') and ($attributeName='point')) or
				    (($nodeName='Extrusion') and ($attributeName='scale' or $attributeName='orientation')) or
				    (($nodeName='FloatVertexAttribute') and ($attributeName='name')) or
				    (($nodeName='Matrix3VertexAttribute') and ($attributeName='name')) or
				    (($nodeName='Matrix4VertexAttribute') and ($attributeName='name')) or
				    (($nodeName='X3DVertexAttributeNode') and ($attributeName='name')) or
                                    (($nodeName='Box' or $nodeName='FontStyle' or $nodeName='Rectangle2D' or $nodeName='GeneratedCubeMapTexture') and ($attributeName='size')) or
				    (($nodeName='ShaderPart' or $nodeName='ShaderProgram') and ($attributeName='type')) or
				    (($nodeName='WorldInfo') and ($attributeName='info'))">
		      <xsl:text>[initializeOnly]</xsl:text>
		    </xsl:when>
		    <xsl:when test="(($nodeName='ConeEmitter') and ($attributeName='angle')) or
				    (($nodeName='GeoElevationGrid') and ($attributeName='yScale')) or
				    (($nodeName='HAnimDisplacer') and ($attributeName='coordIndex')) or
                                    (($nodeName='HAnimSegment' or $nodeName='RigidBody') and ($attributeName='mass')) or
                                    (($nodeName='LayerSet') and ($attributeName='order')) or
				    ( contains($nodeName,'Light') and ($attributeName='radius')) or
				    (($nodeName='NurbsPositionInterpolator') and ($attributeName='order')) or
				    ($attributeName='name') or
				    ($attributeName='type') or
				    ($attributeName='info')">
		      <xsl:text>[inputOutput]</xsl:text>
		    </xsl:when>
		    <!-- four tables of enumerations in X3D schema matches most cases -->
		    <xsl:when test="//xs:simpleType[@name='inputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">
		      <xsl:text>[inputOnly]</xsl:text>
		    </xsl:when>
		    <xsl:when test="//xs:simpleType[@name='outputOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">
		      <xsl:text>[outputOnly]</xsl:text>
		    </xsl:when>
		    <xsl:when test="//xs:simpleType[@name='inputOutputAccessTypes']//xs:enumeration[@value=$attributeName]">
		      <xsl:text>[inputOutput]</xsl:text>
		    </xsl:when>
		    <xsl:when test="//xs:simpleType[@name='initializeOnlyAccessTypes']//xs:enumeration[@value=$attributeName]">
		      <xsl:text>[initializeOnly]</xsl:text>
		    </xsl:when>
		    <xsl:when test="($nodeName = 'EXPORT') or ($nodeName = 'IMPORT') or ($nodeName = 'ROUTE') or ($nodeName = 'X3D') or contains($nodeName, 'Proto') or
                                    ($nodeName = 'component') or ($nodeName = 'IS') or ($nodeName = 'connect') or ($nodeName = 'head') or ($nodeName = 'meta') or starts-with($nodeName, 'field')">
		      <!-- no accessType for statement attributes -->
		    </xsl:when>
		    <xsl:otherwise>
		      <xsl:message>
			<xsl:text>*** [Error]   </xsl:text>
			<xsl:value-of select="$nodeName"/>
			<xsl:text> </xsl:text>
			<xsl:value-of select="$attributeName"/>
			<xsl:text> is not listed among accessType enumerations in X3D schema</xsl:text>
		      </xsl:message>
		    </xsl:otherwise>
		  </xsl:choose>
		  <xsl:if test="not(starts-with($attributeName,'additionalInterface'))">
		    <xsl:element name="br"/>
		    <xsl:text>&#10;</xsl:text>
		  </xsl:if>
		</xsl:for-each>
	      </xsl:element>
	      <!-- fourth column:  constraint bounds -->
	      <!-- right column:  node types not used in final spec version -->
      <!--    <xsl:element name="td"> -->
	<!--	<xsl:attribute name="valign"><xsl:text>top</xsl:text></xsl:attribute> -->
		<!-- skip lines for DEF, USE -->
	<!--	<xsl:element name="br"/> -->
	<!--	<xsl:element name="br"/> -->
	<!--	<xsl:for-each select="$attributeNodeList"> -->
	  <!--	  <xsl:sort select="@name[. ='class']"/> -->
	  <!--	  <xsl:sort select="@name[. ='containerField']"/> -->
	  <!--	  <xsl:sort select="@name[.!='containerField' and .!='class']"/> -->
	  <!--	  <xsl:variable name="attributeName" select="@name"/> -->
	  <!--	  <xsl:choose> -->
		    <!-- multiple interfaces -->
	    <!--    <xsl:when test="//xs:element[@name=$nodeName]//xs:attribute[@name=$attributeName]/preceding-sibling::*[@name='additionalInterface']"> -->
	      <!--    <xsl:text> : </xsl:text> -->
		      <!-- can we figure out which, if more than one? -->
	      <!--    <xsl:variable name="additionalInterface" select="translate(//xs:element[@name=$nodeName]//xs:attribute[@name=$attributeName]/preceding-sibling::*[@name='additionalInterface']/@fixed,' ',',')"/> -->
	      <!--    <xsl:choose> -->
		<!--    <xsl:when test="not(contains($additionalInterface,','))"> -->
		  <!--	  <xsl:value-of select="$additionalInterface"/> -->
		<!--	</xsl:when> -->
		<!--	<xsl:when test="starts-with($attributeName,'bbox') and contains($additionalInterface,'X3DBoundedObject')"> -->
		  <!--	  <xsl:text>X3DBoundedObject</xsl:text> -->
		<!--	</xsl:when> -->
		<!--	<xsl:when test="($attributeName='enabled' or $attributeName='isActive') and contains($additionalInterface,'X3DEnvironmentalSensorNode')"> -->
		  <!--	  <xsl:text>X3DEnvironmentalSensorNode</xsl:text> -->
		<!--	</xsl:when> -->
		<!--	<xsl:when test="($attributeName='url') and contains($additionalInterface,'X3DUrlObject')"> -->
		  <!--	  <xsl:text>X3DUrlObject</xsl:text> -->
		<!--	</xsl:when>  -->
		<!--	<xsl:otherwise> -->
		  <!--	  <xsl:value-of select="$additionalInterface"/> -->
		<!--	</xsl:otherwise>  -->
	      <!--    </xsl:choose> -->
	      <!--    <xsl:text>&#10;</xsl:text> -->
	    <!--    </xsl:when> -->
		    <!-- part of node definition, no separate interface, no output -->
	    <!--    <xsl:when test="//xs:element[@name=$nodeName]//xs:attribute[@name=$attributeName]"> -->
	    <!--    </xsl:when> -->
		    <!-- part of nodeType interface, possibly *parent nodeType interface -->
	    <!--    <xsl:when test="//xs:schema/xs:complexType[@name=$nodeType]//xs:attribute[@name=$attributeName]"> -->
	      <!--    <xsl:text> : </xsl:text> -->
	      <!--    <xsl:value-of select="$nodeType"/> -->
	    <!--    </xsl:when> -->
	    <!--    <xsl:when test="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:attribute[@name=$attributeName]"> -->
	      <!--    <xsl:text> : </xsl:text> -->
	      <!--    <xsl:value-of select="$nodeType"/> -->
	    <!--    </xsl:when> -->
	    <!--    <xsl:when test="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:attribute[@name=$attributeName]"> -->
	      <!--    <xsl:text> : </xsl:text> -->
	      <!--    <xsl:value-of select="$nodeType"/> -->
	    <!--    </xsl:when> -->
	    <!--    <xsl:when test="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:attribute[@name=$attributeName]"> -->
	      <!--    <xsl:text> : </xsl:text> -->
	      <!--    <xsl:value-of select="$parentNodeType"/> -->
	    <!--    </xsl:when> -->
	    <!--    <xsl:when test="//xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:attribute[@name=$attributeName]"> -->
	      <!--    <xsl:text> : </xsl:text> -->
	      <!--    <xsl:value-of select="$grandParentNodeType"/> -->
	    <!--    </xsl:when> -->
	    <!--    <xsl:when test="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:attribute[@name=$attributeName]"> -->
	      <!--    <xsl:text> : </xsl:text> -->
	      <!--    <xsl:value-of select="$greatGrandParentNodeType"/> -->
	    <!--    </xsl:when> -->
	    <!--    <xsl:when test="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:attribute[@name=$attributeName]"> -->
	      <!--    <xsl:text> : </xsl:text> -->
	      <!--    <xsl:value-of select="$greatGreatGrandParentNodeType"/> -->
	    <!--    </xsl:when> -->
	  <!--	  </xsl:choose> -->
	  <!--    <xsl:if test="$attributeName!='additionalInterface'"> -->
	    <!--    <xsl:element name="br"/> -->
	    <!--    <xsl:text>&#10;</xsl:text> -->
	  <!--    </xsl:if> -->
	<!--	</xsl:for-each> -->
		<!-- add derivation information for content model, if any -->
	<!--    <xsl:choose> -->
	  <!--    <xsl:when test="*//xs:group"> -->
		    <!-- local -->
	  <!--    </xsl:when> -->
	  <!--    <xsl:when test="//xs:complexType[@name=$nodeType]/xs:complexContent/xs:extension/xs:group/@ref"> -->
	    <!--    <xsl:text> : </xsl:text> -->
	    <!--    <xsl:value-of select="$nodeType"/> -->
	    <!--    <xsl:element name="br"/> -->
	    <!--    <xsl:text>&#10;</xsl:text> -->
	  <!--    </xsl:when> -->
	  <!--    <xsl:otherwise> -->
		    <!-- nothing -->
	  <!--    </xsl:otherwise> -->
	<!--	</xsl:choose> -->
      <!--    </xsl:element> --> <!-- td -->
	    </xsl:element> <!-- tr -->
          </xsl:element> <!-- tbody -->
        </xsl:element> <!-- table -->
      </xsl:element> <!-- div CenterDiv -->
      <xsl:element name="br"/>
      <xsl:text>&#10;</xsl:text>
                                            
      <!-- divider X3D separator bar that links back to Topics table -->
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>to Topics</xsl:text></xsl:attribute>
        <xsl:element name="img">
          <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
          <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
          <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
        </xsl:element>  <!-- img -->
        <xsl:text>&#10;</xsl:text>
      </xsl:element> <!-- a-->
      <xsl:text>&#10;</xsl:text>

    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>

    <!-- now append index entries for the pertinent content models -->

    <xsl:element name="h1">
      <xsl:element name="img">
	<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
	<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
	<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
      </xsl:element> <!-- img -->
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>ContentModels</xsl:text></xsl:attribute>
	<xsl:text>6.3&#160;&#160;Content models</xsl:text>
      </xsl:element> <!-- a -->
    </xsl:element> <!-- h1-->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h2">
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>Overview</xsl:text></xsl:attribute>
	<xsl:text>6.3.1&#160;&#160;Overview</xsl:text>
      </xsl:element> <!-- a -->
    </xsl:element> <!-- h2 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
      <xsl:text>Content models are defined in the X3D XML Schema, and provide rules for what child-node elements are allowed for a given node.</xsl:text>
   </xsl:element> <!-- p -->
   <xsl:text>&#10;</xsl:text>

    <xsl:for-each select="//xs:schema/xs:group[@name=//xs:schema/xs:element[(*//xs:extension/@base!='X3DStatement') or (not (*//xs:extension/@base))]//xs:group/@ref
                                            or @name=//xs:schema/xs:complexType//xs:group/@ref[.!='ChildContentModelSceneGraphStructure']]">
      <xsl:sort select="translate(@name,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')" order="ascending"/>

      <xsl:variable name="contentModelGroupName">
	<xsl:value-of select="@name"/>
      </xsl:variable>

      <xsl:element name="h2">
	<!-- html bookmarks -->
	<xsl:element name="a">
	  <xsl:attribute name="name">
	    <xsl:value-of select="$contentModelGroupName"/>
	  </xsl:attribute>
	  <xsl:text>6.3.</xsl:text>
	  <xsl:value-of select="position()+1"/>
	  <xsl:text>&#160;&#160;</xsl:text>
	  <xsl:value-of select="$contentModelGroupName"/>
	</xsl:element> <!-- a -->
	<xsl:text>&#10;</xsl:text>
      </xsl:element> <!-- h2 -->

      <xsl:element name="p">
	<xsl:value-of select="xs:annotation/xs:appinfo/text()"/>
	<!-- workaround bug retrieving text from mixed content -->
	<xsl:if test="($contentModelGroupName='GroupingNodeContentModel')">
	  <xsl:text>Grouping nodes can contain other nodes as children, thus making up the backbone of a scene graph.</xsl:text>
	</xsl:if>
      </xsl:element> <!-- p -->
      <xsl:text>&#10;</xsl:text>

      <xsl:if test="$contentModelGroupName != 'ChildContentModelSceneGraphStructure'">
	<xsl:element name="p">
	  <xsl:text> A ProtoInstance node (with the proper node type) can be substituted for any node in this content model.</xsl:text>
	</xsl:element> <!-- p -->
	<xsl:text>&#10;</xsl:text>
      </xsl:if>

    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>

    <!-- divider X3D separator bar that links back to Topics table -->
    <xsl:element name="a">
      <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
      <xsl:attribute name="title"><xsl:text>to Topics</xsl:text></xsl:attribute>
      <xsl:element name="img">
        <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
        <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
        <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
      </xsl:element>  <!-- img -->
      <xsl:text>&#10;</xsl:text>
    </xsl:element> <!-- a-->
    <xsl:text>&#10;</xsl:text>

    <xsl:text>&#10;</xsl:text>
  </xsl:element> <!-- body -->
  <xsl:text>&#10;</xsl:text>
</xsl:element> <!-- html -->
<xsl:text>&#10;</xsl:text>
</xsl:result-document>

<!-- ===================================================================================== -->
<!-- Clause 7 Encoding of statements -->

<!-- create HTML output -->

<xsl:result-document href="{$nameX3dEncodingOfStatements}" method="html" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

<!-- <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">]]></xsl:text> -->
<!-- <xsl:text><!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "https://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"></xsl:text> -->
<!-- <xsl:text>&#10;</xsl:text> -->

<xsl:element name="html">
  <xsl:attribute name="lang"><xsl:text>en</xsl:text></xsl:attribute>
  <xsl:text>&#10;</xsl:text>
  <xsl:element name="head">
    <xsl:element name="title">
      <!-- mdash = 8212 -->
      <xsl:text disable-output-escaping="yes">X3D XML encoding &amp;#8212; ISO/IEC 19776-1:202x &amp;#8212; 7 Encoding of statements</xsl:text>
    </xsl:element>
    <xsl:element name="link">
      <xsl:attribute name="rel"><xsl:text>stylesheet</xsl:text></xsl:attribute>
      <xsl:attribute name="href"><xsl:text>X3D.css</xsl:text></xsl:attribute>
      <xsl:attribute name="type"><xsl:text>text/css</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="http-equiv"><xsl:text>Content-Type</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>text/html; charset=utf-8</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>created</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
	<xsl:value-of select="$todaysDate"/>
      </xsl:attribute>
    </xsl:element>
        
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>creator</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>Don Brutzman, Dick Puk, Leonard Daly, Roy Walmsley</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>description</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>This stylesheet uses the latest X3D XML Schema to autogenerate the following specification document: ISO/IEC 19776-1:2015 Extensible 3D (X3D) encodings Part 1 XML encoding, Clause 7 Encoding of statements</xsl:text>
      </xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/EncodingOfStatements.html</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>version</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:value-of select="$schemaVersionNumber"/></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>identifier</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>https://www.web3d.org/files/specifications/19776-1/V</xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
        <xsl:text>/Part01/EncodingOfStatements.html</xsl:text>
      </xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/standards/active</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>https://www.web3d.org/specifications/x3d-</xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
        <xsl:text>.xsd</xsl:text>
      </xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/specifications/x3d-schema-changelog.txt</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>reference</xsl:text></xsl:attribute>
      <xsl:attribute name="content">
        <xsl:text>https://x3d.svn.sourceforge.net/viewvc/x3d/www.web3d.org/specifications/x3d-</xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
        <xsl:text>.xsd?view=log</xsl:text>
      </xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt</xsl:text></xsl:attribute>
    </xsl:element>
    <xsl:element name="meta">
      <xsl:attribute name="name"><xsl:text>generator</xsl:text></xsl:attribute>
      <xsl:attribute name="content"><xsl:text>https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt?view=log</xsl:text></xsl:attribute>
    </xsl:element>

  </xsl:element> <!-- head -->
  <xsl:text>&#10;</xsl:text>
      
  <xsl:element name="body">
    <xsl:attribute name="style"><xsl:text>background-position: top center; background-attachment: fixed; background-image:url(../Images/WatermarkWorkingDraft.png);</xsl:text></xsl:attribute>
    <xsl:text>&#10;</xsl:text>
    <xsl:comment> Autogenerated encodings for each X3D structure statement follow </xsl:comment>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
      <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>X3D_XML.html</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>to index page</xsl:text></xsl:attribute>
        <xsl:text>&#10;</xsl:text>
        <xsl:element name="img">
	  <xsl:attribute name="class"><xsl:text>x3dlogo</xsl:text></xsl:attribute>
	  <xsl:attribute name="src"><xsl:text>../Images/x3d.png</xsl:text></xsl:attribute>
	  <xsl:attribute name="alt"><xsl:text>X3D logo</xsl:text></xsl:attribute>
	  <xsl:attribute name="style"><xsl:text>border-width: 0px; width: 176px; height: 88px</xsl:text></xsl:attribute>
        </xsl:element> <!-- img -->
      </xsl:element> <!-- a -->    
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
      <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="p">
	<xsl:attribute name="class"><xsl:text>HeadingPart</xsl:text></xsl:attribute>
	<xsl:text>Extensible 3D (X3D) encodings</xsl:text>
	<xsl:element name="br"/>
	<xsl:text>&#10;</xsl:text>
	<xsl:text>Part 1: Extensible Markup Language (XML) encoding</xsl:text>
      </xsl:element>
      <xsl:element name="p">
	<xsl:attribute name="class"><xsl:text>HeadingClause</xsl:text></xsl:attribute>
	<xsl:text>7 Encoding of statements</xsl:text>
      </xsl:element>
      
      <xsl:element name="p">
        <xsl:element name="span">
            <xsl:attribute name="class"><xsl:text>editorsNote</xsl:text></xsl:attribute>
            <xsl:attribute name="title"><xsl:text>editorsNote</xsl:text></xsl:attribute>
            <xsl:text>(NOTE this is an autogenerated page, produced using X3D XML Schema version 4.0)</xsl:text>
        </xsl:element>
      </xsl:element> 
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>
                     
    <!-- divider X3D separator bar that links back to Topics table -->
    <xsl:element name="a">
      <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
      <xsl:attribute name="title"><xsl:text>to Topics</xsl:text></xsl:attribute>
        <xsl:element name="img">
          <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
          <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
          <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
          <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
          <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
        </xsl:element>
    </xsl:element>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h1">
      <xsl:element name="img">
	<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
	<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
	<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
      </xsl:element>
      <xsl:text>&#10;</xsl:text>
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>Introduction</xsl:text></xsl:attribute>
	<xsl:text>7.1&#160;&#160;Introduction</xsl:text>
      </xsl:element>
    </xsl:element> <!-- h1 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h2">
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>Topics</xsl:text></xsl:attribute>
	<xsl:text>7.1.1&#160;&#160;Topics</xsl:text>
      </xsl:element>
    </xsl:element> <!-- h2 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
      <xsl:text>This clause provides a detailed specification of the XML encoding for each structure statement defined in </xsl:text>
      <xsl:text>&#10;</xsl:text>
      <xsl:element name="a">
	<xsl:attribute name="href"><xsl:text>references.html#I19775_1</xsl:text></xsl:attribute>
	<xsl:text>ISO/IEC&#160;19775-1</xsl:text>
      </xsl:element>
      <xsl:text>.</xsl:text>
      <xsl:text>&#10;</xsl:text>

      <xsl:text>The topics in this clause are listed in </xsl:text>
      <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>#t-Topics</xsl:text></xsl:attribute>
	<xsl:text>Table&#160;7.1</xsl:text>
       </xsl:element>
      <xsl:text>.</xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="div">
      <xsl:attribute name="class"><xsl:text>CenterDiv</xsl:text></xsl:attribute>
      <xsl:element name="p">
	<xsl:attribute name="class"><xsl:text>TableCaption</xsl:text></xsl:attribute>
	<xsl:element name="a">
	  <xsl:attribute name="name"><xsl:text>t-Topics</xsl:text></xsl:attribute>
	  <!-- mdash = 8212 -->
	  <xsl:text>Table 7.1 &#8212; Topics in this clause</xsl:text>
	</xsl:element>
      </xsl:element> <!-- p -->
      <xsl:text>&#10;</xsl:text>

      <!-- Loop over elements, build index -->

      <xsl:element name="table">
	<xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
	<xsl:attribute name="summary"><xsl:text>Table of contents</xsl:text></xsl:attribute>
	<xsl:element name="tr">
	  <xsl:attribute name="class"><xsl:text>topics</xsl:text></xsl:attribute>
	  <xsl:element name="td">

	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#Introduction</xsl:text></xsl:attribute>
	      <xsl:text>7.1&#160;Introduction</xsl:text>
	    </xsl:element>
	    <xsl:element name="br"/>
	    <xsl:text>&#10;&#160;&#160;</xsl:text>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
	      <xsl:text>7.1.1&#160;Topics</xsl:text>
	    </xsl:element>
	    <xsl:element name="br"/>
	    <xsl:text>&#10;&#160;&#160;</xsl:text>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#XmlEncodingDescription</xsl:text></xsl:attribute>
              <xsl:text>7.1.2&#160;XML encoding description</xsl:text>
	    </xsl:element>
	    <xsl:element name="br"/>
            <xsl:element name="br"/>
                    
            <xsl:text>&#10;</xsl:text>
	    <xsl:element name="a">
              <xsl:attribute name="href"><xsl:text>#Statements</xsl:text></xsl:attribute>
	      <xsl:text>7.2&#160;Statements</xsl:text>
	    </xsl:element>
	    <xsl:element name="br"/>
            <xsl:text>&#10;</xsl:text>

	    <xsl:for-each select="//xs:schema/xs:element[*//xs:extension/@base='X3DStatement']">
              <xsl:sort select="translate(@name,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')" order="ascending"/>
	      <xsl:text>&#160;&#160;</xsl:text>
	      <xsl:element name="a">
		<xsl:attribute name="href">
		  <xsl:text>#</xsl:text>
		  <xsl:value-of select="@name"/>
		</xsl:attribute>
		<xsl:text>7.2.</xsl:text>
		<xsl:value-of select="position()"/>
		<xsl:text>&#160;</xsl:text>
		<xsl:value-of select="@name"/>
	      </xsl:element>
              <xsl:text> </xsl:text>
	      <xsl:element name="br"/>
	      <xsl:text>&#10;</xsl:text>
            </xsl:for-each>

          </xsl:element> <!-- td -->
	  <xsl:text>&#10;</xsl:text>
        </xsl:element> <!-- tr -->
	<xsl:text>&#10;</xsl:text>
      </xsl:element> <!-- table -->
      <xsl:text>&#10;</xsl:text>
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h2">
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>XmlEncodingDescription</xsl:text></xsl:attribute>
        <xsl:text>7.1.2&#160;&#160;XML encoding description</xsl:text>
      </xsl:element>
    </xsl:element> <!-- h2 -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
      <xsl:attribute name="class">proposedDeletion</xsl:attribute>
      <xsl:text>This XML encoding is autogenerated using the </xsl:text>
      <xsl:text>&#10;</xsl:text>
      <xsl:text>XML Schema for the Extensible 3D (X3D) Graphics Specification tagset defined in </xsl:text>
      <xsl:text>&#10;</xsl:text>
      <!-- TODO: The coding below missed out the paragraph number. Fix this -->
      <xsl:element name="a">
	<xsl:attribute name="href">
          <xsl:text>Schema.html#Version</xsl:text>
          <xsl:value-of select="$schemaVersionNumber"/>
          <xsl:text>Schema</xsl:text>
        </xsl:attribute>
	<xsl:attribute name="target">SchemaAnnex</xsl:attribute>
	<xsl:text>Annex&#160;B&#160;Version&#160;</xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
	<xsl:text>&#160;Schema</xsl:text>
      </xsl:element>
      <xsl:text>.</xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>The well-formed syntax of an XML file is governed by the Extensible Markup Language (</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#XML</xsl:text></xsl:attribute>
            <xsl:text>XML</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>).</xsl:text>
    </xsl:element>  <!-- p -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>X3D nodes and statements are represented by XML elements.</xsl:text>
        <xsl:text> Content models indicate the node and statement elements that can be contained by a given statement element.</xsl:text>
        <xsl:text> The validity of these parent-child element relationships can be checked using the </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#DTD</xsl:text></xsl:attribute>
            <xsl:text>X3D DTD</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text> and </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#Schema</xsl:text></xsl:attribute>
            <xsl:text>X3D XML Schema</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>.</xsl:text>
    </xsl:element>  <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>Simple-type X3D fields (meaning other than SFNode and MFNode) are represented by </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>references.html#XML</xsl:text></xsl:attribute>
            <xsl:text>XML</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text> attributes.</xsl:text>
        <xsl:text> Field values can be validated with progressive degrees of precision and strictness using </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>DTD.html</xsl:text></xsl:attribute>
            <xsl:text>X3D DTD</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>, </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>Schema.html</xsl:text></xsl:attribute>
            <xsl:text>X3D XML Schema</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>, </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#Schematron</xsl:text></xsl:attribute>
            <xsl:text>X3D Schematron</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>, </xsl:text>
        <xsl:text> and X3D Regular Expressions (</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DREGEX</xsl:text></xsl:attribute>
            <xsl:text>regexes</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>).</xsl:text>
       <xsl:text>&#10;</xsl:text>
    </xsl:element>  <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>Content models indicate the nodes or statements that can be contained by the given statement.</xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="div">
        <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial, moved</xsl:text></xsl:attribute>
        <xsl:element name="p">
          <xsl:text>Notational conventions for this section are as follows.</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="ol">
          <xsl:attribute name="type"><xsl:text>a</xsl:text></xsl:attribute>
          <xsl:element name="li">	Each statement name is followed by a list of attributes (if any). </xsl:element>
          <xsl:element name="li">	Each attribute name is followed by the default&#160;value (if any) and type. </xsl:element>
          <xsl:element name="li">	After attributes, the content model (if any) is listed. </xsl:element>
          <xsl:element name="li">	Singleton tags or open/close tag pairs are used to complete each element, as appropriate. </xsl:element>
        </xsl:element> <!-- ol -->
        <xsl:text>&#10;</xsl:text>

      <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>Note</xsl:text></xsl:attribute>
        <xsl:text>NOTE 1&#160; Type designations shown for each statement in this section are solely informational, and are not part of the valid XML encoding for an X3D scene. </xsl:text>
      </xsl:element> <!-- p -->
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p"> Default attribute values and empty attributes are optional.</xsl:element>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="p">
        <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
          <xsl:text>NOTE 2&#160;  </xsl:text>
        </xsl:element><!-- span -->
        <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
          <xsl:text>Precise ordering is necessary for </xsl:text>
        </xsl:element><!-- span -->
      <xsl:element name="code">
          <xsl:text>&lt;IS&gt;&lt;connect/&gt;&lt;/IS&gt;</xsl:text>
      </xsl:element>
      <xsl:text> connections, which are only allowed inside a ProtoDeclare body, </xsl:text>
      <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
          <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
          <xsl:text>and placed</xsl:text>
      </xsl:element>
      <xsl:text> </xsl:text>
      <xsl:element name="span">
          <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
          <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
          <xsl:text>are defined</xsl:text>
      </xsl:element>
      <xsl:text> prior to any contained nodes.</xsl:text>
    </xsl:element> <!-- p -->
    <xsl:text>&#10;</xsl:text>
    
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
    <xsl:element name="p">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
        <xsl:text>Note&#160; Additional information about X3D XML scene structure, allowed field values, </xsl:text>
        <xsl:text> data type restrictions, authoring hints, warnings, and errors can be found in X3D&#160;Tooltips </xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DTOOLTIPS</xsl:text></xsl:attribute>
            <xsl:text>[X3DTOOLTIPS]</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text> and X3D Unified Object Model&#160;[</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DUOM</xsl:text></xsl:attribute>
            <xsl:text>X3DUOM</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>].</xsl:text>
        <xsl:text> Validation assets are maintained in human-readable and machine-readable forms, in version control, and with corresponding documentation at [</xsl:text>
        <xsl:element name="a">
            <xsl:attribute name="href"><xsl:text>bibliography.html#X3DVALIDATION</xsl:text></xsl:attribute>
            <xsl:text>X3DVALIDATION</xsl:text>
        </xsl:element>  <!-- a -->
        <xsl:text>].</xsl:text>
    </xsl:element>  <!-- p -->
    </xsl:element>  <!-- div -->
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>

    <!-- divider X3D separator bar that links back to Topics table -->
    <xsl:element name="a">
      <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
      <xsl:attribute name="title"><xsl:text>to Topics</xsl:text></xsl:attribute>
        <xsl:element name="img">
          <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
          <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
          <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
          <xsl:attribute name="width"><xsl:text>430</xsl:text></xsl:attribute>
          <xsl:attribute name="height"><xsl:text>23</xsl:text></xsl:attribute>
        </xsl:element> <!-- img -->
    </xsl:element>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="h1">
      <xsl:element name="img">
	<xsl:attribute name="class"><xsl:text>cube</xsl:text></xsl:attribute>
	<xsl:attribute name="src"><xsl:text>../Images/cube.gif</xsl:text></xsl:attribute>
	<xsl:attribute name="alt"><xsl:text>cube</xsl:text></xsl:attribute>
      </xsl:element>
      <xsl:element name="a">
        <xsl:attribute name="name"><xsl:text>Statements</xsl:text></xsl:attribute>
	<xsl:text>7.2&#160;&#160;Statements</xsl:text>
      </xsl:element>
    </xsl:element> <!-- h1 -->
    <xsl:text>&#10;</xsl:text>
    
      <xsl:element name="div">
        <xsl:attribute name="class"><xsl:text>proposed</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>editorial, moved</xsl:text></xsl:attribute>
        <xsl:element name="p">
          <xsl:text>Notational conventions for this section are as follows.</xsl:text>
        </xsl:element> <!-- p -->
        <xsl:text>&#10;</xsl:text>

        <xsl:element name="ol">
          <xsl:attribute name="type"><xsl:text>a</xsl:text></xsl:attribute>
          <xsl:element name="li">	Each statement name is followed by a list of attributes (if any). </xsl:element>
          <xsl:element name="li">	Each attribute name is followed by the default&#160;value (if any) and type. </xsl:element>
          <xsl:element name="li">	After attributes, the content model (if any) is listed. </xsl:element>
          <xsl:element name="li">	Singleton tags or open/close tag pairs are used to complete each element, as appropriate. </xsl:element>
        </xsl:element> <!-- ol -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:element name="p">
            <xsl:element name="span">
              <xsl:attribute name="class"><xsl:text>proposedDeletion</xsl:text></xsl:attribute>
              <xsl:attribute name="title"><xsl:text>editorial</xsl:text></xsl:attribute>
              <xsl:text>NOTE 1&#160; </xsl:text>
            </xsl:element> <!-- span -->
            <xsl:text> Type designations shown for each statement in this section are solely informational, and are not part of the valid XML encoding for an X3D scene. </xsl:text>
        </xsl:element> <!-- p -->
    </xsl:element> <!-- div -->
    <xsl:text>&#10;</xsl:text>

    <xsl:for-each select="//xs:schema/xs:element[*//xs:extension/@base='X3DStatement']">
              <xsl:sort select="translate(@name,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')" order="ascending"/>
            
      <xsl:variable name="nodeName" select="@name"/>
      <xsl:variable name="nodeType">
	<xsl:value-of select="xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="parentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="grandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="greatGrandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="greatGreatGrandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="attributeNodeList" select="
	      //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attribute
	    | //xs:schema/xs:complexType[@name=$nodeType]/xs:attribute
	    | xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute
	    | xs:complexType/xs:attribute
        | //xs:schema/xs:attributeGroup[@name='globalAttributes'         ]/xs:attribute">
      </xsl:variable>
      <xsl:variable name="elementNodeList">
        <!-- choose only picks nearest one, rather than select which picks all -->
        <xsl:choose>
          <xsl:when           test="//xs:schema/xs:complexType[@name=$nodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when           test="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when           test="//xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when           test="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when           test="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
        </xsl:choose>
      </xsl:variable>
      <xsl:variable name="extensionName"   select="*//xs:extension/@base"/>
      <xsl:variable name="restrictionName" select="*//xs:restriction/@base"/>
      <xsl:variable name="contentModelGroups" select="xs:complexType//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                        | //xs:schema/xs:complexType[@name=$nodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                        | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                        | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                        | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                        | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]"/>
<!--  <xsl:message>
	<xsl:value-of select="$nodeName"/>
        <xsl:text> found </xsl:text>
        <xsl:value-of select="count($contentModelGroups)"/>
        <xsl:text> groups &#8212; </xsl:text>
        <xsl:value-of select="$contentModelGroups/@ref"/>
      </xsl:message> -->

      <xsl:variable name='contentModelElements' select=".//xs:complexType//xs:element[@ref]
                                             | //xs:schema/xs:complexType[@name=$nodeType]//xs:element[@ref]
                                             | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:element[@ref]
                                             | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:element[@ref]
                                             | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:element[@ref]
                                             | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:element[@ref]"/>
      <xsl:variable name='hasCDATA' select="(@name='Script') or (@name='ShaderPart') or (@name='ShaderProgram')"/>
      <xsl:variable name='hasContentModel' select="((count($contentModelGroups) + count ($contentModelElements)) gt 0) or $hasCDATA"/>
                
<!--  <xsl:message>
	<xsl:value-of select="$nodeName"/>
        <xsl:text> node &#8212; hasCDATA: </xsl:text>
        <xsl:value-of select="$hasCDATA"/>
        <xsl:text> hasContentModel: </xsl:text>
        <xsl:value-of select="$hasContentModel"/>
      </xsl:message> -->
      
      <!-- Additional error checks
              containerField is not included in any statements, therefore no checks are required
              Also no need to check for name being included in content models. These are statements, so won't be.
      -->

                
      <xsl:element name="h2">
	<!-- html bookmark for statement -->
	<xsl:element name="a">
	  <xsl:attribute name="name">
	    <xsl:value-of select="@name"/>
	  </xsl:attribute>
	  <!-- paragraph number -->
	  <xsl:element name="b">
	    <xsl:text>7.2.</xsl:text>
	    <xsl:value-of select="position()"/>
	    <xsl:text>&#160;&#160;</xsl:text>
	    <xsl:value-of select="@name"/>
	  </xsl:element>
	</xsl:element>
      </xsl:element> <!-- h2 -->
      <xsl:text>&#10;</xsl:text>

      <xsl:element name="div">
	<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>

	<!-- main table of statement characteristics -->
	<xsl:element name="table">
	  <xsl:attribute name="summary">
	    <xsl:value-of select="@name"/>
	    <xsl:text> statement characteristics</xsl:text>
	  </xsl:attribute>
	  <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	  <xsl:element name="tbody">

            <!--  table header row is included -->
	    <xsl:element name="tr">
	      <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	      <xsl:element name="th">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:text>Statement, attributes, default&#160;values</xsl:text>
                <xsl:if test="$hasContentModel">
		  <xsl:text>, content&#160;model</xsl:text>
		</xsl:if>
	      </xsl:element> <!-- th -->
	      <xsl:element name="th">
		<xsl:text>Type</xsl:text>
	      </xsl:element> <!-- th -->
	    </xsl:element> <!-- tr -->

	    <!-- second  row:  element (statement) name -->
	    <xsl:element name="tr">
	      <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	      <!-- first column:  statement name -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>node1</xsl:text></xsl:attribute>
		<xsl:element name="b">
		  <xsl:text>&lt;</xsl:text>
		  <xsl:value-of select="@name"/>
		</xsl:element>
	      </xsl:element> <!-- td -->
	      <!-- 1 empty column in statement row -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:text>&#160;</xsl:text>
	      </xsl:element> <!-- td-->
	    </xsl:element> <!-- tr -->

	    <!-- third row:  detailed attributes -->
	    <xsl:element name="tr">
	      <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
	      <!-- first column:  copyable attribute names, defaults -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>node1</xsl:text></xsl:attribute>
		<xsl:element name="div">
		  <xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
 		  <!-- Loop over attributes -->
		  <xsl:for-each select="$attributeNodeList">
                    <xsl:sort select="@name[. ='class']"/>
                    <xsl:sort select="@name[. ='containerField']"/>
                    <xsl:sort select="@name[.!='containerField' and .!='class']"/>
                    <xsl:if test="not(starts-with(@name,'additionalInterface'))">
                      <xsl:if test="position() gt 1">
                        <xsl:element name="br"/>
                        <xsl:text>&#10;</xsl:text>
                      </xsl:if>
                      <xsl:value-of select="@name"/>
                      <xsl:variable name="startQuotationType">
                        <xsl:choose>
                          <xsl:when test="@type='MFString'">
                            <xsl:text>' </xsl:text>
                          </xsl:when>
                          <xsl:otherwise>
                            <xsl:text>"</xsl:text>
                          </xsl:otherwise>
                        </xsl:choose>
                      </xsl:variable>
                      <xsl:variable name="endQuotationType">
                        <xsl:choose>
                          <xsl:when test="@type='MFString'">
                            <xsl:text> '</xsl:text>
                          </xsl:when>
                          <xsl:otherwise>
                            <xsl:text>"</xsl:text>
                           </xsl:otherwise>
                        </xsl:choose>
                      </xsl:variable>
		      <xsl:text>=</xsl:text>
		      <xsl:value-of select="$startQuotationType"/>
                      <!-- default xor fixed value -->
                      <xsl:choose>
                        <xsl:when test="@default">
                          <xsl:value-of select="@default"/>
                        </xsl:when>
                        <xsl:when test="@fixed">
                          <xsl:value-of select="@fixed"/>
                        </xsl:when>
                      </xsl:choose>
                      <xsl:value-of select="$endQuotationType"/>
                      <xsl:text>&#160;</xsl:text>
                    </xsl:if>
		  </xsl:for-each>
		  <!-- no line break here, to maintain page spacing -->
	          <!--	debug
		  <xsl:value-of select="local-name()"/>
		  <xsl:text> </xsl:text>
		  <xsl:value-of select="@name"/>
		  <xsl:text> nodeType=</xsl:text>
		  <xsl:value-of select="$nodeType"/> -->
		  <xsl:text>&#10;</xsl:text>
		  <!-- properly finish opening tag before content model (if any) -->
		  <xsl:choose>
                    <xsl:when test="$hasContentModel">
		      <xsl:element name="b">
		        <xsl:text>&gt;</xsl:text>
		      </xsl:element>
		    <xsl:text>&#10;</xsl:text>
		    </xsl:when>
		    <xsl:otherwise>
		      <xsl:element name="b">
			<xsl:text>/&gt;</xsl:text>
		      </xsl:element>
		    </xsl:otherwise>
		  </xsl:choose>
		  <xsl:text>&#10;</xsl:text>
		</xsl:element> <!-- end div, style padding-left -->
		<xsl:text>&#10;</xsl:text>

		<!-- show content model:  contained node definitions -->
                <xsl:if test="not((count ($contentModelElements)=1) and ($contentModelElements[1]/@ref='ProtoInstance'))">
                  <xsl:for-each select='$contentModelElements'>
                    <xsl:variable name="contentModelElementName" select="@ref"/>
                    <xsl:variable name="currentPosition" select="position()"/>
            <!--    <xsl:message>
                      <xsl:text>[Found child content node] </xsl:text>
                      <xsl:value-of select="$nodeName"/>
                      <xsl:text> </xsl:text>
                      <xsl:value-of select="$contentModelElementName"/>
                    </xsl:message> -->
		    <!-- avoid repeats -->
                    <xsl:variable name="indexPositions" select="index-of($contentModelElements/@ref,$contentModelElementName)"/>
		    <xsl:if test="$indexPositions[1]=$currentPosition">
                      <!-- html bookmarks -->
                      <xsl:text>&#160;&#160;&#160;&lt;</xsl:text>
                      <xsl:element name="a">
                        <xsl:attribute name="href">
                          <xsl:text>#</xsl:text>
                          <xsl:value-of select="$contentModelElementName"/>
                        </xsl:attribute>
                        <xsl:value-of select="$contentModelElementName"/>
                      </xsl:element>
                      <xsl:text>&#160;/&gt;</xsl:text>
                      <xsl:text>&#10;</xsl:text>
                      <xsl:element name="br"/>
                      <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                  </xsl:for-each>
                </xsl:if>
                <!-- show content model:  group type -->
                <xsl:for-each select="$contentModelGroups">
                  <xsl:variable name="contentModelGroupName" select="@ref"/>
		  <!-- avoid repeats -->
                  <xsl:variable name="currentPosition" select="position()"/>
                  <xsl:variable name="indexPositions" select="index-of($contentModelGroups/@ref,$contentModelGroupName)"/>
		  <xsl:if test="$indexPositions[1]=$currentPosition">
                    <!-- Handle problem when multiple space-separated child content models exist, e.g. BlendedVolumeStyle -->
                    <xsl:variable name="spacesCount" select="string-length(          normalize-space($contentModelGroupName)) -
                                                             string-length(translate(normalize-space($contentModelGroupName),' ',''))"/>
            <!--    <xsl:message>
                      <xsl:text>Node </xsl:text>
                      <xsl:value-of select="$nodeName"/>
                      <xsl:text> has </xsl:text>
                      <xsl:value-of select="$spacesCount"/>
                      <xsl:text> spaces in </xsl:text>
                      <xsl:value-of select="$contentModelGroupName"/>
                    </xsl:message> -->
                    <xsl:choose>
                      <xsl:when test="not(contains($contentModelGroupName,' '))">
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="$contentModelGroupName"/>
                          <xsl:with-param name="htmlURL">EncodingOfNodes.html#</xsl:with-param>
                        </xsl:call-template>
                      </xsl:when>
                      <xsl:when test="$spacesCount = 1">
                        <!-- <xsl:text>foundtwo</xsl:text> -->
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-before($contentModelGroupName,' ')"/>
                          <xsl:with-param name="htmlURL">EncodingOfNodes.html#</xsl:with-param>
                        </xsl:call-template>
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-after($contentModelGroupName,' ')"/>
                          <xsl:with-param name="htmlURL">EncodingOfNodes.html#</xsl:with-param>
                        </xsl:call-template>
                      </xsl:when>
                      <xsl:when test="$spacesCount = 2">
                        <!-- <xsl:text>foundthree</xsl:text> -->
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-before($contentModelGroupName,' ')"/>
                          <xsl:with-param name="htmlURL">EncodingOfNodes.html#</xsl:with-param>
                        </xsl:call-template>
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-before(substring-after($contentModelGroupName,' '),' ')"/>
                          <xsl:with-param name="htmlURL">EncodingOfNodes.html#</xsl:with-param>
                        </xsl:call-template>
                        <xsl:call-template name="outputContentModelGroupName">
                          <xsl:with-param name="contentModelGroupName" select="substring-after(substring-after($contentModelGroupName,' '),' ')"/>
                          <xsl:with-param name="htmlURL">EncodingOfNodes.html#</xsl:with-param>
                        </xsl:call-template>
                      </xsl:when>
                      <xsl:otherwise>
                        <xsl:message>Found multiple-instance content model {$spacesCount}</xsl:message>
                      </xsl:otherwise>
                    </xsl:choose>
		    <xsl:text>&#10;</xsl:text>
		  </xsl:if>
		</xsl:for-each>

		<!-- closing element -->
                <xsl:if test="$hasContentModel">
		  <xsl:element name="b">
		    <xsl:text>&lt;/</xsl:text>
		    <xsl:value-of select="@name"/>
		    <xsl:text>&gt;</xsl:text>
		  </xsl:element>
		  <xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:text>&#10;</xsl:text>
	      </xsl:element> <!-- td-->
	      <xsl:text>&#10;</xsl:text>

	      <!--  second column: field (attribute) types -->
	      <xsl:element name="td">
		<xsl:attribute name="class"><xsl:text>nodes</xsl:text></xsl:attribute>
		<xsl:attribute name="valign"><xsl:text>top</xsl:text></xsl:attribute> <!-- -->
		<xsl:text>&#10;</xsl:text>
		<xsl:for-each select="$attributeNodeList">
		  <xsl:sort select="@name[. ='class']"/>
		  <xsl:sort select="@name[. ='containerField']"/>
		  <xsl:sort select="@name[.!='containerField' and .!='class']"/>
		  <xsl:if test="not(starts-with(@name,'additionalInterface'))">
		    <!-- promote schema-constrained types to native X3D types -->
		    <xsl:variable name="type" select="@type"/>
		    <xsl:variable name="constrainedTypeParent" select="//xs:schema/xs:simpleType[@name=$type]/xs:restriction/@base"/>
		    <xsl:variable name="constrainedTypeGrandParent" select="//xs:schema/xs:simpleType[@name=$constrainedTypeParent]/xs:restriction/@base"/>
		    <!--	debug
		    <xsl:if test="$constrainedTypeParent">
		      <xsl:text>@type=</xsl:text>
		      <xsl:value-of select="@type"/>
		      <xsl:text> $constrainedTypeParent=</xsl:text>
		      <xsl:value-of select="$constrainedTypeParent"/>
		      <xsl:text> </xsl:text>
		    </xsl:if>
		    <xsl:if test="$constrainedTypeGrandParent">
		      <xsl:text>$constrainedTypeGrandParent=</xsl:text>
		      <xsl:value-of select="$constrainedTypeGrandParent"/>
		      <xsl:text> </xsl:text>
		    </xsl:if>
			-->
		    <xsl:variable name="X3dType">
		      <xsl:choose>
			<xsl:when test="starts-with(@type,'SF') or starts-with(@type,'MF')">
			  <xsl:value-of select="@type"/>
			</xsl:when>
			<xsl:when test="starts-with(xs:simpleType/xs:restriction/@base,'SF') or starts-with(xs:simpleType/xs:restriction/@base,'MF')">
			  <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
			</xsl:when>
			<xsl:when test="starts-with($constrainedTypeParent,'SF') or starts-with($constrainedTypeParent,'MF')">
			  <xsl:value-of select="$constrainedTypeParent"/>
			</xsl:when>
			<xsl:when test="$constrainedTypeParent">
			  <xsl:choose>
			    <xsl:when test="($constrainedTypeParent='xs:token')">
			      <xsl:text>SFString</xsl:text>
			    </xsl:when>
			    <xsl:when test="starts-with($constrainedTypeParent,'xs:')">
			      <xsl:value-of select="substring-after($constrainedTypeParent,'xs:')"/>
			    </xsl:when>
			    <xsl:otherwise>
			      <xsl:value-of select="$constrainedTypeParent"/>
			    </xsl:otherwise>
			  </xsl:choose>
			</xsl:when>
			<xsl:when test="$constrainedTypeGrandParent">
			  <xsl:choose>
			    <xsl:when test="($constrainedTypeGrandParent='xs:token')">
			      <xsl:text>SFString</xsl:text>
			    </xsl:when>
			    <xsl:when test="starts-with($constrainedTypeGrandParent,'xs:')">
			       <xsl:value-of select="substring-after($constrainedTypeGrandParent,'xs:')"/>
			    </xsl:when>
			    <xsl:otherwise>
			      <xsl:value-of select="$constrainedTypeGrandParent"/>
			    </xsl:otherwise>
			  </xsl:choose>
			</xsl:when>
			<xsl:otherwise>
			  <xsl:choose>
			    <xsl:when test="starts-with(@type,'xs:')">
			      <xsl:value-of select="substring-after(@type,'xs:')"/>
			    </xsl:when>
			    <xsl:otherwise>
			      <xsl:value-of select="@type"/>
			    </xsl:otherwise>
			  </xsl:choose>
			</xsl:otherwise>
		      </xsl:choose>
		    </xsl:variable>
		    <xsl:value-of select="$X3dType"/>
		    <xsl:text>&#160;</xsl:text>
		    <xsl:element name="br"/>
		    <xsl:text>&#10;</xsl:text>
		  </xsl:if>
		</xsl:for-each>
	      </xsl:element>  <!-- td-->
	    </xsl:element> <!-- tr -->
          </xsl:element> <!-- tbody -->
        </xsl:element> <!-- table -->
      </xsl:element> <!-- div -->
      <xsl:element name="br"/>
      <xsl:text>&#10;</xsl:text>

    <!-- divider X3D separator bar that links back to Topics table -->
    <xsl:element name="a">
        <xsl:attribute name="href"><xsl:text>#Topics</xsl:text></xsl:attribute>
        <xsl:attribute name="title"><xsl:text>to Topics</xsl:text></xsl:attribute>
        <xsl:element name="img">
          <xsl:attribute name="class"><xsl:text>x3dbar</xsl:text></xsl:attribute>
          <xsl:attribute name="src"><xsl:text>../Images/x3dbar.png</xsl:text></xsl:attribute>
          <xsl:attribute name="alt"><xsl:text>--- X3D separator bar ---</xsl:text></xsl:attribute>
        </xsl:element> <!-- img -->
    </xsl:element>
    <xsl:text>&#10;</xsl:text>

    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>

    <xsl:text>&#10;</xsl:text>
  </xsl:element> <!-- body -->
  <xsl:text>&#10;</xsl:text>
</xsl:element> <!-- html -->
<xsl:text>&#10;</xsl:text>
</xsl:result-document>

<!-- ===================================================================================== -->
<!-- Alphabetic listing of all X3D nodes and attributes -->

<!-- create XML output -->

<xsl:result-document href="{$nameAllX3dElementsAttributesFile}" method="xml" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

<xsl:text disable-output-escaping="yes"><![CDATA[<?xml version="1.0" encoding="UTF-8"?>]]></xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:text disable-output-escaping="yes"><![CDATA[<!-- All X3D elements and attributes, with default values, as defined in X3D XML Schema version ]]></xsl:text>
<xsl:value-of select="//xs:schema/@version"/>
<xsl:text disable-output-escaping="yes"><![CDATA[ -->]]></xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:text disable-output-escaping="yes"><![CDATA[<AllX3dElementsAttributes>]]></xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:text>&#10;</xsl:text>

    <!-- The first test below selects all elements derived by extension that are not statements -->
    <!-- The second test below below is needed to capture those elements that, because of Schema limitations, are defined directly without extension  -->
    <xsl:for-each select="//xs:schema/xs:element[(*//xs:extension/@base!='useAllIncludingX3DStatement') or (not (*//xs:extension/@base))]">
        <xsl:sort select="lower-case(@name)"/>

        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
        <xsl:value-of select="@name"/>
            
      <xsl:variable name="nodeName" select="@name"/>
      <xsl:variable name="nodeType">
	<xsl:value-of select="xs:complexType/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="parentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="grandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="greatGrandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="greatGreatGrandParentNodeType">
	<xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/@base"/>
      </xsl:variable>
      <xsl:variable name="attributeNodeList" select="
		      //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType     ]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$grandParentNodeType          ]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$parentNodeType               ]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$nodeType                     ]/xs:complexContent/*[(local-name()='extension') or (local-name()='restriction')]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType     ]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$grandParentNodeType          ]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$parentNodeType               ]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | //xs:schema/xs:complexType[@name=$nodeType                     ]/xs:attribute[not(@name='id') and not(@name='class') and not(@name='style')]
		    | xs:complexType/xs:complexContent/*[                                                  (local-name()='extension') or (local-name()='restriction')]/xs:attribute
		    | xs:complexType/xs:attribute
                    | //xs:schema/xs:attributeGroup[@name='globalAttributes'         ]/xs:attribute">
      </xsl:variable>
      <xsl:variable name="elementNodeList">
        <!-- choose only picks nearest one, rather than select which picks all -->
        <xsl:choose>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$nodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$nodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
          <xsl:when         test="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']">
            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:sequence/xs:element[@ref!='IS']"/>
          </xsl:when>
        </xsl:choose>
      </xsl:variable>
      <xsl:variable name="extensionName"   select="*//xs:extension/@base"/>
      <xsl:variable name="restrictionName" select="*//xs:restriction/@base"/>
      <xsl:variable name="contentModelGroups" select="xs:complexType//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                       | //xs:schema/xs:complexType[@name=$nodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                 | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
            | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
       | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
  | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]"/>
<!--  <xsl:message>
	<xsl:value-of select="$nodeName"/>
        <xsl:text> found </xsl:text>
        <xsl:value-of select="count($contentModelGroups)"/>
        <xsl:text> groups &#8212; </xsl:text>
        <xsl:value-of select="$contentModelGroups/@ref"/>
      </xsl:message> -->

      <xsl:variable name='contentModelElements' select=".//xs:complexType//xs:element[@ref]
                            | //xs:schema/xs:complexType[@name=$nodeType]//xs:element[@ref]
                      | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:element[@ref]
                 | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:element[@ref]
            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:element[@ref]
       | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:element[@ref]"/>
      <xsl:variable name='hasCDATA' select="(@name='Script') or (@name='ShaderPart') or (@name='ShaderProgram')"/>
      <xsl:variable name='hasContentModel' select="((count($contentModelGroups) + count ($contentModelElements)) gt 0) or $hasCDATA"/>
      
            <!-- Loop over attributes -->
            <xsl:for-each select="$attributeNodeList">
                <xsl:sort select="@name[. ='style']"/>
                <xsl:sort select="@name[. ='id']"/>
                <xsl:sort select="@name[. ='class']"/>
                <xsl:sort select="@name[. ='containerField']"/>
                <xsl:sort select="@name[.!='containerField' and .!='class' and .!='id' and .!='style']"/>
                
                <!-- avoid duplicates -->
                <xsl:variable name="currentAttributeName" select="@name"/>
                <xsl:variable name="currentAttributeValue">
                      <!-- default xor fixed value -->
                      <xsl:choose>
                        <!-- insert X3D version number to indicate source schema for this output -->
                        <xsl:when test="ancestor::xs:element[1][@name='X3D'] and @name='version'">
                          <xsl:value-of select="//xs:schema/@version"/>
                        </xsl:when>
                        <!-- TODO fix: override schema inheritance error with proper containerField value -->
                        <xsl:when test="($nodeName='AudioClip') and (@name='containerField')">
                          <xsl:text>source</xsl:text>
                        </xsl:when>
                        <!-- TODO fix: override schema inheritance error with proper containerField value -->
                        <xsl:when test="($nodeName='MovieTexture') and (@name='containerField')">
                          <xsl:text>texture</xsl:text>
                        </xsl:when>
                        <xsl:when test="@default">
                          <xsl:value-of select="@default"/>
                        </xsl:when>
                        <xsl:when test="@fixed">
                          <xsl:value-of select="@fixed"/>
                        </xsl:when>
                      </xsl:choose>
                </xsl:variable>
                <xsl:if test="not(preceding-sibling::*[@name = $currentAttributeName])">
                    <xsl:text> </xsl:text>
                    <xsl:if test="not(starts-with(@name,'additionalInterface')) and
                                  not(contains($nodeName,'FontStyle') and (@name = 'style') and (string-length($currentAttributeValue) = 0))">
                      <xsl:value-of select="@name"/>
                      <xsl:text>='</xsl:text>
                      <xsl:value-of select="$currentAttributeValue"/>
                      <xsl:text>'</xsl:text>
                    </xsl:if>
                </xsl:if>
            </xsl:for-each><!-- Loop over attributes -->

        <xsl:text disable-output-escaping="yes">/&gt;</xsl:text><!-- end element -->
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    
<xsl:text>&#10;</xsl:text>
<xsl:text disable-output-escaping="yes"><![CDATA[</AllX3dElementsAttributes>]]></xsl:text>
<xsl:text>&#10;</xsl:text>

</xsl:result-document>

	<!-- debug -->
	<xsl:message>
	  <xsl:text>Produced new </xsl:text>
	  <xsl:value-of select="$nameAllX3dElementsAttributesFile"/>
	 </xsl:message>

</xsl:template>

<xsl:template name="outputContentModelGroupName">
  <xsl:param name="contentModelGroupName"></xsl:param>
  <xsl:param name="htmlURL">#</xsl:param>

        <xsl:text>&#160;&#160;&#160;&lt;!--&#160;</xsl:text>
        <!-- html bookmarks -->
        <xsl:element name="a">
                <xsl:attribute name="href">
                        <xsl:value-of select="$htmlURL"/>
                        <xsl:value-of select="$contentModelGroupName"/>
                </xsl:attribute>
                <xsl:value-of select="$contentModelGroupName"/>
        </xsl:element>
        <xsl:text>&#160;--&gt;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:element name="br"/>
        <xsl:text>&#10;</xsl:text>
</xsl:template>

<xsl:template name="includes-containerField">
  <xsl:param name="inputAttributeNodeList"></xsl:param>
	<!--
	<xsl:message>
	  <xsl:value-of select="local-name ($inputAttributeNodeList[1])"/>
	  <xsl:text> </xsl:text>
	  <xsl:value-of select="$inputAttributeNodeList[1]/@name"/>
	 </xsl:message>
	-->
  <xsl:choose>
    <xsl:when test="count($inputAttributeNodeList)=0">
		<!-- <xsl:message><xsl:text>$inputAttributeNodeList length 0, return false</xsl:text></xsl:message> -->
		<xsl:text>false</xsl:text>
    </xsl:when>
    <xsl:when test="$inputAttributeNodeList[1]/@name='containerField'">
		<!-- <xsl:message><xsl:text>containerField found, return true</xsl:text></xsl:message> -->
		<xsl:text>true</xsl:text>
    </xsl:when>
    <xsl:when test="//xs:attribute[@name='containerField']">
                <!-- this case relates to ComposedShader -->
		<!-- <xsl:message><xsl:text>containerField found, return true</xsl:text></xsl:message> -->
		<xsl:text>true</xsl:text>
    </xsl:when>
    <xsl:otherwise>
		<!-- recurse on remainder -->
		<xsl:call-template name="includes-containerField">
			<xsl:with-param name="inputAttributeNodeList" select="$inputAttributeNodeList[position()!=1]"/>
		</xsl:call-template>
    </xsl:otherwise>
  </xsl:choose>
</xsl:template>


<!-- ****************** catch-all ****************** -->

<xsl:template match="*">

<xsl:text>&#10;/* catch-all template:  </xsl:text>
<xsl:value-of select="local-name ()"/>
<xsl:text> */&#10;</xsl:text>

	<xsl:apply-templates/>

</xsl:template>


</xsl:stylesheet>

