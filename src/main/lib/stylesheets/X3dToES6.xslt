<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="title"       content="X3dToJavaScript.xslt" />
   <meta name="creator"     content="Don Brutzman" />
   <meta name="creator"     content="John Carlson" />
   <meta name="created"     content="19 April 2017" />
   <meta name="description" content="XSLT stylesheet to create X3DJSAIL Java program from X3D source." />
   <meta name="reference"   content="X3DJSAIL, https://www.web3d.org/specifications/java/X3DJSAIL.html" />
   <meta name="reference"   content="X3DJSAIL, https://www.web3d.org/specifications/java/X3DJSAIL.html" />
   <meta name="modified from"         content="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToJavaScript.xslt" />
  </head>

Recommended tools:
- X3D-Edit, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
- XML Spy http://www.xmlspy.com
-->

<!-- TODO: 
	 - integrate with X3D Examples Archives
	   https://www.web3d.org/x3d/content/examples/X3dResources.html
  -->

<!--	xmlns:fo="http://www.w3.org/1999/XSL/Format"	-->
<!--	xmlns:saxon="http://icl.com/saxon" saxon:trace="true"	-->

<!--
Copyright (c) 1995-2017 held by the author(s).  All rights reserved.

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
    <xsl:param name="includeLicense"		      ><xsl:text>false</xsl:text></xsl:param>
    
	<!-- saxon9he problem: fails due to line length, licensing issue: saxon:line-length="120" -->
	<!-- http://stackoverflow.com/questions/23084785/xslt-avoid-new-line-added-between-element-attributes/43301327#43301327 -->
	<xsl:output encoding="UTF-8" media-type="text/plain" indent="yes" method="text"/> <!-- output methods: xml html text -->

    <xsl:strip-space elements="*"/>
    
	<!-- Global variables -->
                                          
    <xsl:variable name="licenseText">
		<xsl:text>
Copyright (c) 1995-2017 held by the author(s).  All rights reserved.

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
</xsl:text>
    </xsl:variable>
	
	<!-- TODO need updated XSLT engine in Netbeans
	http://www.sixtree.com.au/articles/2013/formatting-dates-and-times-using-xslt-2.0-and-xpath/
	http://stackoverflow.com/questions/919692/how-to-execute-xslt-2-0-with-ant
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
				<xsl:when test="contains(normalize-space($className),' ') or contains($className,'-') or
								contains($className,'.') or contains($className,',') or contains($className,';')">
					<xsl:message>
						<xsl:text>className='</xsl:text>
						<xsl:value-of select="$className"/>
						<xsl:text>' has illegal character(s), newClassName='</xsl:text>
						<xsl:value-of select="translate(normalize-space($className),' -.,;', '')"/>
						<xsl:text>'</xsl:text>
					</xsl:message>
					<xsl:value-of     select="translate(normalize-space($className),' -.,;', '')"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="$className"/>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:variable>
		
		<xsl:if test="(string-length($newPackageName) > 0)">
			<xsl:text>package </xsl:text>
			<xsl:value-of select="$newPackageName"/>
			<xsl:text>;</xsl:text>
			<xsl:text>&#10;</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>

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
		</xsl:call-template>
		
		<xsl:text>class </xsl:text>
		<xsl:value-of select="$newClassName"/>
		<xsl:text><![CDATA[
{
  /** Default constructor to create this object. */
  constructor()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
  initialize()
  {
]]></xsl:text>

        <!-- xsl:call-template name="X3dDocument"/ -->
		<xsl:apply-templates select="*"/>
		
		<xsl:text><![CDATA[  }
  // end of initialize() method
			
  /** The initialized model object, created within initialize() method. */
  private X3D x3dModel;
  
  /** Provide a shallow copy of the X3D model.
   * @return ]]></xsl:text><xsl:value-of select="$newClassName"/>
   <xsl:text disable-output-escaping="yes"><![CDATA[ model
   */
  getX3dModel()
  {	  
	  return x3dModel;
  }
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf()
  {
	String       metaResult = new String();
	String validationResult = new String();
	String  exceptionResult = new String();
	try
	{
		initialize();
		
		if ((getX3dModel() == null) || (getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		for (meta meta : getX3dModel().getHead().getMetaList())
		{
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (Exception e)
	{
		exceptionResult = e.getMessage(); // report exception failures, if any
	}
	if  (metaResult.isEmpty() && exceptionResult.isEmpty() && validationResult.isEmpty())
	     return "success";
	else
	{
		String returnMessage = metaResult;
		if  (!exceptionResult.isEmpty() && !validationResult.isEmpty())
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		returnMessage += validationResult;
		return returnMessage;
	}
  }
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main(argv)
    {
		]]></xsl:text><xsl:value-of select="$newClassName"/>
		<xsl:text> testObject = new </xsl:text><xsl:value-of select="$newClassName"/><xsl:text>();
		System.out.println ("</xsl:text>          <xsl:value-of select="$newClassName"/>
		<xsl:text> self-validation test results: " + testObject.validateSelf());
	}
}
</xsl:text>

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
				<xsl:when test="contains(//meta[@name='identifier'][0]/@content,'Basic')">
					<xsl:text>Basic</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][0]/@content,'ConformanceNist')">
					<xsl:text>ConformanceNist</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][0]/@content,'Savage')">
					<xsl:text>Savage</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][0]/@content,'SavageDefense')">
					<xsl:text>SavageDefense</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][0]/@content,'Vrml2Sourcebook')">
					<xsl:text>Vrml2Sourcebook</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][0]/@content,'X3dForWebAuthors')">
					<xsl:text>X3dForWebAuthors</xsl:text>
				</xsl:when>
				<xsl:when test="contains(//meta[@name='identifier'][0]/@content,'X3dForAdvancedModeling')">
					<xsl:text>X3dForAdvancedModeling</xsl:text>
				</xsl:when>
			</xsl:choose>
		</xsl:variable>
		<xsl:variable name="subdirectoryPath" 
					select="substring-before(substring-after(//meta[@name='identifier'][0]/@content,$archiveName),
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
				<xsl:value-of select="//meta[@name='identifier'][0]/@content"/>
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
		<xsl:variable name="description" select="string(//meta[@name='description'][1]/@content)"/>
		<xsl:if test="(string-length($description) > 0)">
			<xsl:text><![CDATA[<p> ]]></xsl:text>
			<xsl:value-of select="$description"/>
			<!-- Ensure that simple topic sentence ends with period.
			<xsl:if test="contains($description,'.') and not(ends-with(normalize-space($description),'.'))">
				<xsl:text>.</xsl:text>
			</xsl:if> -->
			<xsl:text><![CDATA[ </p>
]]></xsl:text>
		</xsl:if>
		
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
			<xsl:if test="not(starts-with($sceneName,'*'))"><!-- avoid fill-in prompts -->
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
			<td style="text-align:center;">meta tags</td>
			<td style="text-align:left;">]]></xsl:text>
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
				<xsl:text><![CDATA[ Scene Metadata </td>
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
			<td style="text-align:right; vertical-align: text-top;"> ]]></xsl:text><xsl:value-of select="@name"/><xsl:text><![CDATA[ </td>
			<td> ]]></xsl:text>
					<xsl:choose>
						<xsl:when test="starts-with($contentValue,'http') and not(contains($contentValue,' '))">
							<!-- direct url -->
