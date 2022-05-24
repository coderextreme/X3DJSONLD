<?xml version="1.0" encoding="UTF-8"?>
<!-- https://stackoverflow.com/questions/21523574/replace-special-characters-like-ndash-and-mdash-occuring-in-an-xml-document -->
<!DOCTYPE stylesheet [
<!ENTITY ndash  "&#x2013;" >
<!ENTITY mdash  "&#x2014;" >
]>
<!--
    title       : SpecificationPublicationPreparation.xslt
    created     : 22 November 2020
    creator     : Don Brutzman
    description : Remove or clean up CSS-styled prose and note specification editor comments
    reference   : X3D4 Specifications
    reference   : https://www.w3.org/TR/xslt
    identifier  : https://www.web3d.org/x3d/stylesheets/SpecificationPublicationPreparation.xslt
    license     : license.html
-->

<!-- TODO authors can edit this example to customize all transformation rules -->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions">
	<!--  extension-element-prefixes="xs" -->
    
    <xsl:param name="verbose"><xsl:text>true</xsl:text></xsl:param>
    
    <xsl:output method="xml"/> <!-- output methods:  xml html text -->
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
    
        <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE html&gt;</xsl:text><!-- start element complete -->
        <xsl:text>&#10;</xsl:text>
  
        <xsl:message>
            <xsl:text>Notation: * means expected conversion, ! means unexpected problem, [prose] shows contained value </xsl:text>
        </xsl:message>
        <!-- debug diagnostic
        <xsl:message>
            <xsl:text>  ($verbose=</xsl:text><xsl:value-of select="$verbose"/><xsl:text>)</xsl:text>
        </xsl:message>
        -->
        
        <!-- process elements and comments -->
        <xsl:apply-templates select="* | text() | comment()"/>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each element -->
    
        <xsl:variable name="questionableConstructs" select="
            (lower-case(local-name()) = 'center') or (lower-case(local-name()) = 'tt')"/>
        <xsl:if test="$questionableConstructs">
            <xsl:message>
                <xsl:text>!!! element </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:choose>
                    <xsl:when test="(lower-case(local-name()) = 'center') or (local-name() = 'tt')">
                        <xsl:text> is a deprecated construct, HTML recommends using CSS style instead</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text> is an obsolete construct, use a better approach</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:if test="(local-name() = 'tt')">
                    <xsl:text> [</xsl:text>
                    <xsl:value-of select="text()" disable-output-escaping="yes"/>
                    <xsl:text>]</xsl:text>
                </xsl:if>
            </xsl:message>
        </xsl:if>
        
        <!-- ensure no upper/mixed case element name -->
        <xsl:variable name="elementName">
            <xsl:choose>
                <xsl:when test="not(local-name() = lower-case(local-name()))">
                    <xsl:message>
                        <xsl:text>!!! element </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> converted to lower case</xsl:text>
                    </xsl:message>
                    <xsl:value-of select="lower-case(local-name())"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="local-name()"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        
        <xsl:variable name="indent">
            <xsl:for-each select="ancestor::*">
                <xsl:text>  </xsl:text>
            </xsl:for-each>
        </xsl:variable>
        
        <xsl:variable name="hasContainedText" select="(string-length(normalize-space(translate(string(.),' ',''))) > 0)"/>
                
        <!-- common initial processing for each element
        <xsl:if test="not((local-name(..) = 'a')  or (local-name() = 'a')   or (local-name() = 'b') or (local-name() = 'i') or (local-name() = 'pre') or
                          (local-name() = 'span') or (local-name() = 'sub') or (local-name() = 'sup') or (local-name() = 'title')) and
                      not(starts-with(local-name(), 'h'))">
            <xsl:if test="not(contains(text()[1],'&#10;'))">
                < ! - - no line breaks for inline HTML elements
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
       < ! - -<xsl:value-of select="$indent"/> - - >
        </xsl:if>         -->
        
        <xsl:choose>
            <xsl:when test="($elementName = 'b') or ($elementName = 'i') or ($elementName = 'em') or ($elementName = 'strong')">
                <!-- debug diagnostic -->
                <xsl:if test="contains(.,'&#10;')">
                    <xsl:message>
                        <xsl:text>*** contained newline in element </xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text> "</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>"</xsl:text>
                    </xsl:message>
                </xsl:if>
                
                <xsl:text> </xsl:text><!-- ensure prior whitespace -->
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                <xsl:apply-templates select="@*"/> <!-- process attributes for this element -->
                
                <xsl:apply-templates select="* | text() | comment()"/>  <!-- recurse on child elements, include contained text -->
                
                <!-- common final processing for each element -->
                <xsl:text disable-output-escaping="yes">&lt;/</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text><!-- end element -->
            </xsl:when>
            <xsl:when test="(@class = 'proposedDeletion')">
                <xsl:if test="($verbose = 'true')">
                    <xsl:message>
                        <xsl:text disable-output-escaping="false">*** omitted [</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> class='</xsl:text>
                        <xsl:value-of select="@class"/>
                        <xsl:text>'</xsl:text>
                        <!--
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> element </xsl:text>
                        -->
                        <xsl:if test="(string-length(@title) > 0)">
                            <xsl:text> title='</xsl:text>
                            <xsl:value-of select="@title"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text>]</xsl:text>
                        <xsl:if test="$hasContainedText">
                            <xsl:text></xsl:text>
                            <xsl:value-of select="normalize-space(string(.))"/>
                        </xsl:if>
                        <xsl:text>[/</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>]</xsl:text>
                    </xsl:message>
                </xsl:if>
                <!-- omit copying this element -->
            </xsl:when>
            <xsl:when test="(($elementName = 'div') or ($elementName = 'span')) and
                            ((@class = 'proposed') or (@class = 'approved'))    and
                            not(($elementName = 'div') and (*[local-name() = 'div']))"><!-- be careful of nested div elements -->
                <!-- omit this div/span element (but keep children) in pristine copy -->
                <xsl:apply-templates select="* | text() | comment()"/>  <!-- recurse on child elements, include contained text -->
                <!-- debug diagnostic
                <xsl:message>
                    <xsl:text>*** omit </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> class='</xsl:text>
                    <xsl:value-of select="@class"/>
                    <xsl:text>' title='</xsl:text>
                    <xsl:value-of select="@title"/>
                    <xsl:text>'</xsl:text>
                </xsl:message> -->
            </xsl:when>
            <xsl:when test="($elementName = 'pre') or (count(*) > 0) or comment() or $hasContainedText or ($elementName = 'a')">
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:apply-templates select="@*"/> <!-- process attributes for this element -->
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text><!-- start element complete -->

                <xsl:apply-templates select="* | text() | comment()"/>  <!-- recurse on child elements, include contained text -->

                <!-- common final processing for each element
                <xsl:if test="not((local-name() = 'a')   or (local-name() = 'b') or (local-name() = 'i') or (local-name() = 'pre') or (local-name() = 'span') or
                                  (local-name() = 'sub') or (local-name() = 'sup') or (local-name() = 'title')) and
                              not(starts-with(local-name(), 'h'))">
                    < ! - - no line breaks for inline HTML elements
                    <xsl:text>&#10;</xsl:text>
                    <xsl:value-of select="$indent"/>
                </xsl:if> -->
                <xsl:text disable-output-escaping="yes">&lt;/</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text><!-- end element -->
            </xsl:when>
            <xsl:otherwise>
                <!-- debug diagnostic: singleton
                <xsl:message>
                    <xsl:text>singleton </xsl:text>
                    <xsl:value-of select="local-name()"/>
                </xsl:message> -->
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="$elementName"/>

                <xsl:apply-templates select="@*"/> <!-- process attributes for this element -->

                <!-- common final processing for each element -->
                <xsl:text disable-output-escaping="yes">/&gt;</xsl:text><!-- end element -->
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- additional diagnostics -->
        <xsl:choose>
            <!-- potentially malformed i b em strong -->
            <xsl:when test="((local-name() = 'b') or (local-name() = 'i') or (local-name() = 'em') or (local-name() = 'strong')) and 
                             (*[(local-name() != 'a') and (local-name() != 'br') and (local-name() != 'span') and (local-name() != 'sub') and (local-name() != 'sup')])">
                <xsl:if test="not(local-name() = 'b') and (*[local-name() = 'i']) and (//p[contains(.,'Architecture and base components')])">
                    <xsl:message>
                    <xsl:text>!!! </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> element contains embedded element </xsl:text>
                    <xsl:value-of select="local-name(*[1])"/>
                    <xsl:text> with text </xsl:text>
                    <xsl:text>[</xsl:text>
                    <xsl:value-of select="string(.)"/>
                    <xsl:text>]</xsl:text>
                </xsl:message>
                </xsl:if>
            </xsl:when>
            <xsl:when test="((local-name() = 'b') or (local-name() = 'i') or (local-name() = 'em') or (local-name() = 'strong')) and 
                             (starts-with(.,' ') or starts-with(normalize-space(.),',') or starts-with(normalize-space(.),';') or starts-with(normalize-space(.),':') or starts-with(normalize-space(.),'.') or 
                                ends-with(.,' ') or   ends-with(normalize-space(.),',') or   ends-with(normalize-space(.),';') or   ends-with(normalize-space(.),':') or   ends-with(normalize-space(.),'.') or   ends-with(normalize-space(.),'-'))">
                <xsl:if test="not(ends-with(normalize-space(.),'e.g.')) and not(ends-with(normalize-space(.),'ecmascript:')) and 
                              not(ends-with(normalize-space(.),'i.e.')) and not(ends-with(normalize-space(.),'javascript:'))">
                    <xsl:message>
                        <xsl:text>!!! </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> element has embedded whitespace/punctuation: </xsl:text>
                        <xsl:text>[</xsl:text>
                            <xsl:variable name="containedText">
                                <xsl:for-each select="../text() | ../*/text()">
                                    <xsl:value-of select="."/>
                                    <xsl:text> </xsl:text>
                                </xsl:for-each>
                            </xsl:variable>
                            <xsl:value-of select="normalize-space($containedText)" disable-output-escaping="yes"/>
                        <xsl:text>]</xsl:text>
                    </xsl:message>
                </xsl:if>
            </xsl:when>
        </xsl:choose>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
    
        <!-- conversions: <a name=""/> to <a id=""/> -->
        
        <xsl:variable name="allowedClassName" select="(local-name() = 'class') and
            ((. = 'auto-style1')   or (. = 'cube')       or (. = 'CenterDiv')   or (. = 'HeadingPart') or (. = 'HeadingClause') or 
             (. = 'code')          or (. = 'deprecated') or (. = 'equation')    or (. = 'editorsNote') or (. = 'editorialChange') or
             (. = 'note')          or (. = 'terms')         or (. = 'TermRef')    or (. = 'approved')    or (. = 'approvedDeletion') or
             (. = 'example')       or (. = 'IndexEntry') or (. = 'Params') or
             (. = 'terms')         or (. = 'TermRef')    or (. = 'x3dbar') or (. = 'x3dlogo') or
             (. = 'RunningHeader') or (. = 'RunningHeaderLeft')  or (. = 'RunningHeaderCenter') or (. = 'RunningHeaderRight') or 
             (. = 'Version')       or

             ((local-name(..) = 'p')     and ((. = 'Example')       or (. = 'Footnote')       or (. = 'AnnexType')  or (. = 'AnnexHeadingBottom') or 
                                              (. = 'SubRef')        or (. = 'CellBodyCenter') or (. = 'CellBodyRight') or 
                                              (. = 'FigureCaption') or (. = 'TableCaption'))) or
             ((local-name(..) = 'pre')   and ((. = 'diagram')       or (. = 'listing')        or (. = 'node')))     or
             ((local-name(..) = 'span')  and ((. = 'note')          or (. = 'times')))        or
             ((local-name(..) = 'table') and ((. = 'cont')          or (. = 'main')           or (. = 'topics')))   or
             ((local-name(..) = 'tr')    and ((. = 'Version')       or (. = 'Versiontr')      or (. = 'Versionmr')  or (. = 'Versionbr'))) or
             ((local-name(..) = 'th')    and ((. = 'cont1')         or (. = 'main1')          or (. = 'cont2')      or (. = 'cont3') or 
                                              (. = 'Version')       or (. = 'VersionX')       or (. = 'Version1'))) or
             ((local-name(..) = 'td')    and ((. = 'center')        or (. = 'Version')        or (. = 'Version2')      or 
                                              (. = 'Versiontr')     or (. = 'Version2tr')     or (. = 'VersiontrX') or 
                                              (. = 'Versionmr')     or (. = 'Version2mr')     or (. = 'VersionmrX') or  
                                              (. = 'Versionbr')     or (. = 'Version2br')     or (. = 'VersionbrX'))))"/>

        <!-- source html deserves further scrutiny -->
        <xsl:variable name="isEditorial"  select="(local-name() = 'class') and contains(., 'editor')"/>

        <!-- TODO source html deserves further scrutiny -->
        <xsl:variable name="isEquation"   select="(local-name() = 'class') and starts-with(., 'equation')"/>
        
        <!-- TODO source html deserves further scrutiny -->
        <xsl:variable name="isLocalStyle" select="(local-name() = 'class') and starts-with(., 'local')"/>
        
        <!-- ensure no upper/mixed case attribute name -->
        <xsl:variable name="attributeName">
            <xsl:choose>
                <xsl:when test="not(local-name() = lower-case(local-name()))">
                    <xsl:message>
                        <xsl:text>!!! element </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> converted to lower case</xsl:text>
                    </xsl:message>
                    <xsl:value-of select="lower-case(local-name())"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="local-name()"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>

        <xsl:choose>
            <xsl:when test="(local-name() = 'class') and (contains(.,'proposed') or contains(.,'approved') or $isEquation or $isLocalStyle)">
                <!-- omit -->
            </xsl:when>
            <xsl:otherwise>
                <xsl:if test="(local-name() = 'class') and (not($allowedClassName) or $isEditorial)">
                    <!-- class style diagnostics -->
                    <xsl:message>
                        <xsl:choose>
                            <xsl:when test="($verbose = 'true') and (../text() = '&#960;')"><!-- pi -->
                                <xsl:text>***</xsl:text>
                                <xsl:text> found </xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text>'</xsl:text>
                                <xsl:if test="(local-name(..) = 'span') and (local-name() = 'class') and (. = 'times')">
                                    <xsl:text> (as in Times Roman font)</xsl:text>
                                    <xsl:text> [</xsl:text>
                                    <xsl:choose>
                                        <xsl:when test="(../text() = '&#960;')"><!-- pi -->
                                            <xsl:text disable-output-escaping="yes">&amp;</xsl:text><xsl:text>pi;</xsl:text><!-- &#960; -->
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:value-of select="normalize-space(../text())" disable-output-escaping="yes"/>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                    <xsl:text>]</xsl:text>
                                </xsl:if>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>!!!</xsl:text>
                                <xsl:text> found </xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text>'</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:choose>
                            <xsl:when test="$isEditorial">
                                <xsl:text> for specification review/resolution </xsl:text>
                                <xsl:if test="(string-length(../@title) > 0)">
                                    <xsl:text>(</xsl:text>
                                    <xsl:value-of select="../@title"/>
                                    <xsl:text>) </xsl:text>
                                </xsl:if>
                                <xsl:text>[</xsl:text>
                                <xsl:variable name="containedText">
                                    <xsl:for-each select="../text() | ../*/text()">
                                        <xsl:value-of select="."/>
                                        <xsl:text> </xsl:text>
                                    </xsl:for-each>
                                </xsl:variable>
                                <xsl:value-of select="normalize-space($containedText)" disable-output-escaping="yes"/>
                                <xsl:text>]</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text> (check X3D.css stylesheet for unrecognized style class, nevertheless included this attribute)</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                        <!-- how to concat text blocks?
                        <xsl:if test="(string-length(normalize-space(concat(../text()))) > 1)">
                            <xsl:text> (</xsl:text>
                            <xsl:value-of select="normalize-space(concat(../text()))"/>
                            <xsl:text>)</xsl:text>
                        </xsl:if> -->
                    </xsl:message>
                </xsl:if>
                <!-- common processing for each attribute -->
                <xsl:text> </xsl:text>
                <xsl:value-of select="$attributeName"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>'</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- additional diagnostics -->
        <xsl:choose>
            <!-- malformed url -->
            <xsl:when test="(((local-name(..) = 'a') and (local-name() = 'href')) or ((local-name(..) = 'a') and (local-name() = 'href'))) and 
                             (not(starts-with(.,'http:..') or starts-with(.,'https:..') or contains(.,'#') or contains(.,'/') or 
                                    ends-with(.,'.html')) or
                              contains(.,'[') or contains(.,']'))">
                <xsl:message>
                    <xsl:text>!!! malformed html url: </xsl:text>
                    <xsl:value-of select="local-name(..)"/>
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="$attributeName"/>
                    <xsl:text>='</xsl:text>
                    <xsl:value-of select="."/>
                    <xsl:text>'</xsl:text>
                </xsl:message>
            </xsl:when>
        </xsl:choose>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()"> <!-- rule to process each comment -->
        
        <xsl:variable name="indent">
            <xsl:for-each select="ancestor::*">
                <xsl:text>  </xsl:text>
            </xsl:for-each>
        </xsl:variable>
    
        <xsl:if test="(string-length(.) > 0)">
            <xsl:text>&#10;</xsl:text>
            <xsl:text disable-output-escaping="yes">&lt;!--</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text disable-output-escaping="yes">--&gt;</xsl:text>
            
            <xsl:text>&#10;</xsl:text>
            <xsl:value-of select="$indent"/>
        </xsl:if>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="text()"> <!-- rule to process text blocks -->
    
        <xsl:if test="(string-length(.) > 0)">
            <xsl:choose>
                <!-- preserve line breaks -->
                <xsl:when test="(local-name(..) = 'pre') or (local-name(..) = 'code') or contains(., '&#10;')">
                    <xsl:value-of select="."/>
                    <!-- debug diagnostic: white space not preserved if output mode is html
                    <xsl:message>
                        <xsl:text>***pre***&#10;</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>**/pre***&#10;</xsl:text>
                    </xsl:message>
                    -->
                </xsl:when>
                <xsl:when test="(local-name(..) = 'span') and (../@class = 'times') and (. = '&#960;')">
                    <xsl:if test="($verbose = 'true')">
                        <xsl:message>
                            <xsl:text>*** reconstructing pi character entity in resulting html output</xsl:text>
                        </xsl:message>
                    </xsl:if>
                    <xsl:text disable-output-escaping="yes">&amp;pi;</xsl:text><!-- &#960; -->
                </xsl:when>
                <xsl:when test="(local-name(..) = 'style') or (local-name(..) = 'script')">
                    <xsl:value-of select="."/>
                </xsl:when>
                <!-- normalize space inside of b, i, a elements -->
                <xsl:when test="(local-name(..) = 'a') or (local-name(..) = 'b') or (local-name(..) = 'i')">
                    <xsl:value-of select="normalize-space(.)"/>
                </xsl:when>
                <xsl:otherwise>
                    <!-- only produce non-whitespace output -->
                    <xsl:value-of select="."/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:if>
        
    </xsl:template>

</xsl:stylesheet>
