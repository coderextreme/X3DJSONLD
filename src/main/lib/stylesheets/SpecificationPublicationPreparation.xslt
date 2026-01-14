<?xml version="1.0" encoding="UTF-8"?>
<!-- https://stackoverflow.com/questions/21523574/replace-special-characters-like-ndash-and-mdash-occuring-in-an-xml-document -->
<!DOCTYPE stylesheet [
    <!ENTITY nbsp  "&#160;">
    <!ENTITY mdash "&#x2014;">
    <!ENTITY ndash "&#x2013;">
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
    
    <xsl:param name="verbose"><xsl:text>false</xsl:text></xsl:param>
    
    <xsl:output method="xml"/> <!-- output methods:  xml html text -->
    
    <!-- https://stackoverflow.com/questions/21523574/replace-special-characters-like-ndash-and-mdash-occuring-in-an-xml-document -->
    <xsl:output use-character-maps="entities"/>
    <xsl:character-map name="entities">
        <xsl:output-character character="&nbsp;"  string="&amp;nbsp;"/>
        <xsl:output-character character="&mdash;" string="&amp;mdash;"/>
        <xsl:output-character character="&ndash;" string="&amp;ndash;"/>
    </xsl:character-map>
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
    
    <!-- only needed for marked-up working drafts, not pristine copies
    -->
        <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE html [ &lt;!ENTITY nbsp "&amp;#160;"&gt; &lt;!ENTITY copy "&amp;#169;"&gt; &lt;!ENTITY mdash "&amp;#x2014;"&gt; ]&gt;</xsl:text><!-- start elements complete -->
        <xsl:comment>TODO remove preceding declaration manually from pristine version</xsl:comment>
        <xsl:text>&#10;</xsl:text>
        <xsl:message>
            <xsl:text>(SpecificationPublicationPreparation.xslt copied extended DOCTYPE)</xsl:text>
        </xsl:message>
  
        <xsl:message>
            <xsl:text>Notation: * means expected conversion, ** means unexpected problem, !!! means work TODO, [prose] shows contained value </xsl:text>
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
            <xsl:when test="($elementName = 'tt')">
                <xsl:message>
                    <xsl:text>*** found archaic teletype element "</xsl:text>
                    <xsl:value-of select="$elementName"/>
                    <xsl:text>" with value "</xsl:text>
                    <xsl:value-of select="."/>
                    <xsl:text>"</xsl:text>
                    <xsl:text>, use element "code" or span class="code" instead</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="(($elementName = 'div') or ($elementName = 'span') or ($elementName = 'p')) and
                            (@class = 'editorsNote') and
                            (contains(.,'Completed:') or contains(.,'completed:') or contains(.,'Complete:') or contains(.,'complete:') or 
                             contains(.,'Related:') or contains(.,'autogenerated from')) and
                             not(contains(.,'TODO'))">
                <!-- omit copying this element -->
                <!-- debug diagnostic -->
                <xsl:message>
                    <xsl:text>!!! Omitting "</xsl:text>
                    <xsl:value-of select="$elementName"/>
                    <xsl:text>" </xsl:text>
                    <xsl:value-of select="@class"/>
                    <xsl:text> prior to final publication</xsl:text>
                    <xsl:text disable-output-escaping="yes">&#10;</xsl:text>
                    <xsl:text>    "</xsl:text>
                    <xsl:value-of select="normalize-space(.)"/>
                    <xsl:text>" </xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="($elementName = 'b') or ($elementName = 'i') or ($elementName = 'em') or ($elementName = 'strong')">
                <!-- debug diagnostic -->
                <xsl:if test="contains(.,'&#10;')">
                    <xsl:message>
                        <xsl:text>*** contained newline in element "</xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text>" with value "</xsl:text>
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
            <xsl:when test="(local-name() = 'table') and (@id = 'ColorCodingLegend')">
                <!-- omit copying this element -->
                <!-- debug diagnostic -->
                <xsl:message>
                    <xsl:text>!!! Omitting support table ColorCodingLegend prior to final publication</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="(($elementName = 'div') or ($elementName = 'span')) and
                            ((@class = 'proposed') or (@class = 'approved'))    and
                            not(($elementName = 'div') and (*[local-name() = 'div']))"><!-- be careful of nested div elements -->
                <!-- omit this div/span element (but keep children) in pristine copy -->
                <xsl:apply-templates select="* | text() | comment()"/>  <!-- recurse on child elements, include contained text -->
                <xsl:text> </xsl:text> <!-- avoid run-on words -->
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
        <!-- potentially malformed i b em strong -->
        <xsl:if test="((local-name() = 'b') or (local-name() = 'i') or (local-name() = 'em') or (local-name() = 'strong')) and 
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
        </xsl:if>
        <xsl:if test="((local-name() = 'b') or (local-name() = 'i') or (local-name() = 'em') or (local-name() = 'strong')) and 
                         (starts-with(.,' ') or starts-with(normalize-space(.),',') or starts-with(normalize-space(.),';') or starts-with(normalize-space(.),':') or starts-with(normalize-space(.),'.') or 
                            ends-with(.,' ') )">
            <!-- or   ends-with(normalize-space(.),',') or   ends-with(normalize-space(.),';') or   ends-with(normalize-space(.),':') or ends-with(normalize-space(.),'.') or    ends-with(normalize-space(.),'-')  -->
            <xsl:if test="not(ends-with(normalize-space(.),'e.g.')) and not(ends-with(normalize-space(.),'ecmascript:')) and 
                          not(ends-with(normalize-space(.),'i.e.')) and not(ends-with(normalize-space(.),'javascript:')) and 
                          not(ends-with(.,'e.g.,'))">
                <xsl:message>
                    <xsl:text>*** element "</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>" starts or ends with embedded whitespace/punctuation: </xsl:text>
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
        </xsl:if>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
    
        <!-- conversions: <a name=""/> to <a id=""/> -->
        
        <xsl:variable name="allowedClassName" select="(local-name() = 'class') and
            ((. = 'auto-style1')   or (. = 'cube')              or (. = 'CenterDiv')   or (. = 'HeadingPart') or (. = 'HeadingClause') or 
             (. = 'code')          or (. = 'deprecated')        or (. = 'equation')    or (. = 'editorsNote') or (. = 'editorialChange') or
             (. = 'note')          or (. = 'terms')             or (. = 'TermRef')    or (. = 'approved')    or (. = 'approvedDeletion') or
             (. = 'example')       or (. = 'IndexEntry')        or (. = 'Params') or
             (. = 'Example')       or (. = 'ExampleCode')       or 
             (. = 'services')      or (. = 'terms')             or (. = 'TermRef')    or (. = 'x3dbar') or (. = 'x3dlogo') or
             (. = 'RunningHeader') or (. = 'RunningHeaderLeft') or (. = 'RunningHeaderCenter') or (. = 'RunningHeaderRight') or 
             (. = 'Version')       or (. = 'topics')            or (. = 'nodes')              or (. = 'node1')            or

             ((local-name(..) = 'p')     and ((. = 'Footnote')      or 
                                              (. = 'AnnexType')     or (. = 'AnnexHeadingBottom') or 
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

        <!-- document modifications -->
        <xsl:choose>
            <xsl:when test="(local-name() = 'title') and (starts-with(.,'Mantis')    or starts-with(.,'mantis') or 
                                                          starts-with(.,'Editorial') or starts-with(.,'editorial'))">
                <!-- omit -->
            </xsl:when>
            <xsl:when test="(local-name() = 'class') and (contains(.,'proposed') or contains(.,'approved') or $isEquation or $isLocalStyle)">
                <!-- omit -->
                <xsl:text> </xsl:text> <!-- avoid run-on words -->
            </xsl:when>
            <xsl:otherwise>
                <xsl:if test="(local-name() = 'class') and not($allowedClassName)"> <!--  or $isEditorial) -->
                    <!-- class style diagnostics -->
                    <xsl:message>
                        <xsl:choose>
                            <xsl:when test="($verbose = 'true') and (../text() = '&#960;')"><!-- pi -->
                                <xsl:text>***</xsl:text>
                                <xsl:text> found element "</xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text>" with attribute </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
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
                                <xsl:text> found element "</xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text>" with attribute </xsl:text>
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
                                    <xsl:text>)</xsl:text>
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:text>    </xsl:text>
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
            <xsl:when test="(((local-name(..) = 'a') and (local-name() = 'href'))) and 
                             (not(starts-with(.,'http://') or starts-with(.,'https://') or starts-with(.,'mailto:') or contains(.,'#') or
                                  ends-with(.,'.html') or ends-with(.,'.xml') or ends-with(.,'.dtd') or ends-with(.,'.xsd') or ends-with(.,'.sch') or
                                  contains(.,'/') or contains(.,'[') or contains(.,']')))">
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
