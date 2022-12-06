<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="title"       content="X3dToES5.xslt" />
   <meta name="creator"     content="Don Brutzman" />
   <meta name="creator"     content="John Carlson" />
   <meta name="created"     content="22 March 2017" />
   <meta name="modified"    content="5 April 2017" />
   <meta name="description" content="XSLT stylesheet to create X3DJSAIL ES5 program from X3D source." />
   <meta name="reference"   content="X3DJSAIL, https://www.web3d.org/specifications/java/X3DJSAIL.html" />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" />
  </head>

Recommended tools:
- X3D-Edit, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- XML Spy https://www.xmlspy.com
-->

<!-- TODO: 
	 - integrate with X3D Examples Archives
	   https://www.web3d.org/x3d/content/examples/X3dResources.html
  -->

<!--	xmlns:fo="http://www.w3.org/1999/XSL/Format"	-->
<!--	xmlns:saxon="http://icl.com/saxon" saxon:trace="true"	-->

<!--
Copyright (c) 1995-2022 held by the author(s).  All rights reserved.

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

<!-- TODO XSLT version="2.0" -->

<xsl:stylesheet version="2.0" exclude-result-prefixes="ds saxon"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#"
				xmlns:saxon="http://saxon.sf.net/"><!-- http://www.saxonica.com/documentation9.5/extensions/attributes -->
    <!--        
                xmlns="http://www.w3.org/TR/xhtml1/strict"
                xmlns:fn="http://www.w3.org/2005/xpath-functions" -->
    
    <!-- Default parameter values can be overridden when invoking this stylesheet -->
    <xsl:param name="packageName"			      ><xsl:text></xsl:text></xsl:param>
    <xsl:param name="className"				      ><xsl:text>NeedClassName</xsl:text></xsl:param>
    <xsl:param name="tupleSplitSize"			  ><xsl:text>10</xsl:text></xsl:param>
    <xsl:param name="attributeSplitSize"		  ><xsl:text>100</xsl:text></xsl:param>
    <xsl:param name="includeLicense"		      ><xsl:text>false</xsl:text></xsl:param>
    
	<!-- saxon9he problem: fails due to line length, licensing issue: saxon:line-length="120" -->
	<!-- https://stackoverflow.com/questions/23084785/xslt-avoid-new-line-added-between-element-attributes/43301327#43301327 -->
	<xsl:output encoding="UTF-8" media-type="text/plain" indent="yes" method="text"/> <!-- output methods: xml html text -->
        
    <xsl:variable name="x3dVersion" select="normalize-space(//X3D/@version)"/>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersion,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersion,'4')"/>

    <xsl:strip-space elements="*"/>
    
	<!-- Global variables -->
                                          
    <xsl:variable name="licenseText">
		<xsl:text>
