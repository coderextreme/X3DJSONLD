<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="filename"    content="X3dToXhtml-1.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="23 January 2003" />
   <meta name="revised"     content="28 December 2005" />
   <meta name="description" content="XSLT stylesheet, dissected, to convert X3D source into an easily readable XHTML page.
   				This initial introductory version sets up headers and walks the tree.  Comments are ignored." />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-1.xslt" />
  </head>

Recommended tools:
- X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- XML Spy https://www.xmlspy.com
-->
 <xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fo="http://www.w3.org/1999/XSL/Format" xmlns:saxon="http://icl.com/saxon" saxon:trace="yes">
	<xsl:strip-space elements="*"/>
	<xsl:output encoding="UTF-8" media-type="text/html" indent="yes" cdata-section-elements="Script" omit-xml-declaration="no" method="html"/>

	<!-- precedence of pattern match is most-specific rules (templates) first, then least-specific rules (templates) -->
	<xsl:template match="/">
		<html>
			<head>
				<title>
					<xsl:variable name="fileName" select="//head/meta[@name='title']/@content"/>
					<xsl:choose>
						<xsl:when test="//head/meta[@name='title']/@content='HelloWorld.x3d' ">
							<xsl:text> Hello World is our most favorite example in, um, the world!</xsl:text>
						</xsl:when>
                                                <!-- otherwise avoid default value which demands changing -->
						<xsl:when test="//head/meta[@name='title']/@content!='*enter FileNameWithNoAbbreviations.x3d here*' ">
							<xsl:value-of select="$fileName"/>
							<xsl:text> (X3dToXhtml)</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:text> X3dToXhtml </xsl:text>
						</xsl:otherwise>
					</xsl:choose>
				</title>
				<meta name="generator" content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml-1.xslt"></meta>
			</head>
			<body>
				<xsl:apply-templates select="*" />

				<!-- end of file output (if any) could go here -->
			</body>
		</html>
	</xsl:template>
	
	<xsl:template match="*" >
		<p>
			<xsl:text>element </xsl:text>
                        <!-- note that function local-name(.) is the same as local-name() is the same as name() -->
			<xsl:value-of select="local-name(.)"></xsl:value-of>
			<xsl:text> has name() 
</xsl:text>
			<xsl:value-of select="name()"></xsl:value-of>
			<xsl:text> &#10;and parent </xsl:text>
                        <!-- output the parent name: -->
			<xsl:value-of select="local-name(..)"></xsl:value-of>
                        <!-- no parent means no parent name, if so: substitute an explanation -->
			<xsl:if test="(local-name(..)='')">
					<xsl:text>is the document root</xsl:text>
			</xsl:if>
		</p>
		<xsl:apply-templates select="*" />
		<!-- can process ending element here, if needed -->
	</xsl:template>

</xsl:stylesheet>
