<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3dToPython.xslt
    created     : 21 July 2019
    creator     : Don Brutzman
    description : Export stylesheet to convert X3D XML models into Python source
    reference   : X3dPython.html
    reference   : https://www.w3.org/TR/xslt
    identifier  : https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
    license     : license.html
-->

<xsl:stylesheet version="2.0" exclude-result-prefixes="ds saxon"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#"
				xmlns:saxon="http://saxon.sf.net/"><!-- http://www.saxonica.com/documentation9.5/extensions/attributes -->
    
    <!-- "pythonic" configuration: whether or not to insertPackagePrefix, i.e. x3d.X3D, x3d.head, x3d.Scene, x3d.Group etc. -->
    <!-- terse seems better for most programming tasks, certainly clearer for debugging too -->
    <xsl:param name="insertPackagePrefix"><xsl:text>false</xsl:text></xsl:param>
        
    <xsl:variable name="x3dVersion" select="normalize-space(//X3D/@version)"/>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersion,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersion,'4')"/>
    
    <xsl:output method="text"/> <!-- output methods:  xml html text -->
    <!--  extension-element-prefixes="xs" -->
    <xsl:strip-space elements="*"/><!-- omit whitespace-only text() nodes -->
    
    <xsl:variable name="packagePrefix">
        <xsl:choose>
            <xsl:when test="($insertPackagePrefix = 'true')">
                <xsl:text>x3d.</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text></xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    
    <xsl:variable name="modelFileName">
        <xsl:choose>
            <xsl:when test="(string-length(//meta[@name = 'title']/@content) > 0)">
                <xsl:value-of select="concat(substring-before(//meta[@name = 'title']/@content,'.'),'.py')"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text></xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
    
    <!--
#   https://twitter.com/Web3DConsortium/status/1154449868846297088 -->
        
        <xsl:text>####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################
</xsl:text>

        <xsl:choose>
            <xsl:when test="($insertPackagePrefix = 'true')">
                <!-- default -->
                <xsl:text>
import x3d
</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>
from x3d import *
</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <!-- wave offs, avoid unnecessary error reports in regression-testing logs -->
        <xsl:choose>
            <xsl:when test="//*[starts-with(local-name(),'Xvl')]">
            <xsl:text>