<xsl:text><![CDATA[<a href="]]></xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<!-- TODO url escape instead -->
	<xsl:with-param name="inputString">
		<xsl:call-template name="escape-url-quote-characters">
			<!-- convert " in url to %22 -->
			<xsl:with-param name="inputString">
				<xsl:value-of select="$contentValue"/>
			</xsl:with-param>
		</xsl:call-template>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[" target="_blank">]]></xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<!-- TODO url escape instead -->
	<xsl:with-param name="inputString">
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
	<xsl:with-param name="inputString">
		<xsl:call-template name="escape-url-quote-characters">
			<!-- convert " in url to %22 -->
			<xsl:with-param name="inputString">
				<xsl:value-of select="concat('http',substring-after($contentValue,'http'))"/>
			</xsl:with-param>
		</xsl:call-template>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[" target="_blank">]]></xsl:text>
<xsl:text>http</xsl:text>
<xsl:call-template name="escape-ampersand-characters">
	<xsl:with-param name="inputString">
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
	<xsl:with-param name="inputString">
		<xsl:call-template name="escape-url-quote-characters">
			<!-- convert " in url to %22 -->
			<xsl:with-param name="inputString">
				<xsl:value-of select="concat('http',substring-before(substring-after($contentValue,'http'), ' '))"/>
			</xsl:with-param>
		</xsl:call-template>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[" target="_blank">]]></xsl:text>
<xsl:text>http</xsl:text>
<xsl:variable name="urlValue" select="substring-before(substring-after($contentValue,'http'), ' ')"/>
<xsl:call-template name="escape-ampersand-characters">
	<xsl:with-param name="inputString">
		<xsl:value-of select="$urlValue"/>
	</xsl:with-param>
</xsl:call-template>
<xsl:text><![CDATA[</a>]]></xsl:text>
<xsl:value-of select="substring-after($contentValue,$urlValue)"/>
						</xsl:when>
						<!-- contains space character or special prompt (newScene.x3d) so no relative link possible -->
						<xsl:when test="contains($contentValue, ' ') or starts-with($contentValue, '*')">
							<!-- plain text -->
							<xsl:value-of select="$contentValue"/>
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
							<!-- plain text -->
							<xsl:value-of select="$contentValue"/>
						</xsl:otherwise>
					</xsl:choose>
				<xsl:text><![CDATA[ </td>
		</tr>]]></xsl:text>
			</xsl:for-each>
			
		<xsl:if test="(count(//meta) > 0)">
			<xsl:text><![CDATA[
		<tr> <td colspan="2"> <hr> </td> </tr>]]></xsl:text>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJavaScript.xslt" target="_blank">X3dToJavaScript.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> scene.
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
			<xsl:text>x3dModel = </xsl:text>
		</xsl:if>
		
		<xsl:text>new </xsl:text>
		<xsl:value-of select="local-name()"/>
		<xsl:text>(</xsl:text>
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
				<xsl:when test="($fieldName     = 'children')     or (local-name() = 'ROUTE') or 
								(local-name()   = 'ProtoDeclare') or (local-name() = 'ExternProtoDeclare') or
								(local-name(..) = 'ProtoBody')    or
								(local-name()   = 'IMPORT')       or (local-name() = 'EXPORT')">
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
							<!-- MFNode -->
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
		<!-- @DEF already handled by constructor -->
        <!-- another version of this template is shared among X3dToXhtml.xslt and X3dTidy.xslt -->
        <xsl:choose>
            <xsl:when test="(string-length(@USE) > 0)">
                <!-- no other attributes allowed with USE except containerField -->
                <xsl:apply-templates select="@USE"/>
                <xsl:apply-templates select="@containerField"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='USE') and (local-name()!='containerField')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
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
                    <xsl:sort select="." order="ascending" data-type="text"/>
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
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@colorIndex"><xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param></xsl:apply-templates>
                <xsl:apply-templates select="@height"><xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param></xsl:apply-templates>
			</xsl:when>
            <xsl:when test="local-name()='IndexedFaceSet' or local-name()='IndexedLineSet'">
                <xsl:apply-templates select="@DEF | @containerField "/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and
                                                not(contains(local-name(), 'Index'))]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[contains(local-name(), 'Index')]">
					<xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param>
                    <xsl:sort select="." order="ascending" data-type="text"/>
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
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='field' or local-name()='fieldValue'">
                <xsl:apply-templates select="@accessType"/>
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@type"/>
                <xsl:apply-templates select="@value"><xsl:with-param name="indent"><xsl:value-of select="$indent"/></xsl:with-param></xsl:apply-templates>
                <xsl:apply-templates select="@appinfo"/>
                <xsl:apply-templates select="@documentation"/>
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='type') and (local-name()!='value') and (local-name()!='accessType') and (local-name()!='appinfo') and (local-name()!='documentation')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="contains(local-name(),'connect')">
                <!-- IS/connect -->
                <xsl:apply-templates select="@nodeField"/>
                <xsl:apply-templates select="@protoField"/>
            </xsl:when>
            <!-- otherwise not a special case, process urls/containerField last -->
            <xsl:otherwise>
                <xsl:apply-templates select="@containerField"/>
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and (local-name()!='name') and not(contains(local-name(), 'url') or contains(local-name(), 'Url'))]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[contains(local-name(), 'url') or contains(local-name(), 'Url')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@containerField"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template match="@*" >
        <xsl:param name="indent"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
		<!-- debug
			<xsl:message>
				<xsl:text disable-output-escaping="yes"> </xsl:text>
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
                      select="not( local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) and
                      not( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) and
                      not( local-name(..)='AudioClip'	and
                      ((local-name()='loop' and .='false') or
                      (local-name()='pitch' and (.='1' or .='1.0')) or
                      (local-name()='startTime' and (.='0' or .='0.0')) or
                      (local-name()='stopTime' and (.='0' or .='0.0')) or
                      (local-name()='pauseTime' and (.='0' or .='0.0')) or
                      (local-name()='resumeTime'  and (.='0' or .='0.0')))) and
                      not( ((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='transparency' and (.='0' or .='0.0')))) and
                      not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (.='0 1 0' or .='0.0 1.0 0.0')) and
                      not( local-name(..)='BooleanToggle' and local-name()='toggle' and .='false') and
                      not( local-name(..)='Box'	and ((local-name()='size' and (.='2 2 2' or .='2.0 2.0 2.0')) or (local-name()='solid' and .='true'))) and
                      not( local-name(..)='Collision'	and local-name()='enabled' and .='true') and
                      not( local-name(..)='Cone' and	((local-name()='bottomRadius' and (.='1' or .='1.0')) or
                      (local-name()='height' and (.='2' or .='2.0')) or
                      (local-name()='side' and .='true') or
                      (local-name()='solid' and .='true') or
        (local-name()='bottom' and .='true')))"/>
        <xsl:variable name="notDefaultFieldValue1a"
                      select="not( local-name(..)='Cylinder' and
                      ((local-name()='height' and (.='2' or .='2.0')) or
                      (local-name()='radius' and (.='1' or .='1.0')) or
                      (local-name()='bottom' and .='true') or
                      (local-name()='side' and .='true') or
                      (local-name()='solid' and .='true') or
                      (local-name()='top' and .='true'))) and
                      not( local-name(..)='CylinderSensor' and
                      ((local-name()='autoOffset' and .='true') or
                      (local-name()='axisRotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='diskAngle' and .='0.26179167') or
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
                      not((local-name(..)='ElevationGrid' or local-name(..)='GeoElevationGrid') and
                      ((local-name()='ccw' and .='true') or
                      (local-name()='colorPerVertex' and .='true') or
                      (local-name()='normalPerVertex' and .='true') or
                      (local-name()='solid' and .='true') or
                      (local-name()='xDimension' and (.='2')) or
                      (local-name()='xSpacing' and (.='1' or .='1.0')) or
                      (local-name()='zDimension' and (.='2')) or
                      (local-name()='zSpacing' and (.='1' or .='1.0')) or
                      (local-name()='yScale' and (.='1' or .='1.0')) or
                      (local-name()='height' and (.='0 0 0 0' or .='0.0 0.0 0.0 0.0')) or
                      (local-name()='geoGridOrigin' and (.='0 0 0' or .='0.0 0.0 0.0')) or
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
                      (local-name()='crossSection' and .='1 1, 1 -1, -1 -1, -1 1, 1 1') or
                      (local-name()='crossSection' and .='1 1 1 -1 -1 -1 -1 1 1 1') or
                      (local-name()='spine' and .='0 0 0, 0 1 0') or
                      (local-name()='spine' and .='0 0 0 0 1 0')))" />
        <xsl:variable name="notDefaultFieldValue3"
                      select="not(contains(local-name(..),'Fog') and 	((local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='visibilityRange' and (.='0' or .='0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='fogType' and .='LINEAR'))) and
                      not(contains(local-name(..),'FontStyle')	and
                      ((local-name()='horizontal' and .='true') or
                      (local-name()='leftToRight' and .='true') or
                      (local-name()='topToBottom' and .='true') or
                      (local-name()='size' and (.='1' or .='1.0')) or
                      (local-name()='spacing' and (.='1' or .='1.0')) or
                      (local-name()='pointSize' and (.='12' or .='12.0')) or
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
                      not( local-name(..)='LOD'	and	((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='forceTransitions' and .='false'))) and
                      not(((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
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
                      (local-name()='separateBackColor' and .='false') or
                      (local-name()='backSpecularColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='backTransparency' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultFieldValue4"
                      select="not( local-name(..)='MovieTexture' and
                      ((local-name()='loop' and .='false') or
                      (local-name()='speed' and (.='1' or .='1.0')) or
                      (local-name()='startTime' and (.='0' or .='0.0')) or
                      (local-name()='stopTime' and (.='0' or .='0.0')) or
                      (local-name()='pauseTime' and (.='0' or .='0.0')) or
                      (local-name()='resumeTime'  and (.='0' or .='0.0')) or
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
					  (local-name()='axisRotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='maxPosition' and (.='-1 -1' or .='-1.0 -1.0')) or
                      (local-name()='minPosition' and (.='0 0' or .='0.0 0.0')) or
                      (local-name()='offset' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='PointLight' and
                      ((local-name()='ambientIntensity' and (.='0' or .='0.0'))or
                      (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='global' and .='true') or
                      (local-name()='intensity' and (.='1' or .='1.0')) or
                      (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='on' and .='true') or
                      (local-name()='radius' and (.='100' or .='100.0'))))" />
        <xsl:variable name="notDefaultFieldValue5"
                      select="not(contains(local-name(..),'ProximitySensor') and
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
                      not( local-name(..)='Sphere' and ((local-name()='radius' and (.='1' or .='1.0')) or (local-name()='solid' and .='true'))) and
                      not( local-name(..)='SphereSensor' and
                      ((local-name()='autoOffset' and .='true') or
                      (local-name()='enabled' and .='true') or
                      (local-name()='offset' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0')) and
                      not( local-name(..)='Switch' and ../IS/connect[@nodeField='whichChoice'])))" />
        <!-- Switch whichChoice='-1' is very significant and somewhat counterintuitive/nonobvious, so otherwise show it. -->
        <!--	  and not( local-name(..)='Switch' and  local-name()='whichChoice' and (.='-1' or .='-1.0')) -->
        <xsl:variable name="notDefaultFieldValue6"
                      select="not( local-name(..)='SpotLight'	and
                      ((local-name()='ambientIntensity' and (.='0' or .='0.0')) or
                      (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
                      (local-name()='beamWidth' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854'))) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='cutOffAngle' and (.='1.5708' or .='1.570796')) or
                      (local-name()='direction' and (.='0 0 -1' or .='0.0 0.0 -1.0')) or
                      (local-name()='global' and .='true') or
                      (local-name()='intensity' and (.='1' or .='1.0')) or
                      (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='on' and .='true') or
                      (local-name()='radius' and (.='100' or .='100.0')))) and
                      not( local-name(..)='Text'   and ((local-name()='maxExtent' and (.='0' or .='0.0')) or (local-name()='solid' and (.='false')))) and
                      not( local-name(..)='TextureTransform' and
                      ((local-name()='center' and (.='0 0' or .='0.0 0.0')) or
                      (local-name()='rotation' and (.='0' or .='0.0')) or
                      (local-name()='scale' and (.='1 1' or .='1.0 1.0')) or
                      (local-name()='translation' and (.='0 0' or .='0.0 0.0')))) and
                      not( local-name(..)='TextureTransform3D' and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='TextureTransformMatrix3D' and
                      ((local-name()='matrix' and (.='1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1' or .='1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0'))))" />
        <xsl:variable name="notDefaultFieldValue7"
                      select="not( local-name(..)='TimeSensor' and
                      ((local-name()='cycleInterval' and (.='1' or .='1.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='startTime' and (.='0' or .='0.0')) or
                      (local-name()='stopTime' and (.='0' or .='0.0')) or
                      (local-name()='pauseTime' and (.='0' or .='0.0')) or
                      (local-name()='resumeTime'  and (.='0' or .='0.0')) or
                      (local-name()='loop' and .='false'))) and
                      not( contains(local-name(..),'TouchSensor') and
                      local-name()='enabled' and .='true') and
                      not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
					  (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='Viewpoint' and
                      (local-name()='fieldOfView' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854')))) and
                      not( local-name(..)='OrthoViewpoint' and
                      (local-name()='fieldOfView' and ((.='-1 -1 1 1') or (.='-1.0 -1.0 1.0 1.0')))) and
                      not( contains(local-name(..),'Viewpoint') and
                      ((local-name()='centerOfRotation' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='fieldOfView' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854'))) or
                      (local-name()='jump' and .='true') or
                      (local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='retainUserOffsets' and (.='false')) or
                      (local-name()='position' and (.='0 0 10' or .='0.0 0.0 10.0')))) and
                      not( local-name(..)='VisibilitySensor' and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='enterTime' and (.='0' or .='0.0')) or
                      (local-name()='exitTime'  and (.='0' or .='0.0')) or
                      (local-name()='isActive' and .='false')))" />
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
                      (local-name()='image' and (.='0 0 0 0'))) and
                      not( local-name(..)='IntegerTrigger' and
                      ((local-name()='integerKey' and .='-1'))) and
                      not( local-name(..)='LayerSet' and
                      ((local-name()='activeLayer' and .='0') or
                       (local-name()='order' and .='0'))) and
                      not(contains(local-name(..),'PickSensor') and
                      ((local-name()='enabled' and .='true') or
                       (local-name()='intersectionType' and .='BOUNDS') or
                       (local-name()='matchCriterion' and .='MATCH_ANY') or
                       (local-name()='objectType' and .='&quot;ALL&quot;') or
                       (local-name()='sortOrder' and .='CLOSEST'))) and
                      not( local-name(..)='ParticleSystem' and
                      ((local-name()='createParticles' and .='true') or
                       (local-name()='enabled' and .='true') or
                       (local-name()='geometryType' and .='QUAD') or
                       (local-name()='lifetimeVariation' and .='0.25') or
                       (local-name()='maxParticles' and .='200') or
                       (local-name()='particleLifetime' and .='5') or
                       (local-name()='particleSize' and .='0.02 0.02'))) and
                      not( local-name(..)='PickableGroup' and
                      ((local-name()='objectType' and .='&quot;ALL&quot;') or
                       (local-name()='pickable' and .='true'))) and
                      not(local-name(..)='StringSensor' and
                      ((local-name()='deletionAllowed' or local-name()='enabled') and (.='true'))) and
                      not( local-name(..)='TransformSensor' and
                      ((local-name()='enabled' and .='true') or
                       (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='GeneratedCubeMapTexture' and
                      ((local-name()='update' and .='NONE') or
                       (local-name()='size' and .='128'))) and
                      not(local-name(..)='MovieTexture' and
                      ((local-name()='pitch' or local-name()='1') and (.='1.0'))) and
                      not(contains(local-name(..),'Emitter') and
                      ((local-name()='angle' and .='0.7854') or
                       (local-name()='direction' and (.='0 1 0' or .='0.0 1.0 0.0')) or
                       (local-name()='mass' and (.='0' or .='0.0')) or
                       (local-name()='position' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='speed' and (.='0' or .='0.0')) or
                       (local-name()='surfaceArea' and (.='0' or .='0.0')) or
                       (local-name()='variation' and .='0.25') or
                       (local-name()='internal' and .='true') or
                       (local-name()='coordIndex' or local-name()='-1'))) and
                      not(local-name(..)='Contact' and
                      ((local-name()='minBounceSpeed' and (.='0' or .='0.0')))) and
                      not(contains(local-name(..),'Layer') and
                      ((local-name()='isPickable' and .='true'))) and
                      not(contains(local-name(..),'Layout') and
                      ((local-name()='offset' and (.='0 0' or .='0.0 0.0')) or
                       (local-name()='size'   and (.='1 1' or .='1.0 1.0')) or
                       (local-name()='align' and .='&quot;CENTER&quot; &quot;CENTER&quot;') or
                       (local-name()='offsetUnits' and .='&quot;WORLD&quot; &quot;WORLD&quot;') or
                       (local-name()='scaleMode' and .='&quot;NONE&quot; &quot;NONE&quot;') or
                       (local-name()='sizeUnits' and .='&quot;WORLD&quot; &quot;WORLD&quot;'))) and
                      not( local-name(..)='TextureProperties' and
                      ((local-name()='anisotropicDegree' and (.='1' or .='1.0')) or
                       (local-name()='borderColor' and (.='0 0 0 0' or .='0.0 0.0 0.0 0.0')) or
                       (local-name()='borderWidth' and (.='0' or .='0.0')) or
                       (starts-with(local-name(),'boundaryMode') and .='REPEAT') or
                       (local-name()='generateMipMaps' and .='false') or
                       (local-name()='magnificationFilter' and .='FASTEST') or
                       (local-name()='minificationFilter'  and .='FASTEST') or
                       (local-name()='textureCompression'  and .='FASTEST') or
                       (local-name()='texturePriority' and (.='0' or .='0.0')))) and
                      not(local-name(..)='Viewport' and
                      ((local-name()='clipBoundary' and (.='0 1 0 1' or .='0.0 1.0 0.0 1.0')))) and
                      not( local-name(..)='KeySensor' and
                      ((local-name()='enabled' and .='true')))" />
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
                      local-name(..)='WorldInfo' or
                      local-name(..)='ProtoInstance')) and
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
                      not((local-name()='containerField' and .='color')	and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                      not((local-name()='containerField' and .='coord')	and (local-name(..)='Coordinate')) and
                      not((local-name()='containerField' and .='normal')	and (local-name(..)='Normal')) and
                      not((local-name()='containerField' and .='texture')	and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
                      not((local-name()='containerField' and .='fontStyle')	and (local-name(..)='FontStyle')) and
                      not((local-name()='containerField' and .='texCoord')	and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
                      not((local-name()='containerField' and .='textureTransform')	and (local-name(..)='TextureTransform'))" />
        <xsl:variable name="notDefaultContainerField3"
                      select="not((local-name()='containerField' and .='geometry')	and
                      ((local-name(..)='Arc2D') or (local-name(..)='ArcClose2D') or (local-name(..)='Circle2D') or (local-name(..)='Disk2D') or (local-name(..)='Polyline2D') or (local-name(..)='Polypoint2D') or (local-name(..)='Rectangle2D') or (local-name(..)='TriangleSet2D') or contains(local-name(..),'QuadSet'))) and
                      not((local-name()='containerField' and .='voxels')	and
                      ((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))) and
                      not((local-name()='containerField' and .='renderStyle')	and
                      ((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')))" />
        <xsl:variable name="notDefaultCAD"
                      select="not((local-name(..)='CADAssembly' or local-name(..)='CADFace' or local-name(..)='CADLayer') and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not(local-name(..)='CADPart' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
					   (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultDIS1"
                      select="not((local-name(..)='EspduTransform' or contains(local-name(..),'Pdu')) and
                      ((starts-with(local-name(),'is')) or
                      (local-name()='address' and (.='localhost')) or
                      (local-name()='enabled' and (.='true')) or
                      (local-name()='networkMode' and (.='standAlone')) or
                      (local-name()='rtpHeaderExpected' and (.='false')) or
                      (local-name()='readInterval'  and (.='.1' or .='0.1')) or
                      (local-name()='writeInterval'  and (.='1' or .='1.0')) or
                      (((local-name()='applicationID') or (local-name()='munitionApplicationID') or (local-name()='whichGeometry')) and (.='1')) or
                      ((contains(local-name(),'ntityID') or contains(local-name(),'iteID') or (local-name()='applicationID')) and (.='0')) or
                      ((local-name()='port' or local-name()='multicastRelayPort' or local-name()='fireMissionIndex') and (.='0'))))" />
        <!-- ='' ='1' '' geoCoords='0 0 0' geoSystem='"GD" "WE"' '1' munitionSiteID='0' ='' '0' '0' -->
        <xsl:variable name="notDefaultDIS2"
                      select="not(local-name(..)='EspduTransform' and
                      ((((local-name()='collisionType') or (local-name()='detonationResult')) and (.='0')) or
                      (((local-name()='detonationLocation') or (local-name()='detonationRelativeLocation'))  and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='eventApplicationID'  and (.='1')) or
                      (((local-name()='eventEntityID') or (local-name()='eventNumber') or (local-name()='eventSiteID'))  and (.='0')) or
                      ((local-name()='fired1' or local-name()='fired2') and (.='false')) or
                      (local-name()='deadReckoning'  and (.='0')) or
                      ((local-name()='articulationParameterCount' or local-name()='entityCategory' or local-name()='entitySubcategory' or local-name()='entityCountry' or local-name()='entityDomain' or local-name()='entityExtra' or local-name()='entityKind' or local-name()='entitySpecific' or local-name()='eventApplicationID' or local-name()='firingRange' or local-name()='firingRate' or local-name()='fuse' or local-name()='warhead' or local-name()='forceID' or local-name()='munitionQuantity' or local-name()='munitionApplicationID') and (.='0')) or
                      ((local-name()='linearVelocity' or local-name()='linearAcceleration' or local-name()='munitionStartPoint' or local-name()='munitionEndPoint') and (.='0 0 0'))))" />
        <xsl:variable name="notDefaultDIS3"
                      select="not(local-name(..)='ReceiverPdu' and
                      (((local-name()='radioID' or local-name()='receiverState' or starts-with(local-name(),'transmitter')) and (.='0')) or
                      (local-name()='receiverPower'  and (.='0' or .='0.0')))) and
                      not(local-name(..)='SignalPdu' and
                      (((local-name()='radioID' or local-name()='encodingScheme' or local-name()='tdlType' or local-name()='sampleRate' or local-name()='samples' or local-name()='dataLength') and (.='0')))) and
                      not(local-name(..)='TransmitterPdu' and
                      (((local-name()='radioID' or starts-with(local-name(),'antennaPattern') or starts-with(local-name(),'crypto') or local-name()='frequency' or local-name()='inputSource' or local-name()='lengthOfModulationParameters' or starts-with(local-name(),'modulationType') or starts-with(local-name(),'radioEntityType') or local-name()='transmitFrequencyBandwidth' or local-name()='transmitState') and (.='0')) or
                      (local-name()='power'  and (.='0' or .='0.0')) or
                      ((contains(local-name(),'antennaLocation') and (.='0 0 0')))))" />
        <xsl:variable name="notDefaultDIS4"
                      select="not(local-name(..)='DISEntityManager' and
                      (((local-name()='applicationID') and (.='0')) or
                      (local-name()='address' and (.='localhost')) or
                      ((local-name()='port' or local-name()='siteID') and (.='0')))) and
                      not(local-name(..)='DISEntityTypeMapping' and 
                      ((local-name()='containerField') and (.='mapping')) or
                      ((local-name()='category' or local-name()='country' or local-name()='domain' or local-name()='extra' or local-name()='kind' or local-name()='specific' or local-name()='subcategory') and (.='0')))" />
        <xsl:variable name="notDefaultGeo"
                      select="not((starts-with(local-name(..),'Geo') or (local-name(..)='EspduTransform') or contains(local-name(..),'Pdu')) and 
                      ((local-name()='geoCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='geoCoords' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not(local-name(..)='GeoLOD' 	  and 
                      ((local-name()='range' and (.='10' or .='10.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not(local-name(..)='GeoViewpoint' and
                      ((local-name()='speedFactor' and (.='1' or .='1.0')) or
						(local-name()='headlight' and (.='true')) or
						(local-name()='jump' and (.='true')) or
						(local-name()='navType' and (.='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
						(local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						(local-name()='position' and (.='0 0 100000' or .='0.0 0.0 100000.0')) or
                        (local-name()='fieldOfView' and (.='0.785398' or .='.785398' or .='0.7854' or .='.7854')) or
                        (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not((local-name(..)='GeoCoordinate' or local-name(..)='GeoOrigin') and
                      ((local-name()='rotateYUp' and (.='false')) or
                      (local-name()='containerField' and (.='geoOrigin')) or
                      (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;'))))" />
        <xsl:variable name="notDefaultHAnim1"
                      select="not( local-name(..)='HAnimJoint' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='limitOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='stiffness' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSegment' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
                       (local-name()='centerOfMass' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='mass' and (.='0' or .='0.0')) or
                       (local-name()='momentsOfInertia' and
                        (.='0 0 0 0 0 0 0 0 0' or .='0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSite' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultHAnim2"
                      select="not( local-name(..)='HAnimHumanoid' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimDisplacer' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='weight' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultNurbs"
                      select="not((local-name(..)='NurbsCurve' or local-name(..)='NurbsCurve2D') and
                      ((local-name()='tessellation' and (.='0')) or
                      (local-name()='closed' and (.='false')) or
                      (local-name()='order' and (.='3')))) and
                      not(local-name(..)='NurbsSet' and
                      ((local-name()='tessellationScale' and (.='1' or .='1.0')) or 
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator') and
                      ((local-name()='order' and (.='3' or .='3.0')))) and
                      not((local-name(..)='NurbsSurface' or local-name(..)='NurbsPatchSurface' or local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsTextureSurface' or local-name(..)='NurbsTrimmedSurface') and
                      ((local-name()='uTessellation' and (.='0')) or
                      (local-name()='vTessellation' and (.='0')) or
                      (local-name()='uDimension' and (.='0')) or
                      (local-name()='vDimension' and (.='0')) or
                      (local-name()='uOrder' and (.='3')) or
                      (local-name()='vOrder' and (.='3')) or
                      (local-name()='ccw' and (.='true')) or
                      (local-name()='solid' and (.='true')) or
                      ((local-name()='uClosed' or local-name()='vClosed') and (.='false')))) and
                      not((local-name(..)='NurbsSurfaceInterpolator' or local-name(..)='NurbsTextureCoordinate') and
                      ((local-name()='uDimension' and (.='0')) or
                      (local-name()='vDimension' and (.='0')) or
                      (local-name()='uOrder' and (.='3')) or
                      (local-name()='vOrder' and (.='3')))) and
                      not((local-name(..)='NurbsCurve' or local-name(..)='NurbsSwungSurface') and
                      ((local-name()='ccw' or local-name()='solid') and (.='true'))) and
                      not((contains(local-name(..),'SplinePositionInterpolator') or local-name(..)='SplineScalarInterpolator' or local-name(..)='SquadOrientationInterpolator') and
                      ((local-name()='closed' or local-name()='normalizeVelocity') and (.='false')))" />
        <xsl:variable name="notDefaultGeometry2D"
                      select="not((local-name(..)='Arc2D' or local-name(..)='ArcClose2D') and
                      ((local-name()='startAngle' and (.='0' or .='0.0')) or
                       (local-name()='endAngle' and (.='1.5708' or .='1.570796')) or
                       (local-name()='radius' and (.='1' or .='1.0')) or
                       (local-name()='solid' and (.='false')))) and
                      not(local-name(..)='Circle2D' and
                      ((local-name()='radius' and (.='1' or .='1.0')))) and
                      not(local-name(..)='Disk2D' and
                      ((local-name()='innerRadius' and (.='0' or .='0.0')) or
                       (local-name()='outerRadius' and (.='1' or .='1.0')) or
                       (local-name()='solid' and (.='false')))) and
                      not((local-name(..)='Rectangle2D') and
                      ((local-name()='size' and ((.='2 2') or (.='2.0 2.0'))) or
                       (local-name()='solid' and (.='false')))) and
                      not((local-name(..)='TriangleSet2D') and
                      ((local-name()='solid' and (.='false')) or
                       (local-name()='closureType' and (.='PIE'))))" />
        <xsl:variable name="notDefaultVolume"
                      select="not(((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))	and
                      ((local-name()='dimensions' and (.='1 1 1' or .='1.0 1.0 1.0')) or 
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      ((local-name()='contourStepSize' or local-name()='surfaceTolerance') and (.='0' or .='0.0'))) and
                      not(((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')) and
                      (local-name()='enabled' and .='true')) and
                      not((local-name(..)='BlendedVolumeStyle')	and
                      (((local-name()='weightConstant1' or local-name()='weightConstant2') and (.='.5' or .='0.5')) or
                       ((local-name()='weightFunction1' or local-name()='weightFunction2') and (.='CONSTANT')))) and
                      not((local-name(..)='BoundaryEnhancementVolumeStyle')	and
                      (((local-name()='boundaryOpacity') and (.='.9' or .='0.9')) or
                       ((local-name()='opacityFactor') and (.='2' or .='2.0')) or
                       ((local-name()='retainedOpacity') and (.='.2' or .='0.2')))) and
                      not((local-name(..)='CartoonVolumeStyle')	and
                      (((local-name()='colorSteps') and (.='4')) or
                       ((local-name()='orthogonalColor') and (.='1 1 1 1' or .='1.0 1.0 1.0 1.0')) or
                       ((local-name()='parallelColor') and (.='0 0 0 1' or .='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='EdgeEnhancementVolumeStyle')	and
                      (((local-name()='gradientThreshold') and (.='.4' or .='0.4')) or
                       ((local-name()='edgeColor') and (.='0 0 0 1' or .='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      (((local-name()='surfaceTolerance') and (.='0' or .='0.0')))) and
                      not((local-name(..)='ProjectionVolumeStyle')	and
                      (((local-name()='intensityThreshold') and (.='0' or .='0.0')) or
                       ((local-name()='type') and (.='MAX')))) and
                      not((local-name(..)='ShadedVolumeStyle')	and
                      (((local-name()='lighting' or local-name()='shadows') and (.='false')) or
                       ((local-name()='phaseFunction') and (.='Henyey-Greenstein')))) and
                      not((local-name(..)='SilhouetteEnhancementVolumeStyle')	and
                      (((local-name()='silhouetteBoundaryOpacity') and (.='0' or .='0.0')) or
                       ((local-name()='silhouetteRetainedOpacity') and (.='1' or .='1.0')) or
                       ((local-name()='silhouetteSharpness') and (.='.5' or .='0.5')))) and
                      not((local-name(..)='ToneMappedVolumeStyle')	and
                      (((local-name()='colorSteps') and (.='4')) or
                       ((local-name()='coolColor') and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0')) or
                       ((local-name()='warmColor') and (.='1 1 0 0' or .='1.0 1.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFollower"
                      select="not(contains(local-name(..),'Chaser') and
                      ((local-name()='duration' and (.='1' or .='1.0')))) and
                      not(contains(local-name(..),'Damper') and
                      ((local-name()='tau' and (.='.3' or .='0.3')) or
                      (local-name()='tolerance' and (.='-1' or .='-1.0')) or
                      (local-name()='order ' and (.='3')))) and
                      not(contains(local-name(..),'Damper') and
                      (local-name()='order' and (.='3'))) and
                      not((local-name(..)='ColorChaser' or local-name(..)='ColorDamper') and
                      ((local-name()='initialDestination' and (.='.8 .8 .8' or .='0.8 0.8 0.8')) or
                      (local-name()='initialValue' and (.='.8 .8 .8' or .='0.8 0.8 0.8')))) and
                      not((local-name(..)='CoordinateChaser' or local-name(..)='CoordinateDamper' or local-name(..)='PositionChaser' or local-name(..)='PositionDamper') and
                      ((local-name()='initialDestination' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='initialValue' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not((local-name(..)='PositionChaser2D' or local-name(..)='PositionDamper2D') and
                      ((local-name()='initialDestination' and (.='0 0' or .='0.0 0.0')) or
                      (local-name()='initialValue' and (.='0 0' or .='0.0 0.0')))) and
                      not((local-name(..)='OrientationChaser' or local-name(..)='OrientationDamper') and
                      ((local-name()='initialDestination' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 0 1 0' or .='0.0 0.0 1.0 0.0')) or
                      (local-name()='initialValue' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 0 1 0' or .='0.0 0.0 1.0 0.0')))) and
                      not((local-name(..)='ScalarChaser' or local-name(..)='ScalarDamper') and
                      ((local-name()='initialDestination' and (.='0' or .='0.0')) or
                      (local-name()='initialValue' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultShader"
                      select="not((local-name(..)='FloatVertexAttribute') and
                      ((local-name()='numComponents' and (.='4')))) and
                      not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and
                      ((local-name()='type' and (.='VERTEX'))))" />
        <xsl:variable name="notDefaultRigidBodyPhysics"
                      select="not((local-name(..)='CollidableOffset' or local-name(..)='CollidableShape') and
                      (((local-name()='enabled') and (.='true')) or
                      ((local-name()='rotation') and (.='0 0 1 0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0.0 0.0 1.0 0.0')) or
                      ((local-name()='translation') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='bboxCenter')	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='bboxSize')	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='CollisionSpace') and
                      ((local-name()='enabled' and (.='true')) or
                      (local-name()='useGeometry' and (.='false')) or
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='BallJoint' or local-name(..)='DoubleAxisHingeJoint' or local-name(..)='MotorJoint' or local-name(..)='SingleAxisHingeJoint' or local-name(..)='SliderJoint' or local-name(..)='UniversalJoint') and
                      ((local-name()='forceOutput')	and	(.='&quot;NONE&quot;'))) and
                      not((local-name(..)='BallJoint') and
                      ((local-name()='anchorPoint')	and	(.='0 0 0' or .='0.0 0.0 0.0'))) and
                      not((local-name(..)='BoundedPhysicsModel') and
                      ((local-name()='enabled')	and	(.='true'))) and
                      not((local-name(..)='ForcePhysicsModel') and
                      ((local-name()='enabled')	and	(.='true')) or
                      (local-name()='force'	and	(.='0 -9.8 0' or .='0.0 -9.8 0.0'))) and
                      not((local-name(..)='WindPhysicsModel') and
                      ((local-name()='enabled')	and	(.='true')) or
                      (local-name()='gustiness'	and	(.='0.1')) or
                      (local-name()='speed'	and	(.='0.1')) or
                      (local-name()='turbulence'	and	(.='0' or .='0.0')) or
                      (local-name()='direction'	and	(.='1 0 0' or .='1.0 0.0 0.0'))) and
                      not((local-name(..)='CollisionCollection') and
                      (((local-name()='appliedParameters') and (.='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce') and (.='0' or .='0.0')) or
                      ((local-name()='enabled') and (.='true')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipFactors' or local-name()='surfaceSpeed') and (.='0 0' or .='0.0 0.0')) or
                      ((local-name()='minBounceSpeed') and (.='.1' or .='0.1')) or
                      ((local-name()='softnessConstantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='CollisionSensor') and
                      (local-name()='enabled' and .='true')) and
                      not((local-name(..)='Contact') and
                      (((local-name()='appliedParameters') and (.='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce' or local-name()='depth' or local-name()='minbounceSpeed') and (.='0' or .='0.0')) or
                      ((local-name()='contactNormal') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipCoefficients' or local-name()='surfaceSpeed') and (.='0 0' or .='0.0 0.0')) or
                      ((local-name()='frictionDirection') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='position') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='softnessConstantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='DoubleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='desiredAngularVelocity1' or local-name()='desiredAngularVelocity2' or local-name()='maxTorque1' or local-name()='maxTorque2' or local-name()='stop1Bounce' or local-name()='suspensionForce') and (.='0' or .='0.0')) or
                      ((local-name()='maxAngle1') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle1') and (.='-3.1416' or .='-3.14159' or .='-3.141593' or .='-3.1415926' or .='-3.14159263' or .='-3.141592653')) or
                      ((local-name()='stop1Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ConstantForceMix') and (.='.001' or .='0.001')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='suspensionErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='MotorJoint') and
                      (((local-name()='axis1Angle' or local-name()='axis2Angle' or local-name()='axis3Angle' or local-name()='axis1Torque' or local-name()='axis2Torque' or local-name()='axis3Torque' or local-name()='stop1Bounce' or local-name()='stop2Bounce' or local-name()='stop3Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection' or local-name()='stop3ErrorCorrection') and (.='.8' or .='0.8')) or
                      ((local-name()='motor1Axis' or local-name()='motor2Axis' or local-name()='motor3Axis') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='enabledAxes') and (.='1')) or
                      ((local-name()='autoCalc') and (.='false')))) and
                      not((local-name(..)='RigidBody') and
                      (((local-name()='angularDampingFactor') and (.='.001' or .='0.001')) or
                      ((local-name()='angularVelocity' or local-name()='centerOfMass' or local-name()='finiteRotationAxis' or local-name()='linearVelocity' or local-name()='position') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (.='0' or .='0.0')) or
                      ((local-name()='finiteRotationAxis') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='mass') and (.='1' or .='1.0')) or
                      ((local-name()='enabled' or local-name()='useGlobalGravity') and (.='true')) or
                      ((local-name()='autoDamp' or local-name()='autoDisable' or local-name()='fixed' or local-name()='useFiniteRotation') and (.='false')) or
                      ((local-name()='inertia') and (.='1 0 0 0 1 0 0 0 1' or .='1.0 0 0 0 1.0 0 0 0 1.0' or .='1.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 1.0')) or
                      ((local-name()='linearDampingFactor') and (.='.001' or .='0.001')) or
                      ((local-name()='orientation') and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')))) and
                      not((local-name(..)='RigidBodyCollection') and
                      (((local-name()='autoDisable' or local-name()='preferAccuracy') and (.='false')) or
                      ((local-name()='enabled') and (.='true')) or
                      ((local-name()='constantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='contactSurfaceThickness' or local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (.='0' or .='0.0')) or
                      ((local-name()='errorCorrection') and (.='.8' or .='0.8')) or
                      ((local-name()='gravity') and (.='0 -9.8 0' or .='0.0 -9.8 0.0')) or
                      ((local-name()='iterations') and (.='10')) or
                      ((local-name()='maxCorrectionSpeed') and (.='-1' or .='-1.0')))) and
                      not((local-name(..)='SingleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='maxAngle') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle') and (.='-3.1416' or .='-3.14159' or .='-3.141593' or .='-3.1415926' or .='-3.14159263' or .='-3.141592653')) or
                      ((local-name()='stopBounce') and (.='0' or .='0.0')) or
                      ((local-name()='stopErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='SliderJoint') and
                      (((local-name()='axis') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='maxSeparation' or local-name()='stopErrorCorrection') and (.='1' or .='1.0')) or
                      ((local-name()='minSeparation' or local-name()='sliderForce' or local-name()='stopBounce') and (.='0' or .='0.0')) or
                      ((local-name()='stopErrorCorrection') and (.='1' or .='1.0')))) and
                      not((local-name(..)='UniversalJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='stop1Bounce' or local-name()='stop2Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection') and (.='.8' or .='0.8'))))" />
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
                not(local-name()='containerField' and .='') and
                not(local-name()='class' and .='') and
                $notFieldSpace and
                not(contains(local-name(),'set_')) and
                not(contains(local-name(),'_changed')) and
                .)" >
			
			<xsl:variable name="embeddedSpaceCount" select="string-length(normalize-space(.)) - string-length(translate(.,' ',''))"/>
			<xsl:variable name="isNumeric" select="(string-length(translate(.,'0123456789+-Ee. ','')) = 0)"/>
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
                
			<xsl:variable name="attributeTypeHeuristic"> <!-- replaced -->
				<xsl:choose>
					<!-- TODO need strict rules; heuristics follow -->
					<xsl:when test="not(contains(.,' ')) and (string-length(translate(.,'truefalse','')) = 0)">
						<xsl:text>SFBool</xsl:text>
					</xsl:when>
					<xsl:when test="(string-length(translate(.,'truefalse ','')) = 0)">
						<xsl:text>MFBool</xsl:text>
					</xsl:when>
					<xsl:when test="(name() = 'content') or (name() = 'description') or (name() = 'name') or (name() = 'version')">
						<xsl:text>SFString</xsl:text>
					</xsl:when>
					<xsl:when test="(name() = 'string') or (name() = 'justify')">
						<xsl:text>MFString</xsl:text>
					</xsl:when>
					<!-- TODO
					<xsl:when test="(starts-with(normalize-space(.),'&quot;') and ends-with(normalize-space(.),'&quot;'))">
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
						<xsl:text>MFnumber</xsl:text>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>SFString</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>
				
			<xsl:variable name="normalizedArray" select="normalize-space(translate(.,',',' '))"/>
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
					<xsl:if test="(string-length(.) > 20)">
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
				<xsl:choose>
					<xsl:when test="($attributeType = 'SFString') or ($attributeType = 'xs:string')">
						<xsl:text>"</xsl:text>
						<xsl:call-template name="escape-quote-characters">
							<xsl:with-param name="inputString">
								<!-- must escape backslashes before quote characters to avoid side effects -->
								<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
									<xsl:with-param name="inputString">
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
								<xsl:when test="not(contains(.,'&quot;'))">
									<!-- MFString is forgiving, but this code block fixes the error and notifies authors of valid practice -->
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
						<xsl:text>new MFString(</xsl:text>
						<xsl:text>"</xsl:text>
						<xsl:call-template name="escape-quote-characters">
							<xsl:with-param name="inputString">
								<!-- must escape backslashes before quote characters to avoid side effects -->
								<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
									<xsl:with-param name="inputString">
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
						<xsl:text>new boolean[] {</xsl:text>
						<xsl:value-of select="translate(normalize-space(.),' ',',')"/>
						<xsl:text>}</xsl:text>
					</xsl:when>
					<xsl:when test="($attributeType = 'SFFloat')">
						<xsl:value-of select="."/>
						<xsl:text></xsl:text>
					</xsl:when>
					<xsl:when test="($attributeType = 'SFInt32') or ($attributeType = 'SFDouble') or ($attributeType = 'SFTime')">
						<xsl:value-of select="."/>
					</xsl:when>
					<xsl:when test="($attributeType = 'MFInt32') or ($attributeType = 'SFImage')">
						<xsl:text>new int[] {</xsl:text>
						<xsl:value-of select="translate(normalize-space(.),' ',',')"/>
						<xsl:text>}</xsl:text>
					</xsl:when>
					<xsl:when test="($attributeType = 'MFFloat')">
						<xsl:text>new float[] {</xsl:text>
						<xsl:call-template name="java-float-numbers">
							<xsl:with-param name="inputString">
								<xsl:value-of select="."/>
							</xsl:with-param>
							<xsl:with-param name="inputType" select="$attributeType"/>
						</xsl:call-template>
						<xsl:text>}</xsl:text>
					</xsl:when>
					<xsl:when test="($attributeType = 'MFDouble')">
						<xsl:text>new double[] {</xsl:text>
						<xsl:call-template name="java-double-numbers">
							<xsl:with-param name="inputString">
								<xsl:value-of select="."/>
							</xsl:with-param>
						</xsl:call-template>
						<xsl:text>}</xsl:text>
					</xsl:when>
					<xsl:when test="($attributeType = 'SFVec2f') or ($attributeType = 'SFVec3f') or ($attributeType = 'SFVec4f') or
									($attributeType = 'SFRotation') or starts-with($attributeType, 'SFColor')">
						<xsl:call-template name="java-float-numbers">
							<xsl:with-param name="inputString">
								<xsl:value-of select="."/>
							</xsl:with-param>
							<xsl:with-param name="inputType" select="$attributeType"/>
						</xsl:call-template>
					</xsl:when>
					<xsl:when test="($attributeType = 'SFVec2d') or ($attributeType = 'SFVec3d') or ($attributeType = 'SFVec4d')">
						<xsl:call-template name="java-float-numbers">
							<xsl:with-param name="inputString">
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
						<xsl:text>(</xsl:text>
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
									<xsl:value-of select="string-length(normalize-space(.))"/>
									<xsl:text>]</xsl:text>
								</xsl:message>
								<xsl:text>)</xsl:text>
								<xsl:text> /* splitting up long array to improve compilability */</xsl:text>
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
											<xsl:text>(</xsl:text>
											<xsl:text>new float[] {</xsl:text>
											<xsl:call-template name="java-float-numbers">
												<xsl:with-param name="inputString">
													<xsl:value-of select="current-group()"/>
												</xsl:with-param>
												<xsl:with-param name="inputType" select="$attributeType"/>
											</xsl:call-template>
										</xsl:when>
										<xsl:otherwise>
											<!-- last item in sequence for preceding current-group() appears singly -->
											<xsl:text>,</xsl:text>
											<xsl:call-template name="java-float-numbers">
												<xsl:with-param name="inputString">
													<xsl:value-of select="current-group()"/>
												</xsl:with-param>
												<xsl:with-param name="inputType" select="$attributeType"/>
											</xsl:call-template>
										</xsl:otherwise>
									</xsl:choose>
									<!-- close invocation when all done -->
									<xsl:if test="(count(current-group()) = 1) or (count(current-group()) &lt; $numbersPerGroup - 1)">
										<xsl:text>}</xsl:text>
										<xsl:text>)</xsl:text>
										<xsl:text>)</xsl:text>
									</xsl:if>
								</xsl:for-each-group>
							</xsl:when>
							<xsl:otherwise>
								<xsl:text>new float[] {</xsl:text>
								<xsl:call-template name="java-float-numbers">
									<xsl:with-param name="inputString">
										<xsl:value-of select="."/>
									</xsl:with-param>
									<xsl:with-param name="inputType" select="$attributeType"/>
								</xsl:call-template>
								<xsl:text>}</xsl:text>
								<xsl:text>)</xsl:text>
							</xsl:otherwise>
						</xsl:choose>
					</xsl:when>
					<xsl:when test="contains($attributeType,'MFVec2d') or contains($attributeType,'MFVec3d') or contains($attributeType,'MFVec4d') or
									contains($attributeType,'Matrix3d') or contains($attributeType,'Matrix4d')">
						<xsl:text>new </xsl:text>
						<xsl:value-of select="$attributeType"/>
						<xsl:text>(</xsl:text>
						<xsl:text>new double[] {</xsl:text>
						<xsl:call-template name="java-double-numbers">
							<xsl:with-param name="inputString">
								<xsl:value-of select="."/>
							</xsl:with-param>
						</xsl:call-template>
						<xsl:text>}</xsl:text>
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
				
				<xsl:text>)</xsl:text>
			</xsl:if>
			
        </xsl:if>
        <!-- end if filtering of default attribute values -->
    </xsl:template>

    <xsl:template name="escape-special-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:call-template name="escape-backslash-characters">
            <xsl:with-param name="inputString">
                <xsl:call-template name="escape-apostrophe-characters">
                    <xsl:with-param name="inputString">
                        <xsl:call-template name="escape-lessthan-characters">
                            <xsl:with-param name="inputString">
                                <!-- keep escape-ampersand-characters innermost so it doesn't get overzealous about escaped apostrophes or less-than characters -->
                                <xsl:call-template name="escape-ampersand-characters">
                                        <xsl:with-param name="inputString" select="$inputString"/>
                                </xsl:call-template>
                            </xsl:with-param>
                        </xsl:call-template>
                    </xsl:with-param>
                </xsl:call-template>
            </xsl:with-param>
        </xsl:call-template>
    </xsl:template>

    <xsl:template name="escape-lessthan-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:message><xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/></xsl:message> -->
        <xsl:choose>
            <!-- handle preceding &quot; marks first
            <xsl:when test="contains($inputString,'&quot;') and not(contains(substring-before($inputString,'&quot;'),'&#60;'))">
                <xsl:value-of select="substring-before($inputString,'&quot;')"/>
                <xsl:text disable-output-escaping="no">&quot;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters">
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&quot;')"/>
                </xsl:call-template>
            </xsl:when> -->
            <!-- &#60; is &lt; -->
            <xsl:when test="contains($inputString,'&#60;')">
                <xsl:value-of select="substring-before($inputString,'&#60;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="no">&amp;</xsl:text>
                <xsl:text disable-output-escaping="no">lt;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&#60;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-ampersand-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
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
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;#38;') and not(contains(substring-before($inputString,'&amp;#38;'),'&amp;'))">
                <xsl:value-of select="substring-before($inputString,'&amp;amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">#38;</xsl:text>
               <!-- <xsl:text disable-output-escaping="yes">amp;</xsl:text>-->
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;')">
                <xsl:value-of select="substring-before($inputString,'&amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">amp;</xsl:text> 
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-quote-characters">
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
            <xsl:when test="contains($inputString,'&quot;')">
                <xsl:value-of select="substring-before($inputString,'&quot;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">\"</xsl:text>
                <xsl:call-template name="escape-quote-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&quot;')"/>
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
                    <xsl:with-param name="inputString" select='substring-after($inputString,$apostrophe)'/>
                </xsl:call-template>
            </xsl:when>-->
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-url-quote-characters">
		<!-- https://en.wikipedia.org/wiki/Percent-encoding -->
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <xsl:choose>
            <xsl:when test="contains($inputString,'&quot;')">
                <xsl:value-of select="substring-before($inputString,'&quot;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">%22</xsl:text><!-- escape sequence -->
                <xsl:call-template name="escape-url-quote-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&quot;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

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
                    <xsl:with-param name="inputString" select='substring-after($inputString,$apostrophe)'/>
                </xsl:call-template>
            </xsl:when>-->
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-backslash-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
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
                    <xsl:with-param name="inputString" select="substring-after($inputString,'\')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="java-float-numbers">
		<!-- TODO omit trailing zeroes -->
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <xsl:param name="inputType"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
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
                    <xsl:with-param name="inputString" select="substring-after($arrayString,',')"/>
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
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
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
                    <xsl:with-param name="inputString" select="substring-after($arrayString,',')"/>
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
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
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
						<xsl:with-param name="inputString" select="substring-after($inputString,'&#10;')"/>
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
      <xsl:if test="not(normalize-space(.) = '') and not(normalize-space(.) = ' ')">
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
					<xsl:when test="not(contains(.,'&#10;'))">
						<xsl:text>"</xsl:text>
									<xsl:call-template name="escape-quote-characters">
										<xsl:with-param name="inputString">
											<!-- must escape backslashes before quote characters to avoid side effects -->
											<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
												<xsl:with-param name="inputString">
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
						<xsl:text>new String[] {"</xsl:text>
							<xsl:call-template name="java-create-array-from-multiline-string">
								<xsl:with-param name="inputString">
									<xsl:call-template name="escape-quote-characters">
										<xsl:with-param name="inputString">
											<!-- must escape backslashes before quote characters to avoid side effects -->
											<xsl:call-template name="escape-backslash-characters"> <!-- tail recursion -->
												<xsl:with-param name="inputString">
													<xsl:value-of select="."/>
												</xsl:with-param>
											</xsl:call-template>
										</xsl:with-param>
									</xsl:call-template>
								</xsl:with-param>
							</xsl:call-template>
						<xsl:text>"}</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
				<xsl:text>)</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<!-- at document root level -->
				<!-- indent -->
				<xsl:text>  </xsl:text>
				<xsl:text>/* </xsl:text>
				<xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
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

		<xsl:text>import * as java.util from 'java.util';</xsl:text><xsl:text>&#10;</xsl:text>
		<xsl:if test="//comment() or //*[name()='X3D'] or //*[name()='Scene'] or //*[name()='head'] or //*[name()='field'] or //*[name()='fieldValue'] or 
					  //*[name()='component'] or //*[name()='unit'] or //*[name()='meta'] or //*[name()='IS'] or //*[name()='connect'] or //*[name()='ROUTE'] or 
					  //*[starts-with(local-name(),'Metadata')] or //*[contains(local-name(),'Proto')] or //*[name()='WorldInfo']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Core';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[starts-with(local-name(),'CAD')] or //*[contains(local-name(),'QuadSet')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.CADGeometry';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'CubeMap')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.CubeMapTexturing';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[starts-with(local-name(),'DISEntity')] or //EspduTransform or //*[contains(local-name(),'Pdu')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.DIS';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Background')] or //*[contains(local-name(),'Fog')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.EnvironmentalEffects';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='ProximitySensor'] or //*[name()='TransformSensor'] or //*[name()='VisibilitySensor']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.EnvironmentalSensor';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[starts-with(local-name(),'Boolean')] or //*[contains(local-name(),'Sequencer')] or //*[contains(local-name(),'Trigger')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.EventUtilities';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="true()">
			<xsl:text>import * from 'org.web3d.x3d.jsail.fields';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Chaser')] or //*[contains(local-name(),'Damper')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Followers';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'2D')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Geometry2D';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='Box'] or //*[name()='Cone'] or //*[name()='Cylinder'] or //*[name()='ElevationGrid'] or
					  //*[name()='Extrusion'] or //*[name()='IndexedFaceSet'] or //*[name()='Sphere']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Geometry3D';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[starts-with(local-name(),'Geo')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Geospatial';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='Group'] or //*[name()='StaticGroup'] or //*[name()='Switch'] or //*[name()='Transform']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Grouping';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[starts-with(local-name(),'HAnim')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.HAnim';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Interpolator') and not(starts-with(local-name(),'NURBS'))] or //*[name()='EaseInEaseOut']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Interpolation';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='KeySensor'] or //*[name()='StringSensor']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.KeyDeviceSensor';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='Layer'] or //*[name()='LayerSet'] or //*[name()='Viewport']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Layering';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[starts-with(local-name(),'Layout')] or //*[starts-with(local-name(),'Screen')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Layout';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Light')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Lighting';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='Billboard'] or //*[name()='Collision'] or //*[name()='LOD'] or //*[name()='NavigationInfo'] or
					  //*[contains(local-name(),'Viewpoint')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Navigation';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='Anchor'] or //*[name()='IMPORT'] or //*[name()='EXPORT'] or //*[name()='Inline'] or //*[name()='LoadSensor']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Networking';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[starts-with(local-name(),'NURBS')] or //*[contains(local-name(),'Contour')] or //*[name()='CoordinateDouble']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.NURBS';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'PhysicsModel')] or //*[contains(local-name(),'Emitter')] or //*[name()='ParticleSystem']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.ParticleSystems';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Pick')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Picking';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='CylinderSensor'] or //*[name()='PlaneSensor'] or //*[name()='SphereSensor'] or //*[name()='TouchSensor']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.PointingDeviceSensor';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='ClipPlane'] or //*[name()='Color'] or //*[name()='ColorRGA'] or //*[name()='Coordinate'] or
					  //*[contains(local-name(),'LineSet')] or //*[contains(local-name(),'Triangle')] or //*[name()='Normal'] or 
					  //*[name()='PointSet']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Rendering';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Joint')] or //*[starts-with(local-name(),'Collidable')] or
					  //*[name()='CollisionCollection'] or //*[name()='CollisionSensor'] or //*[name()='CollisionSpace'] or 
					  //*[name()='Contact'] or //*[contains(local-name(),'RigidBody')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.RigidBodyPhysics';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='Script']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Scripting';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Shader')] or //*[contains(local-name(),'VertexAttribute')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Shaders';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='Appearance'] or //*[name()='FillProperties'] or //*[name()='LineProperties'] or //*[name()='Material'] or
					  //*[name()='Shape'] or //*[name()='TwoSidedMaterial']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Shape';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='AudioClip'] or //*[name()='Sound']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Sound';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='FontStyle'] or //*[name()='Text']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Text';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Texture') and not(contains(local-name(),'3D'))] or 
					  //*[starts-with(local-name(),'MultiTexture')] or //*[name()='TextureCoordinateGenerator'] or
					  //*[name()='TextureCoordinate'] or //*[name()='TextureProperties'] or //*[name()='TextureTransform']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Texturing';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Texture3D')] or //*[name()='TextureCoordinate3D'] or //*[name()='TextureCoordinate4D'] or
					  //*[name()='TextureTransform3D'] or //*[name()='TextureTransformMatrix3D']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Texturing3D';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[name()='TimeSensor']">
			<xsl:text>import * from 'org.web3d.x3d.jsail.Time';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
		<xsl:if test="//*[contains(local-name(),'Volume')]">
			<xsl:text>import * from 'org.web3d.x3d.jsail.VolumeRendering';</xsl:text>
			<xsl:text>&#10;</xsl:text>
		</xsl:if>
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
	
		<!-- Note:  these rules are adapted from X3dToVrml97.xslt so be sure to apply any updates in both stylesheets -->

		<xsl:variable name="attributeName"       select="local-name()"/>
		<xsl:variable name="parentElementName"   select="local-name(..)"/>
		<xsl:variable name="normalizeSpaceValue" select="normalize-space(.)"/>
		<xsl:variable name="localFieldType"      select="normalize-space(../@type)"/> <!-- locally defined field -->

		<xsl:choose>
		  <!-- SFString -->
		  <xsl:when test="($localFieldType='SFString')          or
                          ($attributeName='DEF')                or
                          ($attributeName='USE')                or
                          ($attributeName='containerField')     or
                          ($attributeName='appinfo')            or
                          ($attributeName='documentation')      or
                          (starts-with($parentElementName,'field') and ($attributeName='value'))      or
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
                          ($parentElementName='XvlShell'                   and $attributeName='shellType')">
			  <xsl:text>SFString</xsl:text>
		  </xsl:when>
		  <!-- Statements: xs:integer as SFInt32 - TODO schema/spec change? -->
		  <xsl:when test="($localFieldType='SFInt32')           or 
                          (($parentElementName='component')                and $attributeName='level')">
			  <xsl:text>SFInt32</xsl:text>
		  </xsl:when>
		  <xsl:when test="($localFieldType='SFDouble')          or 
                          ($parentElementName='unit'      and $attributeName='conversionFactor')">
			  <xsl:text>SFDouble</xsl:text>
		  </xsl:when>
		  <!-- X3D statements (i.e. not nodes): xs:string (including X3D version attribute) -->
		  <xsl:when test="($attributeName='class')       or
                          ($parentElementName='X3D')     or ($parentElementName='ROUTE')   or ($parentElementName='meta')    or
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
					($attributeName='enabled')  or
					($attributeName='global')   or
					($attributeName='normalPerVertex') or
					($attributeName='on')       or
					($attributeName='loop')     or
					($attributeName='normalizeVelocity') or
					($attributeName='rtpHeaderExpected') or
					($attributeName='solid') or
					($attributeName='uClosed') or ($attributeName='vClosed') or
					($parentElementName='AudioClip' and $attributeName='loop') or
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
					(ends-with($parentElementName,'Viewpoint') and ($attributeName='jump' or $attributeName='retainUserOffsets')) or
					($parentElementName='VolumeEmitter' and $attributeName='internal')">
			  <xsl:text>SFBool</xsl:text>
		  </xsl:when>
		  <!-- MFBool -->
		  <xsl:when test="
					($localFieldType='MFBool')  or 
                    (contains($parentElementName,'BooleanSequencer') and $attributeName='keyValue') or
					($parentElementName='CADLayer'                   and $attributeName='visible') or
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
					(($localFieldType='MFColor')  or 
                    $parentElementName='Color' and $attributeName='color') or
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
					($parentElementName='LineProperties'   and ($attributeName='linewidthScaleFactor')) or
					($parentElementName='Material'         and ($attributeName='ambientIntensity'     or $attributeName='shininess'     or $attributeName='transparency')) or
					($parentElementName='ParticleSystem'   and ($attributeName='lifetimeVariation' or $attributeName='particleLifetime')) or
					($parentElementName='TwoSidedMaterial' and ($attributeName='backAmbientIntensity' or $attributeName='backShininess' or $attributeName='backTransparency')) or
					($parentElementName='MotorJoint'       and (starts-with($attributeName,'axis') or starts-with($attributeName,'stop'))) or
					($parentElementName='MovieTexture'     and ($attributeName='pitch' or $attributeName='speed')) or
					($parentElementName='MultiTexture'     and $attributeName='alpha') or
					($parentElementName='NavigationInfo'   and ($attributeName='speed' or $attributeName='visibilityLimit' or $attributeName='transitionTime')) or
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
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='ClipPlane' and $attributeName='plane')">
			  <xsl:text>SFVec4f</xsl:text>
		  </xsl:when>
		  <!-- SFRotation -->
		  <!-- note TextureTransform tests must precede these default checks -->
		  <xsl:when test="
					($localFieldType='MFVec3f')    or 
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
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='Extrusion' and $attributeName='orientation') or
					(ends-with($parentElementName,'OrientationInterpolator') and $attributeName='keyValue')">
			  <xsl:text>MFRotation</xsl:text>
		  </xsl:when>
		  <!-- MFMatrix3f -->
		  <xsl:when test="
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='Matrix3VertexAttribute' and $attributeName='value')">
			  <xsl:text>MFMatrix3f</xsl:text>
		  </xsl:when>
		  <!-- SFMatrix4f -->
		  <xsl:when test="
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='TextureTransformMatrix3D' and $attributeName='matrix')">
			  <xsl:text>SFMatrix4f</xsl:text>
		  </xsl:when>
		  <!-- MFMatrix4f -->
		  <xsl:when test="
					(($localFieldType='MFVec3f')    or 
                    $parentElementName='Matrix4VertexAttribute' and $attributeName='value')">
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
					($parentElementName='SignalPdu' and $attributeName='data')">
			  <xsl:text>MFInt32</xsl:text>
		  </xsl:when>
		  <!-- SFInt32 --> <!-- Note that other DIS attibutes must get tested before this, including MFInt32 -->
		  <xsl:when test="
                    ($localFieldType='MFVec3f')    or 
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
					<xsl:message>
						  <xsl:text>*** warning: X3dToJavaScript.xslt attribute type not found for </xsl:text>
						  <xsl:value-of select="$parentElementName"/>
						  <xsl:text> </xsl:text>
						  <xsl:value-of select="$attributeName"/>
					</xsl:message>
				</xsl:otherwise>
			  </xsl:choose>
		  </xsl:otherwise>
		</xsl:choose>

    </xsl:template>

</xsl:stylesheet>
