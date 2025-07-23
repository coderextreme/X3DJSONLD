<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="filename"    content="X3dToXhtml-2.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content=" 4 February 2003" />
   <meta name="revised"     content="28 December 2005" />
   <meta name="description" content="XSL stylesheet to convert X3D source into an easily readable XHTML page.
   				This version walks the tree and plays around with character entities." />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-2.xslt" />
  </head>

Recommended tools:
- X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- XML Spy https://www.xmlspy.com
--> 
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
	<xsl:strip-space elements="*"/>
	<xsl:output encoding="UTF-8" media-type="text/html" indent="yes" cdata-section-elements="Script" omit-xml-declaration="no" method="html"/>

	<xsl:template match="/">
		<html>
			<head>
				<title>
					<xsl:variable name="fileName" select="//head/meta[@name='title']/@content"/>
					<xsl:choose>
						<xsl:when test="//head/meta[@name='title']/@content!='*enter FileNameWithNoAbbreviations.x3d here*' ">
							<xsl:value-of select="$fileName"/>
							<xsl:text> (X3dToXhtml)</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:text> X3dToXhtml </xsl:text>
						</xsl:otherwise>
					</xsl:choose>
				</title>
				<meta name="generator" content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-2.xslt"></meta>
			</head>
			<body>
				<!-- n.b. if the following rule is missing, then nothing else gets processed!! -->
				<xsl:apply-templates select="*" />
			</body>
		</html>
	</xsl:template>
	
	<xsl:template match="*" >
		<p>
			<xsl:text>element </xsl:text>
			<xsl:value-of select="local-name(.)"></xsl:value-of>
			<xsl:text> has local-name() </xsl:text>
			<xsl:value-of select="local-name()"></xsl:value-of>
			<xsl:text> &#10;and parent </xsl:text>
			<xsl:value-of select="local-name(..)"></xsl:value-of>
		</p>
		<!-- can we find a special node in there? -->
		<xsl:if test="local-name()='Shape'">
			<center>
				<xsl:text> hello Shape you popular node you! </xsl:text>
				<xsl:message> Shape node message here.... </xsl:message>
				<xsl:comment> Shape node comment here.... </xsl:comment>
				<!-- xml stylesheet (not output) comment:  &#10; is a line feed -->
				<xsl:text>&#10;</xsl:text>
			</center>
		</xsl:if>
		<xsl:apply-templates select="*" />
	</xsl:template>

</xsl:stylesheet>