print('*** Lattice Xvl nodes were an experimental extensibility effort in 2002 and are not supported in ISO-standard X3D. Exiting.')
import sys
sys.exit()
####################################################################################################
</xsl:text>
            </xsl:when>
            <xsl:when test="(//meta[@name='title']/@content='ProtoTagDtdDeclarationExamples.x3d') or
                            (//meta[@name='title']/@content='QuadTreeExamples.x3d') or
                            (//meta[@name='title']/@content='SpinGroupInternalSubsetDeclaration.x3d') or
                            (//meta[@name='title']/@content='CADPartChildTransformationAlternativeB.x3d') or
                            (//meta[@name='title']/@content='TestSchematronDiagnostics.x3d') or
                            (//meta[@name='title']/@content='X3dRetreatProtoExercise.x3d')">
            <xsl:text>
print('*** </xsl:text><xsl:value-of select="//meta[@name='title']/@content"/><xsl:text> is an experimental X3D model and not intended to run. Exiting.')
import sys
sys.exit()
####################################################################################################
</xsl:text>
            </xsl:when>
        </xsl:choose>
        
        <!-- process elements and comments -->
        <xsl:apply-templates select="* | comment()"/>
        
        <!-- this block follows model creation since parsing and loading must be completed before running metaDiagnostics(newModel) -->
        <xsl:text>
####################################################################################################
# Self-test diagnostics
####################################################################################################
</xsl:text>
        <xsl:text>
print('Self-test diagnostics</xsl:text>
        <xsl:if test="(string-length($modelFileName) > 0)">
            <xsl:text> for </xsl:text>
            <xsl:value-of select="$modelFileName"/>
        </xsl:if>
        <xsl:text>:')</xsl:text>
        <xsl:choose>
            <xsl:when test="($insertPackagePrefix = 'true')">
                <xsl:text>
if        x3d.metaDiagnostics(newModel): # built-in utility method in X3D class to show
    print(x3d.metaDiagnostics(newModel)) # ('info', 'hint', 'warning', 'error', 'TODO')
</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:text>
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export</xsl:text>
   <!--<xsl:text>
debug ============
print(prependLineNumbers(newModelVRML))
x3dfile = open("</xsl:text>
<xsl:value-of select="substring-before($modelFileName,'.')"/>
<xsl:text>PythonToX3d.x3d","wt")
x3dfile.write(newModelXML)
x3dfile.close()
==================
        </xsl:text>-->
        <xsl:text>
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug</xsl:text>
   <!--<xsl:text>
# debug ============
#   print(prependLineNumbers(newModelVRML)) # debug
#   vrmlfile = open("</xsl:text>
#     <xsl:value-of select="substring-before($modelFileName,'.')"/>
#     <xsl:text>PythonToJSON.wrl","wt")
#   vrmlfile.write(newModelVRML)
#   vrmlfile.close()
# ==================
        </xsl:text>-->
        <xsl:text>
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug</xsl:text>
   <!--<xsl:text>
# debug ============
#   print(prependLineNumbers(newModelJSON)) # debug
#   jsonfile = open("</xsl:text>
#     <xsl:value-of select="substring-before($modelFileName,'.')"/>
#     <xsl:text>PythonToJSON.json","wt")
#   jsonfile.write(newModelJSON)
#   jsonfile.close()
# ==================
        </xsl:text>-->
        <xsl:text>
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python</xsl:text>
        <xsl:if test="(string-length($modelFileName) > 0)">
            <xsl:text> </xsl:text>
            <xsl:value-of select="$modelFileName"/>
        </xsl:if>
        <xsl:text> load and self-test diagnostics complete.")
</xsl:text>
<!--
TODO print meta warnings, errors etc. as part of validation
TODO Script and other CDATA blocks

print ('type(newModel)        =', type(newModel))
print ('</xsl:text><xsl:value-of select="$packagePrefix"/><xsl:text>X3D.__name__      =', </xsl:text><xsl:value-of select="$packagePrefix"/><xsl:text>X3D.__name__)
print ('</xsl:text><xsl:value-of select="$packagePrefix"/><xsl:text>head.__name__     =', </xsl:text><xsl:value-of select="$packagePrefix"/><xsl:text>head.__name__)
print ('</xsl:text><xsl:value-of select="$packagePrefix"/><xsl:text>Scene.__name__    =', </xsl:text><xsl:value-of select="$packagePrefix"/><xsl:text>Scene.__name__)
print ('newModel.head =', newModel.head )
print ('newModel.Scene=', newModel.Scene)

verbose alternates:
print ('str(newModel.head)    =', str(newModel.head))
print ('str(newModel.Scene)   =', str(newModel.Scene))
-->
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each element -->
    
        <xsl:variable name="indent">
            <xsl:text>&#10;</xsl:text>
            <!-- indent -->
            <xsl:for-each select="ancestor::*">
                <xsl:text>  </xsl:text>
            </xsl:for-each>
        </xsl:variable>
        <xsl:value-of select="$indent"/>
        
        <xsl:variable name="containerField">
            <xsl:choose>
                <xsl:when test="(local-name() = 'X3D') or (local-name() = 'meta')">
                    <xsl:text></xsl:text><!-- none, n/a -->
                </xsl:when>
                <xsl:when test="(local-name() = 'head')">
                    <xsl:text>head</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name() = 'Scene')">
                    <xsl:text>Scene</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()   = 'ROUTE')        or (local-name()   = 'IMPORT') or (local-name()   = 'EXPORT')     or
                                (local-name(..) = 'Scene')        or (local-name(..) = 'ProtoBody')  or 
                                (local-name(..) = 'field')        or (local-name(..) = 'fieldValue') or
                                (local-name()   = 'component')    or (local-name()   = 'unit')    or
                                (local-name()   = 'ProtoDeclare') or (local-name()   = 'ExternProtoDeclare')">
                    <xsl:text>children</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name() = 'ProtoInterface') or (local-name() = 'ProtoBody')  or
                                (local-name() = 'field')          or (local-name() = 'fieldValue') or
                                (local-name() = 'IS')             or (local-name() = 'connect')">
                    <xsl:value-of select="local-name()"/>
                </xsl:when>
                <!-- X3D Scene Authoring Hints, X3D4 Field name changes planned for improved consistency https://x3d-code/www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#fieldNameChanges -->
                <xsl:when test="(local-name(..) = 'LoadSensor')">
                    <xsl:text>children</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name(..) = 'ComposedCubeMapTexture') and not(ends-with(@containerField,'Texture'))">
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>Texture</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name(..) = 'ParticleSystem') and ends-with(@containerField,'Ramp')">
                    <xsl:value-of select="substring-before(@containerField,'Ramp')"/>
                </xsl:when>
                <xsl:when test="(local-name() = 'ProtoInstance')">
                    <xsl:value-of select="@containerField"/>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'Damper') or contains(local-name(), 'Interpolator') or (local-name() = 'CADFace')">
                    <xsl:text>children</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name() = 'Appearance')">
                    <xsl:text>appearance</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'FillProperties')">
                    <xsl:text>fillProperties</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'LineProperties')">
                    <xsl:text>lineProperties</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'TextureCoordinate')">
                    <xsl:text>texCoord</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'TextureTransform')">
                    <xsl:text>textureTransform</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'Color') and not(contains(local-name(), 'Interpolator')) and not(contains(local-name(), 'Chaser')) and not(contains(local-name(), 'Damper'))">
                    <xsl:text>color</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'Line') or contains(local-name(), 'Face') or contains(local-name(), 'Triangle') or
                                (local-name() = 'Extrusion') or (local-name() = 'ElevationGrid')">
                    <xsl:text>geometry</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'Material')">
                    <xsl:text>material</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'Normal')">
                    <xsl:text>normal</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(), 'Texture')">
                    <!-- TextureBackground may contain multiple ImageTexture nodes, each with different containerField -->
                    <xsl:value-of select="@containerField"/>
                </xsl:when>
                <xsl:when test="((local-name() = 'AudioClip') or (local-name() = 'MovieTexture')) and
                                ((local-name(..) = 'Analyser') or (local-name(..) = 'AudioDestination') or (local-name(..) = 'BiquadFilter') or (local-name(..) = 'BufferAudioSource') or (local-name(..) = 'ChannelMerger') or (local-name(..) = 'ChannelSelector') or (local-name(..) = 'ChannelSplitter') or (local-name(..) = 'Convolver') or (local-name(..) = 'Delay') or (local-name(..) = 'DynamicsCompressor') or (local-name(..) = 'Gain') or (local-name(..) = 'ListenerPointSource') or (local-name(..) = 'MicrophoneSource') or (local-name(..) = 'OscillatorSource') or (local-name(..) = 'SpatialSound') or (local-name(..) = 'StreamAudioDestination') or (local-name(..) = 'StreamAudioSource') or (local-name(..) = 'WaveShaper'))">
                    <xsl:text>children</xsl:text>
                    <xsl:if test="(@containerField = 'source') or (string-length(@containerField) = 0)">
                        <xsl:message>
                            <xsl:text>*** containerField incorrect for </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> with parent </xsl:text>
                            <xsl:value-of select="local-name(..)"/>
                            <xsl:text>, reset to children</xsl:text>
                        </xsl:message>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="$isX3D4 and starts-with(local-name(),'Metadata') and not(@containerField = 'metadata') and
                                 not((local-name(..)='MetadataSet') or (local-name(..)='field') or (local-name(..)='fieldValue'))">
                    <xsl:text>metadata</xsl:text>
                    <xsl:message>
                        <xsl:text>*** error in X3D4 model, overriding </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:if test="(string-length(@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@USE) > 0)">
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> having containerField='</xsl:text>
                        <xsl:value-of select="@containerField"/> 
                        <xsl:text>' with corrected containerField='metadata' since </xsl:text>
                        <xsl:text> parent node is </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:if test="(string-length(../@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="../@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> ... please fix original X3D model</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..) = 'DISEntityManager') and (local-name() = 'DISEntityTypeMapping')">
                    <xsl:text>children</xsl:text>
                    <xsl:if test="not(@containerField = 'children') or (string-length(@containerField) = 0)">
                        <xsl:message>
                            <xsl:text>*** containerField for </xsl:text>
                            <xsl:value-of select="local-name(..)"/>
                            <xsl:text> child </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> changed from 'mapping' to 'children' in X3D4</xsl:text>
                        </xsl:message>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="(string-length(@containerField) > 0)">
                    <xsl:value-of select="@containerField"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:message>
                        <xsl:text>*** containerField not determined for </xsl:text>
                        <xsl:value-of select="local-name()"/> 
                        <xsl:text>, using 'children'</xsl:text>
                   </xsl:message>
                    <xsl:text>children</xsl:text><!-- X3D statements and comments -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>

        <xsl:variable name="attributesList">
            <xsl:apply-templates select="@*[local-name() != 'containerField'][local-name() != 'noNamespaceSchemaLocation']"/> <!-- process attributes for this element -->
        </xsl:variable>
        <xsl:variable name="hasChild"        select="(count(*) + count(comment()) > 0)"/>
        <xsl:variable name="hasAttributes"   select="(string-length($attributesList) > 0)"/>
        <xsl:variable name="isNode"          select="(string-length(@containerField) > 0)"/>
        <xsl:variable name="isStatement"     select="not($isNode)"/> <!-- comments are handled by a different template -->
        <xsl:variable name="isInMFNodeList"  select="($containerField = 'children')        or
                                                     ($containerField = 'bodies')          or
                                                     ($containerField = 'collidables')     or
                                                     ($containerField = 'displacers')      or
                                                     ($containerField = 'joints')          or
                                                     ($containerField = 'motions')         or
                                                     ($containerField = 'renderStyle')     or
                                                     ($containerField = 'segments')        or
                                                     ($containerField = 'sites')           or
                                                     ($containerField = 'skeleton')        or
                                                     ($containerField = 'skin')            or
                                                     ($containerField = 'viewpoints')      or
                                                     ($containerField = 'trimmingContour') or
                                                     ($containerField = 'watchList')       or
                                                     ((local-name(..) = 'DISEntityManager')       and (($containerField = 'mapping') or ($containerField = 'children'))) or
                                                     ((local-name(..) = 'GeoLOD')                 and ($containerField = 'rootNode'))         or
                                                     ((local-name(..) = 'MultiTexture')           and ($containerField = 'texture'))          or
                                                     ((local-name(..) = 'MultiTextureCoordinate') and ($containerField = 'texCoord'))         or
                                                     ((local-name(..) = 'MultiTextureTransform')  and ($containerField = 'textureTransform')) or
                                                     ((local-name(..) = 'NurbsSet')               and ($containerField = 'geometry'))         or
                                                     ((local-name(..)  = 'MetadataSet') and not(local-name() = 'IS') and not($containerField = 'metadata'))  or
                                                     (local-name(..)  = 'field')           or
                                                     (local-name(..)  = 'fieldValue')      or
                                                     (local-name()    = 'field')           or
                                                     (local-name()    = 'fieldValue')      or
                                                     (local-name()    = 'connect')"/>
        <!-- sibling field nodes have same containerField name. ignore IS which must be first element and never has a sibling. -->
        <!-- note that all nodes with ProtoBody parent have $containerField children -->
        <xsl:variable name="isFirstSibling"  select="($isNode and not($containerField = 'children') and
                                                      (count(preceding-sibling::*[@containerField = $containerField]) = 0)) or
                                                     (($containerField = 'children') and
                                                      (count(preceding-sibling::*[@containerField = $containerField]) +
                                                       count(preceding-sibling::*[@containerField = 'mapping']) +
                                                       count(preceding-sibling::*[(local-name(..) = 'field') or (local-name(..) = 'fieldValue') or (local-name(..) = 'ProtoBody') or (local-name(..) = 'Scene')]) +
                                                       count(preceding-sibling::*[string-length(@containerField) = 0][local-name() != 'IS']) = 0)) or
                                                     ((local-name() = 'field') and
                                                      (count(preceding-sibling::field) = 0)) or
                                                     ((local-name() = 'fieldValue') and
                                                      (count(preceding-sibling::fieldValue) = 0)) or
                                                     ((local-name() = 'connect') and
                                                      (count(preceding-sibling::connect) = 0)) or
                                                     ((local-name(..) = 'field') and
                                                      (count(preceding-sibling::*) = 0)) or
                                                     ((local-name(..) = 'fieldValue') and
                                                      (count(preceding-sibling::*) = 0))"/>
        <xsl:variable name="isLastSibling"   select="($isNode and not($containerField = 'children') and
                                                      (count(following-sibling::*[@containerField = $containerField]) = 0)) or
                                                     (($containerField = 'children') and
                                                      (count(following-sibling::*[@containerField = 'children']) +
                                                       count(following-sibling::*[@containerField = 'mapping']) +
                                                       count(following-sibling::*[(local-name(..) = 'field') or (local-name(..) = 'fieldValue') or (local-name(..) = 'ProtoBody') or (local-name(..) = 'Scene')]) +
                                                       count(following-sibling::*[string-length(@containerField) = 0][local-name() != 'IS']) = 0)) or
                                                     ((local-name() = 'field') and
                                                      (count(following-sibling::field) = 0)) or
                                                     ((local-name() = 'fieldValue') and
                                                      (count(following-sibling::fieldValue) = 0)) or
                                                     ((local-name() = 'connect') and
                                                      (count(following-sibling::connect) = 0)) or
                                                     ((local-name(..) = 'field') and
                                                      (count(following-sibling::*) = 0)) or
                                                     ((local-name(..) = 'fieldValue') and
                                                      (count(following-sibling::*) = 0))"/>
        <xsl:variable name="hasSiblingField" select="($isNode and not($containerField = 'children') and
                                                      (count(preceding-sibling::*[@containerField = $containerField]) +
                                                       count(following-sibling::*[@containerField = $containerField]) > 0)) or
                                                     (($containerField = 'children') and
                                                      (count(preceding-sibling::*[@containerField = 'children']) +
                                                       count(following-sibling::*[@containerField = 'children']) +
                                                       count(preceding-sibling::*[@containerField = 'mapping']) +
                                                       count(following-sibling::*[@containerField = 'mapping']) +
                                                       count(preceding-sibling::*[(local-name(..) = 'field') or (local-name(..) = 'fieldValue') or (local-name(..) = 'ProtoBody')] or (local-name(..) = 'Scene')) +
                                                       count(following-sibling::*[(local-name(..) = 'field') or (local-name(..) = 'fieldValue') or (local-name(..) = 'ProtoBody')] or (local-name(..) = 'Scene')) +
                                                       count(preceding-sibling::*[string-length(@containerField) = 0][local-name() != 'IS']) +
                                                       count(following-sibling::*[string-length(@containerField) = 0]) + 
                                                       count(preceding-sibling::comment()) + 
                                                       count(following-sibling::comment()) > 0)) or
                                                     ((local-name() = 'field') and
                                                      (count(preceding-sibling::field) +
                                                       count(following-sibling::field) > 0)) or
                                                     ((local-name() = 'fieldValue') and
                                                      (count(preceding-sibling::fieldValue) +
                                                       count(following-sibling::fieldValue) > 0)) or
                                                     ((local-name() = 'connect') and
                                                      (count(preceding-sibling::connect) +
                                                       count(following-sibling::connect) > 0)) or
                                                     ((local-name(..) = 'field') and
                                                      (count(preceding-sibling::*) +
                                                       count(following-sibling::*) > 0)) or
                                                     ((local-name(..) = 'fieldValue') and
                                                      (count(preceding-sibling::*) +
                                                       count(following-sibling::*) > 0))"/>
        <xsl:variable name="hasFollowingElement" select="(count(following-sibling::*) > 0)"/><!-- ignore comments -->
        <!-- debug properties
        <xsl:if test="(local-name(..) = 'GeoLOD')">
            <xsl:message>
                <xsl:value-of select="local-name()"/>
                <xsl:text> </xsl:text>
                <xsl:if test="(string-length(@DEF) > 0)">
                    <xsl:text>DEF='</xsl:text>
                    <xsl:value-of select="@DEF"/>
                    <xsl:text>' </xsl:text>
                </xsl:if>
                <xsl:if test="(string-length(@USE) > 0)">
                    <xsl:text>USE='</xsl:text>
                    <xsl:value-of select="@USE"/>
                    <xsl:text>' </xsl:text>
                </xsl:if>
                <xsl:if test="(string-length(@name) > 0)">
                    <xsl:text>name='</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text>' </xsl:text>
                </xsl:if>
                <xsl:text>$attributesList=[</xsl:text>
                <xsl:value-of select="$attributesList"/>
                <xsl:text>]</xsl:text>
                <xsl:text>, $containerField='</xsl:text>
                <xsl:value-of select="$containerField"/>
                <xsl:text>', $isNode='</xsl:text>
                <xsl:value-of select="$isNode"/>
                <xsl:text>', $isStatement='</xsl:text>
                <xsl:value-of select="$isStatement"/>
                <xsl:text>', $hasAttributes='</xsl:text>
                <xsl:value-of select="$hasAttributes"/>
                <xsl:text>', $hasChild='</xsl:text>
                <xsl:value-of select="$hasChild"/>
                <xsl:text>', $isFirstSibling='</xsl:text>
                <xsl:value-of select="$isFirstSibling"/>
                <xsl:text>', $isLastSibling='</xsl:text>
                <xsl:value-of select="$isLastSibling"/>
                <xsl:text>', $hasSiblingField='</xsl:text>
                <xsl:value-of select="$hasSiblingField"/>
                <xsl:text>', $hasFollowingElement='</xsl:text>
                <xsl:value-of select="$hasFollowingElement"/>
                <xsl:text>', $isInMFNodeList='</xsl:text>
                <xsl:value-of select="$isInMFNodeList"/>
                <xsl:text>'</xsl:text>
            </xsl:message>
        </xsl:if>
        -->
        
        <!-- check some special cases that are unambiguously fixable -->
        <xsl:variable name="expectedContainerField">
            <xsl:choose>
                <xsl:when test="(local-name(..) = 'GeoLOD') and not(local-name() = 'GeoOrigin') and not(starts-with(local-name(), 'Metadata'))">
                    <xsl:text>rootNode</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name(..) = 'HAnimHumanoid') and (local-name() = 'HAnimSegment')">
                    <xsl:text>segments</xsl:text>
                </xsl:when>
                <!-- HAnimHumanoid can contain HAnimJoint with containerField = joints or skeleton -->
                <!-- HAnimHumanoid can contain HAnimSite  with containerField = sites, skeleton or viewpoints -->
                <!-- HAnimHumanoid can contain X3DCoordinateNode with containerField = skinCoord or skinBindingCoords -->
                <!-- HAnimHumanoid can contain X3DNormalNode with containerField = skinNormal or skinBindingNormals -->
            </xsl:choose>
        </xsl:variable>
        <xsl:if test="(string-length($expectedContainerField) > 0) and not($containerField = $expectedContainerField)">
            <xsl:message>
                <xsl:text>... containerField mismatch for </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:if test="(string-length(@DEF) > 0) or not(string-length(@USE) > 0)">
                <xsl:text> DEF='</xsl:text>
                <xsl:value-of select="@DEF"/>
                <xsl:text>'</xsl:text>
                </xsl:if>
                <xsl:if test="(string-length(@USE) > 0)">
                    <xsl:text> USE='</xsl:text>
                    <xsl:value-of select="@USE"/>
                    <xsl:text>'</xsl:text>
                </xsl:if>
                <xsl:if test="(string-length(@name) > 0)">
                    <xsl:text> name='</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text>'</xsl:text>
                </xsl:if>
                <xsl:text> found containerField='</xsl:text>
                <xsl:value-of select="$containerField"/>
                <xsl:text>' but expected containerField='</xsl:text>
                <xsl:value-of select="$expectedContainerField"/>
                <xsl:text>'</xsl:text>
            </xsl:message>
        </xsl:if>

        <xsl:choose>
            <xsl:when test="(local-name() = 'X3D')">
                <xsl:text>newModel</xsl:text><!-- unofficial name, whatever works, reused later -->
                <xsl:text>=</xsl:text>
            </xsl:when>
            <xsl:when test="($isFirstSibling or not($hasSiblingField)) and not(local-name() = 'X3D') and not(local-name(..) = 'head')">  
                <!-- python field assignment by name -->
                <xsl:value-of select="$containerField"/>
                <xsl:text>=</xsl:text>
                <xsl:choose>
                    <xsl:when test="$isInMFNodeList"><!-- MFNode -->
                        <xsl:text>[</xsl:text>
                        <xsl:value-of select="$indent"/>
                    </xsl:when>
                </xsl:choose>
            </xsl:when>
        </xsl:choose>
        
        <!-- common initial processing for each element -->
        <xsl:choose>
            <xsl:when test="(local-name() = 'X3D')">
                <xsl:value-of select="$packagePrefix"/><!-- usually empty -->
                <xsl:value-of select="local-name()"/>
                <xsl:text>(</xsl:text>
            </xsl:when>
            <xsl:when test="((local-name() = 'head') or (local-name() = 'Scene')) and (count(*) > 0)">
                <xsl:value-of select="$packagePrefix"/><!-- usually empty -->
                <xsl:value-of select="local-name()"/>
                <xsl:text>(</xsl:text>
                <xsl:if test="(local-name() = 'head')">
                    <xsl:value-of select="$indent"/><xsl:text>  </xsl:text>
                    <xsl:text>children=[</xsl:text>
                </xsl:if>
            </xsl:when>
            <xsl:when test="(local-name() = 'meta') or (local-name() = 'component') or (local-name() = 'unit')">
                <xsl:value-of select="$packagePrefix"/><!-- usually empty -->
                <xsl:value-of select="local-name()"/>
                <xsl:text>(</xsl:text>
            </xsl:when>
            <xsl:when test="(local-name(..) = 'Scene')">
                <xsl:value-of select="$packagePrefix"/><!-- usually empty -->
                <xsl:value-of select="local-name()"/>
                <xsl:text>(</xsl:text>
            </xsl:when>
            <!-- 
            <xsl:when test="(string-length(@containerField) > 0)">
                <xsl:value-of select="@containerField"/>
                <xsl:text>=</xsl:text>
                <xsl:text>(</xsl:text>
            </xsl:when>
            -->
            <!-- statements don't have containerField, so field name is eponymous -->
            <xsl:otherwise>
                <xsl:value-of select="$packagePrefix"/><!-- usually empty -->
                <xsl:value-of select="local-name()"/>
                <xsl:text>(</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <!-- output attributes -->
        <xsl:choose>
            <xsl:when test="ends-with($attributesList,',')">
                <xsl:value-of select="substring($attributesList,0,string-length($attributesList))"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$attributesList"/>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:if test="$hasAttributes and $hasChild">
            <xsl:text>,</xsl:text> <!-- these attributes(if any) are followed by additional node(s) -->
        </xsl:if>
        <xsl:choose>
            <xsl:when test="(local-name() = 'HAnimHumanoid')">
                <xsl:apply-templates select="* | comment()">
                    <xsl:sort select="not(@containerField = 'viewpoints') and not(@containerField = 'sites') and not(@containerField = 'skeleton') and not(@containerField = 'metadata')" order="ascending"/>
                    <xsl:sort select="(@containerField = 'viewpoints')"/>
                    <xsl:sort select="(@containerField = 'sites')"/>
                    <xsl:sort select="(@containerField = 'skeleton')"/>
                    <xsl:sort select="(@containerField = 'metadata')"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="$hasChild">
                <!-- sort SFNode/MFNode fields together, keep statements and comments with children -->
                <!-- process non-children X3D nodes for this element -->
                <xsl:apply-templates select="* | comment()">
                    <!-- <xsl:sort select="@containerField" order="ascending"/> avoid sorting, some nodes have empty containerField -->
                </xsl:apply-templates>
                <xsl:variable name="containedSourceText">
                    <xsl:value-of select="(string-join(child::text(),' '))" disable-output-escaping="yes"/>
                </xsl:variable>       
                <xsl:variable name="hasCDATA">
                    <xsl:value-of select="(string-length(normalize-space($containedSourceText)) > 1)" disable-output-escaping="yes"/>
                </xsl:variable>       
                <xsl:if test="((local-name() = 'Script') or (local-name() = 'ShaderProgram') or (local-name() = 'ShaderPart')) and $hasCDATA">
                    <xsl:text>,</xsl:text> 
                    <xsl:text>&#10;</xsl:text>
                    <xsl:value-of select="$indent"/>
                    <xsl:text>sourceCode="""</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:if test="not(starts-with(normalize-space($containedSourceText),'ecmascript:'))">
                        <xsl:text>ecmascript:</xsl:text><!-- necessary to avoid validation error -->
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <xsl:call-template name="trim-whitespace-recurse">
                      <xsl:with-param name="inputValue" select='$containedSourceText'/>
                    </xsl:call-template>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>"""</xsl:text>
                </xsl:if>
                
                <!-- alternative attempt: sorting alike fields together, which can reorder scene graph and lead to other problems>
                <xsl:apply-templates select="*[not(@containerField = 'children') and (string-length(@containerField) > 0)]">  
                    <xsl:sort select="@containerField" order="ascending"/>
                </xsl:apply-templates>
                process child elements (X3D nodes, statements) and comments for this element
                <xsl:apply-templates select="*[(@containerField = 'children') or (string-length(@containerField) = 0)] | comment()"/> -->
                
                <!-- debug
                <xsl:message>
                    <xsl:text>... returning:</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> </xsl:text>
                </xsl:message> -->
            </xsl:when>
            <xsl:otherwise>
                <xsl:apply-templates select="* | comment()">  <!-- process child elements (X3D nodes, statements) and comments for this element -->
                    <!-- <xsl:sort select="@containerField" order="ascending"/> avoid sorting, some nodes have empty containerField -->
                </xsl:apply-templates>
            </xsl:otherwise>
        </xsl:choose>
        
        
        <!-- TODO better test based on SFNode/MFNode
        <xsl:if test="(count(*) > 1)">
            <xsl:text>[</xsl:text>
        </xsl:if> -->
        
        <!-- TODO better test based on SFNode/MFNode
        <xsl:if test="(count(*) > 1)">
            <xsl:text>]</xsl:text>
        </xsl:if> -->
        
        <!-- common final processing for each element -->
        <xsl:choose>
            <xsl:when test="(local-name() = 'X3D')">
                <!-- end of model -->
                <xsl:text>&#10;</xsl:text>
                <xsl:text>)</xsl:text>
                <xsl:text> # X3D model complete</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:when>
            <xsl:when test="((local-name() = 'head') or (local-name() = 'Scene')) and (count(*) > 0)">
                <xsl:if test="(local-name() = 'head')">
                <!--<xsl:value-of select="$indent"/><xsl:text>  </xsl:text>-->
                    <xsl:text>]</xsl:text>
                </xsl:if>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test="(local-name() = 'meta') or (local-name() = 'component') or (local-name() = 'unit')">
                <!-- part of a head list -->
                <xsl:text>)</xsl:text>
            </xsl:when>
            <!--
            <xsl:when test="(string-length(@containerField) > 0)">
                <xsl:text>)</xsl:text>
            </xsl:when>
            -->
            <xsl:otherwise>
                <!-- statements don't have containerField, so field name is eponymous -->
                <xsl:text>)</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
            
        <!-- TODO fix: selectively append commas, avoid last entry, only needed if attributes present -->
        <xsl:choose>
            <xsl:when test="$isNode and not($hasSiblingField) and (position() != last())">
                <xsl:text>,</xsl:text> <!-- AA Empty element -->
            </xsl:when>
            <xsl:when test="not($hasAttributes) and not($hasChild)">
                <xsl:text>,</xsl:text> <!-- BB empty element -->
            </xsl:when>
            <xsl:when test="((position() = last()) and ($hasChild)) or $isLastSibling">
                <xsl:text></xsl:text> <!-- CC this element is followed by additional node(s) -->
            </xsl:when>
            <xsl:when test="(position() = last()) and ($hasAttributes) and not($hasChild)">
                <xsl:text></xsl:text> <!-- DD last element is followed by additional node(s) -->
            </xsl:when>
            <xsl:when test="($hasAttributes) and not($hasChild)">
                <xsl:text>,</xsl:text> <!-- EE this element is followed by additional node(s) -->
            </xsl:when>
            <xsl:when test="not(local-name() = 'X3D') and (position() != last()) and $hasAttributes">
                <xsl:text>,</xsl:text> <!-- FF this element is followed by additional attribute(s) -->
            </xsl:when>
            <xsl:when test="not(local-name() = 'X3D') and (position() != last())">
                <xsl:text>,</xsl:text> <!-- GG this element is followed by additional node(s) -->
            </xsl:when>
        </xsl:choose>
        <!-- debug diagnostic
        <xsl:if test="(local-name() = 'HAnimSite') and (@containerField = 'viewpoints')">
            <xsl:message>
                <xsl:text>*** </xsl:text>
                    <xsl:text>local-name(..)='</xsl:text>
                    <xsl:value-of select="local-name(..)"/>
                    <xsl:text>', local-name()='</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>', @name='</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text>', @USE='</xsl:text>
                    <xsl:value-of select="@USE"/>
                    <xsl:text>', @containerField='</xsl:text>
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>', $isLastSibling='</xsl:text>
                    <xsl:value-of select="$isLastSibling"/>
                    <xsl:text>', $hasSiblingField='</xsl:text>
                    <xsl:value-of select="$hasSiblingField"/>
                    <xsl:text>', $isInMFNodeList='</xsl:text>
                    <xsl:value-of select="$isInMFNodeList"/>
                    <xsl:text>'</xsl:text>
            </xsl:message>
        </xsl:if> -->
        <xsl:if test="not(local-name() = 'X3D') and not(local-name(..) = 'head')">
            <xsl:choose>
                <!--<xsl:value-of select="$indent"/>
                <xsl:when test="not($hasFollowingElement) and ($containerField = 'children')">
                    <xsl:text>]</xsl:text>
                </xsl:when>--> 
                <xsl:when test="($isLastSibling or not($hasSiblingField)) and $isInMFNodeList"><!-- MFNode -->
                    <xsl:text>]</xsl:text>
                    <xsl:if test="$hasFollowingElement or (local-name(..) = 'HAnimHumanoid')"> <!-- HH this element is last in a children [array] -->
                        <xsl:text>,</xsl:text>
                    </xsl:if>
                </xsl:when>
            </xsl:choose>
        </xsl:if>

    </xsl:template>

    <xsl:template name="fieldNameNormalizedPython">
        <xsl:param name="name"></xsl:param>
        
        <!-- some X3D field names collide with Python reserved words, append _ character -->
        <!-- "single_trailing_underscore_: used by convention to avoid conflicts with Python keyword" -->
        <!-- PEP 8 - Style Guide for Python Code, Descriptive: Naming Styles -->
        <!-- https://www.python.org/dev/peps/pep-0008/#descriptive-naming-styles -->
        <xsl:choose>
            <xsl:when test="(local-name() = 'id') or (local-name() = 'class') or (local-name() = 'style') or (local-name() = 'global')">
                <xsl:value-of select="local-name()"/>
                <xsl:text>_</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="local-name()"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
    
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
                      not(((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
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
                not(local-name()='style' and string(.)='') and
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

            <xsl:variable name="pythonBaseType">
                <xsl:call-template name="pythonBaseType">
                    <xsl:with-param name="x3dFieldType" select="$attributeType"/>
                </xsl:call-template>
            </xsl:variable>
            <xsl:variable name="pythonValue">
                <xsl:call-template name="pythonValue">
                    <xsl:with-param name="x3dValue" select="."/>
                    <xsl:with-param name="x3dType" select="$attributeType"/>
                </xsl:call-template>
            </xsl:variable>
            
            <!-- debug
            <xsl:if test="(local-name(..) = 'Background') and contains(local-name(), 'Color')">
                <xsl:message>
                    <xsl:text>*** debugging type conversions: </xsl:text>
                </xsl:message>
                <xsl:message>
                    <xsl:text>local-name(..)='</xsl:text>
                    <xsl:value-of select="local-name(..)"/>
                    <xsl:text>', local-name()='</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>', $x3dType='</xsl:text>
                    <xsl:value-of select="$attributeType"/>
                    <xsl:text>', $tupleSize='</xsl:text>
                    <xsl:value-of select="$tupleSize"/>
                    <xsl:text>', $x3dValue='</xsl:text>
                    <xsl:value-of select="."/>
                    <xsl:text>', $pythonValue=</xsl:text>
                    <xsl:value-of select="$pythonValue"/>
                    <xsl:text></xsl:text>
                </xsl:message>
            </xsl:if> -->

            <!-- common processing for each attribute -->
			<xsl:variable name="fieldNameNormalizedPython">
				<xsl:call-template name="fieldNameNormalizedPython">
					<xsl:with-param name="name">
						<xsl:value-of select="local-name()"/>
					</xsl:with-param>
				</xsl:call-template>
			</xsl:variable>
            <xsl:value-of select="$fieldNameNormalizedPython"/>
            <xsl:text>=</xsl:text>
            <xsl:value-of select="$pythonValue"/>
            
            <!-- selectively append commas, avoid last entry -->
            <xsl:if test="(position() != last())">
                <xsl:text>,</xsl:text> <!-- may be followed by child node(s) -->
            </xsl:if>
            
        </xsl:if>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()"> <!-- rule to process each comment -->
    
        <xsl:text>&#10;</xsl:text>
        <!-- indent -->
        <xsl:for-each select="ancestor::*">
            <xsl:text>  </xsl:text>
        </xsl:for-each>
        
        <xsl:text disable-output-escaping="yes"># </xsl:text>
        <xsl:value-of select="."/>
            
        <xsl:variable name="indent">
            <xsl:text>&#10;</xsl:text>
            <!-- indent -->
            <xsl:for-each select="ancestor::*">
                <xsl:text>  </xsl:text>
            </xsl:for-each>
        </xsl:variable>
        <xsl:if test="(count(following-sibling::*) + count(following-sibling::comment()) = 0)">
            <xsl:value-of select="$indent"/>
        </xsl:if>

    </xsl:template>

    <!-- ===================================================== -->

    <!-- ****** XML processing-instruction ****** -->
    <xsl:template match="processing-instruction()">
        <span title="XML processing instruction, hidden as a comment"><code><xsl:text>&lt;-- </xsl:text></code><xsl:value-of select="."/><code><xsl:text> --&gt;&#10;</xsl:text></code></span>
    </xsl:template>
	
    <xsl:template match="ds:*" >
		<xsl:message>
			<xsl:text>found digital signature element ds:</xsl:text>
			<xsl:value-of select="local-name()"/>
		</xsl:message>
    </xsl:template>

    <!-- ===================================================== -->
	
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
            <xsl:otherwise>
                <xsl:text>1</xsl:text>
                <xsl:message>
                    <xsl:text>*** Error: tuple-size not found for type '</xsl:text>
                    <xsl:value-of select="$type"/>
                    <xsl:if test="(string-length($type) = 0)">
                        <xsl:text>' (type value missing)</xsl:text>
                    </xsl:if>
                </xsl:message>
            </xsl:otherwise>
		</xsl:choose>
    </xsl:template>

    <!-- ===================================================== -->
	
    <xsl:template name="attribute-type"> <!-- rule to determine attribute type -->
	
		<!-- Note:  these rules are adapted from X3dToVrml97.xslt X3dToJson.xslt X3dToJava.xslt X3dToES5.xslt etc. so be sure to apply any updates in all stylesheets -->

		<xsl:variable name="attributeName"       select="local-name()"/>
		<xsl:variable name="parentElementName"   select="local-name(..)"/>
		<xsl:variable name="normalizeSpaceValue" select="normalize-space(string(.))"/>
		<xsl:variable name="localFieldType"> <!-- locally defined field -->
            <xsl:choose>
                <xsl:when test="(string-length(normalize-space(../@type)) > 0)"><!-- field -->
                    <xsl:value-of select="normalize-space(../@type)"/>
                </xsl:when>
                <xsl:when test="($parentElementName = 'fieldValue')"><!-- fieldValue -->
                    <xsl:variable name="parentProtoInstanceName" select="../../@name"/><!-- if current element is fieldValue -->
                    <xsl:variable name="fieldValueName" select="../@name"/>            <!-- if current element is fieldValue -->
                    <xsl:variable name="fieldValuePriorDeclarationType">
                        <xsl:choose>
                            <xsl:when                 test="//ProtoDeclare[@name = $parentProtoInstanceName]">
                                <xsl:value-of       select="//ProtoDeclare[@name = $parentProtoInstanceName]/ProtoInterface/field[@name = $fieldValueName]/@type"/>
                            </xsl:when>
                            <xsl:when           test="//ExternProtoDeclare[@name = $parentProtoInstanceName]">
                                <xsl:value-of select="//ExternProtoDeclare[@name = $parentProtoInstanceName]/field[@name = $fieldValueName]/@type"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- FIELD_DECLARATION_NOT_FOUND -->
                                <xsl:message>
                                    <xsl:text>*** Error: attribute-type: FIELD_DECLARATION_NOT_FOUND, no ProtoDeclare or ExternProtoDeclare found for ProtoInstance name='</xsl:text>
                                    <xsl:value-of select="$parentProtoInstanceName"/>
                                    <xsl:text>' $parentElementName='</xsl:text>
                                    <xsl:value-of select="$parentElementName"/>
                                    <xsl:text>' fieldValue name='</xsl:text>
                                    <xsl:value-of select="$fieldValueName"/>
                                    <xsl:text>', using SFString</xsl:text>
                                </xsl:message>
                                <xsl:text>SFString</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:value-of select="$fieldValuePriorDeclarationType"/>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>*** attribute-type: ProtoInstance name='</xsl:text>
                        <xsl:value-of select="$parentProtoInstanceName"/>
                        <xsl:text>' $parentElementName='</xsl:text>
                        <xsl:value-of select="$parentElementName"/>
                        <xsl:text>' fieldValue name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>' $fieldValueName='</xsl:text>
                        <xsl:value-of select="$fieldValueName"/>
                        <xsl:text>' $attributeName='</xsl:text>
                        <xsl:value-of select="$attributeName"/>
                        <xsl:text>' $fieldValuePriorDeclarationType='</xsl:text>
                        <xsl:value-of select="$fieldValuePriorDeclarationType"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                    -->
                </xsl:when>
                <xsl:otherwise>
					<!-- not found here, maybe later -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>

		<xsl:choose>
		  <!-- SFString -->
          <!-- omitted SFString test: field/fieldValue contents of value field are determined by 
               local (Extern)ProtoDeclare/field type definition, not X3D Schema:
               (starts-with($parentElementName,'field') and ($attributeName='value'))      or -->
		  <xsl:when test="($localFieldType='SFString')          or
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
                    ($attributeName='bboxDisplay')  or
					($attributeName='ccw')      or
					($attributeName='closed')   or
					($attributeName='convex')   or
					($attributeName='colorPerVertex') or
					($attributeName='enabled')  or
					($attributeName='dopplerEnabled')  or
					($attributeName='enableHRTF')  or
					($attributeName='global')   or
					($attributeName='normalPerVertex') or
					($attributeName='on')       or
					($attributeName='load')     or
					($attributeName='loop')     or
					($attributeName='next')     or
					($attributeName='previous') or
					($attributeName='normalizeVelocity') or
					($attributeName='rtpHeaderExpected') or
					($attributeName='solid') or
					($attributeName='trackCurrentView') or
					($attributeName='uClosed') or ($attributeName='vClosed') or
					($attributeName='visible') or
					($attributeName='viewAll') or
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
                    ($localFieldType='SFTime')          or 
                    contains($attributeName,'Time')     or
                    contains($attributeName,'Duration') or
                    ($parentElementName='TimeSensor') or
                    ($attributeName='cycleTime')      or
                    ($attributeName='pauseTime')      or
                    ($attributeName='resumeTime')     or
                    ($attributeName='startTime')      or
                    ($attributeName='stopTime')       or
                    ($attributeName='duration')       or
                    ($attributeName='elapsedTime')    or
                    ($attributeName='autoRefresh')    or
                    ($attributeName='autoRefreshTimeLimit') or
                    ($attributeName='tau')            or
                    ($attributeName='timestamp')      or
                    ($attributeName='readInterval')   or
                    ($attributeName='writeInterval')  or
                    ($parentElementName='LoadSensor'     and $attributeName='timeOut')  or
                    ($parentElementName='AudioClip'      and ends-with($attributeName,'Time'))  or
                    ($parentElementName='EspduTransform' and ends-with($attributeName,'Time'))  or
                    ($parentElementName='HAnimMotion'    and $attributeName='frameDuration') or
                    ($parentElementName='MovieTexture'   and ends-with($attributeName,'Time')) or
                    ($parentElementName='TimeSensor')"> 
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
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='Matrix4VertexAttribute' and $attributeName='value')">
			  <xsl:text>MFMatrix4f</xsl:text>
		  </xsl:when>
		  <!-- MFInt32 --> <!-- must precede SFInt32 -->
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
		  <!-- Statements: xs:integer as SFInt32 - TODO schema/spec change? -->
		  <!-- SFInt32 --> <!-- Note that other DIS attibutes must get tested before this, including MFInt32 -->
		  <xsl:when test="
                    ($localFieldType='SFInt32')           or 
                     ends-with($attributeName,'ID')             or
                    ($attributeName='farClippingPlane')         or
                    ($attributeName='nearClippingPlane')        or
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
                    (($parentElementName='component') and $attributeName='level')    or 
					($parentElementName='CartoonVolumeStyle' and $attributeName='colorSteps') or
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
				<xsl:when test="($parentElementName='field') or ($parentElementName='fieldValue')">
					<xsl:value-of select="$localFieldType"/>
				</xsl:when>
				<!-- Other statement values require special handling, do not warn here -->
				<xsl:when test="($parentElementName='field') or contains($parentElementName,'Proto') or
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
						  <xsl:text>*** Warning: X3dToPython.xslt attribute type not found for </xsl:text>
						  <xsl:value-of select="$parentElementName"/>
						  <xsl:text> field '</xsl:text>
						  <xsl:value-of select="$attributeName"/>
						  <xsl:text>'</xsl:text>
					</xsl:message>
				</xsl:otherwise>
			  </xsl:choose>
		  </xsl:otherwise>
		</xsl:choose>

    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="pythonBaseType">
        <xsl:param name="x3dFieldType"></xsl:param>
        
        <xsl:choose>
            <xsl:when test="contains($x3dFieldType,'Bool')">
                <!-- SFBool MFBool -->
                <xsl:text>bool</xsl:text>
            </xsl:when>
            <xsl:when test="contains($x3dFieldType,'Int32')">
                <!-- SFInt32 MFInt32 -->
                <xsl:text>int</xsl:text>
            </xsl:when>
            <xsl:when test="contains($x3dFieldType,'String')">
                <!-- SFString MFString -->
                <xsl:text>str</xsl:text>
            </xsl:when>
            <xsl:when test="($x3dFieldType = 'SFNode')">
                <xsl:text>object</xsl:text>
            </xsl:when>
            <xsl:when test="($x3dFieldType = 'MFNode')">
                <xsl:text>list</xsl:text>
            </xsl:when>
            <xsl:when test="contains($x3dFieldType,'Float') or contains($x3dFieldType,'Double')   or
                            contains($x3dFieldType,'Color') or contains($x3dFieldType,'Image') or contains($x3dFieldType,'Rotation') or contains($x3dFieldType,'Vec')  or contains($x3dFieldType,'Matrix')">
                <!-- SF/MF Float, Double, Vec, Matrix -->
                <xsl:text>float</xsl:text>
            </xsl:when>
            <!-- SFNode, MFNode not accounted for here -->
        </xsl:choose>
        
    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="pythonValue">
        <xsl:param name="x3dValue"><xsl:text></xsl:text></xsl:param>
        <xsl:param name="x3dType">SFString</xsl:param><!-- default if x3dType is unknown -->
        <xsl:variable name="isTuple"         select="contains($x3dType,'Vec') or contains($x3dType,'Rotation') or contains($x3dType,'Color') or contains($x3dType,'Matrix')"/>
        <xsl:variable name="isList"          select="starts-with($x3dType,'MF') or ($x3dType = 'SFImage')"/>
        <xsl:variable name="isString"        select="($x3dType = 'SFString') or ($x3dType ='xs:string') or ($x3dType ='xs:NMTOKEN')"/>
        <xsl:variable name="tupleSize">
            <xsl:call-template name="tuple-size">
                <xsl:with-param name="type">
                    <xsl:value-of select="$x3dType"/>
                </xsl:with-param>
            </xsl:call-template>
        </xsl:variable>

        <!-- prepend delimiter if appropriate -->
        <xsl:choose>
            <xsl:when test="$isList">
                <xsl:text>[</xsl:text>
                <xsl:if test="$isTuple and (string-length(string($x3dValue)) > 0) and not(starts-with(normalize-space($x3dValue),'('))">
                    <!-- list containing a tuple -->
                    <xsl:text>(</xsl:text>
                </xsl:if>
            </xsl:when>
            <xsl:when test="$isTuple">
                <xsl:text>(</xsl:text>
            </xsl:when>
            <xsl:when test="$isString and contains($x3dValue,'&quot;')">
                <xsl:text>'</xsl:text>
            </xsl:when>
            <xsl:when test='$isString and contains($x3dValue,"&apos;")'>
                <!-- may contain combination of " and ' in same value -->
                <!-- does not contain combination of " and ' in same value -->
                <xsl:text>"</xsl:text>
            </xsl:when>
            <xsl:when test="$isString">
                <xsl:text>'</xsl:text>
            </xsl:when>
        </xsl:choose>
        <!-- convert value from .x3d XML syntax to Python -->
        <xsl:choose>
            <xsl:when test="(string($x3dValue) = 'true') and ($x3dType = 'SFBool')">
                <xsl:text>True</xsl:text>
            </xsl:when>
            <xsl:when test="(string($x3dValue) = 'false') and ($x3dType = 'SFBool')">
                <xsl:text>False</xsl:text>
            </xsl:when>
            <xsl:when test="($x3dType = 'MFBool')">
                <!-- Python boolean values are True and False, comma-separated list -->
                <xsl:value-of select="translate(translate(translate(string($x3dValue),'f','F'),'t','T'),' ',',')"/>
            </xsl:when>
            <xsl:when test="(string($x3dValue) = 'NULL') and ($x3dType = 'SFNode')">
                <xsl:text>None</xsl:text>
            </xsl:when>
            <xsl:when test="$isString and contains(string($x3dValue),'&quot;')">
                <xsl:choose>
                    <xsl:when test='contains(string($x3dValue),"&apos;")'>
                        <!-- combination of ' and " in same value -->
                        <xsl:call-template name="escape-apostrophes-recurse">
                            <xsl:with-param name="inputValue" select="string($x3dValue)"/>
                        </xsl:call-template>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$x3dValue"/>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:when>
            <xsl:when test="$isString and (string-length($x3dValue) > 0)">
                <xsl:value-of select="$x3dValue"/>
            </xsl:when>
            <xsl:when test="$isString"><!-- empty -->
                <xsl:text></xsl:text>
            </xsl:when>
            <xsl:when test="($x3dType = 'MFString')">
                <!-- MFString commas between list entries -->
                <xsl:call-template name="insert-commas-between-quoted-MFString-values-recurse">
                    <xsl:with-param name="inputValue">
                        <xsl:call-template name="escape-apostrophes-recurse">
                            <xsl:with-param name="inputValue" select="$x3dValue"/>
                        </xsl:call-template>
                    </xsl:with-param>
                </xsl:call-template>
                <!-- TODO combination of ' and " in same value -->
            </xsl:when>
            <!-- insert commas between values in numeric arrays -->
            <xsl:when test="not($x3dType = 'SFString') and not($x3dType = 'MFString') and (string-length(string($x3dValue)) > 0)">
                <xsl:call-template name="insert-tuple-breaks-recurse">
                    <xsl:with-param name="inputValue">
                        <xsl:value-of select="translate(normalize-space(translate(string($x3dValue),',',' ')),' ',',')"/>
                    </xsl:with-param>
                    <xsl:with-param name="tupleSize" select='$tupleSize'/>
                </xsl:call-template>
            </xsl:when>
             <xsl:when test="not($isList) and not($isTuple)">
                <xsl:text>None</xsl:text>
            </xsl:when>
        </xsl:choose>
        <!-- append delimiter if appropriate -->
        <xsl:choose>
            <xsl:when test="$isList">
                <xsl:if test="$isTuple and (string-length(string($x3dValue)) > 0) and not(ends-with(normalize-space(string($x3dValue)),')'))">
                    <!-- list containing a tuple -->
                    <xsl:text>)</xsl:text>
                </xsl:if>
                <xsl:text>]</xsl:text>
            </xsl:when>
            <xsl:when test="$isTuple">
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test="$isString and contains($x3dValue,'&quot;')">
                <!-- may contain combination of " and ' in same value -->
                <xsl:text>'</xsl:text>
            </xsl:when>
            <xsl:when test='$isString and contains($x3dValue,"&apos;")'>
                <!-- does not contain combination of " and ' in same value -->
                <xsl:text>"</xsl:text>
            </xsl:when>
            <xsl:when test="$isString">
                <xsl:text>'</xsl:text>
            </xsl:when>
        </xsl:choose>
    </xsl:template>
    <!-- ===================================================== -->

    <xsl:template name="insert-tuple-breaks-recurse">
        <xsl:param name="tupleSize"><xsl:text>1</xsl:text></xsl:param>
        <xsl:param name="index"><xsl:text>1</xsl:text></xsl:param>
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      
      <xsl:choose>
        <xsl:when test="($tupleSize = 1) or not(contains($inputString,','))">
          <xsl:value-of select="$inputString"/><!-- done -->
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="substring-before($inputString,',')"/>
          <xsl:choose>
            <xsl:when test="(($index mod $tupleSize) = 0)">
                 <xsl:text>)</xsl:text>
                 <xsl:if test="contains(substring-after($inputString,','),',')">
                     <xsl:text>,(</xsl:text>
                 </xsl:if>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>,</xsl:text>
            </xsl:otherwise>
          </xsl:choose>
          <xsl:call-template name="insert-tuple-breaks-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,',')"/>
            <xsl:with-param name="index" select='(number($index) + 1)'/>
            <xsl:with-param name="tupleSize" select='$tupleSize'/>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>
    
    <!-- ===================================================== -->

    <xsl:template name="escape-apostrophes-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <xsl:choose>
        <xsl:when test='not(contains($inputString,"&apos;"))'>
          <xsl:value-of select="$inputString"/><!-- done -->
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select='substring-before($inputString,"&apos;")'/>
          <xsl:text>\'</xsl:text>
          <xsl:call-template name="escape-apostrophes-recurse">
            <xsl:with-param name="inputValue" select='substring-after($inputString,"&apos;")'/>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>
    
    <!-- ===================================================== -->

    <xsl:template name="trim-whitespace-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <xsl:variable name="firstChar" select="substring($inputString,1,1)"/>
        <xsl:variable name="lastChar"  select="substring($inputString,string-length($inputString),1)"/>
        <!-- debug diagnostic
        <xsl:message>
            <xsl:text>*** trim-whitespace-recurse firstChar='</xsl:text>
            <xsl:value-of select="$firstChar"/>
            <xsl:text>' lastChar='</xsl:text>
            <xsl:value-of select="$lastChar"/>
            <xsl:text>'</xsl:text>
            < ! - -
            <xsl:text> inputString='</xsl:text>
            <xsl:value-of select="$inputString"/>
            <xsl:text>'</xsl:text>
            - - >
        </xsl:message> -->
      <xsl:choose>
        <xsl:when test="(string-length(normalize-space($inputString)) = 0)">
            <xsl:text></xsl:text>
        </xsl:when>
        <xsl:when test="(string-length(normalize-space($firstChar)) = 0)">
            <xsl:call-template name="trim-whitespace-recurse">
              <xsl:with-param name="inputValue" select="substring($inputString,2)"/>
            </xsl:call-template>
        </xsl:when>
        <xsl:when test="(string-length(normalize-space($lastChar)) = 0)">
            <xsl:call-template name="trim-whitespace-recurse">
              <xsl:with-param name="inputValue" select="substring($inputString,1,string-length($inputString)-1)"/>
            </xsl:call-template>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="$inputString"/><!-- trimmed -->
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>
    
    <!-- ===================================================== -->

    <xsl:template name="insert-commas-between-quoted-MFString-values-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <!-- assumes normalized with single whitespace, need regex for more robust response -->
      
      <xsl:choose>
        <xsl:when test="not(contains($inputString,'&quot;'))">
          <xsl:text>'</xsl:text>
          <xsl:value-of select="$inputString"/>
          <xsl:text>'</xsl:text>
        </xsl:when>
        <xsl:when test="not(contains($inputString,'&quot; &quot;'))">
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="substring-before($inputString,'&quot; &quot;')"/>
          <xsl:text>","</xsl:text>
          <xsl:call-template name="insert-commas-between-quoted-MFString-values-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot; &quot;')"/>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <!-- ===================================================== -->

</xsl:stylesheet>