Copyright (c) 1995-2022 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (https://www.web3d.org)
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
</xsl:text>
    </xsl:variable>
	
	<!-- TODO need updated XSLT engine in Netbeans
	https://www.sixtree.com.au/articles/2013/formatting-dates-and-times-using-xslt-2.0-and-xpath/
	https://stackoverflow.com/questions/919692/how-to-execute-xslt-2-0-with-ant
	-->

    <!-- start - - - - - - - - - - - - - - - - - - - - - - - -->
    <xsl:template match="/">
        
		<xsl:variable name="newPackageName">
			<xsl:choose>
				<xsl:when test="(string-length(normalize-space($packageName)) = 0)">
					<!-- no package name provided, ensure empty string -->
					<xsl:text></xsl:text>
				</xsl:when>
				<xsl:when test="contains(normalize-space($packageName),' ') or contains($packageName,'-') or
								contains($packageName,',') or contains($packageName,';')">
					<!-- not allowed to contain whitespace, hyphen, comma, or semicolon. -->
					<!-- periods allowed since package may have parent and subpackage concatenated. -->
					<xsl:message>
						<xsl:text>packageName='</xsl:text>
						<xsl:value-of select="$packageName"/>
						<xsl:text>' has illegal character(s), newPackageName='</xsl:text>
						<xsl:value-of select="translate(normalize-space($packageName),' -,;', '')"/>
						<xsl:text>'</xsl:text>
					</xsl:message>
					<xsl:value-of     select="translate(normalize-space($packageName),' -,;', '')"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="$packageName"/>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:variable>
		<xsl:variable name="newClassName">
			<xsl:choose>
				<xsl:when test="(string-length(normalize-space($className)) = 0)">
					<xsl:text>NeedClassName</xsl:text>
				</xsl:when>
				<xsl:when test="contains(normalize-space($className),' ')            or contains($className,'-') or
								contains($className,'.') or contains($className,',') or contains($className,';')">
					<xsl:message>
						<xsl:text>className='</xsl:text>
						<xsl:value-of select="$className"/>
						<xsl:text>' has illegal character(s) ( -.,;) replaced with '_' underscore character. newClassName='</xsl:text>
						<xsl:value-of select="translate(normalize-space($className),' -.,;', '_____')"/>
						<xsl:text>'</xsl:text>
					</xsl:message>
					<xsl:value-of     select="translate(normalize-space($className),' -.,;', '_____')"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="$className"/>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:variable>
		
		<!--xsl:if test="(string-length($newPackageName) > 0)">
			<xsl:text>package </xsl:text>
			<xsl:value-of select="$newPackageName"/>
			<xsl:text>;</xsl:text>
			<xsl:text>&#10;</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if-->

        <!-- Diagnostic
		<xsl:message>
            <xsl:text>includeLicense=</xsl:text>
            <xsl:value-of select="$includeLicense"/>
		</xsl:message> -->
		<xsl:if test="($includeLicense = 'true')">
			<xsl:text>/*</xsl:text>
			<xsl:value-of select="$licenseText"/>
			<xsl:text>*/</xsl:text>
			<xsl:text>&#10;</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		
		<!-- imports based on contained nodes -->
        <xsl:call-template name="list-component-imports"/>

		<!-- javadoc -->
		<xsl:call-template name="javadoc">
			<xsl:with-param name="newPackageName"><xsl:value-of select="$newPackageName"/></xsl:with-param>
			<xsl:with-param name="newClassName"  ><xsl:value-of select="$newClassName"/></xsl:with-param>
			<xsl:with-param name="className"     ><xsl:value-of select="normalize-space($className)"/></xsl:with-param><!-- orginal -->
		</xsl:call-template>
		
		<xsl:text>function </xsl:text>
		<xsl:value-of select="$newClassName"/>
		<xsl:text><![CDATA[
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
]]></xsl:text>
  <xsl:value-of select="$newClassName"/>
  <xsl:text><![CDATA[.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
]]></xsl:text>

		<!-- capture large attributes (if any) as data structures -->
		<xsl:call-template name="expose-large-attributes">
			<xsl:with-param name="childNodes" select="//Scene"/>
			<xsl:with-param name="nodeNumber"  select="1"/>
			<xsl:with-param name="indent"><xsl:text>		</xsl:text></xsl:with-param><!-- tab characters -->
		</xsl:call-template>


        <!-- xsl:call-template name="X3dDocument"/ -->
		<xsl:apply-templates select="*"/>

		<xsl:text><![CDATA[  },
  // end of initialize() method
]]></xsl:text>

		<xsl:text><![CDATA[

  /** Provide a shallow copy of the X3D model.
   * @return ]]></xsl:text><xsl:value-of select="$newClassName"/>
   <xsl:text disable-output-escaping="yes"><![CDATA[ model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var       metaResult = "";
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		]]>var testObject = new </xsl:text><xsl:value-of select="$newClassName"/><xsl:text>();
		print ("</xsl:text>          <xsl:value-of select="$newClassName"/>
		<xsl:text> execution self-validation test results: " + testObject.validateSelf());
	}
}
</xsl:text><!-- class complete -->
<xsl:text>new </xsl:text><xsl:value-of select="$newClassName"/><xsl:text>().main();</xsl:text>


    </xsl:template>

    <!-- output document is empty unless conversion is performed -->

    <!-- start - - - - - - - - - - - - - - - - - - - - - - -
    <xsl:template name="X3dDocument">
    
		<xsl:apply-templates name="*"/>
      
    </xsl:template> -->

    <!-- TODO problem with validation under some XSLT engines:
         process xmlns:ds attributes (in X3D element)
    <xsl:template match="@xmlns:ds" >
        <xsl:copy/> 
    </xsl:template> -->

    <xsl:template name="javadoc">
		<xsl:param name="newPackageName"><xsl:text></xsl:text></xsl:param>
		<xsl:param name="newClassName"	><xsl:text></xsl:text></xsl:param>
		<xsl:param name="className"     ><xsl:value-of select="$className"/></xsl:param><!-- orginal name -->
		
		<xsl:variable name="sourceName">
			<xsl:if test="(string-length($newClassName) > 0)">
				<xsl:value-of select="$newClassName"/>
				<xsl:text>.java</xsl:text>
			</xsl:if>
		</xsl:variable>
		<xsl:variable name="qualifiedSourceName">
			<xsl:if test="(string-length($newPackageName) > 0) and (string-length($sourceName) > 0)">
				<xsl:value-of select="$newPackageName"/>
				<xsl:text>.</xsl:text>
			</xsl:if>
			<xsl:value-of select="$sourceName"/>
		</xsl:variable>
		<xsl:variable name="archiveName">
			<xsl:choose>
				<xsl:when test="contains(//meta[@name='identifier'][1]/@content,'Basic')">
					<xsl:text>Basic</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][1]/@content,'ConformanceNist')">
					<xsl:text>ConformanceNist</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][1]/@content,'Savage')">
					<xsl:text>Savage</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][1]/@content,'SavageDefense')">
					<xsl:text>SavageDefense</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][1]/@content,'Vrml2Sourcebook')">
					<xsl:text>Vrml2Sourcebook</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][1]/@content,'X3dForWebAuthors')">
					<xsl:text>X3dForWebAuthors</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][1]/@content,'X3dForAdvancedModeling')">
					<xsl:text>X3dForAdvancedModeling</xsl:text>
				</xsl:when>
				<xsl:otherwise>
					<!-- diagnostic
					<xsl:message>
						<xsl:text>Not part of an X3D Example Archive</xsl:text>
					</xsl:message> -->
				</xsl:otherwise>
			</xsl:choose>
		</xsl:variable>
		<xsl:variable name="subdirectoryPath" 
					select="substring-before(substring-after(//meta[@name='identifier'][1]/@content,$archiveName),
															 //meta[@name='title']/@content)"/>
		<xsl:variable name="archiveRelativeDirectory">
			<xsl:choose>
				<xsl:when test="contains($archiveName,'ConformanceNist') or
								contains($archiveName,'Savage') or
								contains($archiveName,'SavageDefense')">
					<xsl:text>../../../..</xsl:text>
				</xsl:when>
				<xsl:when test="contains($archiveName,'Basic') or
								contains($archiveName,'Vrml2Sourcebook') or
								contains($archiveName,'X3dForWebAuthors') or
								contains($archiveName,'X3dForAdvancedModeling')">
					<xsl:text>../../..</xsl:text>
				</xsl:when>
			</xsl:choose>
			<xsl:value-of select="$subdirectoryPath"/>
		</xsl:variable>
		<!-- debug
		<xsl:message>
				<xsl:text>Scene identifier='</xsl:text>
				<xsl:value-of select="//meta[@name='identifier'][1]/@content"/>
				<xsl:text>', $archiveName='</xsl:text>
				<xsl:value-of select="$archiveName"/>
				<xsl:text>', $subdirectoryPath='</xsl:text>
				<xsl:value-of select="$subdirectoryPath"/>
				<xsl:text>', $archiveRelativeDirectory='</xsl:text>
				<xsl:value-of select="$archiveRelativeDirectory"/>
				<xsl:text>'</xsl:text>
		</xsl:message>
		-->
		
		<xsl:text><![CDATA[
// Javadoc annotations follow, see below for source.
/**
 * ]]></xsl:text>
		<xsl:if test="(count(//meta[@name='description']) > 1)">
			<xsl:message>
				<xsl:text>*** Warning: more than one meta tag found with name='description', using first one</xsl:text>
			</xsl:message>
		</xsl:if>
		<!-- Javadoc package description handling -->
		<xsl:variable name="description" select="string(//meta[@name='description'][1]/@content)"/>
		<xsl:text><![CDATA[<p> ]]></xsl:text>
		<xsl:choose>
			<xsl:when test="(string-length(normalize-space($description)) > 0)">
				<xsl:call-template name="escape-special-characters-to-html"><!-- but not backslash -->
					<xsl:with-param name="inputValue">
						<!-- avoid outside whitespace -->
						<xsl:value-of select="normalize-space($description)"/>
					</xsl:with-param>
				</xsl:call-template>
				<xsl:if test="not(contains($description,'.')) or not(ends-with(normalize-space($description),'.'))">
					<!-- ensure that first sentence in Javadoc description ends with a period, which is needed for package summary. -->
					<xsl:text>.</xsl:text>
				</xsl:if>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>Example scene </xsl:text>
				<xsl:value-of select="$className"/>
				<xsl:text>.</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text><![CDATA[ </p>
]]></xsl:text>
		
		<xsl:text><![CDATA[ <p> Related links: ]]></xsl:text>
		<xsl:if test="(string-length($sourceName) > 0)">
			<xsl:choose>
				<xsl:when test="(string-length($archiveName) > 0)">
<xsl:text><![CDATA[<a href="]]></xsl:text>
<xsl:value-of select="$archiveRelativeDirectory"/>
<xsl:value-of select="$sourceName"/>
<xsl:text><![CDATA[">]]></xsl:text>
<xsl:value-of select="$sourceName"/><xsl:text><![CDATA[</a>]]></xsl:text>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="$sourceName"/>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:text> source, </xsl:text>
			<xsl:variable name="sceneName" select="substring-before(normalize-space((//meta[@name='title']/@content)),'.x3d')"/>
			<xsl:if test="(string-length($archiveName) > 0) and not(starts-with($sceneName,'*'))"><!-- avoid fill-in prompts -->
<xsl:text><![CDATA[<a href="]]></xsl:text>
<xsl:value-of select="$archiveRelativeDirectory"/>
<xsl:value-of select="$sceneName"/>
<xsl:text><![CDATA[Index.html" target="_top">]]></xsl:text>
<xsl:value-of select="$sceneName"/><xsl:text><![CDATA[ catalog page</a>]]></xsl:text>
				<xsl:text>, </xsl:text>
			</xsl:if>
		</xsl:if>
<xsl:text><![CDATA[<a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>]]></xsl:text>
			<xsl:text>, </xsl:text>
<xsl:text><![CDATA[<a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>]]></xsl:text>
			<xsl:text> and </xsl:text>
<xsl:text><![CDATA[<a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>]]></xsl:text>
			<xsl:text>.</xsl:text>
			<xsl:text><![CDATA[ </p>]]></xsl:text>
		
		<xsl:if test="//meta">
			<!-- TODO unrecognized by javadoc: title="meta tags provide document information"-->
			<xsl:text><![CDATA[
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">]]></xsl:text>
				<xsl:if test="string-length(normalize-space(//meta[@name='title']/@content))">
					<xsl:choose>
						<xsl:when test="(string-length($archiveName) > 0)">
						</xsl:when>
						<xsl:otherwise>
							<xsl:if test="(string-length($newPackageName) > 0)">
								<xsl:value-of select="$newPackageName"/>
								<xsl:text>.</xsl:text>
							</xsl:if>
							<xsl:value-of select="$newClassName"/>
						</xsl:otherwise>
					</xsl:choose>
				</xsl:if>
				<xsl:text disable-output-escaping="yes"><![CDATA[&nbsp; Document Metadata </td>
		</tr>
]]></xsl:text>
			<xsl:for-each select="//meta">
				<xsl:variable name="contentValue" select="normalize-space(@content)"/>
				<xsl:variable name="fontStyle">
					<xsl:choose>
						<xsl:when test="(@name = 'warning')">
							<xsl:text> style="color:burntorange"</xsl:text>
						</xsl:when>
						<xsl:when test="(@name = 'error')">
							<xsl:text> style="color:red"</xsl:text>
						</xsl:when>
					</xsl:choose>
				</xsl:variable>
				<xsl:text><![CDATA[
		<tr]]></xsl:text><xsl:value-of select="$fontStyle"/><xsl:text><![CDATA[>
			<td style="text-align:right; vertical-align: text-top;"> <i> ]]></xsl:text><xsl:value-of select="@name"/><xsl:text><![CDATA[ </i> </td>
			<td> ]]></xsl:text>
					<xsl:choose>
						<xsl:when test="starts-with($contentValue,'http') and not(contains($contentValue,' '))">
							<!-- direct url -->
<xsl:text><![CDATA[<a href="]]></xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<!-- TODO url escape instead -->
	<xsl:with-param name="inputValue">
		<xsl:call-template name="escape-url-quote-characters">
			<!-- convert " in url to %22 -->
			<xsl:with-param name="inputValue">
				<xsl:value-of select="$contentValue"/>
			</xsl:with-param>
		</xsl:call-template>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[" target="_blank">]]></xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<!-- TODO url escape instead -->
	<xsl:with-param name="inputValue">
		<xsl:value-of select="$contentValue"/>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[</a>]]></xsl:text>
						</xsl:when>
						<xsl:when test="contains($contentValue,'http') and not(contains(substring-after($contentValue,'http'),' '))">
							<!-- direct url following contained text -->
<xsl:value-of select="substring-before($contentValue,'http')"/>
<xsl:text><![CDATA[<a href="]]></xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<!-- TODO url escape instead -->
	<xsl:with-param name="inputValue">
		<xsl:call-template name="escape-url-quote-characters">
			<!-- convert " in url to %22 -->
			<xsl:with-param name="inputValue">
				<xsl:value-of select="concat('http',substring-after($contentValue,'http'))"/>
			</xsl:with-param>
		</xsl:call-template>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[" target="_blank">]]></xsl:text>
<xsl:text>http</xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<xsl:with-param name="inputValue">
		<xsl:value-of select="substring-after($contentValue,'http')"/>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[</a>]]></xsl:text>												
						</xsl:when>
						<xsl:when test="contains($contentValue,'http')"> <!-- note: contains ' ' after url -->
							<!-- direct url following contained text, but only up to ' ; character -->
<xsl:value-of select="substring-before($contentValue,'http')"/>
<xsl:text><![CDATA[<a href="]]></xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<!-- TODO url escape instead -->
	<xsl:with-param name="inputValue">
		<xsl:call-template name="escape-url-quote-characters">
			<!-- convert " in url to %22 -->
			<xsl:with-param name="inputValue">
				<xsl:value-of select="concat('http',substring-before(substring-after($contentValue,'http'), ' '))"/>
			</xsl:with-param>
		</xsl:call-template>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[" target="_blank">]]></xsl:text>
<xsl:text>http</xsl:text>
<xsl:variable name="urlValue" select="substring-before(substring-after($contentValue,'http'), ' ')"/>
<xsl:call-template name="escape-ampersand-characters">
	<xsl:with-param name="inputValue">
		<xsl:value-of select="$urlValue"/>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[</a>]]></xsl:text>
<xsl:value-of select="substring-after($contentValue,$urlValue)"/>
						</xsl:when>
						<!-- contains space character or special prompt (newScene.x3d) so no relative link possible -->
						<xsl:when test="contains($contentValue, ' ') or starts-with($contentValue, '*')">
							<!-- plain text, escaped for html -->
							<xsl:call-template name="escape-special-characters-to-html">
								<!-- TODO url escape instead -->
								<xsl:with-param name="inputValue">
									<xsl:value-of select="$contentValue"/>
								</xsl:with-param>
							</xsl:call-template>
						</xsl:when>
						<!-- relative link -->
						<xsl:when test="((@name='license') or (@name='title')   or (@name='accessRights') or (@name='specificationUrl') or
										 (@name='Image')   or (@name='drawing') or (@name='MovingImage')  or (@name='Sound') or
										   contains(@name, 'url') or contains(@name, 'Url') )
										 or ((@name='reference') and 
											 (starts-with($contentValue,'..') or
											  ends-with($contentValue,'.html') or
											  ends-with($contentValue,'.css') or
											  ends-with($contentValue,'.java') or
											  ends-with($contentValue,'.js') or
											  ends-with($contentValue,'.json') or
											  ends-with($contentValue,'.pdf') or
											  ends-with($contentValue,'.svg') or
											  ends-with($contentValue,'.x3d') or
											  ends-with($contentValue,'.x3dv') or
											  ends-with($contentValue,'.x3db') or
											  ends-with($contentValue,'.xml')))">
<xsl:text><![CDATA[<a href="]]></xsl:text>
<xsl:value-of select="$archiveRelativeDirectory"/>
<xsl:value-of select="$contentValue"/><xsl:text><![CDATA[">]]></xsl:text>
<xsl:value-of select="$contentValue"/><xsl:text><![CDATA[</a>]]></xsl:text>								
						</xsl:when>
						<xsl:otherwise>
							<!-- plain text, escaped for html -->
							<xsl:call-template name="escape-special-characters-to-html">
								<!-- TODO url escape instead -->
								<xsl:with-param name="inputValue">
									<xsl:value-of select="$contentValue"/>
								</xsl:with-param>
							</xsl:call-template>
						</xsl:otherwise>
					</xsl:choose>
				<xsl:text><![CDATA[ </td>
		</tr>]]></xsl:text>
			</xsl:for-each>
			
		<xsl:if test="(count(//meta) > 0)">
			<xsl:text disable-output-escaping="yes"><![CDATA[
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>]]></xsl:text>
			<!-- 
		<tr> <td colspan="2"> <hr> </td> </tr> -->
		</xsl:if>
		<xsl:text><![CDATA[
	</table>
]]></xsl:text>
		</xsl:if>
			<xsl:text><![CDATA[
	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>
]]></xsl:text>
			<xsl:for-each select="//meta[@name='creator']">
				<xsl:if test="(string-length(@content) > 0)">
					<xsl:text><![CDATA[
	* @author ]]></xsl:text><xsl:value-of select="@content"/>
				</xsl:if>
			</xsl:for-each>
		<xsl:text>
 */
</xsl:text>
		<xsl:text>&#10;</xsl:text>
		
    </xsl:template>

    <!-- process all elements/nodes -->
    <xsl:template match="*">
		
		<xsl:variable name="indent">
			<xsl:text>  </xsl:text>
			<xsl:for-each select="ancestor::*">
				<xsl:text>  </xsl:text>
			</xsl:for-each>
		</xsl:variable>
		<xsl:if test="(local-name() = 'X3D')">
			<xsl:value-of select="$indent"/>
			<xsl:text>this.x3dModel = </xsl:text>
		</xsl:if>
		
		<xsl:text>new </xsl:text>
		<xsl:value-of select="local-name()"/>
		<xsl:text>Object(</xsl:text>
		<xsl:choose>
			<xsl:when test="(string-length(@DEF) > 0) and (string-length(@name) > 0) and (local-name() = 'ProtoInstance')">
				<!-- special utility constructor using ProtoInstance DEFname and prototypeName; duplicative of .setDEF().setName() -->
				<xsl:text>"</xsl:text>
				<xsl:value-of select="@DEF"/>
				<xsl:text>", "</xsl:text>
				<xsl:value-of select="@name"/>
				<xsl:text>"</xsl:text>
			</xsl:when>
			<xsl:when test="(string-length(@DEF) > 0) and not(local-name() = 'ProtoInstance')">
				<xsl:text>"</xsl:text>
				<xsl:value-of select="@DEF"/><!-- special utility constructor using DEF name -->
				<xsl:text>"</xsl:text>
			</xsl:when>
		</xsl:choose>
		<xsl:text>)</xsl:text>
		
		<!-- handle attribute(s) if any -->
		<xsl:call-template name="process-attributes-in-order">
			<xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param>
		</xsl:call-template>
		
		<!-- handle contained source code, if any -->
		<xsl:if test="((local-name() = 'Script') or (local-name() = 'ShaderPart') or (local-name() = 'ShaderProgram')) and
					  (string-length(normalize-space(text())) > 0)"><!-- TODO restrict to immediate child? -->
			<xsl:text>.setSourceCode(</xsl:text>
			<xsl:call-template name="stringify-text-lines">
			  <xsl:with-param name="inputValue" select="text()"/><!-- TODO restrict to immediate child? might be an issue if field has contained node content and further CDATA text-->
			</xsl:call-template>
			<xsl:text>)</xsl:text>
		</xsl:if>
		
		<!-- handle children
		<xsl:if test="* | comment()">
			<xsl:text>&#10;</xsl:text>
		</xsl:if> -->
		<xsl:for-each select="* | comment()">
			<xsl:variable name= "nodeName" select="name()"/>
			<xsl:variable name="fieldName">
				<xsl:choose>
					<xsl:when test="(string-length(@containerField) > 0)">
						<xsl:value-of select="@containerField"/><!-- for X3D nodes, assumes default values read -->
					</xsl:when>
					<xsl:otherwise>
						<xsl:value-of select="name()"/><!-- for X3D statements -->
					</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>
			<xsl:variable name="fieldType">
				<xsl:choose>
					<xsl:when test="preceding-sibling::*[@containerField = $fieldName] or
									following-sibling::*[@containerField = $fieldName] or
									preceding-sibling::*[@containerField = name()] or
									following-sibling::*[@containerField = name()]">
						<xsl:text>MFNode</xsl:text>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>SFNode</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>
			<xsl:text>&#10;</xsl:text>
			<xsl:value-of select="$indent"/>
			
			<xsl:choose>
				<xsl:when test="self::comment()">
					<xsl:apply-templates select="."/><!-- handle this element -->
				</xsl:when>
				<xsl:when test="starts-with($fieldName,'ds:')">
					<!-- TODO fix: process digital signature element as a CommentsBlock
					<xsl:apply-templates select="."/> -->
				</xsl:when>
				<xsl:when test="(local-name(..) = 'Appearance') and (@containerField = 'shaders')">
					<xsl:text>.addShaders(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<!-- TODO CollidableShape setShape method returns null, needs X3DJSAIL refinement and SAI spec variation -->
				<xsl:when test="(local-name(..) = 'ComposedShader') and (@containerField = 'parts')">
					<xsl:text>.addParts(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'joints')">
					<xsl:text>.addJoints(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'segments')">
					<xsl:text>.addSegments(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'sites')">
					<xsl:text>.addSites(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'skeleton')">
					<xsl:text>.addSkeleton(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'skin')">
					<xsl:text>.addSkin(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'skinCoord')">
					<xsl:text>.setSkinCoord(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'skinNormal')">
					<xsl:text>.setSkinNormal(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'HAnimHumanoid') and (@containerField = 'viewpoints')">
					<xsl:text>.addViewpoints(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'LoadSensor') and (@containerField = 'watchList')">
					<xsl:text>.addWatchList(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'MetadataSet') and (@containerField = 'metadata')">
					<xsl:text>.setMetadata(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'MetadataSet') and (@containerField = 'value')">
					<xsl:text>.addValue(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'RigidBody') and (@containerField = 'geometry')">
					<xsl:text>.addGeometry(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'RigidBodyCollection') and (@containerField = 'bodies')">
					<xsl:text>.addBodies(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'RigidBodyCollection') and (@containerField = 'joints')">
					<xsl:text>.addJoints(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'Scene') and starts-with(local-name(), 'Metadata')">
					<!-- addChild() method didn't work because of ES5 disambiguation difficulty between X3DChildNode and X3DMetadataNode -->
					<xsl:text>.addMetadata(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'IS') and (local-name() = 'connect')">
					<!-- addChild() method didn't work because of ES5 disambiguation difficulty between X3DChildNode and X3DMetadataNode -->
					<xsl:text>.addConnect(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name(..) = 'ProtoBody')    or (local-name(..) = 'Scene') or
								(not(local-name() = 'metadata') and
								 (($fieldName     = 'children')     or (local-name() = 'ROUTE') or 
								  (local-name()   = 'ProtoDeclare') or (local-name() = 'ExternProtoDeclare') or
								  (local-name()   = 'IMPORT')       or (local-name() = 'EXPORT') or
								  ((local-name(..) = 'HAnimHumanoid') and not((local-name() = 'skinCoord') or (local-name() = 'skinNormal')))
								))">
					<xsl:text>.addChild(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="(local-name() = 'ProtoInstance')">
					<xsl:choose>
						<xsl:when test="($fieldType = 'SFNode')">
							<xsl:text>.set</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<!-- MFNode or child element within field, fieldValue -->
							<xsl:text>.add</xsl:text>
						</xsl:otherwise>
					</xsl:choose>
					<!-- upper camel case containerField -->
					<xsl:value-of select="translate(substring(@containerField,1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
					<xsl:value-of select="substring(@containerField,2)"/>
					<xsl:text>(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:when>
				<xsl:when test="($fieldName = 'containerField')">
					<!-- no action here, containerField is used to select method for child field -->
				</xsl:when>
				<xsl:otherwise>
					<xsl:choose>
						<xsl:when test="(local-name() = 'component') or (local-name() = 'unit') or (local-name() = 'meta') or
										($fieldName = 'trimmingContour')">
							<xsl:text>.add</xsl:text>
						</xsl:when>
						<xsl:when test="(local-name(..) = 'field') or (local-name(..) = 'fieldValue')">
							<xsl:text>.add</xsl:text>
						</xsl:when>
						<xsl:when test="($fieldType = 'SFNode') and not(local-name()   = 'field') and not(local-name()   = 'fieldValue') and
										                            not(local-name(..) = 'field') and not(local-name(..) = 'fieldValue')">
							<xsl:text>.set</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:text>.add</xsl:text>
						</xsl:otherwise>
					</xsl:choose>
					<xsl:choose>
						<xsl:when test="(local-name(..) = 'field') or (local-name(..) = 'fieldValue')">
							<xsl:text>Child</xsl:text>
						</xsl:when>
                        <xsl:when test="(string-length($containerField) > 0)">
                            <!-- upper camel case containerField -->
                            <xsl:value-of select="translate(substring($containerField,1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
                            <xsl:value-of select="substring($containerField,2)"/>
                        </xsl:when>
						<xsl:otherwise>
							<!-- upper camel case $fieldName -->
							<xsl:value-of select="translate(substring($fieldName,1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
							<xsl:value-of select="substring($fieldName,2)"/>
						</xsl:otherwise>
					</xsl:choose>
					<xsl:text>(</xsl:text>
					<xsl:apply-templates select="."/><!-- handle this node -->
					<xsl:text>)</xsl:text>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:for-each>
		
		<xsl:if test="(local-name() = 'X3D')">
			<xsl:text>;</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		
    </xsl:template>

    <xsl:template name="process-attributes-in-order">
        <xsl:param name="indent"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
		<!-- debug
			<xsl:message>
				<xsl:text disable-output-escaping="yes"> * </xsl:text>
				<xsl:value-of select="local-name(.)"/>
			</xsl:message>
		-->
		<!-- @DEF and @USE already handled by constructor -->
        <!-- a different version of this template is shared among X3dToXhtml.xslt and X3dTidy.xslt -->
        <xsl:choose>
            <xsl:when test="(local-name()='ProtoInstance')">
                <!-- ProtoInstance @name @DEF @USE already handled by constructor -->
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='DEF') and (local-name()!='USE')]" />
           </xsl:when>
            <xsl:when test="(string-length(@USE) > 0)">
                <!-- no other attributes allowed with USE except containerField -->
                <xsl:apply-templates select="@containerField"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='USE') and (local-name()!='containerField')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="(local-name()='X3D')">
                <xsl:apply-templates select="@profile" />
                <xsl:apply-templates select="@version" />
                <xsl:apply-templates select="@*[(local-name()!='profile') and (local-name()!='version')]" />
                <!-- handle namespace attributes -->
                <!-- xsl:apply-templates select="@xsd:noNamespaceSchemaLocation" />
                <xsl:apply-templates select="@noNamespaceSchemaLocation" />-->
            </xsl:when>
            <!-- handle specially ordered cases next -->
            <!-- stick with canonical form to support version-control diffing-->
            <xsl:when test="local-name()='meta'">
                <xsl:apply-templates select="@name" />
                <xsl:apply-templates select="@content" />
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='content')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='ROUTE'">
                <xsl:apply-templates select="@fromNode"/>
                <xsl:apply-templates select="@fromField"/>
                <xsl:apply-templates select="@toNode"/>
                <xsl:apply-templates select="@toField"/>
            </xsl:when>
            <xsl:when test="local-name()='ElevationGrid' or local-name()='GeoElevationGrid'">
                <xsl:apply-templates select="@containerField "/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and
                                                (local-name()!='height') and (local-name()!='colorIndex')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@colorIndex"><xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param></xsl:apply-templates>
                <xsl:apply-templates select="@height"><xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param></xsl:apply-templates>
			</xsl:when>
            <xsl:when test="local-name()='IndexedFaceSet' or local-name()='IndexedLineSet'">
                <xsl:apply-templates select="@DEF | @containerField "/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and
                                                not(contains(local-name(), 'Index'))]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[contains(local-name(), 'Index')]">
					<xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param>
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='IMPORT'">
                <xsl:apply-templates select="@importedDEF"/>
                <xsl:apply-templates select="@inlineDEF"/>
                <xsl:apply-templates select="@AS"/>
            </xsl:when>
            <xsl:when test="local-name()='EXPORT'">
                <xsl:apply-templates select="@localDEF"/>
                <xsl:apply-templates select="@AS"/>
            </xsl:when>
            <xsl:when test="contains(local-name(),'Proto')">
                <xsl:apply-templates select="@DEF"/>
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@appinfo"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='appinfo') and (local-name()!='name')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='field' or local-name()='fieldValue'">
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@type"/>
                <xsl:apply-templates select="@accessType"/>
                <xsl:apply-templates select="@value"><xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param></xsl:apply-templates>
                <xsl:apply-templates select="@appinfo"/>
                <xsl:apply-templates select="@documentation"/>
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='type') and (local-name()!='value') and (local-name()!='accessType') and (local-name()!='appinfo') and (local-name()!='documentation')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="contains(local-name(),'connect')">
                <!-- IS/connect -->
                <xsl:apply-templates select="@nodeField"/>
                <xsl:apply-templates select="@protoField"/>
            </xsl:when>
            <!-- otherwise not a special case, process name/containerField first and url values last -->
            <xsl:otherwise>
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@containerField"/>
                <xsl:apply-templates select="@description"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and (local-name()!='name') and (local-name()!='description') and not(contains(local-name(), 'url') or contains(local-name(), 'Url'))]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[contains(local-name(), 'url') or contains(local-name(), 'Url')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@containerField"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template match="@*" >
        <xsl:param name="indent"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
		<xsl:param name="nodeNumber"><xsl:text></xsl:text></xsl:param>
		<!-- debug
			<xsl:message>
				<xsl:text disable-output-escaping="yes">### </xsl:text>
				<xsl:value-of select="local-name(.)"/>
				<xsl:text>='</xsl:text>
				<xsl:value-of select="."/>
				<xsl:text disable-output-escaping="yes">'</xsl:text>
			</xsl:message>
		-->

        <!-- eliminate default attribute values, otherwise they will all appear in output  -->
        <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3dom.xslt X3dUnwrap.xslt X3dWrap.xslt and X3dToJson.xslt -->
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
                      not( local-name()='bboxDisplay' and string(.)='false') and
                      not( local-name()='castShadow' and string(.)='true') and
                      not( local-name()='channelCountMode' and string(.)='max') and
                      not( local-name()='channelInterpretation' and string(.)='speakers') and
                      not( local-name()='detune' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='enabled' and string(.)='true') and
                      not( local-name()='gain' and (string(.)='1' or string(.)='1.0')) and
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
                       not( local-name(..)='Inline' and ((local-name()='load' and string(.)='true') or (local-name()='global' and string(.)='false'))) and
                      not( local-name(..)='LoadSensor' and
                      ((local-name()='enabled' and string(.)='true') or
                      (local-name()='timeOut' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='LOD'	and	((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='forceTransitions' and string(.)='false'))) and
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
                      (local-name()='separateBackColor' and string(.)='false') or
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
                      not( ((local-name(..)='PointLight') or (local-name(..)='EnvironmentLight')) and
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
                      (local-name()='viewAll' and string(.)='false') or
                      ((local-name()='nearClippingPlane' or local-name()='farClippingPlane') and ((string(.)='-1') or (string(.)='-1.') or (string(.)='-1.0'))) or
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
                      not( contains(local-name(..),'Texture') and
                      ((local-name() = 'mapping') and (string-length(string(.)) = 0))) and
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
                      ((local-name()='enabled' and string(.)='true'))) and
                      not(starts-with(local-name(..),'TextureProjector') and
                       ((local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='location'  and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                        (local-name()='upVector' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='farDistance'  and (string(.)='10' or string(.)='10.0')) or
                        (local-name()='nearDistance' and (string(.)='1'  or string(.)='1.0')) or
                        (local-name()='global' and string(.)='true') or
                        (local-name()='on' and string(.)='true'))) and
                      not( local-name(..)='TextureProjectorParallel' and
                      ((local-name()='fieldOfView' and (string(.)='-1 -1 1 1' or string(.)='-1.0 -1.0 1.0 1.0')))) and
                      not( local-name(..)='TextureProjectorPerspective' and
                       ((local-name()='upVector' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854')))))" />
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
                      select="not((local-name()='containerField' and string(.)='source')   and (local-name(..)='AudioClip')) and
                      not((local-name()='containerField' and string(.)='appearance')	   and (local-name(..)='Appearance')) and
                      not((local-name()='containerField' and string(.)='material')         and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))) and
                      not((local-name()='containerField' and string(.)='color')            and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                      not((local-name()='containerField' and string(.)='coord')            and ((local-name(..)='Coordinate') or (local-name(..)='CoordinateDouble') or (local-name(..)='GeoCoordinate'))) and
                      not((local-name()='containerField' and string(.)='normal')           and (local-name(..)='Normal')) and
                      not((local-name()='containerField' and string(.)='texture')          and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
                      not((local-name()='containerField' and string(.)='fontStyle')        and (local-name(..)='FontStyle')) and
                      not((local-name()='containerField' and string(.)='texCoord')         and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
                      not((local-name()='containerField' and string(.)='textureTransform') and (local-name(..)='TextureTransform'))" />
        <xsl:variable name="notDefaultContainerField3"
                      select="not((local-name()='containerField' and string(.)='geometry') and
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
                       (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not(local-name(..)='GeoLOD' 	  and 
                      ((local-name()='range' and (string(.)='10' or string(.)='10.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not(local-name(..)='GeoViewpoint' and
                      ((local-name()='speedFactor' and (string(.)='1' or string(.)='1.0')) or
						(local-name()='headlight' and (string(.)='true')) or
						(local-name()='jump' and (string(.)='true')) or
                        (local-name()='viewAll' and string(.)='false') or
                        ((local-name()='nearClippingPlane' or local-name()='farClippingPlane') and ((string(.)='-1') or (string(.)='-1.') or (string(.)='-1.0'))) or
						(local-name()='navType' and (string(.)='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
						(local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
						(local-name()='position' and (string(.)='0 0 100000' or string(.)='0.0 0.0 100000.0')) or
                        (local-name()='fieldOfView' and (string(.)='0.785398' or string(.)='.785398' or string(.)='0.7854' or string(.)='.7854')) or
                        (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not((local-name(..)='GeoCoordinate' or local-name(..)='GeoOrigin') and
                      ((local-name()='rotateYUp' and (string(.)='false')) or
                      (local-name()='containerField' and (string(.)='geoOrigin')) or
                      (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;'))))" />
        <xsl:variable name="isHAnim1" select="$isX3D3 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)]"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] and not($isHAnim1 = true())"/>
        <xsl:variable name="notDefaultHAnim1"
                      select="not( local-name(..)='HAnimJoint' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='limitOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='stiffness' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
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
                       (local-name()='jointBindingPositions' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='jointBindingRotations' and (string(.)='0 0 1 0' or string(.)='0 1 0 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0.0 1.0 0.0 0.0')) or
                       (local-name()='jointBindingScales' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='loa' and (string(.)='-1')) or
                       (local-name()='version' and (($isHAnim1 = true() and (string(.)='1.0' or (string-length(string(.)) = 0))) or ($isHAnim2 = true() and string(.)='2.0'))) or
                       (local-name()='skeletalConfiguration' and (string(.)='BASIC')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimDisplacer' and
                      ((local-name()='containerField' and (string(.)='displacers')) or
                       (local-name()='weight' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='HAnimMotion' and
                      ((local-name()='containerField' and (string(.)='motions')) or
                       (local-name()='frameDuration' and (string(.)='0.1' or string(.)='.1')) or
                       (local-name()='frameIncrement' and (string(.)='1')) or
                       ((local-name()='frameIndex' or local-name()='startFrame' or local-name()='endFrame') and (string(.)='0')) or
                       (local-name()='loa' and (string(.)='-1'))))" />
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
                (local-name(..)='HAnimHumanoid' and local-name()='version') or
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
                $notDefaultFieldValue10 and
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
			
			<xsl:variable name="attributeType">
				<xsl:call-template name="attribute-type"/>
			</xsl:variable>
			<xsl:variable name="tupleSize">
				<xsl:call-template name="tuple-size">
					<xsl:with-param name="type">
						<xsl:value-of select="$attributeType"/>
					</xsl:with-param>
				</xsl:call-template>
			</xsl:variable>
			<xsl:variable name="numbersPerGroup" select="($tupleSize * $tupleSplitSize)"/>
			<xsl:variable name="embeddedSpaceCount" select="string-length(normalize-space(string(.))) - string-length(translate(string(.),' ',''))"/>
			<xsl:variable name="isNumeric" select="(string-length(translate(string(.),'0123456789+-Ee. ','')) = 0)"/>
                
			<xsl:variable name="attributeTypeHeuristic"> <!-- replaced, no longer in use -->
				<xsl:choose>
					<!-- TODO need strict rules; heuristics follow -->
					<xsl:when test="not(contains(string(.),' ')) and (string-length(translate(string(.),'truefalse','')) = 0)">
						<xsl:text>SFBool</xsl:text>
					</xsl:when>
					<xsl:when test="(string-length(translate(string(.),'truefalse ','')) = 0)">
						<xsl:text>MFBool</xsl:text>
					</xsl:when>
					<xsl:when test="(name() = 'content') or (name() = 'description') or (name() = 'name') or (name() = 'version')">
						<xsl:text>SFString</xsl:text>
					</xsl:when>
					<xsl:when test="(name() = 'string') or (name() = 'justify')">
						<xsl:text>MFString</xsl:text>
					</xsl:when>
					<!-- TODO
					<xsl:when test="(starts-with(normalize-space(string(.)),'&quot;') and ends-with(normalize-space(string(.)),'&quot;'))">
						<xsl:text>MFString</xsl:text>
					</xsl:when>
					-->
					<xsl:when test="($embeddedSpaceCount = 0) and $isNumeric">
						<xsl:text>SFnumber</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 1) and starts-with(name(),'Geo')">
						<xsl:text>SFVec2d</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 1)">
						<xsl:text>SFVec2f</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 2) and starts-with(name(),'Geo')">
						<xsl:text>SFVec3d</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 2) and contains(name(),'olor')">
						<xsl:text>SFColor</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 3) and contains(name(),'olor')">
						<xsl:text>SFColorRGBA</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 2)">
						<xsl:text>SFVec3f</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 3) and contains(name(),'otation')">
						<xsl:text>SFRotation</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 3) and starts-with(name(),'Geo')">
						<xsl:text>SFVec4d</xsl:text>
					</xsl:when>
					<xsl:when test="($embeddedSpaceCount = 3)">
						<xsl:text>SFVec4f</xsl:text>
					</xsl:when>
					<xsl:when test="$isNumeric">
						<xsl:text>MFnumberTypeError</xsl:text><!-- not a legal X3D type, this is an error sentinel -->
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>SFString</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>
				
			<xsl:variable name="normalizedArray" select="normalize-space(translate(string(.),',',' '))"/>
			<xsl:variable name="numberCount" select="1 + string-length(translate($normalizedArray,'0123456789+-Ee.',''))"/>
			<xsl:variable name="tupleCount" select="($numberCount div $tupleSize)"/>
			<xsl:variable name="numberArray" select="tokenize($normalizedArray,' ')"/>
			
			<xsl:if test="not(starts-with(name(),'xsd:')) and not(name() = 'containerField')">
				<!-- attribute of interest found, show it -->
				
				<!-- debug
				<xsl:message>
					<xsl:text>[</xsl:text>
					<xsl:value-of select="local-name(..)"/>
					<xsl:text> </xsl:text>
					<xsl:value-of select="local-name(.)"/>
					<xsl:text>: $isNumeric=</xsl:text>
					<xsl:value-of select="$isNumeric"/>
					<xsl:text>, $attributeType=</xsl:text>
					<xsl:value-of select="$attributeType"/>
					<xsl:text>, $numberCount=</xsl:text>
					<xsl:value-of select="$numberCount"/>
					<xsl:text>, $tupleSize=</xsl:text>
					<xsl:value-of select="$tupleSize"/>
					<xsl:text>, $tupleCount=</xsl:text>
					<xsl:value-of select="$tupleCount"/>
					<xsl:text>, $tupleSplitSize=</xsl:text>
					<xsl:value-of select="$tupleSplitSize"/>
					<xsl:text>, $numbersPerGroup=</xsl:text>
					<xsl:value-of select="$numbersPerGroup"/>
					<xsl:text>, count($numberArray)=</xsl:text>
					<xsl:value-of select="count($numberArray)"/>
					<xsl:text>, value='</xsl:text>
					<xsl:value-of select="substring(.,1,20)"/>
					<xsl:if test="(string-length(string(.)) > 20)">
						<xsl:text> (etc.)</xsl:text>
					</xsl:if>
					<xsl:text>'</xsl:text>
					<xsl:text>]</xsl:text>
				</xsl:message>
				-->
						
				<xsl:text>.set</xsl:text>
				<xsl:if test="(local-name() = 'class')">
					<xsl:text>Css</xsl:text><!-- method prefix -->
				</xsl:if>
				<!-- upper camel case -->
				<xsl:value-of select="translate(substring(name(),1,1),'abcdefghijklmnopqrstuvwxyz','ABCDEFGHIJKLMNOPQRSTUVWXYZ')"/>
				<xsl:value-of select="substring(name(),2)"/>
				<xsl:text>(</xsl:text>
				
				<xsl:variable name="nodeNumber"    select="count(../preceding::*) + 1"/>
				<xsl:variable name="elementName" select="local-name(..)"/>
				<xsl:variable name="DEF"         select="../@DEF"/>
				<xsl:variable name="level"       select="count(ancestor::*)"/>
				<xsl:variable name="attributeName" select="local-name()"/>
				<xsl:variable name="isLargeAttribute" 
							  select="not($elementName = 'meta') and
									 (string-length(string(.)) > $attributeSplitSize) and not($attributeName = 'url') and not(contains($attributeName,'Url'))"/>
				<xsl:choose>
					<xsl:when test="$isLargeAttribute">
						<xsl:variable name="dataObjectName">
							<xsl:choose>
								<xsl:when test="(string-length(normalize-space($DEF)) > 0)">
									<xsl:value-of select="translate(normalize-space($DEF),'.-','__')"/>
									<xsl:text>_</xsl:text>
								</xsl:when>
								<xsl:otherwise>
									<xsl:value-of select="$elementName"/>
									<xsl:text>_</xsl:text>
									<xsl:if test="(string-length(normalize-space(../@name)) > 0)">
										<xsl:value-of select="../@name"/>
										<xsl:text>_</xsl:text>
									</xsl:if>
								</xsl:otherwise>
							</xsl:choose>
							<!-- ensure unique DEF by including level from top and nodeNumber among elements -->
							<xsl:value-of select="$level"/>
							<xsl:text>_</xsl:text>
							<xsl:value-of select="$nodeNumber"/>
							<xsl:text>_</xsl:text>
							<xsl:value-of select="$attributeName"/>
						</xsl:variable>
						<xsl:text>this.</xsl:text><xsl:value-of select="$dataObjectName"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:call-template name="output-attribute-value">
							<xsl:with-param name="inputValue"   select="."/>
							<xsl:with-param name="attributeType" select="$attributeType"/>
							<xsl:with-param name="indent"        select="$indent"/>
						</xsl:call-template>
					</xsl:otherwise>
				</xsl:choose>
				<xsl:text>)</xsl:text>
			</xsl:if>
			
        </xsl:if>
        <!-- end if filtering of default attribute values -->
    </xsl:template>

    <xsl:template name="escape-special-characters-to-html">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
		<!-- don't escape apostrophes, that makes javadoc unhappy -->
		<xsl:call-template name="escape-greaterthan-characters">
			<xsl:with-param name="inputValue">
				<xsl:call-template name="escape-lessthan-characters">
					<xsl:with-param name="inputValue">
						<!-- keep escape-ampersand-characters innermost so it doesn't get overzealous about escaped apostrophes or less-than characters -->
						<xsl:call-template name="escape-ampersand-characters">
								<xsl:with-param name="inputValue" select="$inputString"/>
						</xsl:call-template>
					</xsl:with-param>
				</xsl:call-template>
			</xsl:with-param>
		</xsl:call-template>
    </xsl:template>

    <xsl:template name="escape-lessthan-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:message><xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/></xsl:message> -->
        <xsl:choose>
            <!-- handle preceding &quot; marks first
            <xsl:when test="contains($inputString,'&quot;') and not(contains(substring-before($inputString,'&quot;'),'&#60;'))">
                <xsl:value-of select="substring-before($inputString,'&quot;')"/>
                <xsl:text disable-output-escaping="no">&quot;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters">
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot;')"/>
                </xsl:call-template>
            </xsl:when> -->
            <!-- &#60; is &lt; -->
            <xsl:when test="contains($inputString,'&#60;')">
                <xsl:value-of select="substring-before($inputString,'&#60;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="no">&amp;</xsl:text>
                <xsl:text disable-output-escaping="no">lt;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&#60;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-greaterthan-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:message><xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/></xsl:message> -->
        <xsl:choose>
            <!-- &#62; is &gt; -->
            <xsl:when test="contains($inputString,'&#62;')">
                <xsl:value-of select="substring-before($inputString,'&#62;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="no">&amp;</xsl:text>
                <xsl:text disable-output-escaping="no">gt;</xsl:text>
                <xsl:call-template name="escape-greaterthan-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&#62;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-ampersand-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:choose>
            <!-- probably do not have to worry about solo cases with stray ampersands, because they are badly formed XML and will not parse: 
                 and (starts-with(substring-after($inputString,'&amp;'),' ') or substring-after($inputString,''))-->
            <!-- first pass through escaped ampersand character, but only if other ampersand codes do not precede it -->
            <xsl:when test="contains($inputString,'&amp;amp;') and not(contains(substring-before($inputString,'&amp;amp;'),'&amp;'))">
                <xsl:value-of select="substring-before($inputString,'&amp;amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">amp;</xsl:text>
               <!-- <xsl:text disable-output-escaping="yes">amp;</xsl:text>-->
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;#38;') and not(contains(substring-before($inputString,'&amp;#38;'),'&amp;'))">
                <xsl:value-of select="substring-before($inputString,'&amp;amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">#38;</xsl:text>
               <!-- <xsl:text disable-output-escaping="yes">amp;</xsl:text>-->
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;')">
                <xsl:value-of select="substring-before($inputString,'&amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">amp;</xsl:text> 
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-quote-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
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
            <xsl:when test="contains($inputString,'&quot;')">
                <xsl:value-of select="substring-before($inputString,'&quot;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">\"</xsl:text>
                <xsl:call-template name="escape-quote-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot;')"/>
                </xsl:call-template>
            </xsl:when><!--
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
                    <xsl:with-param name="inputValue" select='substring-after($inputString,$apostrophe)'/>
                </xsl:call-template>
            </xsl:when>-->
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-url-quote-characters">
		<!-- https://en.wikipedia.org/wiki/Percent-encoding -->
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <xsl:choose>
            <xsl:when test="contains($inputString,'&quot;')">
                <xsl:value-of select="substring-before($inputString,'&quot;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">%22</xsl:text><!-- escape sequence -->
                <xsl:call-template name="escape-url-quote-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-apostrophe-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
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
                    <xsl:with-param name="inputValue" select='substring-after($inputString,"&apos;")'/>
                </xsl:call-template>
            </xsl:when><!--
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
                    <xsl:with-param name="inputValue" select='substring-after($inputString,$apostrophe)'/>
                </xsl:call-template>
            </xsl:when>-->
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-backslash-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:
		<xsl:if test="contains($inputString,'\')">
			<xsl:message>
				<xsl:text>### escape-backslash-characters inputString: </xsl:text>
				<xsl:value-of select="$inputString"/>
			</xsl:message>
		</xsl:if> -->
        <!-- \ = &#92; -->
		<xsl:choose>
            <xsl:when test="contains($inputString,'\')">
                <xsl:value-of select="substring-before($inputString,'\')"/>
                <xsl:text disable-output-escaping="yes">\\</xsl:text><!-- escaped backslash output is here -->
                <xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'\')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="java-float-numbers">
		<!-- TODO omit trailing zeroes -->
        <xsl:param name="inputType"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
		<!-- change space characters to commas to support the recursion algorithm -->
		<xsl:variable name="arrayString" select="translate(normalize-space($inputString),' ',',')"/>
		
        <xsl:choose>
            <xsl:when test="not(contains($arrayString,','))">
				<!-- last number, all done -->
				<xsl:value-of select="$arrayString"/>
				<xsl:if test="not(contains($arrayString,'.')) and not(contains($arrayString,'E')) and not(contains($arrayString,'e'))">
					<xsl:text>.0</xsl:text> <!-- necessary to append decimal point to integer value -->
				</xsl:if>
                <xsl:text></xsl:text><!-- indicate that this number is a float; added after exponential form also -->
            </xsl:when>
            <xsl:when test="contains($arrayString,',')">
				<xsl:variable name="firstNumber">
					<xsl:value-of select="substring-before($arrayString,',')"/>
				</xsl:variable>
                <xsl:value-of select="$firstNumber"/>
				<xsl:if test="not(contains($firstNumber,'.')) and not(contains($arrayString,'E')) and not(contains($arrayString,'e'))">
					<xsl:text>.0</xsl:text> <!-- necessary to append decimal point to integer value -->
				</xsl:if>
                <xsl:text></xsl:text><!-- indicate that this number is a float -->
                <xsl:text>,</xsl:text>
                <xsl:call-template name="java-float-numbers"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($arrayString,',')"/>
                    <xsl:with-param name="inputType" select="$inputType"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
				<!-- safety net, should be unreachable -->
                <xsl:value-of select="$arrayString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="java-double-numbers">
	<!-- TODO omit trailing zeroes -->
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
<!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
<!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
	<!-- change space characters to commas to support the recursion algorithm -->
	<xsl:variable name="arrayString" select="translate(normalize-space($inputString),' ',',')"/>
<xsl:choose>
    <xsl:when test="not(contains($arrayString,','))">
			<!-- last number, all done -->
			<xsl:value-of select="$arrayString"/>
			<xsl:if test="not(contains($arrayString,'.')) and not(contains($arrayString,'E')) and not(contains($arrayString,'e'))">
				<xsl:text>.0</xsl:text> <!-- necessary to append decimal point to integer value -->
				<!-- <xsl:text></xsl:text>no need to append d to indicate that this number is a double -->
			</xsl:if>
    </xsl:when>
    <xsl:when test="contains($arrayString,',')">
			<xsl:variable name="firstNumber">
				<xsl:value-of select="substring-before($arrayString,',')"/>
			</xsl:variable>
	<xsl:value-of select="$firstNumber"/>
			<xsl:if test="not(contains($firstNumber,'.')) and not(contains($arrayString,'E')) and not(contains($arrayString,'e'))">
				<xsl:text>.0</xsl:text> <!-- necessary to append decimal point to integer value -->
			</xsl:if>
	<!-- <xsl:text></xsl:text>no need to append d to indicate that this number is a double -->
	<xsl:text>,</xsl:text>
	<xsl:call-template name="java-double-numbers"> <!-- tail recursion -->
	    <xsl:with-param name="inputValue" select="substring-after($arrayString,',')"/>
	</xsl:call-template>
    </xsl:when>
    <xsl:otherwise>
			<!-- safety net, should be unreachable -->
	<xsl:value-of select="$arrayString" disable-output-escaping="yes"/>
    </xsl:otherwise>
</xsl:choose>
</xsl:template>

<xsl:template name="java-create-array-from-multiline-string">
	<!-- outer quotes provided by invoking code, this template splits a string value into comma-separated substrings -->
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
<!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
<!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
	<xsl:choose>
    <xsl:when test="not(contains($inputString,'&#10;'))">
			<!-- all done -->
			<xsl:value-of select="$inputString"/>
    </xsl:when>
    <xsl:otherwise>
		<xsl:value-of select="substring-before($inputString,'&#10;')"/>
			<xsl:text>"</xsl:text>
			<!-- now handle remainder -->
			<xsl:if test="(string-length(normalize-space(substring-after($inputString,'&#10;'))) > 0)">
				<xsl:text>,</xsl:text><!-- string append operator -->
				<xsl:text>&#10;</xsl:text>
				<xsl:text>"</xsl:text>
				<xsl:call-template name="java-create-array-from-multiline-string"> <!-- tail recursion -->
					<xsl:with-param name="inputValue" select="substring-after($inputString,'&#10;')"/>
				</xsl:call-template>
			</xsl:if>
			<!-- if only whitespace remained, then all done -->
    </xsl:otherwise>
</xsl:choose>
</xsl:template>

<!-- ****** XML processing-instruction - TODO experimental.  what about DTDs? ******
<xsl:template match="processing-instruction()">
<xsl:copy> 
   <xsl:apply-templates select="@*"/> 
   <xsl:apply-templates/> 
</xsl:copy>
</xsl:template> -->

<!-- ****** XML node - TODO experimental.  what about DTDs? ******
<xsl:template match="node()">
<xsl:copy> 
   <xsl:apply-templates select="@*"/> 
   <xsl:apply-templates/> 
</xsl:copy>
</xsl:template> -->

<!-- ****** XML text ****** -->
<!-- none expected, this is designed to catch errors -->
<xsl:template match="text()[not(local-name(..)='Script')]">
<!-- XML text is likely from digital signature nodes - try to swallow blank lines between tags and pass through other text here -->
<xsl:if test="not(normalize-space(string(.)) = '') and not(normalize-space(string(.)) = ' ')">
    <xsl:value-of select="." disable-output-escaping="yes"/>
    <xsl:message>
	<xsl:text>unexpected text found</xsl:text>
	<xsl:value-of select="." disable-output-escaping="yes"/>
    </xsl:message>
</xsl:if>
</xsl:template>

<!-- ****** XML comments ****** -->
<xsl:template match="comment()">
	<xsl:choose>
		<xsl:when test="ancestor::*">
			<xsl:text>.addComments(</xsl:text>
			<xsl:choose>
				<!-- split into string array if needed -->
				<xsl:when test="not(contains(string(.),'&#10;'))">
					<xsl:text>"</xsl:text>
								<xsl:call-template name="escape-quote-characters">
									<xsl:with-param name="inputValue">
										<!-- must escape backslashes before quote characters to avoid side effects -->
										<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
											<xsl:with-param name="inputValue">
												<xsl:value-of select="."/>
											</xsl:with-param>
										</xsl:call-template>
									</xsl:with-param>
								</xsl:call-template>
					<xsl:text>"</xsl:text>
				</xsl:when>
				<xsl:otherwise>
					<!-- debug 
					<xsl:message>
						<xsl:text>Fstring: </xsl:text>
						<xsl:value-of select="."/>
					</xsl:message>
					-->
					<xsl:text>Java.to(["</xsl:text>
						<xsl:call-template name="java-create-array-from-multiline-string">
							<xsl:with-param name="inputValue">
								<xsl:call-template name="escape-quote-characters">
									<xsl:with-param name="inputValue">
										<!-- must escape backslashes before quote characters to avoid side effects -->
										<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
											<xsl:with-param name="inputValue">
												<xsl:value-of select="."/>
											</xsl:with-param>
										</xsl:call-template>
									</xsl:with-param>
								</xsl:call-template>
							</xsl:with-param>
						</xsl:call-template>
					<xsl:text>], Java.type("java.lang.String[]"))</xsl:text>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:text>)</xsl:text>
		</xsl:when>
		<xsl:otherwise>
			<!-- at document root level -->
			<!-- indent -->
			<xsl:text>  </xsl:text>
			<xsl:text>/* </xsl:text>
			<xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
			<xsl:text> */</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

<!-- ****** XML processing-instruction ****** -->
<xsl:template match="processing-instruction()">
<span title="XML processing instruction, hidden as a comment"><code><xsl:text>&lt;-- </xsl:text></code><xsl:value-of select="."/><code><xsl:text> --&gt;&#10;</xsl:text></code></span>
</xsl:template>

<xsl:template match="ds:*" >
	<xsl:message>
		<xsl:text>found ds:</xsl:text>
		<xsl:value-of select="local-name()"/>
	</xsl:message>
<!-- indent -->
<xsl:for-each select="ancestor::*">
    <xsl:text>  </xsl:text>
</xsl:for-each>
	<xsl:text><![CDATA[<!--]]></xsl:text><xsl:text>&#10;</xsl:text>
<!-- not working
<xsl:copy>
    <xsl:apply-templates select="@* | * | comment() | text()"/>
</xsl:copy>
<xsl:text>&#10;</xsl:text> -->      
<xsl:text disable-output-escaping="yes">&lt;ds:</xsl:text>
<xsl:value-of select="local-name()"/>
<xsl:for-each select="@*">
    <xsl:text> </xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:text>='</xsl:text>
    <xsl:value-of select="."/>
    <xsl:text>'</xsl:text>
</xsl:for-each>
<!-- TODO validation problem
<xsl:for-each select="ds:@*">
    <xsl:text> </xsl:text>
    <xsl:value-of select="local-name()"/>
    <xsl:text>='</xsl:text>
    <xsl:value-of select="."/>
    <xsl:text>'</xsl:text>
</xsl:for-each>
-->
<xsl:variable name="containsText" select="not(normalize-space(text()) = '') and not(normalize-space(text()) = ' ')"/>
<xsl:choose>
    <xsl:when test="* or comment() or $containsText">
	<xsl:text disable-output-escaping="yes">&gt;</xsl:text>
	<xsl:if test="not($containsText)">
	    <xsl:text>&#10;</xsl:text>
	</xsl:if>
	<xsl:apply-templates select="comment()"/>
	<xsl:value-of select="text()" disable-output-escaping="yes"/><!-- I18N -->
	<!-- no mixed content likely -->
	<xsl:apply-templates select="*"/>
	<xsl:if test="not($containsText)">
	    <!-- indent -->
	    <xsl:for-each select="ancestor::*">
		<xsl:text>  </xsl:text>
	    </xsl:for-each>
	</xsl:if>
	<xsl:text disable-output-escaping="yes">&lt;/ds:</xsl:text>
	<xsl:value-of select="local-name()"/>
	<xsl:text disable-output-escaping="yes">&gt;</xsl:text>
	<xsl:text>&#10;</xsl:text>
    </xsl:when>
    <xsl:otherwise>
	<xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
	<xsl:text>&#10;</xsl:text>
    </xsl:otherwise>
</xsl:choose>
	<xsl:text>&#10;</xsl:text><xsl:text><![CDATA[ -->]]></xsl:text>
</xsl:template>

<xsl:template name="list-component-imports">
<xsl:text>load('X3Dautoclass.js');</xsl:text><xsl:text>&#10;</xsl:text>
</xsl:template>

<xsl:template name="tuple-size">
	<xsl:param name="type"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
	
	<xsl:choose>
		<xsl:when test="contains($type,'FBool')   or contains($type,'FInt32') or contains($type,'FFloat') or
						contains($type,'FDouble') or contains($type,'FTime')  or contains($type,'FString') or
						contains($type,'FImage')  or contains($type,'FNode')  or ($type = 'xs:string')">
			<xsl:text>1</xsl:text>
		</xsl:when>
		<xsl:when test="contains($type,'FVec2')">
			<xsl:text>2</xsl:text>
		</xsl:when>
		<xsl:when test="contains($type,'FVec3') or 
						($type = 'SFColor') or ($type = 'MFColor')">
			<xsl:text>3</xsl:text>
		</xsl:when>
		<xsl:when test=" contains($type,'FVec4') or contains($type,'FRotation') or
						($type = 'SFColorRGBA')  or ($type = 'MFColorRGBA')">
			<xsl:text>4</xsl:text>
		</xsl:when>
		<xsl:when test="contains($type,'Matrix3')">
			<xsl:text>9</xsl:text>
		</xsl:when>
		<xsl:when test="contains($type,'Matrix4')">
			<xsl:text>16</xsl:text>
		</xsl:when>
	</xsl:choose>
</xsl:template>

<xsl:template name="attribute-type"> <!-- rule to determine attribute type -->

		<!-- Note:  these rules are adapted from X3dToVrml97.xslt X3dToJson.xslt X3dToJava.xslt X3dToES5.xslt etc. so be sure to apply any updates in all stylesheets -->

	<xsl:variable name="attributeName"       select="local-name()"/>
	<xsl:variable name="parentElementName"   select="local-name(..)"/>
	<xsl:variable name="normalizeSpaceValue" select="normalize-space(string(.))"/>
	<xsl:variable name="localFieldType"      select="normalize-space(../@type)"/> <!-- locally defined field -->

	<xsl:choose>
	  <!-- SFString -->
	  <xsl:when test="($localFieldType='SFString')          or
                          (starts-with($parentElementName,'field') and ($attributeName='value'))      or
                            ($attributeName='DEF')                or
                            ($attributeName='USE')                or
                            ($attributeName='containerField')     or
                            ($attributeName='appinfo')            or
                            ($attributeName='channelCountMode')   or ($attributeName='channelInterpretation')   or
                            ($attributeName='documentation')      or
                            ($attributeName='name')               or
                            ($attributeName='class')              or
                            ($attributeName='id')                 or
                            ($attributeName='style')              or
                            ($attributeName='description')        or
                            ($attributeName='distanceModel')      or
                            ($attributeName='address')            or
                            ($attributeName='language')           or
                            ($attributeName='mapping')            or
                            ($attributeName='marking')            or
                            ($attributeName='multicastAddress')   or
                            ($attributeName='networkMode')        or
                            ($attributeName='oversample')         or
                            ($attributeName='reference')          or
                            ($attributeName='type')               or
                            ($attributeName='lang')               or ($attributeName='xml:lang') or
                            (starts-with($parentElementName,'field')         and (($attributeName='accessType') or ($attributeName='type')       or ($attributeName='appinfo') or ($attributeName='documentation'))) or
                            (starts-with($parentElementName,'meta')          and (($attributeName='content')    or ($attributeName='http-equiv') or ($attributeName='scheme')  or ($attributeName='dir') or ($attributeName='lang') or ($attributeName='xml:lang'))) or
                            (($parentElementName='component')                and not($attributeName='level')) or
                            (($parentElementName='unit')                     and not($attributeName='conversionFactor')) or
			    ($parentElementName='Appearance'                 and $attributeName='alphaMode') or
                            ($parentElementName='ArcClose2D'                 and $attributeName='closureType') or
                            ($parentElementName='BiquadFilter'               and $attributeName='type') or
                            ($parentElementName='BlendedVolumeStyle'         and (starts-with($attributeName,'weightFunction') or ($attributeName='magnificationFilter') or ($attributeName='minificationFilter') or ($attributeName='textureCompression'))) or
                            (ends-with($parentElementName,'Fog')             and $attributeName='fogType') or
                            ($parentElementName='GeneratedCubeMapTexture'    and $attributeName='update') or
                            ($parentElementName='HAnimHumanoid'              and (($attributeName='version') or ($attributeName='skeletalConfiguration'))) or
                            ($parentElementName='HAnimMotion'                and (($attributeName='channels') or ($attributeName='joints'))) or
                            ($parentElementName='IMPORT'                     and (($attributeName='AS') or ($attributeName='importedDEF') or ($attributeName='inlineDEF'))) or
                            (ends-with($parentElementName,'Material')	   and ends-with($attributeName,'Mapping')) or
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
	  <!-- X3D statements (i.e. not nodes): xs:string (including X3D version attribute) -->
	  <xsl:when test="($parentElementName='X3D')     or ($parentElementName='ROUTE')   or ($parentElementName='meta')    or
				      ($parentElementName='EXPORT')  or ($parentElementName='IMPORT')  or ($parentElementName='connect')">
		  <!-- includes X3D version. field/fieldValue type logic handled separately -->
		  <xsl:text>xs:string</xsl:text> 
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
				($attributeName='bboxDisplay')  or
				($attributeName='enabled')  or
				($attributeName='dopplerEnabled')  or
				($attributeName='enableHRTF')  or
				($attributeName='global')   or
				($attributeName='normalPerVertex') or
				($attributeName='on')       or
				($attributeName='load')     or
				($attributeName='loop')     or
				($attributeName='normalizeVelocity') or
				($attributeName='rtpHeaderExpected') or
				($attributeName='shadows') or
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
				($parentElementName='ListenerPointSource' and $attributeName='trackCurrentView')  or
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
				($parentElementName='HAnimMotion'                and $attributeName='channelsEnabled') or
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
					(ends-with($parentElementName,'Material') and contains($attributeName,'Color')) or
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
                                        ($attributeName='absorption')       or
                                        ($attributeName='ambientIntensity') or
					($attributeName='attack')           or
                                        ($attributeName='coneInnerAngle')   or ($attributeName='coneOuterAngle')  or ($attributeName='coneOuterGain')    or
					($attributeName='creaseAngle')      or
					($attributeName='detune')           or
                                        ($attributeName='diffuse')          or
					($attributeName='farDistance')      or ($attributeName='nearDistance')    or
					($attributeName='frequency')        or
					($attributeName='gain')             or
					($attributeName='intensity')        or
					($attributeName='interauralDistance') or
					($attributeName='knee')             or
					($attributeName='loopEnd')          or ($attributeName='loopStart')       or
					($attributeName='maxDistance')      or
					($attributeName='minDecibels')      or ($attributeName='maxDecibels')     or
                                        starts-with($attributeName,'pointSize') or
					($attributeName='priority')         or
					($attributeName='qualityFactor')    or
                                        ($attributeName='radius')           or ($attributeName='innerRadius') or ($attributeName='outerRadius') or
					($attributeName='ratio')            or
					($attributeName='referenceDistance') or
                                        ($attributeName='refraction')       or
                                        ($attributeName='rolloffFactor')    or
					($attributeName='shadowIntensity')  or
					($attributeName='smoothingTimeConstant')  or
                                        ($attributeName='specular')         or
                                        ($attributeName='startAngle')       or ($attributeName='endAngle') or
					($attributeName='threshold')        or
                                        ($attributeName='tolerance')        or
					($attributeName='transparency')     or
				(starts-with($parentElementName,'Arc') and (contains($attributeName,'Angle') or $attributeName='radius')) or
				($parentElementName='AcousticProperties' and ($attributeName='absorption' or $attributeName='diffuse' or $attributeName='refraction' or $attributeName='specular')) or
				($parentElementName='Appearance'       and $attributeName='alphaCutoff') or
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
				(ends-with($parentElementName,'Material')  and ($attributeName='ambientIntensity' or $attributeName='metallic' or $attributeName='normalScale' or $attributeName='occlusionStrength' or $attributeName='roughness' or $attributeName='shininess' or $attributeName='transparency')) or
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
				($parentElementName='Sound' and ($attributeName='maxBack' or $attributeName='minBack' or $attributeName='maxFront' or $attributeName='minFront' or $attributeName='priority')) or
				($parentElementName='SpatialSound' and ($attributeName='coneInnerAngle' or $attributeName='coneOuterAngle' or $attributeName='coneOuterGain' or $attributeName='maxDistance' or $attributeName='priority' or $attributeName='referenceDistance' or $attributeName='rolloffFactor')) or
				($parentElementName='Sphere' and $attributeName='radius') or
				($parentElementName='SpotLight' and ($attributeName='radius' or $attributeName='cutOffAngle' or $attributeName='beamWidth')) or
				($parentElementName='Text' and $attributeName='maxExtent') or
				($parentElementName='TextureProperties' and ($attributeName='anisotropicDegree' or $attributeName='texturePriority')) or
				(starts-with($parentElementName,'TextureProjector') and ($attributeName='farDistance' or $attributeName='nearDistance')) or
                                ($parentElementName='TextureProjectorPerspective' and $attributeName='fieldOfView') or
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
				($parentElementName='EnvironmentLight' and $attributeName='diffuseCoefficients') or
				($parentElementName='EspduTransform' and $attributeName='articulationParameterArray') or
				($parentElementName='FloatVertexAttribute' and $attributeName='value') or
				($parentElementName='FogCoordinate' and $attributeName='depth') or
				($parentElementName='HAnimSisplacer' and $attributeName='weight') or
				($parentElementName='HAnimJoint' and ($attributeName='llimit' or $attributeName='ulimit' or $attributeName='skinCoordWeight' or $attributeName='stiffness')) or
				($parentElementName='HAnimMotion' and $attributeName='values') or
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
                ($attributeName='autoRefresh')    or
                ($attributeName='autoRefreshTimeLimit')    or
                ($attributeName='tau')            or
                ($attributeName='timestamp')      or
                ($attributeName='readInterval')   or
                ($attributeName='writeInterval')  or
                ($parentElementName='LoadSensor'     and $attributeName='timeOut')  or
                ($parentElementName='AudioClip'      and ends-with($attributeName,'Time'))  or
                ($parentElementName='EspduTransform' and ends-with($attributeName,'Time'))  or
				($parentElementName='HAnimMotion'    and $attributeName='frameDuration') or
                ($parentElementName='MovieTexture'   and ends-with($attributeName,'Time'))"> 
		  <!-- TimeSensor loop & enabled are caught by SFBool tests, all other TimeSensor fields are SFTime -->
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
				(($parentElementName='NurbsTextureCoordinate') and $attributeName='controlPoint') or
				(($parentElementName='Polyline2D') and $attributeName='lineSegments') or
				(($parentElementName='SplinePositionInterpolator2D') and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
				($parentElementName='TexCoordChaser2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
				($parentElementName='TexCoordDamper2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
				(($parentElementName='TriangleSet2D') and $attributeName='vertices')">
		  <xsl:text>MFVec2f</xsl:text>
	  </xsl:when>
	  <!-- MFVec2d -->
	  <xsl:when test="
				($localFieldType='MFVec2d')  or
				(($parentElementName='ContourPolyline2D') or ($parentElementName='NurbsCurve2D') and $attributeName='controlPoint')">
  <xsl:text>MFVec2d</xsl:text>
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
		  <xsl:text>SFVec3d</xsl:text>
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
				(starts-with($parentElementName,'TextureProjector') and ($attributeName='direction' or $attributeName='location')) or
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
                ($parentElementName='ClipPlane' and $attributeName='plane') or 
                    ($parentElementName='TextureProjectorParallel' and $attributeName='fieldOfView')">
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
				($localFieldType='MFVec3f')    or 
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
	    ($localFieldType='MFVec3f')    or 
	     ends-with($attributeName,'ID')             or
	    ($attributeName='order')                    or
				($attributeName='channelSelection')         or
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
					(starts-with($parentElementName,'HAnim') and $attributeName='loa') or
                    ($parentElementName='HAnimMotion' and (($attributeName='frameCount') or ($attributeName='frameIncrement') or ($attributeName='frameIndex') or ($attributeName='startFrame') or ($attributeName='endFrame'))) or
                    ($parentElementName='IntegerTrigger' and $attributeName='integerKey') or
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
					  <xsl:text>*** warning: X3dToES5.xslt attribute type not found for </xsl:text>
					  <xsl:value-of select="$parentElementName"/>
					  <xsl:text> </xsl:text>
					  <xsl:value-of select="$attributeName"/>
				</xsl:message>
			</xsl:otherwise>
		  </xsl:choose>
	  </xsl:otherwise>
	</xsl:choose>

</xsl:template>

<!-- apply ES5 tying rules to array output according to X3D type -->
<xsl:template name="output-attribute-value">
	<xsl:param name="indent"><xsl:text></xsl:text></xsl:param>
	<xsl:param name="attributeType"><xsl:text></xsl:text></xsl:param>
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
	
	<xsl:variable name="tupleSize">
		<xsl:call-template name="tuple-size">
			<xsl:with-param name="type">
				<xsl:value-of select="$attributeType"/>
			</xsl:with-param>
		</xsl:call-template>
	</xsl:variable>
	<xsl:variable name="numbersPerGroup" select="($tupleSize * $tupleSplitSize)"/>
	<xsl:variable name="embeddedSpaceCount" select="string-length(normalize-space(string(.))) - string-length(translate(string(.),' ',''))"/>
	<xsl:variable name="isNumeric" select="(string-length(translate(string(.),'0123456789+-Ee. ','')) = 0)"/>
		
	<xsl:variable name="normalizedArray" select="normalize-space(translate(string(.),',',' '))"/>
	<xsl:variable name="numberCount" select="1 + string-length(translate($normalizedArray,'0123456789+-Ee.',''))"/>
	<xsl:variable name="tupleCount" select="($numberCount div $tupleSize)"/>
	<xsl:variable name="numberArray" select="tokenize($normalizedArray,' ')"/>

	<xsl:choose>
		<xsl:when test="($attributeType = 'SFString') or ($attributeType = 'xs:string')">
			<xsl:text>"</xsl:text>
			<xsl:call-template name="escape-quote-characters">
				<xsl:with-param name="inputValue">
					<!-- must escape backslashes before quote characters to avoid side effects -->
					<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
						<xsl:with-param name="inputValue">
							<xsl:value-of select="."/>
						</xsl:with-param>
					</xsl:call-template>
				</xsl:with-param>
			</xsl:call-template>
			<xsl:text>"</xsl:text>
		</xsl:when>
		<xsl:when test="($attributeType = 'MFString')">
			<!-- special handling to avoid unintended errors -->
			<xsl:variable name="quotedValue">
				<xsl:choose>
					<xsl:when test="not(contains(string(.),'&quot;'))">
						<!-- MFStringObject is forgiving, but this code block fixes the error and notifies authors of valid practice -->
						<!-- unquoted MFString values were approved for X3D XML encoding in May 2017 -->
						<xsl:message>
							<xsl:text>*** No quotation marks found in MFString array of individual SFString values, wrapped them.</xsl:text>
							<xsl:text>&#10;</xsl:text>
							<xsl:text>*** &lt;</xsl:text>
							<xsl:value-of select="local-name(..)"/>
							<xsl:text> DEF='</xsl:text>
							<xsl:value-of select="../@DEF"/>
							<xsl:text>' name='</xsl:text>
							<xsl:value-of select="../@name"/>
							<xsl:text>' </xsl:text>
							<xsl:value-of select="local-name(.)"/>
							<xsl:text>='</xsl:text>
							<xsl:value-of select="."/>
							<xsl:text>'/&gt;</xsl:text>
						</xsl:message>
						<xsl:text>"</xsl:text>
						<xsl:value-of select="."/>
						<xsl:text>"</xsl:text>
					</xsl:when>
					<xsl:otherwise>
						<xsl:value-of select="."/>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>
			<xsl:text>new MFStringObject(</xsl:text>
			<xsl:text>"</xsl:text>
			<xsl:call-template name="escape-quote-characters">
				<xsl:with-param name="inputValue">
					<!-- must escape backslashes before quote characters to avoid side effects -->
					<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
						<xsl:with-param name="inputValue">
							<xsl:value-of select="$quotedValue"/>
						</xsl:with-param>
					</xsl:call-template>
				</xsl:with-param>
			</xsl:call-template>
			<xsl:text>"</xsl:text>
			<xsl:text>)</xsl:text>
		</xsl:when>
		<xsl:when test="($attributeType = 'SFBool')">
			<xsl:value-of select="."/>
		</xsl:when>

		<xsl:when test="($attributeType = 'MFBool')">
			<xsl:text>Java.to([</xsl:text>
			<xsl:value-of select="translate(normalize-space(string(.)),' ',',')"/>
			<xsl:text>], Java.type("boolean[]"))</xsl:text>
		</xsl:when>
		<xsl:when test="($attributeType = 'SFFloat')">
			<xsl:value-of select="."/>
			<xsl:text></xsl:text>
		</xsl:when>
		<xsl:when test="($attributeType = 'SFInt32') or ($attributeType = 'SFDouble') or ($attributeType = 'SFTime')">
			<xsl:value-of select="."/>
		</xsl:when>
		<xsl:when test="($attributeType = 'MFInt32') or ($attributeType = 'SFImage')">
			<xsl:text>Java.to([</xsl:text>
			<xsl:value-of select="translate(normalize-space(string(.)),' ',',')"/>
			<xsl:text>], Java.type("int[]"))</xsl:text>
		</xsl:when>
		<xsl:when test="($attributeType = 'MFFloat')">
			<xsl:text>Java.to([</xsl:text>
			<xsl:call-template name="java-float-numbers">
				<xsl:with-param name="inputValue">
					<xsl:value-of select="."/>
				</xsl:with-param>
				<xsl:with-param name="inputType" select="$attributeType"/>
			</xsl:call-template>
			<xsl:text>], Java.type("float[]"))</xsl:text>
		</xsl:when>
		<xsl:when test="($attributeType = 'MFDouble')">
			<xsl:text>Java.to([</xsl:text>
			<xsl:call-template name="java-double-numbers">
				<xsl:with-param name="inputValue">
					<xsl:value-of select="."/>
				</xsl:with-param>
			</xsl:call-template>
			<xsl:text>], Java.type("double[]"))</xsl:text>
		</xsl:when>
		<xsl:when test="($attributeType = 'SFVec2f') or ($attributeType = 'SFVec3f') or ($attributeType = 'SFVec4f') or
						($attributeType = 'SFRotation') or starts-with($attributeType, 'SFColor')">
			<xsl:call-template name="java-float-numbers">
				<xsl:with-param name="inputValue">
					<xsl:value-of select="."/>
				</xsl:with-param>
				<xsl:with-param name="inputType" select="$attributeType"/>
			</xsl:call-template>
		</xsl:when>
		<xsl:when test="($attributeType = 'SFVec2d') or ($attributeType = 'SFVec3d') or ($attributeType = 'SFVec4d')">
			<xsl:call-template name="java-float-numbers">
				<xsl:with-param name="inputValue">
					<xsl:value-of select="."/>
				</xsl:with-param>
				<xsl:with-param name="inputType" select="$attributeType"/>
			</xsl:call-template>
		</xsl:when>
		<xsl:when test="starts-with($attributeType, 'MFColor') or ($attributeType = 'MFRotation') or
						contains($attributeType,'MFVec2f') or contains($attributeType,'MFVec3f') or contains($attributeType,'MFVec4f') or
						contains($attributeType,'Matrix3f') or contains($attributeType,'Matrix4f')">
			<xsl:text>new </xsl:text>
			<xsl:value-of select="$attributeType"/>
			<xsl:text>Object(</xsl:text>
			<xsl:choose>
				<xsl:when test="($tupleCount > $tupleSplitSize)">
					<xsl:message>
						<xsl:text>[Large tuple found: </xsl:text>
						<xsl:value-of select="local-name(..)"/>
						<xsl:text> </xsl:text>
						<xsl:value-of select="local-name(.)"/>
						<xsl:text>, $tupleCount=</xsl:text>
						<xsl:value-of select="$tupleCount"/>
						<xsl:text>, $tupleSplitSize=</xsl:text>
						<xsl:value-of select="$tupleSplitSize"/>
						<xsl:text>, string-length=</xsl:text>
						<xsl:value-of select="string-length(normalize-space(string(.)))"/>
						<xsl:text>]</xsl:text>
					</xsl:message>
					<xsl:text>)</xsl:text>
					<xsl:text> /* splitting up long array to improve readability */</xsl:text>
					<!-- couldn't figure out clean expression for group size = $numbersPerGroup, even partitions appear singly -->
					<xsl:for-each-group select="$numberArray" group-adjacent="((position() mod ($numbersPerGroup)) != 0)">
						<xsl:choose>
							<xsl:when test="(count(current-group()) > 1)">
								<xsl:text>&#10;</xsl:text>
								<!-- TODO fix indent -->
								<xsl:value-of select="$indent"/>
								<xsl:text>.append(</xsl:text>
								<xsl:text>new </xsl:text>
								<xsl:value-of select="$attributeType"/>
								<xsl:text>Object(</xsl:text>
								<xsl:text>Java.to([</xsl:text>
								<xsl:call-template name="java-float-numbers">
									<xsl:with-param name="inputValue">
										<xsl:value-of select="current-group()"/>
									</xsl:with-param>
									<xsl:with-param name="inputType" select="$attributeType"/>
								</xsl:call-template>
							</xsl:when>
							<xsl:otherwise>
								<!-- last item in sequence for preceding current-group() appears singly -->
								<xsl:text>,</xsl:text>
								<xsl:call-template name="java-float-numbers">
									<xsl:with-param name="inputValue">
										<xsl:value-of select="current-group()"/>
									</xsl:with-param>
									<xsl:with-param name="inputType" select="$attributeType"/>
								</xsl:call-template>
							</xsl:otherwise>
						</xsl:choose>
						<!-- close invocation when all done -->
						<xsl:if test="(count(current-group()) = 1) or (count(current-group()) &lt; $numbersPerGroup - 1)">
							<xsl:text>], Java.type("float[]"))</xsl:text>
								<xsl:text>)</xsl:text>
								<xsl:text>)</xsl:text>
							</xsl:if>
						</xsl:for-each-group>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>Java.to([</xsl:text>
						<xsl:call-template name="java-float-numbers">
							<xsl:with-param name="inputValue">
								<xsl:value-of select="."/>
							</xsl:with-param>
							<xsl:with-param name="inputType" select="$attributeType"/>
						</xsl:call-template>
						<xsl:text>], Java.type("float[]"))</xsl:text>
						<xsl:text>)</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:when>
			<xsl:when test="contains($attributeType,'MFVec2d') or contains($attributeType,'MFVec3d') or contains($attributeType,'MFVec4d') or
							contains($attributeType,'Matrix3d') or contains($attributeType,'Matrix4d')">
				<xsl:text>new </xsl:text>
				<xsl:value-of select="$attributeType"/>
				<xsl:text>Object(</xsl:text>
				<xsl:text>Java.to([</xsl:text>
				<xsl:call-template name="java-double-numbers">
					<xsl:with-param name="inputValue">
						<xsl:value-of select="."/>
					</xsl:with-param>
				</xsl:call-template>
				<xsl:text>], Java.type("double[]"))</xsl:text>
				<xsl:text>)</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="."/>
				<xsl:message>
					<xsl:text>[*** mishandled type, </xsl:text>
					<xsl:value-of select="local-name(..)"/>
					<xsl:text> </xsl:text>
					<xsl:value-of select="local-name(.)"/>
					<xsl:text>: $isNumeric=</xsl:text>
					<xsl:value-of select="$isNumeric"/>
					<xsl:text>, $attributeType=</xsl:text>
					<xsl:value-of select="$attributeType"/>
					<xsl:text>, value='</xsl:text>
					<xsl:value-of select="."/>
					<xsl:text>'</xsl:text>
					<xsl:text>]</xsl:text>
				</xsl:message>
			</xsl:otherwise>
		</xsl:choose>
		
    </xsl:template>
	
	<!-- capture large attributes if any -->
	<xsl:template name="expose-large-attributes">
		<xsl:param name="childNodes"/>
		<xsl:param name="nodeNumber"><xsl:text></xsl:text></xsl:param>
		<xsl:param name="indent"><xsl:text></xsl:text></xsl:param>
		
		<xsl:variable name="elementName" select="local-name()"/>
		<xsl:variable name="DEF"         select="@DEF"/>
		<xsl:variable name="level"       select="count(ancestor::*) + 1"/>
		
		<xsl:for-each select="@*">
			<xsl:variable name="attributeName" select="local-name()"/>
			<xsl:variable name="isLargeAttribute" 
						  select="not($elementName = 'meta') and
								 (string-length(string(.)) > $attributeSplitSize) and not($attributeName = 'url') and not(contains($attributeName,'Url'))"/>
			<xsl:if test="$isLargeAttribute">
				<xsl:variable name="attributeType">
					<xsl:call-template name="attribute-type"/>
				</xsl:variable>
				<xsl:variable name="tupleSize">
					<xsl:call-template name="tuple-size">
						<xsl:with-param name="type">
							<xsl:value-of select="$attributeType"/>
						</xsl:with-param>
					</xsl:call-template>
				</xsl:variable>
				<xsl:variable name="embeddedSpaceCount" select="string-length(normalize-space(string(.))) - string-length(translate(string(.),' ',''))"/>
				<xsl:variable name="numberOfValues"     select="($embeddedSpaceCount + 1)"/>
				<xsl:variable name="numberOfTuples"     select="($numberOfValues div $tupleSize)"/>
				
				<xsl:variable name="dataObjectName">
					<xsl:choose>
						<xsl:when test="(string-length(normalize-space($DEF)) > 0)">
							<xsl:value-of select="translate(normalize-space($DEF),'.-','__')"/>
							<xsl:text>_</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:value-of select="$elementName"/>
							<xsl:text>_</xsl:text>
							<xsl:if test="(string-length(normalize-space(../@name)) > 0)">
								<xsl:value-of select="../@name"/>
								<xsl:text>_</xsl:text>
							</xsl:if>
						</xsl:otherwise>
					</xsl:choose>
					<!-- ensure unique DEF by including level from top and nodeNumber among elements -->
					<xsl:value-of select="$level"/>
					<xsl:text>_</xsl:text>
					<xsl:value-of select="$nodeNumber"/>
					<xsl:text>_</xsl:text>
					<xsl:value-of select="$attributeName"/>
				</xsl:variable>

				<!-- output data structure -->
				<xsl:variable name="dataObjectJavadoc">
					<xsl:text>/** Large attribute array: </xsl:text>
					<xsl:value-of select="$elementName"/>
					<xsl:if test="(string-length(normalize-space($DEF)) > 0)">
						<xsl:text> DEF='</xsl:text>
						<xsl:value-of select="$DEF"/>
						<xsl:text>'</xsl:text>
					</xsl:if>
					<xsl:text> </xsl:text>
					<xsl:value-of select="$attributeName"/>
					<xsl:text> field, scene-graph level=</xsl:text>
					<xsl:value-of select="$level"/>
					<xsl:text>, element #</xsl:text>
					<xsl:value-of select="$nodeNumber"/>
					<xsl:text>, </xsl:text>
					<xsl:value-of select="$numberOfValues"/>
					<xsl:text> total </xsl:text>
					<xsl:choose>
						<xsl:when test="contains($attributeType,'String') or contains($attributeType,'Bool')">
							<xsl:text>value</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:text>number</xsl:text>
						</xsl:otherwise>
					</xsl:choose>
					<xsl:if test="($numberOfValues > 1)">
						<xsl:text>s</xsl:text>
					</xsl:if>
					<xsl:if test="($tupleSize > 1)">
						<xsl:text> made up of </xsl:text>
						<xsl:value-of select="$numberOfTuples"/>
						<xsl:text> </xsl:text>
						<xsl:value-of select="$tupleSize"/>
						<xsl:text>-tuple </xsl:text>
						<xsl:text>values</xsl:text>
					</xsl:if>
					<xsl:text> */</xsl:text>
				</xsl:variable>

				<xsl:message>
					<xsl:value-of select="$dataObjectJavadoc"/>
				</xsl:message>

				<xsl:variable name="includesFieldTypeObject" select="
						starts-with($attributeType, 'MFColor') or ($attributeType = 'MFRotation') or
						contains($attributeType,'MFVec2f') or contains($attributeType,'MFVec3f') or contains($attributeType,'MFVec4f') or
						contains($attributeType,'Matrix3f') or contains($attributeType,'Matrix4f') or
						contains($attributeType,'MFVec2d') or contains($attributeType,'MFVec3d') or contains($attributeType,'MFVec4d') or
						contains($attributeType,'Matrix3d') or contains($attributeType,'Matrix4d')"/>

				<xsl:text>&#10;</xsl:text>
				<xsl:text>	</xsl:text><!-- indent tab character -->
				<xsl:value-of select="$dataObjectJavadoc"/>
				<xsl:text>&#10;</xsl:text>
				<xsl:text>	</xsl:text><!-- indent tab character -->
				<xsl:text>this.</xsl:text>
				<xsl:value-of select="$dataObjectName"/>
				<xsl:text> = </xsl:text>
				<xsl:if test="not($includesFieldTypeObject)">
					<xsl:text>new </xsl:text>
					<xsl:value-of select="$attributeType"/>
					<xsl:text>Object(</xsl:text>
				</xsl:if>
				<xsl:call-template name="output-attribute-value">
					<xsl:with-param name="inputValue"   select="."/>
					<xsl:with-param name="attributeType" select="$attributeType"/>
					<xsl:with-param name="indent"><xsl:text>	</xsl:text></xsl:with-param><!-- tab character -->
				</xsl:call-template>
				<xsl:if test="not($includesFieldTypeObject)">
					<xsl:text>)</xsl:text>
				</xsl:if>
				<xsl:text>;</xsl:text>
				<xsl:text>&#10;</xsl:text>
			</xsl:if><!-- large attribute found -->
		</xsl:for-each>
		<xsl:for-each select="*">
			<!-- recursion on latest node -->
			<xsl:call-template name="expose-large-attributes">
				<xsl:with-param name="childNodes" select="."/>
				<xsl:with-param name="nodeNumber"   select="count(preceding::*) + 1"/>
				<xsl:with-param name="indent"     select="$indent"/>
			</xsl:call-template>
		</xsl:for-each>
	</xsl:template>

    <!-- print-indent keeps track of indenting level -->
    <xsl:template name="stringify-text-lines">
        <xsl:param name="continuation"><xsl:text>false</xsl:text></xsl:param>
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>

      <xsl:if test="(string-length($inputString) > 0)">
		<xsl:choose>
			<!-- first special character encountered: \ which is escaped as \\ -->
			<xsl:when test="contains($inputString,'\') and
					((not(contains($inputString,'&quot;')) or contains(substring-before($inputString,'&quot;'),'\')) and
					 (not(contains($inputString,'&#10;' )) or contains(substring-before($inputString,'&#10;'),'\')))">
				<xsl:if test="not($continuation = 'true')">
					<!-- debug <xsl:text>/* here 1 */ </xsl:text>-->
					<xsl:text>"</xsl:text><!-- start java string -->
				</xsl:if>
				<xsl:if test="(string-length(substring-before($inputString,'\')) > 0)">
					<xsl:value-of select="substring-before($inputString,'\')"/>
				</xsl:if>
				<xsl:text>\\</xsl:text><!-- escape contained backslash character -->
				<!-- tail recursion -->
				<xsl:call-template name="stringify-text-lines">
				  <xsl:with-param name="inputValue" select="substring-after($inputString,'\')"/>
				  <xsl:with-param name="continuation"><xsl:text>true</xsl:text></xsl:with-param>
				</xsl:call-template>
			</xsl:when>
			<!-- first special character encountered: " which is escaped as \" -->
			<xsl:when test="contains($inputString,'&quot;') and
					(not(contains($inputString,'&#10;')) or contains(substring-before($inputString,'&#10;'),'&quot;'))">
				<xsl:if test="not($continuation = 'true')">
					<!-- debug <xsl:text>/* here 2 */ </xsl:text>-->
					<xsl:text>"</xsl:text><!-- start java string -->
				</xsl:if>
				<xsl:if test="(string-length(substring-before($inputString,'&quot;')) > 0)">
					<xsl:value-of select="substring-before($inputString,'&quot;')"/>
				</xsl:if>
				<xsl:text>\"</xsl:text><!-- escape contained quote character -->
				<!-- tail recursion -->
				<xsl:call-template name="stringify-text-lines">
				  <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot;')"/>
				  <xsl:with-param name="continuation"><xsl:text>true</xsl:text></xsl:with-param>
				</xsl:call-template>
			</xsl:when>
			<!-- first special character encountered: line feed, which breaks up the string -->
			<xsl:when test="contains($inputString,'&#10;')">
				<xsl:if test="not($continuation = 'true')">
					<!-- debug <xsl:text>/* here 3 */ </xsl:text>-->
					<xsl:text>"</xsl:text><!-- start java string -->
				</xsl:if>
				<xsl:if test="(string-length(substring-before($inputString,'&#10;')) > 0)">
					<xsl:value-of select="substring-before($inputString,'&#10;')"/>
					<xsl:text>"</xsl:text>
					<xsl:text> + "</xsl:text>
				</xsl:if>
				<xsl:text>\n"</xsl:text>
				<xsl:if test="(string-length(normalize-space(substring-after($inputString,'&#10;'))) > 0)">
					<xsl:text> + </xsl:text>
					<xsl:text>&#10;</xsl:text>
					<!-- tail recursion -->
					<xsl:call-template name="stringify-text-lines">
					  <xsl:with-param name="inputValue" select="substring-after($inputString,'&#10;')"/>
					</xsl:call-template>
				</xsl:if>
			</xsl:when>
			<xsl:otherwise>
				<xsl:if test="not($continuation = 'true')">
					<!-- debug <xsl:text>/* here 4 */ </xsl:text>-->
					<xsl:text>"</xsl:text><!-- start java string -->
				</xsl:if>
				<xsl:value-of select="$inputString"/>
				<xsl:text>"</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
      </xsl:if>
    </xsl:template>

</xsl:stylesheet>
