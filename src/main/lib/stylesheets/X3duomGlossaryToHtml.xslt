<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3duomGlossaryToHtml.xslt
    created     : 28 June 2023
    creator     : Don Brutzman
    description : X3DUOM utilization stylesheet to produce glossary.html page
    reference   : glossary.xml
    reference   : X3dUnifiedObjectModel-4.0.xml
    reference   : https://www.w3.org/TR/xslt
    reference   : https://www.web3d.org/specifications/glossary.html
    identifier  : https://www.web3d.org/x3d/stylesheets/X3duomGlossaryToHtml.xslt
    license     : license.html
-->

<!-- TODO authors can edit this example to customize all transformation rules -->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions">
	<!--  extension-element-prefixes="xs" -->
    <xsl:output method="html"/> <!-- output methods:  xml html text -->
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process intended root of input document -->
    
        <xsl:message>
            <xsl:text>*** Starting stylesheet conversion...</xsl:text>
        </xsl:message>
        <!-- debug
        <xsl:message>
            <xsl:text>*** Initial element </xsl:text>
            <xsl:value-of select="local-name(/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[@value='humanoid_root'])"/>
            <xsl:text> value='</xsl:text>
            <xsl:value-of select="/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[@value='humanoid_root']/@value"/>
            <xsl:text>'</xsl:text>
        </xsl:message>
        -->
<html>
    <head>
        <meta name="title" content="glossary.html"/>
    </head>
    <body>
                
        <h2>X3DUOM Glossary to html conversion</h2>
        
        <p>
            <xsl:text>https://www.web3d.org/x3d/stylesheets/X3duomGlossaryToHtml.xslt</xsl:text>
        </p>
        <xsl:text>&#10;</xsl:text>
        
        <!-- loop over each term -->
        <xsl:for-each select="//X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType">
                <xsl:choose>
                    <xsl:when test="(@name = 'acronymChoices')">
                        <h3> Acronyms </h3>
                    </xsl:when>
                    <xsl:when test="(@name = 'glossaryChoices')">
                        <h3> Glossary </h3>
                    </xsl:when>
                </xsl:choose>
                <dl>
                    <xsl:for-each select="enumeration">
                        <dt>
                            <xsl:element name="a">
                                <xsl:attribute name="name">
                                    <xsl:value-of select="@value"/>
                                </xsl:attribute>
                            </xsl:element>
                            <xsl:if test="(@value = 'event') or (@value = 'node') or (@value = 'statements')">
                                <!-- also plural usage -->
                                <xsl:element name="a">
                                    <xsl:attribute name="name">
                                        <xsl:value-of select="@value"/>
                                        <xsl:text>s</xsl:text>
                                    </xsl:attribute>
                                </xsl:element>
                            </xsl:if>
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="@documentation"/>
                                </xsl:attribute>
                                <xsl:value-of select="@value"/>
                            </xsl:element>
                        </dt>
                        <dd>
                            <!-- <xsl:value-of select="@appinfo"/> -->
                            <xsl:call-template name="insert-anchor-links">
                                    <xsl:with-param name="currentString">
                                            <xsl:value-of select="normalize-space(@appinfo)"/>
                                    </xsl:with-param>
                            </xsl:call-template>
                        </dd>
                    </xsl:for-each>
                </dl>
            <xsl:text>&#10;</xsl:text>
        </xsl:for-each>
        
    </body>
</html>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each enumeration -->
    
        <!-- unneeded, initial recursion does the trick -->
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
        
        <!-- unneeded, initial recursion does the trick -->
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()"> <!-- rule to process each comment -->
    
        <!-- unneeded, initial recursion does the trick -->
        
    </xsl:template>

    <!-- ===================================================== -->
    <xsl:template name="insert-anchor-links">
        <xsl:param name="currentString"><!-- default value is empty --></xsl:param>
        
        <xsl:for-each select="tokenize($currentString,'\s')">
            
                <xsl:variable name="termName">
                    <xsl:choose>
                        <xsl:when test="ends-with(.,'.')">
                            <xsl:value-of select="substring(., 2, string-length(.) - 1)"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="substring(., 2)"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                <xsl:variable name="CamelCaseTermName">
                        <xsl:value-of select="upper-case(substring($termName, 1, 1))"/>
                        <xsl:value-of select="substring($termName, 2)"/>
                </xsl:variable>
            <xsl:text> </xsl:text>
            <xsl:choose>
                <xsl:when test="starts-with(., '#')">
                    <!-- debug
                    <xsl:message>
                        <xsl:text>( *** token '</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' termName '</xsl:text>
                        <xsl:value-of select="$termName"/>
                        <xsl:text>' CamelCaseTermName '</xsl:text>
                        <xsl:value-of select="$CamelCaseTermName"/>
                        <xsl:text>')</xsl:text>
                    </xsl:message> -->
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:text>#</xsl:text>
                            <xsl:value-of select="$termName"/>
                        </xsl:attribute>
                        <xsl:value-of select="$termName"/>
                    </xsl:element>
                </xsl:when>
                <xsl:otherwise>
                    <!--<xsl:message> *** nontoken </xsl:message>-->
                    <xsl:value-of select="."/>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="ends-with(.,'.')">
                    <xsl:text>. </xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text> </xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            
        </xsl:for-each>
        
    </xsl:template>

</xsl:stylesheet>
