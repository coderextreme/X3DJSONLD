<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3dSceneScriptFieldNames.xslt
    created     : 11 July 2015
    revised     : 26 November 2015
    creator     : Don Brutzman
    description : Extract Script field names to create sceneGlobalVariables.properties for ant/jslint processing.
                  See examples/buildExamplesTemplate.xml for example invocation and usage.
    reference   : https://www.w3.org/TR/xslt
    reference   : https://www.web3d.org/x3d/content/examples/newStylesheet.xslt
    identifier  : https://www.web3d.org/x3d/content/examples/filename.xslt
    license     : license.html
-->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0">
    <xsl:param name="sourceText"><xsl:text></xsl:text></xsl:param> <!-- TODO -->
    
    <xsl:output method="text" cdata-section-elements="Script ShaderPart ShaderProgram" omit-xml-declaration="no" />
    
    <xsl:template match="/"> <!-- process root of input document -->
    
        <xsl:message>
            <xsl:text>... X3dSceneScriptFieldNames.xslt found </xsl:text>
            <xsl:value-of select="count(//Script/field)"/>
            <xsl:text> Script field</xsl:text>
            <xsl:if test="count(//Script/field) != 1">
                <xsl:text>s</xsl:text>
            </xsl:if>
            <xsl:text> and added built-in X3D object/field types:</xsl:text>
        </xsl:message>
        
        <!-- output for ant build script -->
        <xsl:text>sceneScriptFieldGlobals=</xsl:text>
            
        <!-- concatenate all contained text -->
        <xsl:variable name="normalizedSourceText" select="normalize-space($sourceText)"/>
        <!-- debug
        <xsl:message>
            <xsl:text>... $normalizedSourceText=</xsl:text>
            <xsl:value-of select="$normalizedSourceText"/>
        </xsl:message> -->

        <xsl:variable name="globalsList">
            <xsl:apply-templates select="//Script/field"/> <!-- process elements -->       
            <xsl:if test="count(//Script/field) > 0">
                <xsl:text>,</xsl:text>
            </xsl:if>
            <!-- Finish with built-in X3D object, field types -->
            <xsl:if test="(string-length($normalizedSourceText) = 0)">
                 <xsl:text>Browser,SFBool,MFBool,SFColor,MFColor,SFColorRGBA,MFColorRGBA,SFDouble,MFDouble,SFFloat,MFFloat,SFImage,MFImage,SFInt32,MFInt32,SFMatrix3d,MFMatrix3d,SFMatrix3f,MFMatrix3f,SFMatrix4d,MFMatrix4d,SFMatrix4f,MFMatrix4f,SFNode,MFNode,SFRotation,MFRotation,SFString,MFString,SFTime,MFTime,SFVec2d,MFVec2d,SFVec2f,MFVec2f,SFVec3d,MFVec3d,SFVec3f,MFVec3f,SFVec4d,MFVec4d,SFVec4f,MFVec4f</xsl:text>                
            </xsl:if>
            <!-- Finish with specific list built-in X3D object and field types, if source is provided -->
            <xsl:text>Browser</xsl:text>
            <xsl:if test="contains($normalizedSourceText,' SFBool ')"     ><xsl:text>,SFBool</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFBool ')"     ><xsl:text>,MFBool</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFColor ')"    ><xsl:text>,SFColor</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFColor ')"    ><xsl:text>,MFColor</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFColorRGBA ')"><xsl:text>,SFColorRGBA</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFColorRGBA ')"><xsl:text>,MFColorRGBA</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFDouble ')"   ><xsl:text>,SFDouble</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFDouble ')"   ><xsl:text>,MFDouble</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFFloat ')"    ><xsl:text>,SFFloat</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFFloat ')"    ><xsl:text>,MFFloat</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFImage ')"    ><xsl:text>,SFImage,</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFImage ')"    ><xsl:text>,MFImage</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFInt32 ')"    ><xsl:text>,SFInt32</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFInt32 ')"    ><xsl:text>,MFInt32</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFMatrix3d ')" ><xsl:text>,SFMatrix3d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFMatrix3d ')" ><xsl:text>,MFMatrix3d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFMatrix3d ')" ><xsl:text>,MFMatrix3d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFMatrix3f ')" ><xsl:text>,MFMatrix3f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFMatrix4d ')" ><xsl:text>,SFMatrix4d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFMatrix4d ')" ><xsl:text>,MFMatrix4d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFMatrix4f ')" ><xsl:text>,SFMatrix4f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFMatrix4f ')" ><xsl:text>,MFMatrix4f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFNode ')"     ><xsl:text>,SFNode</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFNode ')"     ><xsl:text>,MFNode</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFRotation ')" ><xsl:text>,SFRotation</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFRotation ')" ><xsl:text>,MFRotation</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFString ')"   ><xsl:text>,SFString</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFString ')"   ><xsl:text>,MFString</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFTime ')"     ><xsl:text>,SFTime</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFTime ')"     ><xsl:text>,MFTime</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFVec2d ')"    ><xsl:text>,SFVec2d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFVec2d ')"    ><xsl:text>,MFVec2d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFVec2f ')"    ><xsl:text>,SFVec2f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFVec2f ')"    ><xsl:text>,MFVec2f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFVec3d ')"    ><xsl:text>,SFVec3d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFVec3d ')"    ><xsl:text>,MFVec3d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFVec3f ')"    ><xsl:text>,SFVec3f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFVec3f ')"    ><xsl:text>,MFVec3f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFVec4d ')"    ><xsl:text>,SFVec4d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFVec4d ')"    ><xsl:text>,MFVec4d</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' SFVec4f ')"    ><xsl:text>,SFVec4f</xsl:text></xsl:if>
            <xsl:if test="contains($normalizedSourceText,' MFVec4f ')"    ><xsl:text>,MFVec4f</xsl:text></xsl:if>
        </xsl:variable>

        <!-- continued output for ant build script -->
        <xsl:value-of select="$globalsList"/> 
        <!-- ensure file output exists -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:message>
            <xsl:text>/* globals </xsl:text>
            <xsl:value-of select="$globalsList"/>
            <xsl:text> */</xsl:text>
        </xsl:message>
        
    </xsl:template>
    
    <xsl:template match="field">
        
        <xsl:value-of select="@name"/>
        
        <xsl:if test="(following-sibling::field) or following::Script/field">
            <xsl:text>,</xsl:text>
        </xsl:if>
        
    </xsl:template>

</xsl:stylesheet>
