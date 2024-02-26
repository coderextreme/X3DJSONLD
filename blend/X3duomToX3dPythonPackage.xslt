<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3duomToX3dPythonPackage.xslt
    created     : 6 July 2019
    creator     : Don Brutzman, Loren Peitso and John Carlson
    description : Stylesheet to process X3dUnifiedObjectModel-#.#.xml and convert it to X3D Ontology
    reference   : AllX3dElementsAttributesTextTemplate.xslt
    reference   : https://www.w3.org/TR/xslt
    identifier  : https://www.web3d.org/x3d/stylesheets/X3duomToX3dPythonPackage.xslt
    license     : license.html
-->

<!-- TODO authors can edit this example to customize all transformation rules -->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions">
	<!--  extension-element-prefixes="xs" -->
	<xsl:param name="X3dPackageDirectory"><xsl:text></xsl:text></xsl:param>
        
    <xsl:output method="text"/> <!-- output methods:  xml html text -->
    
    <xsl:variable name="indent"><xsl:text>    </xsl:text></xsl:variable>
    
    <!-- See X3DJSAIL for original tooltip usage code -->
    <xsl:variable name="x3d.tooltips.path">
        <xsl:text>../tooltips/x3d-4.0.profile.xml</xsl:text>
    </xsl:variable>
    <xsl:variable name="x3d.tooltips.document" select="doc($x3d.tooltips.path)"/>

<!-- TODO
     - is it possible to output metaDiagnostics even if __init__() exception thrown on loading?
     - use escaping to handle inclusion of both ' and " in a single string
-->
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
    
        <xsl:result-document href="{$X3dPackageDirectory}/__init__.py" method="text" omit-xml-declaration="yes" encoding="UTF-8" indent="no">
        
            <xsl:text># __init__.py needed for properly configuring pypi distribution of x3d.py package

# According to _Learning Python_ by Mark Lutz, fifth edition:
# - Empty __init__.py no longer required as of Python 3.3.  p. 761
# - Using __init__.py is performance advantage for loading, even when empty.  p. 761
# - Using __all__ list to define exported values for import * is allowed but not required.  p. 735 and 771-772.

# 6.4.1. Importing * From a Package
# https://docs.python.org/3/tutorial/modules.html#importing-from-a-package

# indicates that
#     from packagename import *
# "then imports whatever names are defined in the package" and
# "Although certain modules are designed to export only names that follow certain patterns when you use import *,
#     it is still considered bad practice in production code."

# TODO testing continues to fix x3d.py package's class visibility satisfactorily for end users

__all__ = [</xsl:text>
            <xsl:text>
    # Field types
    </xsl:text>
            <xsl:for-each select="//FieldTypes/FieldType">
                <xsl:text>'</xsl:text>
                <xsl:value-of select="@type"/>
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
            </xsl:for-each>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>
    # Simple Type Enumerations
    </xsl:text>
        <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[count(enumeration) > 1]
                                [not(starts-with(@name,'containerField')) and not(ends-with(@name,'AccessTypes'))]">
                <xsl:text>'</xsl:text>
                <xsl:value-of select="upper-case(@name)"/><!-- to upper -->
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
            </xsl:for-each>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>
    # Abstract Object Types (not used by programmers, internal only)
    # </xsl:text>
            <xsl:for-each select="//AbstractObjectTypes/AbstractObjectType">
                <xsl:text>'</xsl:text>
                <xsl:text>_</xsl:text><!-- _ prefix discourages programmer use of abstract types -->
                <xsl:value-of select="@name"/>
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
            </xsl:for-each>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>
    # Abstract Node Types (not used by programmers, internal only)
    # </xsl:text>
            <xsl:for-each select="//AbstractNodeTypes/AbstractNodeType">
                <xsl:text>'</xsl:text>
                <xsl:text>_</xsl:text><!-- _ prefix discourages programmer use of abstract types -->
                <xsl:value-of select="@name"/>
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
            </xsl:for-each>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>
    # Concrete Nodes
    </xsl:text>
            <xsl:for-each select="//ConcreteNodes/ConcreteNode">
                <xsl:text>'</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
            </xsl:for-each>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>
    # Statements
    </xsl:text>
            <xsl:for-each select="//Statements/Statement">
                <xsl:text>'</xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
            </xsl:for-each>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>
    # Utility functions
    </xsl:text>
            <xsl:for-each select="//FieldTypes/FieldType">
                <xsl:text>'isValid</xsl:text>
                <xsl:value-of select="@type"/>
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
                <xsl:text>'assertValid</xsl:text>
                <xsl:value-of select="@type"/>
                <xsl:text>'</xsl:text>
                <xsl:text>, </xsl:text>
            </xsl:for-each>
            <xsl:text>
    'fixBoolean', 'isPositive', 'assertPositive', 'isNonNegative', 'assertNonNegative', 'isZeroToOne', 'assertZeroToOne', 'isLessThanEquals', 'assertLessThanEquals', 'isLessThan', 'assertLessThan', 'isGreaterThanEquals', 'assertGreaterThanEquals', 'isGreaterThan', 'assertGreaterThan', 'isBoundingBox', 'assertBoundingBox',
    'metaDiagnostics','prependLineNumbers','isX3DNode','isX3DField','isX3DStatement',</xsl:text>
            <xsl:text>&#10;</xsl:text>

            <!-- note that each continuing line must end with comma -->
            <xsl:text>
    # Utility classes
    'AccessType','FieldType','Comment',</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>
    ]
                
# Zen of Python: Flat is better than nested.
# https://en.wikipedia.org/wiki/Zen_of_Python

# Note insertion of period in following incantation for relative import, thanks Vince!
# https://docs.python.org/3/reference/import.html
# https://docs.python.org/3/reference/import.html#package-relative-imports
                
import re # regular expressions library, built in

#print('====================================', flush=True)
#print('PyPI x3d package __init__.py diagnostics', flush=True)
try:
    from x3d.x3d import *
#   print('*** __init__.py successful invocation: from x3d.x3d import *', flush=True)
except:
#   print('*** __init__.py invocation failure: from x3d.x3d import *', flush=True)
    try:
        from .x3d import *
    #   print('*** __init__.py successful invocation: from .x3d import *', flush=True)
    except:
    #   print('*** __init__.py invocation failure: from .x3d import *', flush=True)
        try:
            from x3d import *
        #   print('*** __init__.py successful invocation: from x3d import *', flush=True)
        except:
        #   print('*** __init__.py invocation failure: from x3d import *', flush=True)
            try:
                from src.x3d import *
            #   print('*** __init__.py successful invocation: from src.x3d import *', flush=True)
            except:
            #   print('*** __init__.py invocation failure: from src.x3d import *', flush=True)
                try:
                    from src.x3d.x3d import *
                #   print('*** __init__.py successful invocation: from src.x3d.x3d import *', flush=True)
                except:
                #   print('*** __init__.py invocation failure: from src.x3d.x3d import *', flush=True)
                    print('*** __init__.py invocation failure: unable to perform variations of "from x3d import *"', flush=True)

#print('====================================', flush=True)

</xsl:text>
            
        </xsl:result-document>
    
        <xsl:result-document href="{$X3dPackageDirectory}/x3d.py" method="text" omit-xml-declaration="yes" encoding="UTF-8" indent="no">
        
        <xsl:text disable-output-escaping="yes"><![CDATA[]]></xsl:text>

        <!-- process elements -->
        
        <xsl:text>###############################################

# x3d.py X3D Package for Python

# generator:  X3duomToX3dPythonPackage.xslt
# X3DUOM:     X3dUnifiedObjectModel-</xsl:text><xsl:value-of select="X3dUnifiedObjectModel/@version"/><xsl:text>.xml
# Python X3D: https://www.web3d.org/x3d/stylesheets/python/python.html
"""
The x3d.py Python X3D Package supports programmers with Python interfaces and objects for standards-based X3D programming, all as open source.

This work is part of the X3D Python Scene Access Interface Library (X3DPSAIL).
"""

# Include regular expression (regex) library: re is built into Python
# https://docs.python.org/3/library/re.html
# https://docs.python.org/3/howto/regex.html#regex-howto
# https://www.web3d.org/specifications/X3dRegularExpressions.html

import re

_DEBUG = False       # options True False

###############################################

# Simple JSON list helper for enumerationing MFNode children -- John Carlson
def JSONListHelper(fieldName="", childClass=None, children=None, indentLevel=0, syntax="JSON"):
    result = ''
    indent = '    ' * indentLevel
    result = indent + '"-'+fieldName+'": ['
    if children:
        result +=     "\n"
        if childClass is None:
            result +=     (("").join(each.JSON(indentLevel=indentLevel+1, syntax=syntax) for each in children)).rstrip()
        elif childClass is Comment:
            result +=     ((",\n").join(each.JSON(indentLevel=indentLevel+4, syntax=syntax) for each in children if isinstance(each, childClass))).rstrip()
        else:
            result +=     (("").join(each.JSON(indentLevel=indentLevel+1, syntax=syntax) for each in children if isinstance(each, childClass))).rstrip()
        if result.endswith(","):
            result = result[:-1] # remove trailing comma from last element of list
        result +=     "\n"
    result += indent + "]"
    return result

###############################################

# SimpleType Enumerations
</xsl:text>

        <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[count(enumeration) > 0]
                                [not(starts-with(@name,'containerField')) and not(ends-with(@name,'AccessTypes'))]">
            <xsl:text>&#10;</xsl:text>
            <xsl:value-of select="upper-case(@name)"/>
            <xsl:text> = (</xsl:text>
            <xsl:choose>
                <xsl:when test="ends-with(@name,'Choices')">
                    <xsl:if test="(@baseType = 'MFString')">
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>    </xsl:text><!-- indent -->
                        <xsl:text># note these MFString values use XML syntax</xsl:text>
                    </xsl:if>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>    </xsl:text><!-- indent -->
                    <xsl:text># strict set of allowed values follow, no other values are valid</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with(@name,'Values')">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>    </xsl:text><!-- indent -->
                    <xsl:text># specification-defined values follow, other values are also allowed</xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:for-each select="enumeration">
                <xsl:text>&#10;</xsl:text>
                <xsl:text>    </xsl:text><!-- indent -->
                <xsl:text>'</xsl:text>
                <xsl:value-of select="@value"/>
                <xsl:text>'</xsl:text>
                <xsl:if test="not(position() = last())">
                    <xsl:text>,</xsl:text>
                </xsl:if>
                <xsl:if test="(string-length(@appinfo) > 0)">
                    <!-- https://peps.python.org/pep-0008/#inline-comments -->
                    <xsl:text>  # </xsl:text>
                    <xsl:value-of select="@appinfo"/>
                </xsl:if>
            </xsl:for-each>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>)</xsl:text>
            <xsl:if test="ends-with(@name,'Choices')">
                <xsl:variable name="assertFunctionName" select="concat('assertValid',upper-case(substring(@name,1,1)),substring(substring-before(@name,'Choices'),2))"/>
                <xsl:text>
def </xsl:text><xsl:value-of select="$assertFunctionName"/><xsl:text>(fieldName, value):
    """
    Utility function to assert type validity of </xsl:text><xsl:value-of select="@name"/><xsl:text> value, otherwise raise X3DTypeError with diagnostic message.
    Note MFString enumeration values are provided in XML syntax, so check validity accordingly.
    """
    if  not value:
        return True # no failure on empty defaults
    if str(MFString(value).XML()) in </xsl:text><xsl:value-of select="upper-case(@name)"/><xsl:text>:
        # print('*** </xsl:text><xsl:value-of select="$assertFunctionName"/><xsl:text> ' + fieldName + ' str(MFString(' + str(value) + ').XML())=' + str(MFString(value).XML()), flush=True) # diagnostic
        return True
    if isinstance(value, (SFString, str)) and str(SFString(value).XML()) in </xsl:text><xsl:value-of select="upper-case(@name)"/><xsl:text>:
        # print('*** </xsl:text><xsl:value-of select="$assertFunctionName"/><xsl:text> ' + fieldName + ' str(SFString(' + str(value) + ').XML())=' + str(MFString(value).XML()), flush=True) # diagnostic
        return True
    raise X3DTypeError(fieldName + ' value=\'' + MFString(value).XML() + '\' does not match allowed enumerations in </xsl:text><xsl:value-of select="upper-case(@name)"/><xsl:text>=' + str(</xsl:text><xsl:value-of select="upper-case(@name)"/><xsl:text>))</xsl:text>
            </xsl:if>
        <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="enumeration">
        <xsl:if test="(../@baseType = 'SFInt32') and (string-length(@alias) > 0)">
            <!-- debug
            <xsl:message>
                <xsl:text>../@name=</xsl:text>
                <xsl:value-of select="../@name"/>
                <xsl:text>, ../@baseType=</xsl:text>
                <xsl:value-of select="../@baseType"/>
                <xsl:text>, @alias=</xsl:text>
                <xsl:value-of select="@alias"/>
            </xsl:message> -->
            <xsl:if test="(position() = 1)">
                <xsl:text>&#10;</xsl:text>
                <xsl:text># Enumeration alias values</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:value-of select="upper-case(../@name)"/>
            <xsl:text>_</xsl:text>
            <xsl:value-of select="@alias"/>
            <xsl:text> = </xsl:text>
            <xsl:value-of select="@value"/>
            <xsl:text>&#10;</xsl:text>
        </xsl:if>
    </xsl:for-each>
        </xsl:for-each>

        <xsl:text>&#10;</xsl:text>
        <xsl:text>###############################################

# Utility Functions
</xsl:text>
        <xsl:call-template name="UtilityFunctions"/>
        <xsl:text>###############################################

# Field Validation Functions
</xsl:text>
        <!-- TODO should Python convention be "__NAME__" ? -->
        <xsl:call-template name="FieldValidationFunctions"/>
        <xsl:text>###############################################

class _X3DField:
    """
    X3DField is the abstract field type from which all single values field types are derived. All fields directly derived from X3DField have names beginning with SF (single-valued field). SF fields may only contain a single value of the type indicated by the name of the field type.
    """
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def NAME(cls):
        """ Name of this X3D Field class. """
        return '_X3DField'
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/fieldTypes.html#X3DField'
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html#FieldTypesTable'
    @property # getter - - - - - - - - - -
    def value(self):
        """ Provide value of this field type. """
        return self.__value
    def __repl__(self):
        # if _DEBUG: print('...DEBUG... type(self.value)=' + str(type(self.value)), flush=True)
        if isinstance(self.value, (SFString, str)):
            return "'" + self.value + "'"
        if  isinstance(self.value, tuple) and 'SF' in str(type(self)): # avoid X3DTypeError if value is not iterable
            result = '('
            if self.value: # walk each child in list, if any (avoid empty list recursion)
                for each in self.value:
                    result += str(each) + ', '
                    # if _DEBUG: print('...DEBUG... _X3DField debug: str(each)=' + str(each), flush=True)
            return result.rstrip(', ') + ')'
        if  isinstance(self.value, list) and 'MF' in str(type(self)): # avoid X3DTypeError if value is not iterable
            # isinstance(self.value, MFNode): not working, what got passed in was not an MFNode object apparently
            result = '['
            if self.value: # walk each child in list, if any (avoid empty list recursion)
                for each in self.value:
                    result += str(each) + ', '
                    # if _DEBUG: print('...DEBUG... _X3DField debug: str(each)=' + str(each), flush=True)
            return result.rstrip(', ') + ']'
        return str(self.value)
    def __str__(self):
        return self.__repl__()

class _X3DArrayField(_X3DField):
    """
    X3DArrayField is the abstract field type from which all field types that can contain multiple values are derived, implementing the X3DField interface. All fields derived from X3DArrayField have names beginning with MF (multiple-valued field). MF fields may zero or more values, each of which shall be of the type indicated by the corresponding SF field type. It is illegal for any MF field to mix values of different SF field types.
    """
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def NAME(cls):
        """ Name of this X3D Abstract Type class. """
        return '_X3DArrayField'
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/fieldTypes.html#X3DArrayField'

def isX3DField(value):
    """
    Determine whether object is an instance of _X3DField.
    """
    return isinstance(value, _X3DField)

# Access Types

class AccessType(_X3DField):
    """
    accessType determines whether a field corresponds to event input, event output, or persistent state information. Events are strictly typed values with a corresponding timestamp. ROUTE connections must match accessType between source field and target field.
    """
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/concepts.html#FieldSemantics'
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html#accessType'
    @staticmethod
    def initializeOnly():
        """ initializeOnly: can be initialized, but cannot send or receive events. This is usually the case for fields that are considered too computationally expensive to change at run time. """
        return 'initializeOnly'
    @staticmethod
    def inputOutput():
        """ inputOutput: can be initialized, and can also send or receive events during run-time operations. """
        return 'inputOutput'
    @staticmethod
    def inputOnly():
        """ inputOnly: cannot be initialized or included in a scene file, but can receive input event values via a ROUTE during run-time operations. """
        return 'inputOnly'
    @staticmethod
    def outputOnly():
        """ outputOnly: cannot be initialized or included in a scene file, but can send output event values via a ROUTE during run-time operations. """
        return 'outputOnly'


# Field Types

class FieldType(_X3DField):
    """
    The X3D Architecture specification of field types classify the possible values for a field.
    Each field in each node (i.e. each XML attribute) has a strictly defined data type.
    Multiple data types are provided for boolean, integer, floating-point and string values.
    X3D is a strongly typed language, meaning that all data must strictly conform to these data types in order for a scene to be correct.
    """
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/fieldsDef.html'
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html#type'
    # string constants listing each allowed type</xsl:text>
        <xsl:for-each select="//FieldTypes/FieldType">
            <xsl:text>
    @staticmethod
    def </xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>():
        """ Type </xsl:text><xsl:value-of select="@type"/><xsl:text> https://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text><xsl:value-of select="@type"/><xsl:text> """
        return '</xsl:text>
            <xsl:value-of select="@type"/>
            <xsl:text>'</xsl:text>
        </xsl:for-each>

        <xsl:text>

</xsl:text>
        <!-- TODO mappings for X3D types to xsd types; further decorate XML Schema and X3DUOM to account for them -->
        
        <xsl:apply-templates select="//FieldTypes/*"/>
        <xsl:text>###############################################

# Abstract Node Types

# Note that these package-internal class names are preceded by an underscore _ character for hidden scope, since X3D authors are not expected to use them.

</xsl:text>
        <!-- order matters for class generation, since Python superclass must precede subclass, apparently unaffected by __init__.py predefinitions -->
        <xsl:apply-templates select="//AbstractNodeTypes/AbstractNodeType[    @name = 'X3DNode']"  />     <!-- must go first -->

        <!-- Abstract type sorting is necessary in order for Python dependencies to be defined in correct order -->
        <xsl:apply-templates select="//AbstractNodeTypes/AbstractNodeType[not(@name = 'X3DNode') and not(@name = 'X3DField')  and not(@name = 'X3DArrayField') and not(@name = 'X3DStatement')]">
            <xsl:sort select="not((@name = 'X3DNode') or (@name = 'X3DBindableNode') or (@name = 'X3DChildNode') or (@name = 'X3DFollowerNode') or 
                                  (@name = 'X3DGeometricPropertyNode') or (@name = 'X3DVolumeRenderStyleNode') or (@name = 'X3DPointingDeviceSensorNode') or 
                                  (@name = 'X3DSensorNode') or (@name = 'X3DTextureNode') or (@name = 'X3DAppearanceChildNode') or 
                                  (@name = 'X3DParametricGeometryNode') or (@name = 'X3DGeometryNode') or 
                                  (@name = 'X3DSoundNode')  or (@name = 'X3DSoundChannelNode') or
                                  (@name = 'X3DTimeDependentNode') or (@name = 'X3DChildNode'))"/>
            <xsl:sort select="(@name = 'X3DBindableNode')"/>
            <xsl:sort select="(@name = 'X3DFollowerNode')"/>
            <xsl:sort select="(@name = 'X3DGeometricPropertyNode')"/>
            <xsl:sort select="(@name = 'X3DVolumeRenderStyleNode')"/>
            <xsl:sort select="(@name = 'X3DPointingDeviceSensorNode')"/>
            <xsl:sort select="(@name = 'X3DSensorNode')"/>
            <xsl:sort select="(@name = 'X3DTextureNode')"/>
            <xsl:sort select="(@name = 'X3DTexture2DNode')"/>
            <xsl:sort select="(@name = 'X3DSingleTextureNode')"/>
            <xsl:sort select="(@name = 'X3DSingleTextureCoordinateNode')"/>
            <xsl:sort select="(@name = 'X3DTextureCoordinateNode')"/>
            <xsl:sort select="(@name = 'X3DSingleTextureTransformNode')"/>
            <xsl:sort select="(@name = 'X3DTextureTransformNode')"/>
            <xsl:sort select="(@name = 'X3DAppearanceChildNode')"/>
            <xsl:sort select="(@name = 'X3DParametricGeometryNode')"/>
            <xsl:sort select="(@name = 'X3DGeometryNode')"/>
            <xsl:sort select="(@name = 'X3DTimeDependentNode')"/>
            <xsl:sort select="(@name = 'X3DSoundChannelNode')"/>
            <xsl:sort select="(@name = 'X3DSoundNode')"/>
            <xsl:sort select="(@name = 'X3DChildNode')"/>
        </xsl:apply-templates>
        <xsl:text>###############################################

# Abstract Object Types

# Note that these package-internal class names are preceded by an underscore _ character since X3D authors are not expected to use them

</xsl:text>
        <xsl:apply-templates select="//AbstractObjectTypes/*"/>

        <xsl:text disable-output-escaping="yes"><![CDATA[###############################################

# Statements

class _X3DStatement:
    """
    All X3D statements implement _X3DStatement abstract type.
    """
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def NAME(cls):
        """ Name of this X3D Statement class. """
        return '_X3DStatement'
    @classmethod
    def FIELD_DECLARATIONS(cls):
        """ Field declarations for this node: name, defaultValue, type, accessType, inheritedFrom """
        return []
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/components/core.html#AbstractX3DStructure'
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html'
    def __init__(self, class_="", id_="", style_=""):
        self.class_ = class_
        self.id_ = id_
        self.style_ = style_
        # if _DEBUG: print('...DEBUG... in X3DNode __init__(' + str(class_) + ',' + str(id_) + ',' + str(style_) + ',' + ')', flush=True)
    @property # getter - - - - - - - - - -
    def class_(self):
        """ Space-separated list of classes, reserved for use by CSS cascading stylesheets. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__class_
    @class_.setter
    def class_(self, class_):
        if  class_ is None:
            class_ = SFString.DEFAULT_VALUE()
        assertValidSFString(class_)
        self.__class_ = class_
    @property # getter - - - - - - - - - -
    def id_(self):
        """ id_ attribute is a unique identifier for use within HTML pages. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__id_
    @id_.setter
    def id_(self, id_):
        if  id_ is None:
            id_ = SFString.DEFAULT_VALUE()
        assertValidSFString(id_)
        self.__id_ = id_
    @property # getter - - - - - - - - - -
    def style_(self):
        """ Space-separated list of classes, reserved for use by CSS cascading style_sheets. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__style_
    @style_.setter
    def style_(self, style_):
        """ Space-separated list of classes, reserved for use by CSS cascading style_sheets. Appended underscore to field name to avoid naming collision with Python reserved word. """
        if  style_ is None:
            style_ = SFString.DEFAULT_VALUE()
        assertValidSFString(style_)
        self.__style_ = style_
    def __repl__(self):
        result = self.NAME() + '('
        # if _DEBUG: print(self.NAME() + ' self.FIELD_DECLARATIONS(): ' + str(self.FIELD_DECLARATIONS))
        if self.FIELD_DECLARATIONS():
            for each in self.FIELD_DECLARATIONS():
                # if _DEBUG: print(self.NAME() + ' for each in self.FIELD_DECLARATIONS(): each=' + str(each))
                name = each[0]
                default = each[1]
                type_ = each[2]
                accessType = each[3]
                value = getattr(self, name)
                # if _DEBUG: print('gettattr(self, ' + str(name) + ') value="' + str(value)[:100] + '" for FIELD_DECLARATIONS() ' + str(each) + ')', flush=True)
                if value != default:
                    if  isinstance(value, list): # avoid X3DTypeError if value is not iterable
                        result += str(name) + '=['
                        for each in value:
                            result += str(each) + ', '
                            # if _DEBUG: print('...DEBUG... _X3DStatement debug: str(each)=' + str(each), flush=True)
                        result = result.rstrip(', ')
                        result += '],'
                    elif isinstance(value, str) and "'" in value:
                        result += str(name) + '=' + '"' + str(value)[:100] + '"' + ','
                    elif isinstance(value, str) and value != default:
                        result += str(name) + '=' + "'" + str(value)[:100] + "'" + ','
                    elif value != default:
                        result += str(name) + '='       + str(value)[:100]       + ','
                    # elif _DEBUG:
        #   result += str(name) + '=' + "'" + str(value)[:100] + "'" + ','
        return result.strip().rstrip(',').rstrip(', ') + ')'
    def __str__(self):
        return self.__repl__().strip() # _X3DStatement

def isX3DStatement(value):
    """
    Whether or not value is an _X3DStatement object.
    """
    return isinstance(value, _X3DStatement)

class Comment(_X3DStatement):
    """
    X3D statement containing zero or more comment strings.
    """
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def NAME(cls):
        """ Name of this X3D Statement class. """
        return 'Comment'
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/components/core.html#Organization'
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html'
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def DEFAULT_VALUE(cls):
        """ Default value for comments is empty string """
        return ''
    @classmethod
    def FIELD_DECLARATIONS(cls):
        """ Field declarations for this node: name, defaultValue, type, accessType, inheritedFrom """
        return []
    @classmethod
    def REGEX_PYTHON(cls):
        """' Regular expression for validating values, for more information see https://www.web3d.org/specifications/X3dRegularExpressions.html """
        return r'(\s|\S)*' # (includes lower-case true, false)
    @classmethod
    def REGEX_XML(cls):
        """' Regular expression for validating values, for more information see https://www.web3d.org/specifications/X3dRegularExpressions.html """
        return r'(\s|\S)*' # (includes lower-case true, false)
    def __init__(self, value=''):
        self.value = value
    @property # getter - - - - - - - - - -
    def value(self):
        """ Provide list of comment strings. """
        return self.__value
    @value.setter
    def value(self, value):
        """ The value setter only allows correctly typed values. """
        if  value is None:
            value = SFString.DEFAULT_VALUE()
        self.__value = str(value)
    # output function - - - - - - - - - -
    def XML(self, indentLevel=0, syntax="XML"):
        """ <!-- XML comments are wrapped in special delimiters --> """
        result = ''
        indent = '  ' * indentLevel
        if self.value:
            result = indent + '<!-- ' + self.value + ' -->' + '\n'
        return result
    # output function - - - - - - - - - -
    def VRML(self, indentLevel=0, VRML97=False):
        """ VRML comments begin with # effective to end of line """
        result = ''
        indent = '  ' * indentLevel
        if self.value:
            result = '\n' + indent + '# ' + self.value + '\n' + indent
        return result
    # output function - - - - - - - - - -
    def JSON(self, indentLevel=0, syntax="JSON"):
        """ JSON does not support comments, so X3D JSON created a specific object for them """
        result = ''
        indent = '  ' * indentLevel
        if self.value:
            result = indent + '{ "#comment" : "' + self.value + '" }' + ''  # John: removed comment for head join
        return result

def isComment(value):
    """
    Whether or not value is a Comment object.
    """
    return isinstance(value, Comment)

]]></xsl:text>
        <xsl:apply-templates select="//Statements/*"/>
        <xsl:text>###############################################

# Concrete Nodes

def isX3DNode(value):
    """
    Whether or not value is a concrete node (Shape WorldInfo etc.) meaning any _X3DNode object.
    """
    return isinstance(value, _X3DNode)

</xsl:text>
        <xsl:apply-templates select="//ConcreteNodes/*"/>
        <xsl:text>###############################################

# Exceptions
</xsl:text>
        <xsl:call-template name="Exceptions"/>
        <xsl:text>###############################################

# Python x3d Package Loading Complete

# TODO how to introspect the version number at run time from the object. Specifically,
# get the magic dictionary __dict__ and then perform standard dictionary lookups on that version key.

print("x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!", flush=True)

###############################################
</xsl:text>
<!-- (testing version) (post-deployment revisions)

    TODO how to perform runtime look up __version__ or setup.py setuptools.setup(
    name="x3d",
    version="4.0.54", 
-->
        </xsl:result-document>
    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="UtilityFunctions">
        <xsl:text>
def metaDiagnostics(self, headElement=None):
    """
    Utility function to return any meta info, hint, warning, error, TODO values in this model.
    """
    if  headElement is None:
        headElement = self
    if  isinstance(headElement, X3D):
        headElement = headElement.head
    # print('type(headElement)=' + str(type(headElement)), flush=True) # diagnostic
    if  isinstance(headElement, head):
        result = "meta information, "
        for each in headElement.children:
            if isinstance(each, meta) and each.name in ('info', 'hint', 'warning', 'error', 'TODO'):
                result += each.name.strip() + ': ' + each.content.strip()
                if  result.endswith('.') or result.endswith(','):
                    result += ' '
                else:
                    result += ', '
        if  result.strip() != "meta information,":
            return result.rstrip(', ').strip()
    return ''

def prependLineNumbers(someText="", lineNumber=0, blockInterval = 3):
    """
    Utility function to prepend line numbers to block of text, can optionally define lineNumber and blockInterval.
    """
    # https://stackoverflow.com/questions/64621076/how-to-add-line-numbers-to-multiline-string
    result = ''
    count = 1
    splitLines = someText.splitlines()
    if not lineNumber:
        lineNumber = 0
    if lineNumber == 0:
        first = 0
        last  = len(splitLines)
    else:
        first = max(lineNumber - blockInterval - 1, 0)
        last  = min(lineNumber + blockInterval,     len(splitLines))
        print("*** issue in line", str(lineNumber), "of", str(len(splitLines)), "***") # "first=" + str(first), "last=" + str(last) +
    for line in splitLines[first:last]:
        result += ("{}{:2d}{}{}".format("[",first + count,"] ",line)) + '\n'
        count += 1
    return result

</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="Exceptions">
        <xsl:text>
class X3DError(Exception):
    """ Base class for all exceptions raised by this module.
        Reference: X3D Scene Access Interface (SAI), 5.3 Error types
        https://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html
    """

class X3DTypeError(X3DError):
    """ Type error for simple fields (SFBool, SFInt32, SFVec3f etc.) or contained nodes (SFNode, MFNode) according to content model."""

class X3DValueError(X3DError):
    """ Value error for a given X3D type."""

</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <!-- functions to check valid values each X3D field type -->
    <xsl:template name="FieldValidationFunctions">
        <xsl:text disable-output-escaping="yes"><![CDATA[
# Type-specific functions to check for valid values, throw exception if illegal value is found

def fixBoolean(value, default=None):
    """
    Utility function to convert boolean to corresponding Python value.
    """
    # if _DEBUG: print('fixBoolean(value=' + str(value) + ', type=' + str(type(value)) + ', default=' + str(default) + ')', flush=True)
    if  value is None:
        # if _DEBUG: print('...DEBUG... fixBoolean set value to default=' + str(default))
        return default
#   print('fixBoolean #0a')
#    if isinstance(value, MFBool):
#        value = value.value # dereference
#       print('fixBoolean #0a dereferenced')
#   print('fixBoolean #0b')
    if isinstance(value, list) and len(value) == 0:
        return value
#   print('fixBoolean #1') # debug
    if isinstance(value, list) and len(value) == 1:
        # if _DEBUG: print('fixBoolean downcasting by resetting singleton list value=' + str(value) + ' as value=' + str(value[0]), flush=True)
        return value[0] # dereference
    if isinstance(value, SFBool):
        return value.value # dereference
    if isinstance(value, MFBool) and len(value) == 1:
        return value.value[0] # dereference
#   print('fixBoolean #2') # debug
    if value in ('true', 'True'):
        return True
    if value in ('false', 'False'):
        return False
#   print('fixBoolean #3') # debug
    if isinstance(value, bool):
        return value
#   print('fixBoolean #4') # debug
    if isinstance(value, MFBool):
        value = value.value # dereference value from base type
#       print('fixBoolean #4a, dereference MFBool') # debug
    if isinstance(value, list):
#       print('fixBoolean #4b found list, value=' + str(value), ' length=' + str(len(value))) # debug
        index = 0
        result = value
        for each in value:
            if  each in ('true', 'True'):
                result[index] = True
            elif each in ('false', 'False'):
                result[index] = False
            while isinstance(each, list) and len(each) == 1:
                # if _DEBUG: print('fixBoolean downcasting by extracting singleton list value[' + str(index) + ']=' + str(each) + ' as each[0]=' + str(each[0]), flush=True)
                result[index] = each[0]
#           print('fixBoolean #4c found each=' + str(each), 'result=' + str(result), flush=True) # debug
            if not isinstance(result[index], bool):
                # print(flush=True)
                raise X3DTypeError('fixBoolean(value=' + str(value) + ') MFBool value[' + str(index) + ']=' + str(each) + ', result[' + str(index) + ']=' + str(result[index]) + ' with type=' + str(type(value)) + ' is not a valid Python bool expression')
            index += 1
        # if _DEBUG: print('...DEBUG...fixBoolean result=' + str(result), flush=True)
        return result
#   print('fixBoolean #5, unhandled case: value=' + str(value), ' length=' + str(len(value))) # debug
    print(flush=True)
    raise X3DTypeError('fixBoolean(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python bool')

def isPositive(value):
    """
    Utility function to confirm positive value(s) greater than or equal to zero.
    """
    if  value is None:
        return None
    if isinstance(value, list) and any(isinstance(x, tuple) for x in value):
        for each in value:
            for element in each:
                if element <= 0:
                    return False
        return True
    if isinstance(value, (list, tuple)):
        for each in value:
            if each <= 0:
                return False
        return True
    if isinstance(value, (int, float)):
        return value > 0
    raise X3DTypeError('isPositive(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python number')

def assertPositive(fieldName, value):
    """
    Utility function to raise X3DTypeError if not isPositive(value).
    """
    # if _DEBUG: print('...DEBUG... assertPositive(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isPositive(value), str(fieldName) + '=' + str(value) + ' fails assertPositive requirements: value(s) must be greater than or equal to zero'

def isNonNegative(value):
    """
    Utility function to confirm nonnegative value(s) greater than or equal to zero.
    """
    if  value is None:
        return None
    if isinstance(value, list) and any(isinstance(x, tuple) for x in value):
        for each in value:
            for element in each:
                if element < 0:
                    return False
        return True
    if isinstance(value, (list, tuple)):
        # if _DEBUG: print('isNonNegative: ', value, flush=True)
        for each in value:
            if each < 0:
                return False
        return True
    if isinstance(value, (int, float)):
        return value >= 0
    raise X3DTypeError('isNonNegative(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python number')

def assertNonNegative(fieldName, value):
    """
    Utility function to raise X3DTypeError if not isNonNegative(value).
    """
    # if _DEBUG: print('...DEBUG... assertNonNegative(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isNonNegative(value), str(fieldName) + '=' + str(value) + ' fails assertNonNegative requirements: value(s) must be greater than or equal to zero'

def isZeroToOne(value):
    """
    Utility function to confirm value(s) in range [0..1]
    """
    # if _DEBUG: print('...DEBUG... isZeroToOne(' + str(value) + ')', flush=True)
    if  value is None:
        return None
    if isinstance(value,_X3DField):
        value = value.value # dereference
    if isinstance(value, (list, tuple)):
        for each in value:
            if isinstance(each, (list, tuple)):
                for another in each:
                    if not 0 <= another <= 1:
                        return False
            elif not 0 <= each <= 1:
                return False
        return True
    if isinstance(value, (int, float)):
        return 0 <= value <= 1
    raise X3DTypeError('isZeroToOne(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python number')

def assertZeroToOne(fieldName, value):
    """
    Utility function to raise X3DTypeError if not isZeroToOne(value)
    """
    # if _DEBUG: print('...DEBUG... assertZeroToOne(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isZeroToOne(value), str(fieldName) + '=' + str(value) + ' fails assertZeroToOne requirements: value(s) must be in range [0..1]'

def isLessThanEquals(value, maximum):
    """
    Utility function to confirm value(s) less than or equal to maximum.
    """
    # if True or _DEBUG: print('* debug: isLessThanEquals(' + str(value) + ')', flush=True)
    if  value is None:
        return None
    if isinstance(value, list) and any(isinstance(x, tuple) for x in value):
        for each in value:
            for element in each:
                if element > maximum:
                    return False
        return True
    if isinstance(value, (list, tuple)):
        for each in value:
            if each > maximum:
                return False
        return True
    if isinstance(value, (int, float)):
        return value <= maximum
    raise X3DTypeError('isLessThanEquals(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python number')

def assertLessThanEquals(fieldName, value, maximum):
    """
    Utility function to raise X3DTypeError if not isLessThanEquals(value)
    """
    # if _DEBUG: print('...DEBUG... assertLessThanEquals(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isLessThanEquals(value, maximum), fieldName + '=' + str(value) + ' fails assertLessThanEquals maximum=' + str(maximum)

def isLessThan(value, maximum):
    """
    Utility function to confirm value(s) less than maximum.
    """
    # if True or _DEBUG: print('* debug: isLessThan(' + str(value) + ')', flush=True)
    if  value is None:
        return None
    if isinstance(value, list) and any(isinstance(x, tuple) for x in value):
        for each in value:
            for element in each:
                if element >= maximum:
                    return False
        return True
    if isinstance(value, (list, tuple)):
        for each in value:
            if each >= maximum:
                return False
        return True
    if isinstance(value, (int, float)):
        return value < maximum
    raise X3DTypeError('isLessThan(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python number')

def assertLessThan(fieldName, value, maximum):
    """
    Utility function to raise X3DTypeError if not isLessThan(value)
    """
    # if _DEBUG: print('...DEBUG... assertLessThan(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isLessThan(value, maximum), str(fieldName) + '=' + str(value) + ' fails assertLessThan maximum=' + str(maximum)

######
def isGreaterThanEquals(value, minimum):
    """
    Utility function to confirm value(s) less than or equal to minimum.
    """
    # if True or _DEBUG: print('* debug: isGreaterThanEquals(' + str(value) + ')', flush=True)
    if  value is None:
        return None
    if isinstance(value, list) and any(isinstance(x, tuple) for x in value):
        for each in value:
            for element in each:
                if element < minimum:
                    return False
        return True
    if isinstance(value, (list, tuple)):
        for each in value:
            if each < minimum:
                return False
        return True
    if isinstance(value, (int, float)):
        return value >= minimum
    raise X3DTypeError('isGreaterThanEquals(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python number')

def assertGreaterThanEquals(fieldName, value, minimum):
    """
    Utility function to raise X3DTypeError if not isGreaterThanEquals(value)
    """
    # if _DEBUG: print('...DEBUG... assertGreaterThanEquals(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isGreaterThanEquals(value, minimum), str(fieldName) + '=' + str(value) + ' fails assertGreaterThanEquals minimum=' + str(minimum)

def isGreaterThan(value, minimum):
    """
    Utility function to confirm value(s) less than minimum.
    """
    # if True or _DEBUG: print('* debug: isGreaterThan(' + str(value) + ')', flush=True)
    if isinstance(value, list) and any(isinstance(x, tuple) for x in value):
        for each in value:
            for element in each:
                if element <= minimum:
                    return False
        return True
    if isinstance(value, (list, tuple)):
        for each in value:
            if each <= minimum:
                return False
        return True
    if isinstance(value, (int, float)):
        return value > minimum
    raise X3DTypeError('isGreaterThan(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python number')

def assertGreaterThan(fieldName, value, minimum):
    """
    Utility function to raise X3DTypeError if not isGreaterThan(value)
    """
    # if _DEBUG: print('...DEBUG... assertGreaterThan(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isGreaterThan(value, minimum), str(fieldName) + '=' + str(value) + ' fails assertGreaterThan minimum=' + str(minimum)

def isBoundingBox(value):
    """
    Utility function to confirm legal X3D bounding box value of (-1 -1 -1) or nonnegative triple.
    """
    if value is None:
        return None
    # if True or _DEBUG: print('* debug: isBoundingBox(' + str(value) + ')', 'isinstance(value, tuple)=' + str(isinstance(value, tuple)), 'len(value)=' + str(len(value)), flush=True)
    if isinstance(value, (list, tuple)):
        if len(value) != 3:
            return False
        if value[0] == -1 and value[1] == -1 and value[2] == -1:
            return True
        return isNonNegative(value) # legal bounding box tuple
    raise X3DTypeError('isBoundingBox(value=' + str(value) + ') with type=' + str(type(value)) + ') is not a valid Python numeric triple')

def assertBoundingBox(fieldName, value):
    """
    Utility function to raise X3DTypeError if not isBoundingBox(value)
    """
    # if True or _DEBUG: print('* debug: assertBoundingBox(' + str(fieldName) + ', ' + str(value) + ')', flush=True)
    assert isBoundingBox(value), str(fieldName) + '=' + str(value) + ' fails assertBoundingBox requirements: must be (-1, -1, -1) or non-negative 3-tuple'
]]></xsl:text>

        <xsl:for-each select="//FieldTypes/FieldType[not(@name = 'X3DField') and not(@name = 'X3DArrayField')]">
            <xsl:variable name="fieldTypeName" select="@type"/>
            <xsl:variable name="pythonBaseType">
                <xsl:call-template name="pythonBaseType">
                    <xsl:with-param name="x3dFieldType" select="$fieldTypeName"/>
                </xsl:call-template>
            </xsl:variable>
            <xsl:variable name="tupleSize" select="@tupleSize"/>
            <xsl:variable name="isTuple"         select="(number($tupleSize) > 1)"/>
            <xsl:variable name="isList"          select="starts-with($fieldTypeName,'MF') or ($fieldTypeName = 'SFImage')"/>
            <xsl:variable name="hasEmptyDefault" select="(string-length(@defaultValue) = 0)"/>

            <xsl:text>
def isValid</xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>(value):
    """
    Utility function to determine type validity of a </xsl:text><xsl:value-of select="$fieldTypeName"/><xsl:text> value.
    """</xsl:text>
            <xsl:if test="not(contains($fieldTypeName,'Node'))">
               <xsl:text>
    if re.fullmatch(</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>().REGEX_PYTHON(),str(value)) is None:
        print('* regex mismatch </xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>().REGEX_PYTHON(),' + str(value) + ')')
        return False</xsl:text>
            </xsl:if>
            <xsl:text>
    try:
        </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>(value)
        return True
    except ValueError:
        print('isValid</xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text> failed with illegal value=' + str(value))
        return False</xsl:text>

            <xsl:text>
    ### if isinstance(value, _X3DField):
    ###     if not isinstance(value, SF</xsl:text>
            <xsl:value-of select="substring($fieldTypeName,3)"/>
            <xsl:text>) and not isinstance(value, MF</xsl:text>
            <xsl:value-of select="substring($fieldTypeName,3)"/>
            <xsl:text>):
    ###         # if _DEBUG: print('</xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text> type mismatch diagnostic: value=' + str(value)[:100] + ' has type=' + str(type(value)) + ', isinstance(value, </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>)=' + str(isinstance(value, </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>)), flush=True)
    ###        return False # type mismatch!</xsl:text>
            <xsl:text>
    ### if isinstance(value, </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>):
    ###     value = value.value # dereference value from base type</xsl:text>
            <xsl:if test="not(contains($fieldTypeName,'Node'))">
               <xsl:text>
    ###     if re.fullmatch(</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>().REGEX_PYTHON(),str(value)) is None:
    ###         return False</xsl:text>
            </xsl:if>
               <xsl:text>
    ###     return True</xsl:text>
            <!-- SF/MF promotion/demotion -->
            <xsl:choose>
                <xsl:when test="starts-with($fieldTypeName, 'SF')">
                    <xsl:text>
    ### if isinstance(value, MF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>) and (len(value) == 1) and isValidMF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>(value):
    ###     value = value.value[0] # dereference value from this MF type
    ###     return True</xsl:text>
                </xsl:when>
                <xsl:when test="starts-with($fieldTypeName, 'MF')">
                    <xsl:text>
    ### if isinstance(value, SF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>):
    ###     value = list(value.value) # dereference value from this SF type, convert to list #1
    ###     return True</xsl:text>
                </xsl:when>
            </xsl:choose>
            
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'MFNode')">
                    <xsl:text>
    ### if value and isinstance(value,list):
    ###     for each in value:
    ###         if not isinstance(each, (_X3DNode, _X3DStatement)):
    ###             return False</xsl:text>
                </xsl:when>
                <xsl:otherwise>
        <xsl:text>
    ### if not isinstance(value, </xsl:text>
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'MFNode')">
                    <xsl:text>_X3DNode) and not isinstance(value, _X3DStatement</xsl:text>
                </xsl:when>
                <xsl:when test="$isList">
                    <xsl:text>list</xsl:text>
                </xsl:when>
                <xsl:when test="$isTuple">
                    <xsl:text>tuple</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:if test="($pythonBaseType = 'float')">
                        <xsl:text>) and not isinstance(value, int</xsl:text>
                    </xsl:if>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>):
    ###     return False</xsl:text>
            
            <xsl:choose>
                <xsl:when test="($isTuple and not($isList)) or ($isList and not($isTuple))">
                    <xsl:if test="($tupleSize > 1)">
                        <xsl:text>
    ### tupleCount = 0</xsl:text>
                    </xsl:if>
                    <xsl:text>
    ### for each in value:</xsl:text>
                    <xsl:if test="($tupleSize > 1)">
                        <xsl:text>
    ###     tupleCount += 1</xsl:text>
                    </xsl:if>
                    <xsl:text>
    ###     while isinstance(each, list) and len(each) == 1:
    ###         each = each[0] # dereference
    ###     if isinstance(each, SF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>):
    ###         each = each.value # dereference
    ###     if not isinstance(each, </xsl:text>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:if test="($pythonBaseType = 'float')">
                        <xsl:text>) and not isinstance(each, int</xsl:text>
                    </xsl:if>
                    <xsl:text>):
    ###         return False</xsl:text>
                    <!-- SF range checks -->
                    <xsl:choose>
                        <xsl:when test="starts-with($fieldTypeName, 'SFColor')">
                            <xsl:text disable-output-escaping="yes"><![CDATA[
    ###     if (each < 0) or (each > 1):
    ###         return False]]></xsl:text>
                        </xsl:when>
                    </xsl:choose>
                    <!-- tupleSize checks -->
                    <xsl:if test="($tupleSize > 1)">
                        <xsl:text>
    ### if tupleCount != </xsl:text>
                        <xsl:value-of select="$tupleSize"/>
                        <xsl:text>:
    ###     return False</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="$isTuple and $isList">
                    <xsl:text>
    ### index = 0
    ### for each in value:
    ###     index += 1
   ###      if len(each) % </xsl:text>
                        <xsl:value-of select="$fieldTypeName"/>
                        <xsl:text>().TUPLE_SIZE()  != 0:
    ###         # if _DEBUG:
    ###         print('* isValid</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text> tuple ' + str(each) + ' has length ' + str(len(each)) + ' which is not a multiple of </xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>().TUPLE_SIZE() =' + str(</xsl:text>
                        <xsl:value-of select="$fieldTypeName"/>
                        <xsl:text>().TUPLE_SIZE() ) + ' for value=' + str(value), flush=True)
    ###         return False
    ###     for element in each:
    ###         if not isinstance(element, </xsl:text>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:if test="($pythonBaseType = 'float')">
                        <xsl:text>) and not isinstance(element, int</xsl:text>
                    </xsl:if>
                    <xsl:text>):
    ###             return False</xsl:text>
                    <!-- MF range checks -->
                    <xsl:choose>
                        <xsl:when test="starts-with($fieldTypeName, 'MFColor')">
                            <xsl:text disable-output-escaping="yes"><![CDATA[
    ###         if (element < 0) or (element > 1):
    ###             return False]]></xsl:text>
                        </xsl:when>
                    </xsl:choose>
                </xsl:when>
            </xsl:choose>
            <xsl:if test="contains($fieldTypeName, 'Color')">
                <xsl:text>
    ### if not isZeroToOne(value):
    ###     return False</xsl:text>
            </xsl:if>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:if test="($fieldTypeName = 'SFImage')">
                <xsl:text disable-output-escaping="yes"><![CDATA[
    ### if len(value) > 0: # SFImage list length checks
    ###     if 0 < len(value) < 3:
    ###         return False # SFImage list must start with width, height and number of components (0..4)
    ###     width = value[0]
    ###     height = value[1]
    ###     # numberComponents = value[2]
    ###     if  len(value) != (width * height) + 3: # assumes each value in array has all component values in single integer
    ###         print('SFImage array length of ' + str(len(value)) + ' does not equal (width=' + str(width)+ ' * height=' + str(height)+ ') + 3) = ' + str(width * height * numberComponents + 3) + ' (numberComponents=' + numberComponents + ')', flush=True)
    ###         return False # SFImage has invalid list length]]></xsl:text>
            </xsl:if>
            <xsl:text>
    ### return True

def assertValid</xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>(value):
    """
    Utility function to assert type validity of a </xsl:text><xsl:value-of select="$fieldTypeName"/><xsl:text> value, otherwise raise X3DTypeError with diagnostic message.
    """</xsl:text>
            <xsl:text>
    try:
        </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>(value)
    except Exception as error:
        # https://stackoverflow.com/questions/66995878/consider-explicitly-re-raising-using-the-from-keyword-pylint-suggestion
        print(flush=True)
        raise X3DTypeError(str(value)[:100] + ' has type ' + str(type(value)) + ' but is not a valid </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>') from error</xsl:text>

            <!-- provide special error message if SF type provided for MF field 
            <xsl:if test="starts-with($fieldTypeName, 'MF')">
                <xsl:variable name="sfTypeName" select="concat('S',substring($fieldTypeName,2,string-length($fieldTypeName)))"/>
                <xsl:text>
    if isinstance(value, list) and assertValid</xsl:text>
                <xsl:value-of select="$sfTypeName"/>
                <xsl:text>(value):
        # print(flush=True)
        raise X3DTypeError(str(value)[:100] + ' has X3D type </xsl:text>
                <xsl:value-of select="$sfTypeName"/>
                <xsl:text> rather than </xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>, must be a Python list')</xsl:text>
            </xsl:if>
            -->
            <!-- isinstance(value, bool): # equivalent to ((value == True) or (value == False)): -->

            <!-- <xsl:if test="ends-with($fieldTypeName,'String')">
                        <xsl:text>
    print("debug list commence...")</xsl:text>
                 </xsl:if> -->
            <xsl:text>
    # if _DEBUG: print('...DEBUG... debug value.__class__=' + str(value.__class__) + ', issubclass(value.__class__, _X3DField)=' + str(issubclass(value.__class__, _X3DField)) + ', super(value.__class__)=' + str(super(value.__class__)), flush=True)
    # if _DEBUG: print('value=', value, 'str(value)=', str(value))
    ### if isinstance(value, _X3DField) and not isinstance(value, SF</xsl:text>
            <xsl:value-of select="substring($fieldTypeName,3)"/>
            <xsl:text>) and not isinstance(value, MF</xsl:text>
            <xsl:value-of select="substring($fieldTypeName,3)"/>
            <xsl:text>):
    ###     # print(flush=True)
    ###     raise X3DTypeError(str(value)[:100] + ' has type ' + str(type(value)) + ' and is not a </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>')</xsl:text>
            <xsl:text>
    ### if isinstance(value, </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>):
    ###     value = value.value # dereference value from this base type #2a</xsl:text>
                <!-- <xsl:if test="ends-with($fieldTypeName,'String')">
                        <xsl:text>
    ###     print("debug list #2a")</xsl:text>
                    </xsl:if>-->
                    <xsl:choose>
                        <xsl:when test="contains($fieldTypeName, 'Int32')">
                            <xsl:text>
    ### if isinstance(value,str):
    ###     try:
    ###         value = SFInt32(value)
    ###         print('found string for </xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text>, isinstance(value,list)=' + str(isinstance(value,list)),flush=True)
    ###         return True
    ###     except:
    ###         raise X3DTypeError(str(value)[:100] + ', type=' + str(type(value)) + ' is not a valid int value for SFInt32')</xsl:text>
                        </xsl:when>
                        <xsl:when test="contains($fieldTypeName,'Double') or contains($fieldTypeName,'Float') or contains($fieldTypeName,'Color') or contains($fieldTypeName,'Rotation') or contains($fieldTypeName,'Vec')">
                            <xsl:text>
    ### if isinstance(value,str):
    ###     value = </xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text>(value)
    ###     print('found string for </xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text>, isinstance(value,list)=' + str(isinstance(value,list)),flush=True)</xsl:text>
                        </xsl:when>
                    </xsl:choose>
            <!-- SF/MF promotion/demotion -->
            <xsl:choose>
                <xsl:when test="starts-with($fieldTypeName, 'SF')">
                    <xsl:text>
    ### elif isinstance(value, MF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>) and len(value) == 1:
    ###     value = value.value[0] # dereference value from this MF type #2b</xsl:text>
                    <!-- <xsl:if test="ends-with($fieldTypeName,'String')">
                        <xsl:text>
    ###     print("debug list #2b")</xsl:text>
                    </xsl:if> -->
                    <xsl:choose>
                        <xsl:when test="($fieldTypeName = 'SFString')">
                            <!-- ignore, no additional test performed -->
                        </xsl:when>
                        <xsl:when test="($fieldTypeName = 'SFInt32')">
                            <xsl:text>
    # https://stackoverflow.com/questions/354038/how-do-i-check-if-a-string-is-a-number-float
    ### elif isinstance(value, str):
    ###     try:
    ###         int(value) # checks but does not set value, may throw exception
    ###     except ValueError:
    ###         print('</xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text> encountered string with illegal value=' + str(value))
    ###         raise X3DTypeError(str(value)[:100] + ', type=' + str(type(value)) + ' is not a valid int value for SFInt32')</xsl:text>
                        </xsl:when>
                        <xsl:when test="not(contains($fieldTypeName, 'Bool')) and not(contains($fieldTypeName, 'String')) and not(contains($fieldTypeName, 'Node'))">
                            <xsl:text>
    # https://stackoverflow.com/questions/354038/how-do-i-check-if-a-string-is-a-number-float
    ### elif isinstance(value, str):
    ###     try:
    ###         float(value) # checks but does not set value, may throw exception
    ###     except ValueError:
    ###         print('</xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text> encountered string with illegal value=' + str(value))
    ###         raise X3DTypeError(str(value)[:100] + ', type=' + str(type(value)) + ' is not a valid float value for </xsl:text>
                        <xsl:value-of select="$fieldTypeName"/>
                        <xsl:text>')</xsl:text>
                        </xsl:when>
                    </xsl:choose>
                </xsl:when>
                <xsl:when test="starts-with($fieldTypeName, 'MF')">
                    <xsl:text>
    ### elif (isinstance(value, SF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>)</xsl:text>
                    <xsl:if test="ends-with($fieldTypeName,'String')">
                        <xsl:text> or isinstance(value, str)</xsl:text>
                    </xsl:if>
                    <xsl:text>) and not isinstance(value, list):
        ### value = list(SF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>(value).value) # dereference value from this SF type, convert to list #2c</xsl:text>
                </xsl:when>
            </xsl:choose>
            
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'MFNode')">
                    <xsl:text>
    ### if value and isinstance(value,list):
    ###     for each in value:
    ###         if not isinstance(each, _X3DNode) and not isinstance(each, _X3DStatement):
    ###             print(flush=True)
    ###             raise X3DTypeError(str(value)[:100] + ' element ' + str(each) + ', type=' + str(type(each)) + ' is not a valid _X3DNode or _X3DStatement for MFNode')</xsl:text>
                </xsl:when>
                <xsl:otherwise>
            <xsl:text>
    ### if not isinstance(value, </xsl:text>
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'MFNode')">
                    <xsl:text>_X3DNode) and not isinstance(value, _X3DStatement</xsl:text>
                </xsl:when>
                <xsl:when test="$isList">
                    <xsl:text>list</xsl:text>
                </xsl:when>
                <xsl:when test="$isTuple">
                    <xsl:text>tuple</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:if test="($pythonBaseType = 'float')">
                        <xsl:text>) and not isinstance(value, int</xsl:text>
                    </xsl:if>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>):
    ###     print(flush=True)
    ###     raise X3DTypeError(str(value)[:100] + ', type=' + str(type(value)) + ' is not a valid </xsl:text>
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'MFNode')">
                    <xsl:text>_X3DNode or _X3DStatement</xsl:text>
                </xsl:when>
                <xsl:when test="$isList">
                    <xsl:text>Python list</xsl:text>
                    <xsl:if test="($fieldTypeName = 'MFNode')">
                        <xsl:text> of X3D objects</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="$isTuple">
                    <xsl:text>Python tuple</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:text> value</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'SFBool')">
                    <xsl:text> (True or False)</xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text> for </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>')</xsl:text>
            
            <xsl:choose>
                <xsl:when test="($isTuple and not($isList)) or ($isList and not($isTuple))">
                    <xsl:text>
    ### # perform duplicative tests prior to isValid call in order to provide better assertion diagnostics #1</xsl:text>
                    <xsl:if test="($tupleSize > 1)">
                        <xsl:text>
    ### tupleCount = 0</xsl:text>
                    </xsl:if>
                    <xsl:text>
    ### for each in value:</xsl:text>
                    <xsl:if test="($tupleSize > 1)">
                        <xsl:text>
    ###     tupleCount += 1</xsl:text>
                    </xsl:if>
                    <xsl:text>
    ###     while isinstance(each, list) and len(each) == 1:
    ###         each = each[0] # dereference
    ###     if isinstance(each, SF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>):
    ###         each = each.value # dereference
    ###     if not isinstance(each, </xsl:text>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:if test="($pythonBaseType = 'float')">
                        <xsl:text>) and not isinstance(each, int</xsl:text>
                    </xsl:if>
                    <xsl:text>):
    ###         # print(flush=True)
    ###         raise X3DTypeError('</xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text> list has contained value=' + str(each) + ' with type=' + str(type(each)) + ' which is not a valid </xsl:text>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:text>')</xsl:text>
                    <!-- SF range checks -->
                    <xsl:choose>
                        <xsl:when test="starts-with($fieldTypeName, 'SFColor')">
                            <xsl:text disable-output-escaping="yes"><![CDATA[
    ###     if (each < 0) or (each > 1):
    ###         # print(flush=True)
    ###         raise X3DTypeError(']]></xsl:text>
                            <xsl:value-of select="$fieldTypeName"/>
                            <xsl:text>' + str(value)[:100] + ' has value ' + str(each) + ' with type=' + str(type(value)) + ' is  out of range [0..1] and is not a valid </xsl:text>
                            <xsl:value-of select="$fieldTypeName"/>
                            <xsl:text>')</xsl:text>
                        </xsl:when>
                    </xsl:choose>
                    <xsl:if test="($tupleSize > 1)">
                        <!-- tupleSize checks -->
                        <xsl:text>
    ### if tupleCount != </xsl:text>
                        <xsl:value-of select="$tupleSize"/>
                        <xsl:text>:
    ###     # print(flush=True)
    ###     raise X3DTypeError('</xsl:text>
                        <xsl:value-of select="$fieldTypeName"/>
                        <xsl:text> ' + str(value)[:100] + ', type=' + str(type(value)) + '</xsl:text>
                        <xsl:text> has ' + str(tupleCount) + ' elements instead of </xsl:text>
                        <xsl:value-of select="$tupleSize"/>
                        <xsl:text>')</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="$isTuple and $isList">
                    <xsl:text>
    # perform duplicative tests prior to isValid call in order to provide better assertion diagnostics #2
    ### if isinstance(value, list):
    ###     index = 0
    ###     for each in value:
    ###         if len(each) % </xsl:text>
                            <xsl:value-of select="$fieldTypeName"/>
                            <xsl:text>().TUPLE_SIZE()  != 0:
                # print(flush=True)
    ###             raise X3DValueError('</xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text> tuple ' + str(each) + ' has length ' + str(len(each)) + ' which is not a multiple of </xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text>().TUPLE_SIZE() =' + str(</xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text>().TUPLE_SIZE() ) + ' for value=' + str(value)[:100])
#            if not isinstance(each, (tuple, SF</xsl:text><!-- SF corresponding to this MF type -->
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>)):
#                # print(flush=True)
#                raise X3DTypeError('</xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text> element #' + str(index) + ' with value ' + str(each) + ', type=' + str(type(each)) + ' is not a valid tuple')
        ###     index += 1
        ###     if isinstance(each, tuple):
        ###         for element in each:
        ###             if not isinstance(element, </xsl:text>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:if test="($pythonBaseType = 'float')">
                        <xsl:text>) and not isinstance(element, int</xsl:text>
                    </xsl:if>
                    <xsl:text>):
        ###                 # print(flush=True)
        ###                 raise X3DTypeError('</xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text> element #' + str(index) + ' tuple ' + str(each) + ' has value=' + str(element) + ', type=' + str(type(element)) + ' that is not a valid </xsl:text>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:text>')</xsl:text>
                    <!-- MF range checks -->
                    <xsl:choose>
                        <xsl:when test="starts-with($fieldTypeName, 'MFColor')">
                            <xsl:text disable-output-escaping="yes"><![CDATA[
        ###             if (element < 0) or (element > 1):
        ###                 # print(flush=True)
        ###                 raise X3DTypeError(']]></xsl:text>
                            <xsl:value-of select="$fieldTypeName"/>
                            <xsl:text>' + str(value)[:100] + ' has value ' + str(element) + ' with type=' + str(type(value)) + ' out of range [0..1] and is not a valid </xsl:text>
                            <xsl:value-of select="$fieldTypeName"/>
                            <xsl:text>')</xsl:text>
                        </xsl:when>
                    </xsl:choose>
                </xsl:when>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="contains($fieldTypeName, 'Color')">
                    <xsl:text>
</xsl:text>
        ###             <xsl:text>    assertZeroToOne('</xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                    <xsl:text>', value)</xsl:text>
                </xsl:when>
            </xsl:choose>

                </xsl:otherwise>
            </xsl:choose>

            <xsl:text>
    ### if not isValid</xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>(value):
    ###     # print(flush=True)</xsl:text>
            <xsl:if test="($fieldTypeName = 'SFImage')">
                <xsl:text disable-output-escaping="yes"><![CDATA[
    ###     diagnostic = ''
    ###     if len(value) > 0: # SFImage list length checks
    ###         if 0 < len(value) < 3:
    ###             diagnostic = 'SFImage list must start with width, height and number of components (0..4)'
    ###         else:
    ###             width = value[0]
    ###             height = value[1]
    ###             numberComponents = value[2]
    ###             diagnostic = ' array length of ' + str(len(value)) + ' does not equal (width=' + str(width)+ ' * height=' + str(height)+ ') + 3) = ' + str(width * height + 3)]]></xsl:text>
            </xsl:if>
            <xsl:text>
    ###     raise X3DTypeError(str(value)[:100] + ', type=' + str(type(value)) + ' is not a valid </xsl:text>
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'MFNode')">
                    <xsl:text>_X3DNode or _X3DStatement</xsl:text>
                </xsl:when>
                <xsl:when test="$isList">
                    <xsl:text>Python list</xsl:text>
                    <xsl:if test="($fieldTypeName = 'MFNode')">
                        <xsl:text> of X3D objects</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="$isTuple">
                    <xsl:text>Python tuple</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>Python </xsl:text>
                    <xsl:value-of select="$pythonBaseType"/>
                    <xsl:text> value</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="($fieldTypeName = 'SFBool')">
                    <xsl:text> (True or False)</xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text> for </xsl:text>
            <xsl:value-of select="$fieldTypeName"/>
            <xsl:text>'</xsl:text>
            <xsl:if test="($fieldTypeName = 'SFImage')">
                <xsl:text> + diagnostic</xsl:text>
            </xsl:if>
            <xsl:text>)
    return True
</xsl:text>

        </xsl:for-each>
        <xsl:text>&#10;</xsl:text>
        
        <xsl:text>
def assertValidFieldInitializationValue(name, fieldType, value, parent=''):
    """
    Utility function to assert fieldType validity of a field initialization value, otherwise raise X3DTypeError with diagnostic message.
    """
    # if _DEBUG: print('...DEBUG... assertValidFieldInitializationValue name=' + str(name) + ', fieldType=' + str(fieldType) + ', value=' + str(value)[:100] + ', parent=' + parent, flush=True)
    # note that ExternProtoDeclare field definitions do not have any value
    if name is None:
        print('* assertValidFieldInitializationValue improper invocation: name=' + str(name) + ', fieldType=' + str(fieldType) + ', value=' + str(value)[:100] + ', parent=' + parent + ', ignored', flush=True)
        return None # ignore
    if value is None or (not(fieldType == bool) and not value):
        return None # ignore
    if fieldType == 'SFString':
        assertValidSFString(value)
    elif fieldType == 'MFString':
        assertValidMFString(value)
    elif (fieldType == 'SFBool') or (fieldType == bool) or isinstance(value, bool):
        assertValidSFBool(value)
    elif fieldType == 'MFBool':
        assertValidMFBool(value)
    elif (fieldType == 'SFInt32') or (fieldType == int) or isinstance(value, int):
        assertValidSFInt32(value)
    elif fieldType == 'MFInt32':
        assertValidMFInt32(value)
    elif (fieldType == 'SFFloat') or (fieldType == float) or isinstance(value, float):
        assertValidSFFloat(value)
    elif fieldType == 'MFFloat':
        assertValidMFFloat(value)
    elif fieldType == 'SFDouble':
        assertValidSFDouble(value)
    elif fieldType == 'MFDouble':
        assertValidMFDouble(value)
    elif fieldType == 'SFTime':
        assertValidSFTime(value)
    elif fieldType == 'MFTime':
        assertValidMFTime(value)
    elif fieldType == 'SFColor':
        assertValidSFColor(value)
    elif fieldType == 'MFColorRGBA':
        assertValidMFColorRGBA(value)
    elif fieldType == 'SFRotation':
        assertValidSFRotation(value)
    elif fieldType == 'MFRotation':
        assertValidMFRotation(value)
    elif fieldType == 'SFImage':
        assertValidSFImage(value)
    elif fieldType == 'MFImage':
        assertValidMFImage(value)
    elif fieldType == 'SFNode':
        assertValidSFNode(value)
    elif fieldType == 'MFNode':
        assertValidMFNode(value)
    elif fieldType == 'SFVec2f':
        assertValidSFVec2f(value)
    elif fieldType == 'MFVec2f':
        assertValidMFVec2f(value)
    elif fieldType == 'SFVec3f':
        assertValidSFVec3f(value)
    elif fieldType == 'MFVec3f':
        assertValidMFVec3f(value)
    elif fieldType == 'SFVec4f':
        assertValidSFVec4f(value)
    elif fieldType == 'MFVec4f':
        assertValidMFVec4f(value)
    elif fieldType == 'SFVec2d':
        assertValidSFVec2d(value)
    elif fieldType == 'MFVec2d':
        assertValidMFVec2d(value)
    elif fieldType == 'SFVec3d':
        assertValidSFVec3d(value)
    elif fieldType == 'MFVec3d':
        assertValidMFVec3d(value)
    elif fieldType == 'SFVec4d':
        assertValidSFVec4d(value)
    elif fieldType == 'MFVec4d':
        assertValidMFVec4d(value)
    elif fieldType == 'SFMatrix3d':
        assertValidSFMatrix3f(value)
    elif fieldType == 'MFMatrix3f':
        assertValidMFMatrix3f(value)
    elif fieldType == 'SFMatrix4f':
        assertValidSFMatrix4f(value)
    elif fieldType == 'MFMatrix4f':
        assertValidMFMatrix4f(value)
    elif fieldType == 'SFMatrix3d':
        assertValidSFMatrix3d(value)
    elif fieldType == 'MFMatrix3d':
        assertValidMFMatrix3d(value)
    elif fieldType == 'SFMatrix4d':
        assertValidSFMatrix4d(value)
    elif fieldType == 'MFMatrix4d':
        assertValidMFMatrix4d(value)
    elif (fieldType == str)   or isinstance(value, str):
        assertValidSFString(value)
    elif str(parent) == 'fieldValue':
        return True # TODO check further if possible
    elif (fieldType == list) or isinstance(value, list):
        try:
            if isinstance(value[0], tuple):
                print('*** assertValidFieldInitializationValue TODO validate list fieldType: name=' + str(name) + ', passed fieldType=' + str(fieldType) + ', fieldType(value)=' + str(fieldType(value)) + ', value=' + str(value)[:100] + ', parent=' + parent, flush=True)
                return True # TODO check further
            initialListItemType = fieldType(value[0])
            # https://stackoverflow.com/questions/522563/accessing-the-index-in-for-loops/28072982#28072982
            # https://stackoverflow.com/questions/1952464/in-python-how-do-i-determine-if-an-object-is-iterable
            for index, each in enumerate(value):
                assertValidFieldInitializationValue(name + '[' + str(index) + ']', initialListItemType, value[index], parent)
            return True
        except TypeError:
            return False # TODO check further if possible
    elif (fieldType == tuple) or isinstance(value, tuple):
        print('*** assertValidFieldInitializationValue TODO validate tuple fieldType: name=' + str(name) + ', passed fieldType=' + str(fieldType) + ', fieldType(value)=' + str(fieldType(value)) + ', value=' + str(value)[:100] + ', parent=' + parent, flush=True)
        return True # TODO check further if possible
#       initialListItemType = fieldType(value[0])
#       for index, each in enumerate(value):
#           assertValidFieldInitializationValue(name + '[' + str(index) + '], fieldType(value[index])', value[index], parent)
    else:
        print('*** assertValidFieldInitializationValue unknown fieldType: name=' + str(name) + ', passed fieldType=' + str(fieldType) + ', fieldType(value)=' + str(fieldType(value)) + ', value=' + str(value)[:100] + ', parent=' + parent, flush=True)
        return False # TODO check further if possible
    return True</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <!-- TODO raise X3DTypeError once fieldType checks are thorough and working -->

    </xsl:template>

    <!-- ===================================================== -->
    
    <!-- create python definitions for each X3D field type -->
    <xsl:template match="FieldType">
        
        <xsl:variable name="fieldTypeName" select="@type"/>
        <xsl:variable name="pythonBaseType">
            <xsl:call-template name="pythonBaseType">
                <xsl:with-param name="x3dFieldType" select="$fieldTypeName"/>
            </xsl:call-template>
        </xsl:variable>
        <xsl:variable name="tupleSize" select="@tupleSize"/>
        <xsl:variable name="isTuple"         select="(number($tupleSize) > 1)"/>
        <xsl:variable name="isList"          select="starts-with($fieldTypeName,'MF') or ($fieldTypeName = 'SFImage')"/>
        <xsl:variable name="hasEmptyDefault" select="(string-length(@defaultValue) = 0)"/>
        <xsl:variable name="annotation">
            <xsl:choose>
                <xsl:when test="contains($fieldTypeName, 'FBool')">
                    <xsl:text>Python Boolean values are capitalized as True or False. </xsl:text>
                    <xsl:value-of select="InterfaceDefinition/@appinfo"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="InterfaceDefinition/@appinfo"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="tupleSize">
            <xsl:call-template name="tupleSize">
                <xsl:with-param name="x3dType" select="@type"/>
            </xsl:call-template>
        </xsl:variable>

        <xsl:text>class </xsl:text>
        <xsl:value-of select="$fieldTypeName"/>
        <xsl:choose>
            <xsl:when test="starts-with($fieldTypeName,'SF')">
                <xsl:text>(_X3DField)</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName,'MF')">
                <xsl:text>(_X3DArrayField)</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:message>
                    <xsl:text>*** FieldType definitions, erroneous $fieldTypeName=</xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:text>:</xsl:text>
        
        <!-- Python docstring -->
        <xsl:if test="(string-length(normalize-space($annotation)) > 0)">
            <xsl:text>
    """
    </xsl:text>
        <xsl:text>Field type </xsl:text>
            <xsl:value-of select="$annotation"/>
            <xsl:text>
    """</xsl:text>
        </xsl:if>

        <!-- https://stackoverflow.com/questions/2682745/how-do-i-create-a-constant-in-python -->
        <xsl:text>
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def NAME(cls):
        """ Name of this X3D Field class. """
        return '</xsl:text>
        <xsl:value-of select="$fieldTypeName"/>
        <xsl:text>'</xsl:text>
        
        <!-- TODO is there a suggested name or form for documentation url? -->
        <xsl:text>
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return '</xsl:text>
        <xsl:value-of select="InterfaceDefinition/@specificationUrl"/>
        <xsl:text>'
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
        <xsl:value-of select="$fieldTypeName"/>
        <xsl:text>'</xsl:text>
    
        <xsl:text>
    @classmethod
    def DEFAULT_VALUE(cls):
        """ Default value defined for this data type by the X3D Specification """
        return </xsl:text>
        <xsl:variable name="defaultValue">
            <xsl:call-template name="pythonValue">
                <xsl:with-param name="x3dValue" select="@defaultValue"/>
                <xsl:with-param name="x3dType" select="$fieldTypeName"/>
            </xsl:call-template>
        </xsl:variable>
        <xsl:choose>
            <xsl:when test="starts-with($fieldTypeName,'MF')">
                <xsl:text>[] # use empty list object, don't keep resetting a mutable python DEFAULT_VALUE</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$defaultValue"/>
            </xsl:otherwise>
        </xsl:choose>

        <!-- few special declarations or functions are needed, since they are essentially built into python already for each of the sequence types -->
        <xsl:choose>
            <xsl:when test="($fieldTypeName = 'SFNode')">
                <xsl:text>
    @classmethod
    def FIELD_DECLARATIONS(cls):
        """ Field declarations for this node: name, defaultValue, type, accessType, inheritedFrom """
        return [('value', 'None', FieldType.SFNode, AccessType.inputOutput, 'SFNode')]</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFNode')">
                <xsl:text>
    @classmethod
    def FIELD_DECLARATIONS(cls):
        """ Field declarations for this node: name, defaultValue, type, accessType, inheritedFrom """
        return [('value', None, FieldType.MFNode, AccessType.inputOutput, 'MFNode')]</xsl:text>
            </xsl:when>
            <xsl:otherwise>
            </xsl:otherwise>
        </xsl:choose>
        
        <xsl:text>
    @classmethod
    def ARRAY_TYPE(cls):
        """ Whether or not this field class is array based. """
        return </xsl:text>
        <xsl:call-template name="pythonValue">
            <xsl:with-param name="x3dValue" select="@isArray"/>
            <xsl:with-param name="x3dType">
                <xsl:text>SFBool</xsl:text>
            </xsl:with-param>
        </xsl:call-template>
        <xsl:text>
    @classmethod
    def TUPLE_SIZE(cls):
        """ How many values make up each data tuple. """
        return </xsl:text>
        <xsl:call-template name="pythonValue">
            <xsl:with-param name="x3dValue" select="@tupleSize"/>
            <xsl:with-param name="x3dType">
                <xsl:text>SFBool</xsl:text>
            </xsl:with-param>
        </xsl:call-template>
        
        <xsl:variable name="regexPrefix">
            <xsl:choose>
                <xsl:when test="contains($fieldTypeName,'Node')">
                    <!-- no change -->
                </xsl:when>
                <xsl:when test="starts-with($fieldTypeName,'MFVec') or ($fieldTypeName = 'MFRotation') or starts-with($fieldTypeName,'MFColor')">
                    <xsl:text>\s*\[?\s*(\s*\(?</xsl:text><!-- prepend python list bracket and tuple parenthesis -->
                </xsl:when>
                <xsl:when test="starts-with($fieldTypeName,'SFVec') or ($fieldTypeName = 'SFRotation') or starts-with($fieldTypeName,'SFColor')">
                    <xsl:text>\s*\(</xsl:text><!-- prepend python tuple parenthesis -->
                </xsl:when>
                <xsl:when test="starts-with($fieldTypeName,'MF')">
                    <xsl:text>\s*\[?</xsl:text><!-- prepend python list bracket -->
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="regexSuffix">
            <xsl:choose>
                <xsl:when test="contains($fieldTypeName,'Node')">
                    <!-- no change -->
                </xsl:when>
                <xsl:when test="contains($fieldTypeName,'MFVec') or ($fieldTypeName = 'MFRotation') or starts-with($fieldTypeName,'MFColor')">
                    <xsl:text>\)?\s*\,?)*\s*\]?\s*</xsl:text><!-- append python tuple parenthesis and list bracket -->
                </xsl:when>
                <xsl:when test="contains($fieldTypeName,'SFVec') or ($fieldTypeName = 'SFRotation') or starts-with($fieldTypeName,'SFColor')">
                    <xsl:text>\)\s*</xsl:text><!-- append python tuple parenthesis -->
                </xsl:when>
                <xsl:when test="starts-with($fieldTypeName,'MF')">
                    <xsl:text>\]?\s*</xsl:text><!-- append python list bracket -->
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="regexModified.1">
            <xsl:choose>
                <xsl:when test="contains($fieldTypeName,'Node')">
                    <!-- no change -->
                </xsl:when>
                <xsl:when test="contains(@regex,'?)\s+){')">
                    <xsl:value-of select="substring-before(@regex,'?)\s+){')"/>
                    <xsl:text>?)\s*</xsl:text>
                    <xsl:text>\,?\s*</xsl:text><!-- insertion to allow intervening commas -->
                    <xsl:text>){</xsl:text>
                    <xsl:value-of select="substring-after (@regex,'?)\s+){')"/>
                </xsl:when>
                <xsl:when test="contains(@regex,'?)\s+){')">
                    <xsl:value-of select="substring-before(@regex,'?)\s+){')"/>
                    <xsl:text>?)\s*</xsl:text>
                    <xsl:text>\,?\s*</xsl:text><!-- insertion to allow intervening commas -->
                    <xsl:text>){</xsl:text>
                    <xsl:value-of select="substring-after (@regex,'?)\s+){')"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="@regex"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="regexModified">
            <xsl:choose>
                <xsl:when test="contains($fieldTypeName,'Node')">
                    <!-- no change -->
                </xsl:when>
                <!--
                <xsl:when test="contains(regexModified,'?)\s+){')">
                    <xsl:value-of select="substring-before(regexModified,'?)\s+){')"/>
                    <xsl:text>?)\s*</xsl:text>
                    <xsl:text>\,?\s*</xsl:text>< ! - - insertion to allow intervening commas - - >
                    <xsl:text>){</xsl:text>
                    <xsl:value-of select="substring-after (regexModified,'?)\s+){')"/>
                </xsl:when>
                -->
                <xsl:otherwise>
                    <xsl:value-of select="$regexModified.1"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:text>
    @classmethod
    def REGEX_PYTHON(cls):
        """ Regular expression for validating Python values, for more information see https://www.web3d.org/specifications/X3dRegularExpressions.html """
        return r'</xsl:text> <!-- "raw" python string, unescaped -->
        <xsl:value-of select="$regexPrefix"/>
        <xsl:choose>
            <xsl:when test="contains(@regex,'true|false')">
                <xsl:value-of select="substring-before(@regex,'true|false')"/>
                <xsl:text>true|false|True|False</xsl:text>
                <xsl:value-of select="substring-after (@regex,'true|false')"/>
                <xsl:value-of select="$regexSuffix"/>
                <xsl:text>'</xsl:text>
                <!-- https://peps.python.org/pep-0008/#inline-comments -->
                <xsl:text>  # (less than fully strict Python: allows lower-case strings true, false)</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$regexModified"/>
                <xsl:value-of select="$regexSuffix"/>
                <xsl:text>'</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:text>
    @classmethod
    def REGEX_XML(cls):
        """ Regular expression for validating XML values, for more information see https://www.web3d.org/specifications/X3dRegularExpressions.html """
        return r'</xsl:text> <!-- "raw" python string, unescaped -->
        <xsl:value-of select="@regex"/>
        <xsl:text>'</xsl:text>

        <xsl:text>
    # - - - - - - - - - -
    def __init__(self, value=</xsl:text>
        <xsl:choose>
            <xsl:when test="($tupleSize = 2)">
                <xsl:text>None,value2=None</xsl:text>
                <xsl:text>):</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 3)">
                <xsl:text>None,value2=None,value3=None</xsl:text>
                <xsl:text>):</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 4)">
                <xsl:text>None,value2=None,value3=None,value4=None</xsl:text>
                <xsl:text>):</xsl:text>
            </xsl:when>
            <!-- watch out for initializing with [] -->
            <!-- https://stackoverflow.com/questions/9526465/best-practice-for-setting-the-default-value-of-a-parameter-thats-supposed-to-be -->
            <xsl:when test="($defaultValue = '[]')">
                <xsl:text>None</xsl:text>
                <xsl:text>):</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$defaultValue"/>
                <xsl:text>):</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <!-- watch out for initializing with [] -->
        <!-- https://stackoverflow.com/questions/9526465/best-practice-for-setting-the-default-value-of-a-parameter-thats-supposed-to-be -->
        <!--
        -->
        <xsl:if test="($defaultValue = '[]')">
            <xsl:text>
        if value is None:
            value = self.DEFAULT_VALUE()</xsl:text>
        </xsl:if>
        <xsl:text>
        # print('*** </xsl:text><xsl:value-of select="$fieldTypeName"/><xsl:text> __init__ value=' + str(value), 'type=' + str(type(value))) # debug</xsl:text>
        <xsl:choose>
            <xsl:when test="ends-with(@type,'SFInt32')">
                <xsl:text>
        if isinstance(value,str):
            value = int(value)</xsl:text>
            </xsl:when>
            <xsl:when test="contains(@type,'SFDouble') or contains(@type,'SFFloat') or contains(@type,'SFColor') or contains(@type,'SFRotation') or contains(@type,'SFVec')">
                <xsl:text>
        if isinstance(value,str):
            value = float(value)</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 2)">
                <xsl:text>
        if value2 is not None:
            value = (float(value),float(value2))</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 3)">
                <xsl:text>
        if value2 is not None and value3 is not None:
            value = (float(value),float(value2),float(value3))</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 4)">
                <xsl:text>
        if value2 is not None and value3 is not None and value4 is not None:
            value = (float(value),float(value2),float(value3),float(value4))</xsl:text>
            </xsl:when>
        </xsl:choose>
        <xsl:text>
        self.value = value</xsl:text>
        <!-- directly set value -->
        <!-- goal: use setter to set value so that any utility conversions and validation checks occur -->
        <!-- python property pattern: first entry is a getter -->
        <xsl:text>
    @property # getter - - - - - - - - - -
    def value(self):
        """ Provide typed value of this field instance. """
        return self.__value
    @value.setter
    def value(self, value</xsl:text>
        <xsl:choose>
            <xsl:when test="($tupleSize = 2)">
                <xsl:text>,value2=None</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 3)">
                <xsl:text>,value2=None,value3=None</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 4)">
                <xsl:text>,value2=None,value3=None,value4=None</xsl:text>
            </xsl:when>
        </xsl:choose>
        <xsl:text>):</xsl:text>
        <xsl:text>
        """ The value setter only allows correctly typed and sized values. """</xsl:text>
        <!-- utility conversions -->
        <xsl:choose>
            <xsl:when test="($fieldTypeName = 'SFBool') or ($fieldTypeName = 'MFBool')">
                <xsl:text>
        value = fixBoolean(value, default=</xsl:text><xsl:value-of select="$fieldTypeName"/><xsl:text>.DEFAULT_VALUE())</xsl:text>
                <xsl:if test="($fieldTypeName = 'MFBool')">
                    <xsl:text>
        if not isinstance(value,list):
            _newValue = [ value ]
        else:
            _newValue = []
            for each in value:
                _newValue.append(SFBool(each).value)
        value = _newValue</xsl:text>
                </xsl:if>
            </xsl:when>
            <xsl:when test="($tupleSize = 2)">
                <xsl:text>
        if value2 is not None:
            value = (float(value),float(value2))</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 3)">
                <xsl:text>
        if value2 is not None and value3 is not None:
            value = (float(value),float(value2),float(value3))</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 4)">
                <xsl:text>
        if value2 is not None and value3 is not None and value4 is not None:
            value = (float(value),float(value2),float(value3),float(value4))</xsl:text>
            </xsl:when>
        </xsl:choose>
        <xsl:text>
        if isinstance(value,SF</xsl:text>
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>):
            value = value.value # dereference
        elif value is None:
            value = </xsl:text><xsl:value-of select="$fieldTypeName"/><xsl:text>.DEFAULT_VALUE()
            # if _DEBUG: print('...DEBUG... set value to </xsl:text>
                        <xsl:value-of select="@type"/>
                        <xsl:text>.DEFAULT_VALUE()=' + str(</xsl:text>
                        <xsl:value-of select="@type"/>
                        <xsl:text>.DEFAULT_VALUE()))</xsl:text>
        <!-- tuple-ize list https://stackoverflow.com/questions/48745275/convert-list-of-string-to-list-of-tuples -->
        <!-- https://docs.python.org/3/tutorial/controlflow.html?highlight=break%20continue#break-and-continue-statements-and-else-clauses-on-loops -->
        <xsl:choose>
            <xsl:when test="($tupleSize = 2)">
                <xsl:text>
        elif isinstance(value, list):
            for each in value: # check that contained elements are not tuples or lists
                if isinstance(each, tuple):
                    break
            if len(value) == 2:
                value = (value[0],value[1])
            else: # no tuples found, create 2-tuples
                value = [(x, y) for x, y, in value]</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 3)">
                <xsl:text>
        elif isinstance(value, list):
            for each in value: # check that contained elements are not tuples or lists
                if isinstance(each, tuple):
                    break
            if len(value) == 3:
                value = (value[0],value[1],value[2])
            else: # no tuples found, create 3-tuples
                value = [(x, y, z) for x, y, z in value]</xsl:text>
            </xsl:when>
            <xsl:when test="($tupleSize = 4)">
                <xsl:text>
        elif isinstance(value, list):
            for each in value: # check that contained elements are not tuples or lists
                if isinstance(each, tuple):
                    break
            if len(value) == 4:
                value = (value[0],value[1],value[2],value[3])
            else: # no tuples found, create 4-tuples
                value = [(x, y, z, w) for x, y, z, w in value]</xsl:text>
            </xsl:when>
        </xsl:choose>
        <!-- add type-aware valid-value checks -->
        <xsl:choose>
            <xsl:when test="starts-with($fieldTypeName, 'SF')">
                <!-- downcast singleton to SF type -->
                <xsl:text>
        elif isinstance(value, MF</xsl:text><!-- MF corresponding to this SF type -->
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>) and isinstance(value.value, list) and len(value.value) == 1:
            print("downcasting by dereferencing simple-list value=" + str(value)[:100] + ", type=" + str(type(value)) + " as " + str(value.value[0]))
            value = </xsl:text>
                <xsl:text>value.value[0] # dereference
        elif isinstance(value, list) and len(value) == 1:
            value = </xsl:text>
                <xsl:text>value[0] # dereference</xsl:text>
                <xsl:choose>
                        <xsl:when test="($fieldTypeName = 'SFInt32')">
                            <xsl:text>
        # https://stackoverflow.com/questions/354038/how-do-i-check-if-a-string-is-a-number-float
        if isinstance(value, str):
            try:
                int(value) # this statement checks but does not set value, may throw exception
                print('*** string value provided, value=' + str(value) + ', int(value)=' + str(int(value)), flush=True)
                value = int(value)
            except ValueError as error:
                # https://stackoverflow.com/questions/66995878/consider-explicitly-re-raising-using-the-from-keyword-pylint-suggestion
                raise X3DTypeError('</xsl:text>
                            <xsl:value-of select="$fieldTypeName"/>
                            <xsl:text> encountered string with illegal value=' + str(value)) from error</xsl:text>
                        </xsl:when>
                        <xsl:when test="not(contains($fieldTypeName, 'Bool')) and not(contains($fieldTypeName, 'String')) and not(contains($fieldTypeName, 'Node'))">
                            <xsl:text>
        # https://stackoverflow.com/questions/354038/how-do-i-check-if-a-string-is-a-number-float
        if isinstance(value, str):
            try:
                float(value) # this statement checks but does not set value, may throw exception
                print('*** string value provided, value=' + str(value) + ', float(value)=' + str(float(value)), flush=True)
                value = float(value)
            except ValueError as error:
                # https://stackoverflow.com/questions/66995878/consider-explicitly-re-raising-using-the-from-keyword-pylint-suggestion
                raise X3DTypeError('</xsl:text>
                            <xsl:value-of select="$fieldTypeName"/>
                            <xsl:text> encountered string with illegal value=' + str(value)) from error</xsl:text>
                        </xsl:when>
                </xsl:choose>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'MF')">
                <xsl:text>
    ###     elif not isinstance(value, list) and isValidSF</xsl:text><!-- SF corresponding to this MF type -->
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <!-- upcast to MF type -->
                <xsl:text>(value):
    ###         print(' upcast to MF type', value)
    ###         value = MF</xsl:text>
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>(SF</xsl:text>
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>(value))</xsl:text>
                <xsl:if test="starts-with($fieldTypeName, 'MF')">
                    <xsl:text>
        elif isinstance(value, list):
            if not value is None and not (isinstance(value,list) and len(value) == 0):
                _newValue = []
                for each in value:
                    _newValue.append(SF</xsl:text>
                    <xsl:value-of select="substring($fieldTypeName,3)"/>
                    <xsl:text>(each).value)
                # if _DEBUG: print('...DEBUG... assign list, value=' + str(value), ', type=' + str(type(value)), ', _newValue=' + str(_newValue),flush=True)
                value = _newValue
        elif isinstance(value, str):
            value = [ </xsl:text>
                <xsl:value-of select="$pythonBaseType"/>
                <xsl:text>(value) ]</xsl:text>
                </xsl:if>
            </xsl:when>
        </xsl:choose>
        <!-- ch ck value restrictions -->
        <xsl:choose>
            <xsl:when test="contains($fieldTypeName, 'Color')">
                <xsl:text>
        assertZeroToOne(</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>,value)</xsl:text>
            </xsl:when>
        </xsl:choose>
        <!-- ready to save -->
        <xsl:text>
        self.__value = value</xsl:text>
        
        <xsl:choose>
            <!-- string output support -->
            <xsl:when test="($fieldTypeName = 'MFNode')">
                <!-- string-getter utility method, since regular repl function not available for list of nodes -->
                <xsl:text>
    def __repl__(self):
        result = '['
        if self.__value: # walk each child in list, if any (avoid empty list recursion)
            for each in self.__value:
                result += str(each) + ', '
        return result.rstrip(', ') + ']'</xsl:text>
            </xsl:when>
        </xsl:choose>
        <xsl:choose>
            <xsl:when test="starts-with($fieldTypeName, 'SF')">
                <xsl:text>
    def __bool__(self):
        if not isinstance(self.__value,list):
            print('*** x3d.py internal error, </xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
        <xsl:text> self.__value type=' + str(type(self.__value)) + ' is not a list')
        return len(self.__value) > 0</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'MF')">
                <xsl:text>
    def append(self, value=None):
        """ Add to existing value list, first ensuring that a correctly typed value is applied. """
        if  not value is None:
            # if _DEBUG: print('...DEBUG... append to list, value=' + str(self.__value), ', type=' + str(type(self.__value)), ', value=' + str(value),flush=True)
            if isinstance(value,SF</xsl:text>
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>):
                self.__value.append(value.value) # dereference
            elif not isinstance(value,list) and not isinstance(value,</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>):
                self.__value.append(SF</xsl:text>
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>(value).value) # checks validity
            elif (isinstance(value,list) and len(value) > 0) or isinstance(value,</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>):
                for each in value:
                    self.__value.append(SF</xsl:text>
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>(each).value) # checks validity
            elif isinstance(value,str):
                self.__value.append(SF</xsl:text>
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>(value).value) # checks validity
    ###     if  not value is None:
    ###         if isValidSF</xsl:text><!-- SF corresponding to this MF type -->
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>(value):
    ###             if isinstance(value, SF</xsl:text><!-- SF corresponding to this MF type -->
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>):
    ###                 value = SF</xsl:text><!-- SF corresponding to this MF type -->
                <xsl:value-of select="substring($fieldTypeName,3)"/>
            <xsl:text>(value).value # dereference value from base type
    ###             self.__value.append(value)
    ###         elif isValid</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>(value):
    ###             for each in value:
    ###                 while isinstance(each, list) and len(each) == 1:
    ###                     each = each[0] # dereference
    ###                 if isinstance(each, SF</xsl:text><!-- SF corresponding to this MF type -->
                <xsl:value-of select="substring($fieldTypeName,3)"/>
                <xsl:text>):
    ###                     each = each.value # dereference
    ###                 self.__value.append(each)
    ###         else:
    ###             assertValid</xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text>(value) # report type failure
    def __bool__(self):
        if not isinstance(self.__value,list):
            print('*** x3d.py internal error, </xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
        <xsl:text> self.__value type=' + str(type(self.__value)) + ' is not a list', flush=True)
        return len(self.__value) > 0
    def __len__(self):
        return len(self.__value)</xsl:text>
            </xsl:when>
        </xsl:choose>
        
        <xsl:text>
    def XML(self):
        """ Provide XML value for this field type. """
        </xsl:text>
        <xsl:choose>
            <xsl:when test="($fieldTypeName = 'SFString')">
                <xsl:text>return str(self.__value).replace("'","&amp;apos;").replace("&amp; ","&amp;amp; ").replace("&lt;","&amp;lt;").replace("&gt;","&amp;gt;")</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFString')">
                <xsl:text>result = ''
        if self.__value: # walk each child in list, if any (avoid empty list recursion)
            for each in self.__value:
                result += '"' + str(each).replace("'","&amp;apos;").replace("&amp; ","&amp;amp; ").replace("&lt;","&amp;lt;").replace("&gt;","&amp;gt;") + '"' + ' '
        result = result.rstrip(' ')
        return result</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'SFBool')">
                <xsl:text>return str(self.__value).lower()</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFBool')">
                <xsl:text>return str(self.__value).lower().replace(',', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'SF') and (contains($fieldTypeName, 'Double') or contains($fieldTypeName, 'Float') or contains($fieldTypeName, 'Vec') or
                            contains($fieldTypeName, 'Int32') or contains($fieldTypeName, 'Time') or contains($fieldTypeName, 'Color') or contains($fieldTypeName, 'Rotation') or
                            contains($fieldTypeName, 'Image') or contains($fieldTypeName, 'Matrix'))">
                <xsl:text>return str(self.__value).lower().replace(',', '').replace('(', '').replace(')', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'MF') and (contains($fieldTypeName, 'Double') or contains($fieldTypeName, 'Float') or contains($fieldTypeName, 'Vec') or 
                            contains($fieldTypeName, 'Int32') or contains($fieldTypeName, 'Time') or contains($fieldTypeName, 'Color') or contains($fieldTypeName, 'Rotation') or
                            contains($fieldTypeName, 'Image') or contains($fieldTypeName, 'Matrix'))">
                <xsl:text>return str(self.__value).lower().replace('(', '').replace(')', '').replace(',', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'SFNode')">
                <xsl:text>if not self.__value is None:
            return self.__value.XML()
        return None</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFNode')">
                <xsl:text>result = ''
        if self.__value: # walk each child in list, if any (avoid empty list recursion)
            for each in self.__value:
                if not self.__value is None:
                    result += each.XML() # has line break '\n' at end, which is OK
        result = result.rstrip('\n')
        return result</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>return str(self.__value)</xsl:text>
                <xsl:message>
                    <xsl:text>*** missing XML() method for fieldType </xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
        
        <xsl:text>
    def VRML(self):
        """ Provide VRML value for this field type. """
        </xsl:text>
        <xsl:choose>
            <!-- TODO covered ?? -->
            <xsl:when test="($fieldTypeName = 'NMTOKEN')">
                <xsl:text>return str(self.__value)</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'SFString')">
                <xsl:text>return '"' + str(self.__value) + '"'</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFString')">
                <xsl:text>result = ''
        if self.__value: # walk each child in list, if any (avoid empty list recursion)
            for each in self.__value:
                result += '"' + str(each) + '"' + ' '
        result = '[' + result.rstrip(' ') + ']'
        return result</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'SFBool')">
                <xsl:text>return str(self.__value).upper()</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFBool')">
                <xsl:text>return str(self.__value).upper().replace(',', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'SF') and (contains($fieldTypeName, 'Double') or contains($fieldTypeName, 'Float') or contains($fieldTypeName, 'Vec') or
                            contains($fieldTypeName, 'Int32') or contains($fieldTypeName, 'Time') or contains($fieldTypeName, 'Color') or contains($fieldTypeName, 'Rotation') or
                            contains($fieldTypeName, 'Image') or contains($fieldTypeName, 'Matrix'))">
                <xsl:text>return str(self.__value).lower().replace(',', '').replace('(', '').replace(')', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'MF') and (contains($fieldTypeName, 'Double') or contains($fieldTypeName, 'Float') or contains($fieldTypeName, 'Vec') or 
                            contains($fieldTypeName, 'Int32') or contains($fieldTypeName, 'Time') or contains($fieldTypeName, 'Color') or contains($fieldTypeName, 'Rotation') or
                            contains($fieldTypeName, 'Image') or contains($fieldTypeName, 'Matrix'))">
                <xsl:text>return '[' + str(self.__value).lower().replace('(', '').replace(')', '').replace(',', '').replace('[', '').replace(']', '') + ']'</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'SFNode')">
                <xsl:text>if not self.__value is None:
            return self.__value.VRML()
        return None</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFNode')">
                <xsl:text>result = ''
        if self.__value: # walk each child in list, if any (avoid empty list recursion)
            for each in self.__value:
                if not self.__value is None:
                    result += each.VRML() # has line break '\n' at end, which is OK
        result = result.rstrip('\n')
        return result</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>return str(self.__value)</xsl:text>
                <xsl:message>
                    <xsl:text>*** missing XML() method for fieldType </xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
        
        <xsl:text>
    def JSON(self):
        """ Provide JSON value for this field type. """
        </xsl:text>
        <xsl:choose>
            <xsl:when test="($fieldTypeName = 'SFString')">
                <xsl:text>return str(self.__value).replace('"','&amp;quot;')</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFString')">
                <xsl:text>result = ''
        if self.__value: # walk each child in list, if any (avoid empty list recursion)
            for each in self.__value: # debug MFString
		if instance(each, SFString):
                    result += '"'+ str(each).replace('"','&amp;quot;') + '"' + ' '
        result = result.rstrip(' ')
        return result</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'SFBool')">
                <xsl:text>return str(self.__value).lower()</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFBool')">
                <xsl:text>return str(self.__value).lower().replace(',', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'SF') and (contains($fieldTypeName, 'Double') or contains($fieldTypeName, 'Float') or contains($fieldTypeName, 'Vec') or
                            contains($fieldTypeName, 'Int32') or contains($fieldTypeName, 'Time') or contains($fieldTypeName, 'Color') or contains($fieldTypeName, 'Rotation') or
                            contains($fieldTypeName, 'Image') or contains($fieldTypeName, 'Matrix'))">
                <xsl:text>return str(self.__value).lower().replace(',', '').replace('(', '').replace(')', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="starts-with($fieldTypeName, 'MF') and (contains($fieldTypeName, 'Double') or contains($fieldTypeName, 'Float') or contains($fieldTypeName, 'Vec') or 
                            contains($fieldTypeName, 'Int32') or contains($fieldTypeName, 'Time') or contains($fieldTypeName, 'Color') or contains($fieldTypeName, 'Rotation') or
                            contains($fieldTypeName, 'Image') or contains($fieldTypeName, 'Matrix'))">
                <xsl:text>return str(self.__value).lower().replace('(', '').replace(')', '').replace(',', '').replace('[', '').replace(']', '')</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'SFNode')">
                <xsl:text>if not self.__value is None:
            return self.__value.JSON()
        return None</xsl:text>
            </xsl:when>
            <xsl:when test="($fieldTypeName = 'MFNode')">
                <xsl:text>result = ''
        if self.__value: # walk each child in list, if any (avoid empty list recursion)
            for each in self.__value:
                if not self.__value is None:
                    result += each.JSON() # TODO? has line break '\n' at end, which is OK
        result = result.rstrip('\n')
        return result</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>return str(self.__value)</xsl:text>
                <xsl:message>
                    <xsl:text>*** missing JSON() method for fieldType </xsl:text>
                    <xsl:value-of select="$fieldTypeName"/>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
        
        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <!-- create python definitions for each X3D field type, prefixed with _ underscore since intended for internal use only -->
    <xsl:template match="AbstractNodeType | AbstractObjectType">

        <xsl:variable name="annotation">
            <xsl:value-of select="InterfaceDefinition/@appinfo"/>
        </xsl:variable>
        <xsl:variable name="baseType" select="InterfaceDefinition/Inheritance/@baseType"/>
        <xsl:variable name="x3dType"  select="InterfaceDefinition/Inheritance/@x3dType"/>
        
        <xsl:text>class _</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:choose>
            <xsl:when test="(@name = 'X3DNode') or (@name = 'X3DField')">
                <!-- pylint reports no need to inherit from object in python 3 -->
            </xsl:when>
            <xsl:when test="(string-length($baseType) > 0)">
                <xsl:text>(</xsl:text>
                <xsl:text>_</xsl:text>
                <xsl:value-of select="$baseType"/>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test="(string-length($x3dType) > 0)">
                <xsl:text>(</xsl:text>
                <xsl:text>_</xsl:text>
                <xsl:value-of select="$x3dType"/>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>(</xsl:text>
                <xsl:text>_X3DNode</xsl:text>
                <xsl:text>)</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:text>:</xsl:text>
        
        <!-- Python docstring -->
        <xsl:if test="(string-length(normalize-space($annotation)) > 0)">
            <xsl:text>
    """
    </xsl:text>
            <xsl:value-of select="$annotation"/>
            <xsl:text>
    """</xsl:text>
        </xsl:if>

        <xsl:text>
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def NAME(cls):
        """ Name of this X3D Abstract Type class. """
        return '_</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>'</xsl:text>
        
        <!-- TODO is there a suggested name or form for documentation url? -->
        <xsl:text>
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return '</xsl:text>
        <xsl:value-of select="InterfaceDefinition/@specificationUrl"/>
        <xsl:text>'</xsl:text>
        
        <xsl:choose>
            <xsl:when test="(@name = 'X3DNode')">
            <xsl:text>
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html'
    # Field declarations for this node are performed by implementing node
    def __init__(self, DEF="", USE="", class_="", id_="", style_="", IS=None, metadata=None):
        self.DEF = DEF
        self.USE = USE
        self.class_ = class_
        self.id_ = id_
        self.style_ = style_
        self.IS = IS
        self.metadata = metadata
        # if _DEBUG: print('...DEBUG... in </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> __init__(' + str(DEF) + ',' + str(USE) + ',' + str(class_) + ',' + str(id_) + ',' + str(style) + ',' + str(metadata) + ',' + str(IS) + ')', flush=True)
    @property # getter - - - - - - - - - -
    def DEF(self):
        """ Unique ID name for this node, referenceable by other X3D nodes. """
        return self.__DEF
    @DEF.setter
    def DEF(self, DEF):
        if  DEF is None:
            DEF = SFString.DEFAULT_VALUE()
        assertValidSFString(DEF)
        self.__DEF = str(DEF)
        if self.__DEF:
            self.__USE = None # DEF and USE are mutually exclusive
    @property # getter - - - - - - - - - -
    def USE(self):
        """ Reuse an already DEF-ed node ID, excluding all child nodes and all other attributes. """
        return self.__USE
    @USE.setter
    def USE(self, USE):
        if  USE is None:
            USE = SFString.DEFAULT_VALUE()
        assertValidSFString(USE)
        self.__USE = str(USE)
        if self.__USE:
            self.__DEF = None # DEF and USE are mutually exclusive
    @property # getter - - - - - - - - - -
    def class_(self):
        """ Space-separated list of classes, reserved for use by CSS cascading stylesheets. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__class_
    @class_.setter
    def class_(self, class_):
        if  class_ is None:
            class_ = SFString.DEFAULT_VALUE()
        assertValidSFString(class_)
        self.__class_ = class_
    @property # getter - - - - - - - - - -
    def id_(self):
        """ id_ attribute is a unique identifier for use within HTML pages. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__id
    @id_.setter
    def id_(self, id_):
        if  id_ is None:
            id_ = SFString.DEFAULT_VALUE()
        assertValidSFString(id_)
        self.__id = id_
    @property # getter - - - - - - - - - -
    def style_(self):
        """ Space-separated list of classes, reserved for use by CSS cascading style_sheets. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__style_
    @style_.setter
    def style_(self, style_):
        if  style_ is None:
            style_ = SFString.DEFAULT_VALUE()
        assertValidSFString(style_)
        self.__style_ = style_
    @property # getter - - - - - - - - - -
    def IS(self):
        """ The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields. """
        return self.__IS
    @IS.setter
    def IS(self, IS):
        if  IS is None:
            self.__IS = SFNode.DEFAULT_VALUE()
        assertValidSFNode(IS)
        if not isinstance(IS, object) and not isinstance(IS, [ IS ] ): # TODO disambiguate IS naming
            # print(flush=True)
            raise X3DTypeError(str(IS) + ' IS.setter does not have a valid node type object, must be an IS node')
        self.__IS = IS
    @property # getter - - - - - - - - - -
    def metadata(self):
        """ The metadata field can contain a single MetadataBoolean, MetadataInteger, MetadataFloat, MetadataDouble, MetadataString or MetadataSet node. """
        return self.__metadata
    @metadata.setter
    def metadata(self, metadata):
        if  metadata is None:
            metadata = SFNode.DEFAULT_VALUE()
        assertValidSFNode(metadata)
        if not isinstance(metadata, object) and not isinstance(metadata, ( MetadataBoolean, MetadataInteger, MetadataFloat, MetadataDouble, MetadataString, MetadataSet, ProtoInstance ) ):
            # print(flush=True)
            raise X3DTypeError(str(metadata) + ' metadata.setter does not have a valid node type object, must be a Metadata* node or ProtoInstance')
        self.__metadata = metadata
    def __repl__(self):
        result = self.NAME() + '('
        # TODO put DEF first, matching canonical form
        if self.FIELD_DECLARATIONS():
            for each in self.FIELD_DECLARATIONS():
                # if _DEBUG: print(self.NAME() + ' for each in self.FIELD_DECLARATIONS(): each=' + str(each))
                name = each[0]
                default = each[1]
                type_ = each[2]
                accessType = each[3]
                value = getattr(self, name)
                # if _DEBUG: print('gettattr(self, ' + str(name) + ') value="' + str(value)[:100] + '" for FIELD_DECLARATIONS() ' + str(each) + ')', flush=True)
                if value != default:
                    # consider whether indentation is useful; probably not
                    # print("\n\t")
                    if  isinstance(value, list): # avoid X3DTypeError if value is not iterable
                        result += str(name) + '=['
                        for each in value:
                            # if _DEBUG: print('...DEBUG... X3DNode debug: str(each)=' + str(each), flush=True)
                            result += str(each) + ', '
                        result = result.rstrip(', ')
                        result += '],'
                    elif isinstance(value, str) and "'" in value:
                        result += str(name) + '=' + '"' + str(value)[:100] + '"' + ','
                    elif isinstance(value, str) and value != default:
                        result += str(name) + '=' + "'" + str(value)[:100] + "'" + ','
                    elif value != default:
                        result += str(name) + '='       + str(value)[:100]       + ','
                    # elif _DEBUG:
                    #   result += str(name) + '=' + "'" + str(value)[:100] + "'" + ','
        return result.strip().rstrip(',').rstrip(', ') + ')'
    def __str__(self):
        return self.__repl__().strip() # </xsl:text>
                <xsl:value-of select="@name"/>
            </xsl:when>
<!-- __str__ not needed if __repl__ is satisfactory
    def __str__(self):
        result = self.NAME() + ' '
        if self.FIELD_DECLARATIONS():
          for each in self.FIELD_DECLARATIONS():
            name= each[0]
            default = each[1]
            value= getattr(self, name)
            if value != default:
                if   isinstance(value, str) and "'" in value:
                    result += str(name) + '=' + '"' + str(value)[:100] + '"' + ' '
                elif isinstance(value, str):
                    result += str(name) + '=' + "'" + str(value)[:100] + "'" + ' '
                else:
                    result += str(name) + '='       + str(value)[:100]       + ' '
        return result.strip()
-->
            <xsl:when test="(local-name() = 'AbstractNodeType') or (@name = 'X3DMetadataObject')">
                <!-- discussion to avoid use of super(), especially when explicit superclass is known - but self can become problematic.
                     see Mark Lutz, Learning Python, 5th edition, pp. 1076-1086 -->
                <!-- __init__() of the superclass is called automatically, so this block is not need
                <xsl:text>
    def __init__(self, DEF, USE, class_, id_, style_, IS, metadata):
        # if _DEBUG: print('...DEBUG... in </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> __init__ calling super.__init__(' + str(DEF) + ',' + str(USE) + ',' + str(class_) + ',' + str(id_) + ',' + str(style_) + ',' + str(metadata) + ',' + str(IS) + ')', flush=True)
        super().__init__(DEF, USE, class_, id_, style_, IS, metadata) # fields for _X3DNode only</xsl:text>
                -->
            </xsl:when>
        </xsl:choose>

        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each ConcreteNode and Statement element -->
    
        <xsl:variable name="annotation">
            <xsl:value-of select="InterfaceDefinition/@appinfo"/>
        </xsl:variable>
        
        <!-- common initial processing for each element -->
        <xsl:variable name="elementName" select="@name"/>
        <xsl:text>class </xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:variable name="baseType" select="InterfaceDefinition/Inheritance/@baseType"/>
        <xsl:choose>
            <xsl:when test="($elementName = 'X3D')">
                <xsl:text>(</xsl:text>
                <xsl:text>_X3DNode</xsl:text> <!-- necessary for string output, TODO verify -->
            </xsl:when>
            <xsl:when test="(local-name() = 'Statement')">
                <xsl:text>(</xsl:text>
                <xsl:text>_X3DStatement</xsl:text>
            </xsl:when>
            <xsl:when test="(string-length($baseType) > 0)">
                <xsl:text>(_</xsl:text>
                <xsl:value-of select="$baseType"/>
            </xsl:when>
            <xsl:otherwise>
                <!-- TODO perhaps not needed -->
            </xsl:otherwise>
        </xsl:choose>
        <!-- Python multiple inheritance https://docs.python.org/3/tutorial/classes.html#multiple-inheritance -->
        <!-- TODO fix nodes with problematic hierarchy -->
        <xsl:choose>
            <xsl:when test="starts-with($elementName, 'Metadata') or contains($elementName, 'Layout') or contains($elementName, 'Shader') or contains($elementName, 'RigidBody')">
                <xsl:text>)</xsl:text>
                <xsl:text>:</xsl:text>
                <!-- https://peps.python.org/pep-0008/#inline-comments -->
                <xsl:text>  # </xsl:text>
                <xsl:for-each select=".//AdditionalInheritance">
                    <xsl:text>, _</xsl:text>
                    <xsl:value-of select="@baseType"/>
                </xsl:for-each>
                <!-- https://peps.python.org/pep-0008/#inline-comments -->
                <xsl:text>  # TODO fix additional inheritance method resolution order (MRO)</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:for-each select=".//AdditionalInheritance">
                    <xsl:text>, _</xsl:text>
                    <xsl:value-of select="@baseType"/>
                </xsl:for-each>
                <xsl:text>)</xsl:text>
                <xsl:text>:</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- Python docstring -->
            <xsl:text>
    """
    </xsl:text>
    
        <xsl:variable name="tooltipText"><!-- /attribute[@name = $fieldName] -->
            <xsl:value-of select="$x3d.tooltips.document//element[@name = $elementName]/@tooltip" disable-output-escaping="yes"/>
        </xsl:variable>
        <xsl:variable name="fieldTooltip">
            <xsl:if test="(string-length(normalize-space($tooltipText)) > 0)"><!-- doc-available($x3d.tooltips.path) -->
                <xsl:value-of select="replace(replace($tooltipText,'&#8734;','infinity'),'&#960;','pi')" disable-output-escaping="yes"/>
                <!-- consistent javadoc punctuation -->
                <xsl:if test="not(ends-with(normalize-space($tooltipText),'.')) and not(contains($tooltipText,'http')) and not(contains($tooltipText,'mailto')) and not(contains($tooltipText,'ftp'))">
                    <xsl:text>.</xsl:text>
                </xsl:if>
            </xsl:if>
        </xsl:variable>

        <xsl:choose>
            <xsl:when test="(string-length(normalize-space($annotation)) > 0)">
                <xsl:value-of select="$annotation"/>
            </xsl:when>
            <xsl:when test="(string-length(normalize-space($fieldTooltip)) > 0)">
                <xsl:value-of select="substring-before($fieldTooltip,'.')"/>
                <xsl:text>.</xsl:text>
                <xsl:message>
                    <xsl:text>*** Warning: annotation not found in X3DUOM, used tooltip as docstring for </xsl:text>
                    <xsl:value-of select="$elementName"/>
                </xsl:message>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>X3D element</xsl:text>
                <xsl:message>
                    <xsl:text>*** Warning: no annotation or tooltip found for </xsl:text>
                    <xsl:value-of select="$elementName"/>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
            <xsl:text>
    """</xsl:text>

        <xsl:text>
    # immutable constant functions have getter but no setter - - - - - - - - - -
    @classmethod
    def NAME(cls):
        """ Name of this X3D Node class. """
        return '</xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:text>'</xsl:text>
        
        <!-- TODO is there a suggested name or form for documentation url? -->
        <xsl:text>
    @classmethod
    def SPECIFICATION_URL(cls):
        """ Extensible 3D (X3D) Graphics International Standard governs X3D architecture for all file formats and programming languages. """
        return '</xsl:text>
        <xsl:value-of select="InterfaceDefinition/@specificationUrl"/>
        <xsl:text>'
    @classmethod
    def TOOLTIP_URL(cls):
        """ X3D Tooltips provide authoring tips, hints and warnings for each node and field in X3D. """
        return 'https://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
        <xsl:value-of select="$elementName"/>
        <xsl:text>'</xsl:text>
        
        <!-- Special constants -->
        <xsl:choose>
            <xsl:when test="($elementName = 'X3D')">
                <!-- special constant declarations -->
                <xsl:text disable-output-escaping="yes"><![CDATA[
    XML_HEADER = '<?xml version="1.0" encoding="UTF-8"?>'
    XML_DOCTYPE_X3D_3_0 = '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.0//EN" "https://www.web3d.org/specifications/x3d-3.0.dtd">'
    XML_DOCTYPE_X3D_3_1 = '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.1//EN" "https://www.web3d.org/specifications/x3d-3.1.dtd">'
    XML_DOCTYPE_X3D_3_2 = '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.2//EN" "https://www.web3d.org/specifications/x3d-3.2.dtd">'
    XML_DOCTYPE_X3D_3_3 = '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 3.3//EN" "https://www.web3d.org/specifications/x3d-3.3.dtd">'
    XML_DOCTYPE_X3D_4_0 = '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">'
    XML_DOCTYPE_X3D_4_1 = '<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.1//EN" "https://www.web3d.org/specifications/x3d-4.1.dtd">'
    X3D_XML_SCHEMA_ATTRIBUTES_3_0 = "xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance' xsd:noNamespaceSchemaLocation='https://www.web3d.org/specifications/x3d-3.0.xsd'"
    X3D_XML_SCHEMA_ATTRIBUTES_3_1 = "xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance' xsd:noNamespaceSchemaLocation='https://www.web3d.org/specifications/x3d-3.1.xsd'"
    X3D_XML_SCHEMA_ATTRIBUTES_3_2 = "xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance' xsd:noNamespaceSchemaLocation='https://www.web3d.org/specifications/x3d-3.2.xsd'"
    X3D_XML_SCHEMA_ATTRIBUTES_3_3 = "xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance' xsd:noNamespaceSchemaLocation='https://www.web3d.org/specifications/x3d-3.3.xsd'"
    X3D_XML_SCHEMA_ATTRIBUTES_4_0 = "xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance' xsd:noNamespaceSchemaLocation='https://www.web3d.org/specifications/x3d-4.0.xsd'"
    X3D_XML_SCHEMA_ATTRIBUTES_4_1 = "xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance' xsd:noNamespaceSchemaLocation='https://www.web3d.org/specifications/x3d-4.1.xsd'"
    VRML97_HEADER = '#VRML V2.0 utf8'
    CLASSIC_VRML_HEADER_PREFIX = '#VRML V' # followed by X3D version number
    CLASSIC_VRML_HEADER_SUFFIX = ' utf8'

    # TODO confirm JSON Schema header
    JSON_HEADER = '''{
    "X3D":
    {
        "encoding":"UTF-8",
        "$id":   "https://www.web3d.org/specifications/x3d-4.0-JSONSchema.json",
        "$schema": "https://json-schema.org/draft/2020-12/schema",
'''

    X3D_XML_VALIDATOR  = "https://savage.nps.edu/X3dValidator"
    X3D_JSON_VALIDATOR = "https://coderextreme.net/X3DJSONLD/src/main/html/validator.html"

    X3DOM_HEADER = """<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<!-- =================================================================== -->
<!-- embedded X3D scene appears after html/head/script and style entries -->
<!-- =================================================================== -->
<html>
   <head>
      <title></title>
      <meta http-equiv="X-UA-Compatible" content="chrome=1,IE=edge"/>
      <meta http-equiv="Content-Type" content="text/html;charset=utf-8"/>
<script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
<!-- Numbered X3DOM release versions: https://doc.x3dom.org/download -->
<!-- Developer X3DOM release version: https://doc.x3dom.org/download/dev -->
<link rel="stylesheet"
            type="text/css"
            href="https://x3dom.org/release/x3dom.css"/>
      <script type="text/javascript" src="https://x3dom.org/release/x3dom-full.js"/>
      <meta name="warning"
            content="Webfonts must be loaded prior to using Text node in X3D scene... see https://x3dom.org/x3dom/example/x3dom_text.html"/>
      <!-- X3DOM needs Web Fonts when an X3D Text node is included -->
      <!-- adapted from https://x3dom.org/x3dom/example/x3dom_text.html and https://web.mit.edu/jmorzins/www/fonts.html -->
      <style type="text/css">
/* ============================================================================= */
@font-face {
  font-family: 'SERIF'; /* default original */
  font-style: normal;
  font-weight: 700;
  src: local('Roman'), url('Roman.ttf') format('truetype');
}
@font-face {
  font-family: 'SERIF'; /* default alternate */
  font-style: normal;
  font-weight: 700;
  src: local('Times New Roman'), local('TimesNewRoman'), url('Times New Roman.ttf') format('truetype');
}
/* ============================================================================= */
@font-face {
  font-family: 'SANS'; /* default original */
  font-style: normal;
  font-weight: 400;
  src: local('Arial'), url('Arial.ttf') format('truetype');
}
@font-face {
  font-family: 'SANS'; /* default alternate */
  font-style: normal;
  font-weight: 400;
  src: local('Helvetica'), url('Helvetica.ttf') format('truetype');
}
/* ============================================================================= */
@font-face {
  font-family: 'TYPEWRITER'; /* default original */
  font-style: normal;
  font-weight: 900;
  src: local('Courier'), url('Courier.ttf') format('truetype');
}
@font-face {
  font-family: 'TYPEWRITER'; /* default alternate */
  font-style: normal;
  font-weight: 900;
  src: local('Courier New'), url('Courier New.ttf') format('truetype');
}
/* ============================================================================= */
</style>
   </head>
   <body>"""
    X3DOM_FOOTER = """
   </body>
</html>
"""]]></xsl:text>
            </xsl:when>
        </xsl:choose>
    
        <xsl:variable name="allFields"    select="InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')]"/>
        <!-- TODO sometimes need to avoid DEF, USE, IS, metadata, class_
        <xsl:variable name="localFields"  select="InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')]
                                                        [not(@name = 'DEF') and not(@name = 'USE') and not(@name = 'IS') and not(@name = 'metadata') and not(@name = 'class_')]"/>
        -->
        <!--
        <xsl:variable name="simpleFields" select="InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][not(contains(@type,'Node'))]"/>
        <xsl:variable name="nodeFields"   select="InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][   (contains(@type,'Node'))]"/>
        -->
        <!-- special case, treat component/unit/meta as children (same as Scene) but select fails mysteriously
        <xsl:variable name="allFields">
            <xsl:choose>
                <xsl:when test="($elementName = 'head')">
                    <xsl:value-of select="//Statement[@name='Scene']/InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')]"/>
                </xsl:when>
            <xsl:choose>
                    <xsl:value-of select="InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')]"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable> -->
        <!-- debug
        <xsl:message>
            <xsl:text>*** $elementName=</xsl:text>
            <xsl:value-of select="$elementName"/>
            <xsl:text>, count($allFields)=</xsl:text>
            <xsl:value-of select="count($allFields)"/>
            <xsl:text>, count($localFields)=</xsl:text>
            <xsl:value-of select="count($localFields)"/>
        </xsl:message> -->
        
        <!-- FIELD_DECLARATIONS() -->
        <xsl:choose>
            <xsl:when test="($elementName = 'head')">
                <!-- brute-force copied from class Scene  :( -->
                <!-- beware: original was tuple of tuples, which failed intermittently/bitterly. list of tuples is better. -->
                <xsl:text>
    @classmethod
    def FIELD_DECLARATIONS(cls):
        """ Field declarations for this node: name, defaultValue, type, accessType, inheritedFrom """
        return [('children', None, FieldType.MFNode, AccessType.inputOutput, 'head')]
    def __init__(self, class_="", id_="", style_="", children=None):
        self.class_ = class_
        self.id_ = id_
        self.style_ = style_
        self.children = children
    @property # getter - - - - - - - - - -
    def class_(self):
        """ Space-separated list of classes, reserved for use by CSS cascading stylesheets. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__class_
    @class_.setter
    def class_(self, class_):
        if  class_ is None:
            class_ = SFString.DEFAULT_VALUE()
        assertValidSFString(class_)
        self.__class_ = class_
    @property # getter - - - - - - - - - -
    def id_(self):
        """ id_ attribute is a unique identifier for use within HTML pages. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__id
    @id_.setter
    def id_(self, id_):
        if  id_ is None:
            id_ = SFString.DEFAULT_VALUE()
        assertValidSFString(id_)
        self.__id = id_
    @property # getter - - - - - - - - - -
    def style_(self):
        """ Space-separated list of classes, reserved for use by CSS cascading style_sheets. Appended underscore to field name to avoid naming collision with Python reserved word. """
        return self.__style_
    @style_.setter
    def style_(self, style_):
        if  style_ is None:
            style_ = SFString.DEFAULT_VALUE()
        assertValidSFString(style_)
        self.__style_ = style_
    @property # getter - - - - - - - - - -
    def children(self):
        """ The head statement has children consisting of component, unit and meta statements. """
        return self.__children
    @children.setter
    def children(self, children):
        if  children is None:
            children = MFNode.DEFAULT_VALUE()
        assertValidMFNode(children)
        self.__children = children</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                
        <!-- field default values -->
        <xsl:for-each select="$allFields">
                <xsl:sort select="(@name = 'style')"/>
                <xsl:sort select="(@name = 'id')"/>
                <xsl:sort select="(@name = 'class')"/>
                <xsl:sort select="(@name = 'metadata')"/>
                <xsl:sort select="(@name = 'IS')"/>
                <xsl:sort select="(@name = 'USE')"/>
                <xsl:sort select="(@name = 'DEF')"/>
                <xsl:sort select="(@type='MFNode')"/>
                <xsl:sort select="(@type='SFNode') and not(@name = 'IS') and not(@name = 'metadata')"/>
                <xsl:sort select="not(contains(@type,'Node')) and not(@name = 'DEF') and not(@name = 'USE') and not(@name = 'class') and not(@name = 'id') and not(@name = 'style')"/>

            <xsl:variable name="fieldName">
                <xsl:call-template name="fieldName">
                    <xsl:with-param name="name" select="@name"/>
                </xsl:call-template>
            </xsl:variable>
            <xsl:variable name="defaultValue">
                <xsl:call-template name="pythonValue">
                    <xsl:with-param name="x3dValue" select="@default"/>
                    <xsl:with-param name="x3dType" select="@type"/>
                </xsl:call-template>
            </xsl:variable>
            
            <xsl:if test="(position() = 1)">
                <xsl:text>
    @classmethod
    def FIELD_DECLARATIONS(cls):
        """ Field declarations for this node: name, defaultValue, type, accessType, inheritedFrom """
        return [</xsl:text>
            </xsl:if>
            <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
            <xsl:choose>
                <xsl:when test="not(preceding-sibling::*[@name = $fieldName])">
                    <xsl:text>
        </xsl:text><!-- pylint requires 12 columns of whitespace -->
                    <xsl:text>('</xsl:text>
                    <xsl:value-of select="$fieldName"/>
                    <xsl:text>', </xsl:text>
                    <xsl:value-of select="$defaultValue"/>
                    <xsl:text>, FieldType.</xsl:text>
                    <xsl:value-of select="@type"/>
                    <xsl:text>, AccessType.</xsl:text>
                    <xsl:value-of select="@accessType"/>
                    <xsl:text>, '</xsl:text>
                    <xsl:choose>
                        <xsl:when test="(string-length(@inheritedFrom) > 0)">
                            <xsl:value-of select="@inheritedFrom"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$elementName"/><!-- this object -->
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text>'</xsl:text>
                    <xsl:text>)</xsl:text>
                    <xsl:choose>
                        <xsl:when test="not(position() = last())">
                            <xsl:text>,</xsl:text><!-- pylint requires consistently indenting each value -->
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>]</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:message>
                        <xsl:text>*** Warning, duplicate field encountered in X3DUOM: </xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="$fieldName"/>
                    </xsl:message>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:for-each>
        
        <xsl:text>
    def __init__(self</xsl:text>
        <!-- , XML=None -->
        <!-- field declarations as parameters -->
        <xsl:if test="$allFields">
            <xsl:text>,</xsl:text>
            <xsl:for-each select="$allFields">
                <!-- all fields get initial values so that any-order invocation of __init__.py is supported -->
                <xsl:sort select="(@name = 'style')"/>
                <xsl:sort select="(@name = 'id')"/>
                <xsl:sort select="(@name = 'class')"/>
                <xsl:sort select="(@name = 'metadata')"/>
                <xsl:sort select="(@name = 'IS')"/>
                <xsl:sort select="(@name = 'USE')"/>
                <xsl:sort select="(@name = 'DEF')"/>
                <xsl:sort select="(@type='MFNode')"/>
                <xsl:sort select="(@type='SFNode') and not(@name = 'IS') and not(@name = 'metadata')"/>
                <xsl:sort select="not(contains(@type,'Node')) and not(@name = 'DEF') and not(@name = 'USE') and not(@name = 'class') and not(@name = 'id') and not(@name = 'style')"/>
                
                <xsl:variable name="fieldName">
                    <xsl:call-template name="fieldName">
                        <xsl:with-param name="name" select="@name"/>
                    </xsl:call-template>
                </xsl:variable>
                <xsl:variable name="defaultValue">
                    <xsl:call-template name="pythonValue">
                        <xsl:with-param name="x3dValue" select="@default"/>
                        <xsl:with-param name="x3dType" select="@type"/>
                    </xsl:call-template>
                </xsl:variable>
                <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                    <xsl:text>
        </xsl:text><!-- indent each field -->
                    <!-- might be overloading reserved word or class name in parameter list, can't be helped -->
                    <xsl:value-of select="$fieldName"/>
                    <xsl:text>=</xsl:text>
                    <xsl:choose>
                        <!-- avoid pylint (dangerous-default-value) warnings, Pylint W0102: Dangerous default value [] as argument -->
                        <xsl:when test="(@type='SFNode') or starts-with(@type,'MF')">
                            <!-- initialization occurs property getter/setter -->
                            <xsl:text>None</xsl:text> 
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$defaultValue"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    
                    <xsl:if test="(position() != last())">
                        <xsl:text>,</xsl:text>
                    </xsl:if>
                </xsl:if>
            </xsl:for-each>
            <xsl:text>):</xsl:text>
        </xsl:if>
        <xsl:choose>
            <xsl:when test="(local-name() = 'ConcreteNode')">
            <xsl:text>
        # if _DEBUG: print('...DEBUG... in </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="@name"/>
                <!-- discussion to avoid use of super(), especially when explicit superclass is known - but self can become problematic.
                     see Mark Lutz, Learning Python, 5th edition, pp. 1076-1086 -->
                <xsl:text> __init__ calling super.__init__(' + str(DEF) + ',' + str(USE) + ',' + str(class_) + ',' + str(id_) + ',' + str(style_) + ',' + str(metadata) + ',' + str(IS) + ')', flush=True)
        super().__init__(DEF, USE, class_, id_, style_, IS, metadata) # fields for _X3DNode only</xsl:text>
            </xsl:when>
            <xsl:when test="(local-name() = 'Statement')">
                <!-- discussion to avoid use of super(), especially when explicit superclass is known - but self can become problematic.
                     see Mark Lutz, Learning Python, 5th edition, pp. 1076-1086 -->
                <xsl:text>
        # if _DEBUG: print('...DEBUG... in </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="@name"/>
                <xsl:text> __init__ calling super.__init__(' + str(class_) + ',' + str(id_) + ',' + str(style_) +  + ')', flush=True)
        super().__init__(class_, id_, style_) # fields for _X3DStatement only</xsl:text>
            </xsl:when>
        </xsl:choose>
        
        <!-- field initializations -->
        <xsl:for-each select="$allFields">
            <xsl:sort select="(@name = 'style')"/>
            <xsl:sort select="(@name = 'id')"/>
            <xsl:sort select="(@name = 'class')"/>
            <xsl:sort select="(@name = 'metadata')"/>
            <xsl:sort select="(@name = 'IS')"/>
            <xsl:sort select="(@name = 'USE')"/>
            <xsl:sort select="(@name = 'DEF')"/>
            <xsl:sort select="(@type='MFNode')"/>
            <xsl:sort select="(@type='SFNode') and not(@name = 'IS') and not(@name = 'metadata')"/>
            <xsl:sort select="not(contains(@type,'Node')) and not(@name = 'DEF') and not(@name = 'USE') and not(@name = 'class')  and not(@name = 'id') and not(@name = 'style')"/>

            <xsl:variable name="fieldName">
                <xsl:call-template name="fieldName">
                    <xsl:with-param name="name" select="@name"/>
                </xsl:call-template>
            </xsl:variable>
            
            <!-- do not redeclare fields included in X3DNode or X3DStatement -->
            <xsl:if test="not($fieldName = 'DEF')      and not($fieldName = 'USE') and
                          not($fieldName = 'class_')   and not($fieldName = 'id')  and not($fieldName = 'style') and
                          not($fieldName = 'metadata') and not($fieldName = 'IS')">
                <xsl:text>
        self.</xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text> = </xsl:text>
                <xsl:value-of select="$fieldName"/>
            </xsl:if>
        </xsl:for-each>
        
        <xsl:if test="($elementName = 'fieldValue')">
            <xsl:text>
        self.type='SFString' # convenience property matching corresponding field declaration</xsl:text>
        </xsl:if>
        
        <xsl:if test="($elementName = 'fieldValue')">
                <xsl:text>
    @property # getter - - - - - - - - - -
    # convenience property matching corresponding field declaration
    def type(self):
        """ Computed type of this fieldValue corresponding to corresponding field declaration. """
        if self.__type is None:
            self.__type = 'SFString'
        #print('*** need to find fieldValue type, using type=' + str(self.__type))
        return self.__type
    @type.setter
    def type(self, type):
        if  type is None:
            type = SFString.NAME()
            # if _DEBUG: print('...DEBUG... set type to SFString.NAME()=' + str(SFString.NAME()))
        assertValidSFString(type)
    ### assertValidFieldType('type', type) # something strange is happening here
        self.__type = type</xsl:text>
            </xsl:if>
        
        <!-- property of each field in this element -->
        <xsl:for-each select="$allFields">
                <xsl:sort select="(@name = 'style')"/>
                <xsl:sort select="(@name = 'id')"/>
                <xsl:sort select="(@name = 'class')"/>
                <xsl:sort select="(@name = 'metadata')"/>
                <xsl:sort select="(@name = 'IS')"/>
                <xsl:sort select="(@name = 'USE')"/>
                <xsl:sort select="(@name = 'DEF')"/>
                <xsl:sort select="(@type='MFNode')"/>
                <xsl:sort select="(@type='SFNode') and not(@name = 'IS') and not(@name = 'metadata')"/>
                <xsl:sort select="not(contains(@type,'Node')) and not(@name = 'DEF') and not(@name = 'USE') and not(@name = 'class') and not(@name = 'id') and not(@name = 'style')"/>

            <xsl:variable name="fieldName">
                <xsl:call-template name="fieldName">
                    <xsl:with-param name="name" select="@name"/>
                </xsl:call-template>
            </xsl:variable>
            <xsl:variable name="defaultValue">
                <xsl:call-template name="pythonValue">
                    <xsl:with-param name="x3dValue" select="@default"/>
                    <xsl:with-param name="x3dType" select="@type"/>
                </xsl:call-template>
            </xsl:variable>
            <xsl:variable name="acceptableNodeTypes">
                <xsl:choose>
                    <xsl:when test="(@acceptableNodeTypes = 'Scene') or (@acceptableNodeTypes = 'head') or (@acceptableNodeTypes = 'IS')">
                        <xsl:text>object</xsl:text><!--  -->
                        <!-- TODO refer to class without creating instance, not local variable for disambiguation of field names and element names -->
                        <!-- https://stackoverflow.com/questions/2168964/how-to-create-a-class-instance-without-calling-initializer
                        <xsl:value-of select="@acceptableNodeTypes"/>
                        <xsl:text>.__new__(</xsl:text>
                        <xsl:value-of select="@acceptableNodeTypes"/>
                        <xsl:text>)</xsl:text> -->
                    </xsl:when>
                    <xsl:when test="contains(@acceptableNodeTypes,'|')">
                        <xsl:text>(</xsl:text>
                        <xsl:for-each select="tokenize(@acceptableNodeTypes,'\|')">
                            <xsl:if test="starts-with(.,'X3D')">
                                <xsl:text>_</xsl:text><!-- abstract node type -->
                            </xsl:if>
                            <xsl:value-of select="."/>
                            <xsl:text>,</xsl:text>
                        </xsl:for-each>
                        <xsl:text>ProtoInstance</xsl:text>
                        <xsl:text>)</xsl:text>
                        <!-- construction diagnostic
                        <xsl:if test="contains(@acceptableNodeTypes,'X3D')">
                            <xsl:message>
                                <xsl:text>*** </xsl:text>
                                <xsl:value-of select="$elementName"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text> @acceptableNodeTypes='</xsl:text>
                                <xsl:value-of select="@acceptableNodeTypes"/>
                                <xsl:text>' list includes an X3D abstract node type, need to insert underscore...</xsl:text>
                            </xsl:message>
                        </xsl:if> -->
                    </xsl:when>
                    <xsl:when test="(string-length(@acceptableNodeTypes) > 0)">
                        <xsl:text>(</xsl:text>
                        <!-- single value -->
                        <xsl:if test="starts-with(@acceptableNodeTypes,'X3D')">
                            <xsl:text>_</xsl:text><!-- abstract node type -->
                        </xsl:if>
                        <xsl:value-of select="@acceptableNodeTypes"/>
                        <xsl:text>,ProtoInstance</xsl:text>
                        <xsl:text>)</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>object</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <!-- debug
            <xsl:variable name="inheritanceName"           select="../Inheritance/@baseType"/>
            <xsl:variable name="additionalInheritanceName" select="../AdditionalInheritance/@baseType"/>
            <xsl:variable name="upperFieldName"            select="concat(upper-case(substring(@name,1,1)),substring(@name,2))"/>
            <xsl:variable name="isNodeType"                select="(@type = 'SFNode') or (@type = 'MFNode')"/>
            <xsl:message>
                <xsl:value-of select="$elementName"/>
                <xsl:text> fieldName=</xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text>, upperFieldName=</xsl:text>
                <xsl:value-of select="$upperFieldName"/>
                <xsl:text>, inheritanceName=</xsl:text>
                <xsl:value-of select="$inheritanceName"/>
                <xsl:text>, isNodeType=</xsl:text>
                <xsl:value-of select="$isNodeType"/>
                <xsl:if test="(string-length($additionalInheritanceName) > 0)">
                    <xsl:text>, additionalInheritanceName=</xsl:text>
                    <xsl:value-of select="$additionalInheritanceName"/>
                </xsl:if>
            </xsl:message> -->
            
            <!-- do not redeclare fields included in X3DNode and X3DStatement to avoid inconsistent method resolution order (MRO) -->
            <xsl:if test="not($fieldName = 'DEF')      and not($fieldName = 'USE') and
                          not($fieldName = 'class_')   and not($fieldName = 'id')  and not($fieldName = 'style') and
                          not($fieldName = 'metadata') and not($fieldName = 'IS')">
                <xsl:text>
    @property # getter - - - - - - - - - -
    def </xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text>(self):</xsl:text>
                <xsl:variable name="tooltipText">
                    <xsl:choose>
                        <xsl:when test="($elementName = 'meta') and ($fieldName = 'httpequiv')">
                            <!-- some field names got munged -->
                            <xsl:value-of select="$x3d.tooltips.document//element[@name = $elementName]/attribute[@name = 'http-equiv']/@tooltip" disable-output-escaping="yes"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- some field names have underscores to avoid collisions with Python reserved words -->
                            <xsl:value-of select="$x3d.tooltips.document//element[@name = $elementName]/attribute[@name = translate($fieldName,'_','')]/@tooltip" disable-output-escaping="yes"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                <xsl:variable name="fieldTooltip">
                    <xsl:if test="(string-length(normalize-space($tooltipText)) > 0)"><!-- doc-available($x3d.tooltips.path) -->
                            <xsl:value-of select="replace(replace($tooltipText,'&#8734;','infinity'),'&#960;','pi')" disable-output-escaping="yes"/>
                            <!-- consistent javadoc punctuation -->
                            <xsl:if test="not(ends-with(normalize-space($tooltipText),'.')) and not(contains($tooltipText,'http')) and not(contains($tooltipText,'mailto')) and not(contains($tooltipText,'ftp'))">
                                <xsl:text>.</xsl:text>
                            </xsl:if>
                    </xsl:if>
                </xsl:variable>
                <!-- insert docstring """ tooltip """ -->
                <xsl:choose>
                    <xsl:when test="($fieldName = 'class_')"><!-- TODO handled at top? -->
                        <xsl:text>
        """</xsl:text>
                        <xsl:text> Space-separated list of classes, reserved for use by CSS cascading stylesheets.</xsl:text>
                        <xsl:text> Appended underscore to field name to avoid naming collision with Python reserved word. </xsl:text>
                        <xsl:text>"""</xsl:text>
                    </xsl:when>
                    <xsl:when test="($fieldName = 'id_')">
                        <xsl:text>
        """</xsl:text>
                        <xsl:text> id_ attribute is a unique identifier for use within HTML pages.</xsl:text>
                        <xsl:text> Appended underscore to field name to avoid naming collision with Python reserved word. </xsl:text>
                        <xsl:text>"""</xsl:text>
                    </xsl:when>
                    <xsl:when test="($fieldName = 'sourceCode')">
                        <xsl:text>
        """</xsl:text>
                        <xsl:text> Embedded source code for a local program. </xsl:text>
                        <xsl:text>"""</xsl:text>
                    </xsl:when>
                    <xsl:when test="($fieldName = 'style_')">
                        <xsl:text>
        """</xsl:text>
                        <xsl:text> Space-separated list of classes, reserved for use by CSS cascading style_sheets.</xsl:text>
                        <xsl:text> Appended underscore to field name to avoid naming collision with Python reserved word. </xsl:text>
                        <xsl:text>"""</xsl:text>
                    </xsl:when>
                    <xsl:when test="(string-length(normalize-space($fieldTooltip)) > 0)">
                        <xsl:text>
        """</xsl:text>
                        <xsl:value-of select="normalize-space(substring-before(substring-after($fieldTooltip,']'),'.'))"/>
                        <xsl:text>.</xsl:text>
                        <xsl:text>"""</xsl:text>
                    </xsl:when>
                    <xsl:when test="starts-with($fieldName, 'field') and ($fieldName = 'children')">
                        <xsl:text>
        """</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text> children are nodes, statements and comments if corresponding type='SFNode' or 'MFNode'.</xsl:text>
                        <xsl:text>"""</xsl:text>
                    </xsl:when>
                    <xsl:when test="($fieldName, 'meta') and ($fieldName = 'httpequiv')">
                        <xsl:text>
        """</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text> children are nodes, statements and comments if corresponding type='SFNode' or 'MFNode'.</xsl:text>
                        <xsl:text>"""</xsl:text>
                    </xsl:when>
                    <xsl:when test="(string-length($fieldTooltip) = 0)">
                        <xsl:message>
                            <xsl:text>*** tooltip not found: </xsl:text>
                            <xsl:value-of select="$elementName"/>
                            <xsl:text> </xsl:text>
                            <xsl:value-of select="translate($fieldName,'_','')"/>
                        </xsl:message>
                    </xsl:when>
                </xsl:choose>

                <xsl:text>
        return self.__</xsl:text>
                <xsl:value-of select="$fieldName"/>
                <!-- setter -->
                <xsl:text>
    @</xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text>.setter</xsl:text>
                <xsl:text>
    def </xsl:text><!-- setter -->
                <xsl:value-of select="$fieldName"/>
                <xsl:text>(self, </xsl:text>
                <xsl:value-of select="$fieldName"/>
                <!-- =None is omitted; note that setter NEVER needs a default argument, it is only EVER called if attribute is being assigned with RHS passed as single argument -->
                <xsl:text>):
        if  </xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text> is None:
            </xsl:text>
                <xsl:if test="($fieldName = 'IS')">
                    <xsl:text>self.__</xsl:text><!-- avoid masking function IS, Pylint W0621 -->
                </xsl:if>
                <xsl:value-of select="$fieldName"/>
                <xsl:text> = </xsl:text>
                <xsl:choose>
                    <xsl:when test="(string-length(@default) > 0)">
                        <xsl:value-of select="$defaultValue"/>
                        <!-- https://peps.python.org/pep-0008/#inline-comments -->
                        <xsl:text>  # default</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="@type"/>
                        <xsl:text>.DEFAULT_VALUE()
            # if _DEBUG: print('...DEBUG... set value to </xsl:text>
                        <xsl:value-of select="@type"/>
                        <xsl:text>.DEFAULT_VALUE()=' + str(</xsl:text>
                        <xsl:value-of select="@type"/>
                        <xsl:text>.DEFAULT_VALUE()))</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:variable name="parentElementName" select="../../@name"/><!-- if present -->
                <xsl:choose>
                    <!-- first is MFNode list for field/fieldValue -->
                    <xsl:when test="($fieldName = 'field') or ($fieldName = 'fieldValue')">
                        <xsl:text>
        # TODO type-aware checks for </xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <!-- trace 
                        <xsl:text> parentElementName=</xsl:text><xsl:value-of select="$parentElementName"/> -->
                        <xsl:text>
        if </xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # walk each child in list, if any (avoid empty list recursion)
            for each in </xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>:
                assertValidFieldInitializationValue(each.name, </xsl:text>
                        <xsl:choose>
                            <xsl:when test="($fieldName = 'fieldValue')">
                                <xsl:text>type(each.value), each.value, parent='fieldValue'</xsl:text><!-- fieldValue and ExternProtoDeclare/field have no local type information -->
                            </xsl:when>
                            <xsl:when test="($parentElementName = 'ExternProtoDeclare')">
                                <xsl:text>type(each.value), each.value, parent='ExternProtoDeclare/field'</xsl:text><!-- fieldValue and ExternProtoDeclare/field have no local type information -->
                            </xsl:when>
                            <xsl:when test="($fieldName = 'field')">
                                <xsl:text>each.type, each.value, parent='</xsl:text>
                                <xsl:value-of select="$parentElementName"/>
                                <xsl:text>'</xsl:text>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:text>)</xsl:text>
                    </xsl:when>
                    
                    <!-- next two are value attribute within 'fieldValue' or field within ExternProtoDeclare, which have no local definition of type -->
                    <xsl:when test="(($elementName = 'fieldValue') and ($fieldName = 'value'))">
                        <xsl:text>
        assertValidFieldInitializationValue(self.name, type(value), value, parent='fieldValue')
        if isinstance(value,list) and isinstance(value[0],str):
            # print('*** found MFString when setting fieldValue name=' + self.name) # hack, better would be matching proto declaration
            self.type = 'MFString'</xsl:text>
                    </xsl:when>
                    <xsl:when test="(($elementName = 'field')      and ($fieldName = 'value') and ($parentElementName = 'ExternProtoDeclare'))">
                        <xsl:text>
        assertValidFieldInitializationValue(self.name, type(value), value, parent='ExternProtoDeclare/field')</xsl:text>
                    </xsl:when>
                    <!-- next is value attribute within 'field' -->
                    <xsl:when test="($elementName = 'field') and ($fieldName = 'value')">
                        <xsl:text>
        assertValidFieldInitializationValue(self.name, self.type, value, parent='field/@value')</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                <xsl:text>
        assertValid</xsl:text>
                <xsl:value-of select="@type"/>
                <xsl:text>(</xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text>)</xsl:text>
                <xsl:call-template name="valueRestrictionCheck">
                    <xsl:with-param name="fieldName" select="$fieldName"/>
                    <xsl:with-param name="indent"><xsl:text>    </xsl:text></xsl:with-param>
                    <xsl:with-param name="simpleType"  ><xsl:value-of select="@simpleType"/></xsl:with-param>
                    <xsl:with-param name="type"        ><xsl:value-of select="@type"/></xsl:with-param>
                    <xsl:with-param name="minInclusive"><xsl:value-of select="@minInclusive"/></xsl:with-param>
                    <xsl:with-param name="maxInclusive"><xsl:value-of select="@maxInclusive"/></xsl:with-param>
                    <xsl:with-param name="minExclusive"><xsl:value-of select="@minExclusive"/></xsl:with-param>
                    <xsl:with-param name="maxExclusive"><xsl:value-of select="@maxExclusive"/></xsl:with-param>
                </xsl:call-template>
                <xsl:choose>
                    <xsl:when test="(@type = 'SFNode') and (string-length($acceptableNodeTypes) > 0) and not(starts-with($fieldName,'Proto'))">
                        <xsl:text>
        if not </xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text> is None</xsl:text>
                        <xsl:text> and not isinstance(</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>,</xsl:text>
                        <xsl:value-of select="$acceptableNodeTypes"/>
                        <xsl:text>)</xsl:text>
                        <xsl:text>:
            # print(flush=True)
            raise X3DTypeError(str(</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>) + ' does not match required node type</xsl:text>
                        <xsl:if test="not($fieldName = 'ProtoBody')">
                        <xsl:text> </xsl:text>
                            <xsl:value-of select="$acceptableNodeTypes"/>
                        </xsl:if>
                        <xsl:text> and is invalid</xsl:text>
                        <xsl:text>')</xsl:text>
                    </xsl:when>
                    <xsl:when test="(@type = 'MFNode')">
                        <!-- TODO -->
                    </xsl:when>
                </xsl:choose>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text>
        self.__</xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text> = </xsl:text>
                <xsl:value-of select="$fieldName"/>
            </xsl:if>
        
        </xsl:for-each>
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- Additional Functions -->
        
        <!-- hasChild() function -->
        <xsl:text>
    # hasChild() function - - - - - - - - - -
    def hasChild(self):
        """ Whether or not this node has any child node or statement """</xsl:text>
        <xsl:choose>
                <!-- TODO hasComment
            <xsl:when test="($elementName = 'X3D')">
                <xsl:text>
        return bool(self.head) or bool(self.Scene)</xsl:text>
            </xsl:when> -->
            <xsl:when test="($elementName = 'head')">
                <!-- TODO hasComment -->
                <xsl:text>
        return bool(self.children)</xsl:text>
            </xsl:when>
            <xsl:when test="(count($allFields[contains(@type,'Node')]) > 0)">
                <!-- TODO hasComment -->
                <xsl:for-each select="$allFields[contains(@type,'Node')]">
                    <xsl:sort select="(@type = 'MFNode')"/>
                    <xsl:sort select="(@type = 'SFNode')"/>
                    
                    <xsl:variable name="fieldName">
                        <xsl:call-template name="fieldName">
                            <xsl:with-param name="name" select="@name"/>
                        </xsl:call-template>
                    </xsl:variable>

                    <xsl:if test="(position() = 1)">
                        <!-- debug
                        <xsl:if test="(@type = 'MFNode')">
                            <xsl:text>
        print('* </xsl:text>
                            <xsl:value-of select="$elementName"/>
                            <xsl:text> hasChild() tests: bool(self.</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)=' + str(bool(self.</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)) + ', len(self.</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)=' + str(len(self.</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)) + ', bool(self.__</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)=' + str(bool(self.__</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)) + ', len(self.__</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)=' + str(len(self.__</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)) + ', type(self.__</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>)=' + str(type(self.__</xsl:text><xsl:value-of select="$fieldName"/>
                            <xsl:text>))</xsl:text>
                            <xsl:text> + ', ' + str(self.__</xsl:text>
                            <xsl:value-of select="$fieldName"/>
                            <xsl:text>[0])</xsl:text>
                            <xsl:text>) # debug</xsl:text>
                            <xsl:if test="(count(preceding-sibling::*[@name = 'children']) + count(following-sibling::*[@name = 'children']) > 0)">
                                <xsl:text>
       </xsl:text>
                                <xsl:value-of select="$elementName"/>
                                <xsl:text> hasChild() tests: str(self.children)=' + str(self.children) + ', bool(self.metadata)=' + str(bool(self.metadata)) + ', bool(self.IS)=' + str(bool(self.IS))</xsl:text>
                                <xsl:text>) # debug</xsl:text>
                            </xsl:if>
                                <xsl:text>
        for each in self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>:
            print('*** each=' + str(each))</xsl:text>
                        </xsl:if>
                        -->
                        <xsl:text>
        return </xsl:text>
                    </xsl:if>
                    <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                    <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                        <xsl:choose>
                            <xsl:when test="(@type = 'SFNode')">
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                            </xsl:when>
                            <xsl:when test="(@type = 'MFNode')">
                                <xsl:text>(len(self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>) &gt; 0)</xsl:text>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:if test="not(position() = last())">
                            <xsl:text> or </xsl:text>
                        </xsl:if>
                    </xsl:if>
                </xsl:for-each>
            </xsl:when>
            <xsl:otherwise>
                <!-- TODO hasComment -->
                <xsl:text>
        return False</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- XML() functions -->
        <xsl:text>
    # output function - - - - - - - - - -
    def XML(self, indentLevel=0, syntax="XML"):
        """ Provide Canonical X3D output serialization using XML encoding. """
        result = ''
        indent = '  ' * indentLevel</xsl:text>
        <xsl:choose>
            <xsl:when test="($elementName = 'X3D')">
        <xsl:text>
        # if _DEBUG: result += indent + '# invoked class function </xsl:text>
            <xsl:value-of select="$elementName"/>
            <xsl:text disable-output-escaping="yes"><![CDATA[.XML(indentLevel=' + str(indentLevel) + '), indent="' + indent + '"' + '\n'
        result += indent + self.XML_HEADER + '\n'
        if self.version == '3.0':
            result += indent + self.XML_DOCTYPE_X3D_3_0 + '\n'
        elif self.version == '3.1':
            result += indent + self.XML_DOCTYPE_X3D_3_1 + '\n'
        elif self.version == '3.2':
            result += indent + self.XML_DOCTYPE_X3D_3_2 + '\n'
        elif self.version == '3.3':
            result += indent + self.XML_DOCTYPE_X3D_3_3 + '\n'
        elif self.version == '4.0':
            result += indent + self.XML_DOCTYPE_X3D_4_0 + '\n'
        elif self.version == '4.1':
            result += indent + self.XML_DOCTYPE_X3D_4_1 + '\n'
        result += indent + "<X3D profile='" + self.profile +"' version='" + self.version +"' "
        if self.version == '3.0':
            result += self.X3D_XML_SCHEMA_ATTRIBUTES_3_0
        elif self.version == '3.1':
            result += self.X3D_XML_SCHEMA_ATTRIBUTES_3_1
        elif self.version == '3.2':
            result += self.X3D_XML_SCHEMA_ATTRIBUTES_3_2
        elif self.version == '3.3':
            result += self.X3D_XML_SCHEMA_ATTRIBUTES_3_3
        elif self.version == '4.0':
            result += self.X3D_XML_SCHEMA_ATTRIBUTES_4_0
        elif self.version == '4.1':
            result += self.X3D_XML_SCHEMA_ATTRIBUTES_4_1
        result += '>' + '\n' # finish open tag
        if self.head and self.head.hasChild():
            result += str(self.head.XML(indentLevel=indentLevel+1, syntax=syntax))
        if self.Scene and self.Scene.hasChild():
            result += str(self.Scene.XML(indentLevel=indentLevel+1, syntax=syntax))
        result += '</X3D>' + '\n'
#       print('XML serialization complete.', flush=True)
        return result
    # output function - - - - - - - - - -
    def XMLvalidate(self,otherX3dVersion=""):
        """
        XML well-formed test and XML Schema validation test
        """
        if otherX3dVersion:
            validationVersion = str(otherX3dVersion)
            print("XMLvalidate validationVersion=" + validationVersion)
        else:
            validationVersion = str(self.version)
        try:
            selfX3dXmlText = ''
            import xmlschema
            x3dSchemaUrl = 'https://www.web3d.org/specifications/x3d-' + validationVersion + '.xsd'
            x3dschema = xmlschema.XMLSchema(x3dSchemaUrl)
            try:
                from xml.etree import ElementTree
                selfX3dXmlText = self.XML()
                selfX3dXmlTree = ElementTree.fromstring(selfX3dXmlText)
                print("Python-to-XML well-formed XML document  test of XML output complete")
                x3dschema.is_valid(selfX3dXmlTree)
                print("Python-to-XML X3D", str(self.version), "schema validation test of XML output complete")
            except SyntaxError as err: # Exception
                # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
                print("*** Python-to-XML X3D", str(self.version), "schema validation test of XML output failed.")
                print("    x3dSchemaUrl=", x3dSchemaUrl)
                if hasattr(err,'position') and err.position[0]:
                    print("   ", type(err).__name__, "(line=" + str(err.lineno) + ')', err)
                if selfX3dXmlText: # might have failed to generate
                    print(prependLineNumbers(selfX3dXmlText,err.lineno))
        except Exception as err: # usually ParseError
            # https://docs.python.org/3/library/xml.etree.elementtree.html#exceptions
            print("*** Python-to-XML well-formed XML document test failed.")
            print("    x3dSchemaUrl=" + x3dSchemaUrl)
            print("    " + type(err).__name__, err)
            if hasattr(err,'position') and err.position[0]:
                lineNumber = err.position[0]
                print('type(err.position)=' + str(type(err.position)), 'lineNumber=' + str(lineNumber))
            else:
                lineNumber = 1
            if selfX3dXmlText: # might have failed to generate
                print(prependLineNumbers(selfX3dXmlText,lineNumber))
    # output function - - - - - - - - - -
    def VRML97(self, indentLevel=0):
        """ Provide VRML97 output serialization suitable for .wrl file. """
        return VRML(self, indentLevel=0, VRML97=True)
    # output function - - - - - - - - - -
    def ClassicVRML(self, indentLevel=0):
        """ Provide ClassicVRML output serialization suitable for .x3dv file. """
        return VRML(self, indentLevel=0, VRML97=False)
    # output function - - - - - - - - - -
#    def X_ITE(self): # TODO implement
#        """ Provide X_ITE output serialization suitable for .html file. """
#        return X3D.X_ITE_HEADER + result + self.XML(indentLevel=0, syntax="XML") + X3D.X_ITE_FOOTER:
    # output function - - - - - - - - - -
    def X3DOM(self, indentLevel=0):
        """ Provide X3DOM output serialization suitable for .html file. """
        return X3D.X3DOM_HEADER + self.XML(indentLevel=0, syntax="HTML5") + X3D.X3DOM_FOOTER]]></xsl:text>
            </xsl:when>
            <xsl:otherwise> <!-- non-X3D (i.e. non-root) XML() -->
                <xsl:text>
        result = indent ### confirm
        # if _DEBUG: result += indent + '# invoked class function </xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[.XML(self=' + str(self) + ', indentLevel=' + str(indentLevel) + '), indent="' + indent + '"'
        # print(result)
        result += '<]]></xsl:text>
                <!-- opening tag is unclosed since followed by attributes -->
                <xsl:value-of select="$elementName"/>
                <xsl:text>'</xsl:text>
                <!-- opening tag is unclosed since followed by attributes -->
                <!-- output simple-type fields as XML attributes -->
                <xsl:for-each select="$allFields[not(contains(@type,'Node')) and not(@name = 'sourceCode')]">
                    <xsl:sort select="@name[not(.='DEF') and not(.='USE')]" order="ascending"/>
                    <xsl:sort select="(@name = 'USE')"/>
                    <xsl:sort select="(@name = 'DEF')"/>
                    
                    <xsl:variable name="fieldName">
                        <xsl:call-template name="fieldName">
                            <xsl:with-param name="name" select="@name"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <xsl:variable name="defaultValue">
                        <xsl:call-template name="pythonValue">
                            <xsl:with-param name="x3dValue" select="@default"/>
                            <xsl:with-param name="x3dType" select="@type"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                    <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                        <xsl:text>
        if </xsl:text>
                        <xsl:choose>
                            <xsl:when test="(@type = 'SFBool')">
                                <xsl:if test="(@default = 'true')">
                                    <xsl:text>not </xsl:text>
                                </xsl:if>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>:</xsl:text>
                                <!-- https://peps.python.org/pep-0008/#inline-comments -->
                                <xsl:text>  # default=</xsl:text>
                                <xsl:value-of select="@default"/>
                            </xsl:when>
                            <xsl:when test="not(@type = 'SFString') or (string-length(@default) > 0)">
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text> != </xsl:text>
                                <xsl:value-of select="$defaultValue"/>
                                <xsl:text>:</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>:</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                        <!-- xsl:text>='" + </xsl:text -->
                        <xsl:choose>
                            <xsl:when test="($elementName = 'field') and ($fieldName = 'value')">
                                <xsl:text>
            # print('</xsl:text>
                                <xsl:value-of select="$elementName"/>
                                <xsl:text> name=' + self.name + ' type=' + str(self.type) + ' type(value)=' + str(type(self.value)) + ' value=' + str(self.value))</xsl:text>
                                <xsl:text>
            if (self.type   == 'SFBool'):
                _newValue =  SFBool(self.value).XML()
            elif (self.type == 'MFBool'):
                _newValue =  MFBool(self.value).XML()
            elif (self.type == 'SFInt32'):
                _newValue =  SFInt32(self.value).XML()
            elif (self.type == 'MFInt32'):
                _newValue =  MFInt32(self.value).XML()
            elif (self.type == 'SFFloat'):
                _newValue =  SFFloat(self.value).XML()
            elif (self.type == 'MFFloat'):
                _newValue =  MFFloat(self.value).XML()
            elif (self.type == 'SFDouble'):
                _newValue =  SFDouble(self.value).XML()
            elif (self.type == 'MFDouble'):
                _newValue =  MFDouble(self.value).XML()

            elif (self.type == 'SFString'):
                _newValue =  SFString(self.value).XML()
            elif (self.type == 'MFString'):
                _newValue =  MFString(self.value).XML()

            elif (self.type == 'SFRotation'):
                _newValue =  SFRotation(self.value).XML()
            elif (self.type == 'MFRotation'):
                _newValue =  MFRotation(self.value).XML()
            elif (self.type == 'SFColor'):
                _newValue =  SFColor(self.value).XML()
            elif (self.type == 'MFColor'):
                _newValue =  MFColor(self.value).XML()
            elif (self.type == 'SFColorRGBA'):
                _newValue =  SFColorRGBA(self.value).XML()
            elif (self.type == 'MFColorRGBA'):
                _newValue =  MFColorRGBA(self.value).XML()

            elif (self.type == 'SFVec2f'):
                _newValue =  SFVec2f(self.value).XML()
            elif (self.type == 'MFVec2f'):
                _newValue =  MFVec2f(self.value).XML()
            elif (self.type == 'SFVec2d'):
                _newValue =  SFVec2d(self.value).XML()
            elif (self.type == 'MFVec2d'):
                _newValue =  MFVec2d(self.value).XML()

            elif (self.type == 'SFVec3f'):
                _newValue =  SFVec3f(self.value).XML()
            elif (self.type == 'MFVec3f'):
                _newValue =  MFVec3f(self.value).XML()
            elif (self.type == 'SFVec3d'):
                _newValue =  SFVec3d(self.value).XML()
            elif (self.type == 'MFVec3d'):
                _newValue =  MFVec3d(self.value).XML()

            elif (self.type == 'SFVec4f'):
                _newValue =  SFVec4f(self.value).XML()
            elif (self.type == 'MFVec4f'):
                _newValue =  MFVec4f(self.value).XML()
            elif (self.type == 'SFVec4d'):
                _newValue =  SFVec4d(self.value).XML()
            elif (self.type == 'MFVec4d'):
                _newValue =  MFVec4d(self.value).XML()
            # TODO matrices
            else:
                _newValue = SFString(self.value).XML()
            result += " value=" + "'" + _newValue.rstrip() + "'"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($elementName = 'fieldValue') and ($fieldName = 'value')">
                                <!-- special handling needed for SFString/MFString -->
                                <xsl:text>
            # heuristic (i.e. hack) to infer MFString type from Python object, if not deduced from (Extern)ProtoDeclare
            if not (self.type == 'MFString') and isinstance(self.value,list) and isinstance(self.value[0],str):
                # print('*** found MFString when preparing XML output, fieldValue name=' + self.name)
                self.type = 'MFString'</xsl:text>
            <!--
            if isinstance(self.value,str) and isinstance(self.value,list) and isValidMFString(self.value): # TODO and (len(MFString(self.value).value) > 1) consider MF length method
                print('*** found MFString #2 fieldValue name=' + self.name)
                self.type = 'MFString' # contains quoted string</xsl:text> -->
                                <xsl:text>
            # print('</xsl:text>
                                <xsl:value-of select="$elementName"/>
                                <xsl:text> name=' + self.name + ' type=' + str(self.type) + ' type(value)=' + str(type(self.value)) + ' value=' + str(self.value))</xsl:text>
                                <xsl:text>
            if (self.type == 'MFString'):
                _newValue = "'" + MFString(self.value).XML() + "'"
                # print('*** computed fieldValue MFString',_newValue)
            elif isinstance(self.value,str):    ### (self.type == 'SFString'):
                _newValue = "'" + SFString(self.value).XML() + "'" ## here!
                # print('*** computed fieldValue (str)',_newValue)
            elif isinstance(self.value,(list,tuple)):
                # print('*** found',str(type(self.value)))
                _newValue = "'"
                for each in self.value:
                    _newValue += str(each).replace('(','').replace(')','').replace(',',' ') + ' '
                _newValue = _newValue.strip()
                _newValue += "'"
                # print('*** computed fieldValue (list,tuple)',_newValue)
            else:
                _newValue = "'" + str(self.value).replace('(','').replace(')','').replace(',',' ')
                _newValue = _newValue.rstrip() + "'"
                # print('*** computed fieldValue default',_newValue)</xsl:text>
                <!--
                                <xsl:text>='" + </xsl:text>
                                <xsl:text>str</xsl:text>
                                <xsl:text>(</xsl:text>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>) + "'" -->
                                <xsl:text>
            result += " value=" + _newValue</xsl:text>
                            </xsl:when>
                            <xsl:when test="(string-length(@type) > 0)"><!-- not(@type='SFString')" -->
                                <!-- Use field type for value conversion, for example SFString handling of apostrophes and quotes -->
                                <xsl:text>
            result += " </xsl:text>
                                <xsl:value-of select="translate($fieldName,'_','')"/><!-- de-mung class_ id_ and style attributes -->
                                <xsl:text>='" + </xsl:text>
                                <xsl:value-of select="@type"/>
                                <xsl:text>(</xsl:text>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>).XML()</xsl:text>
                                <xsl:text> + "'"</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="translate($fieldName,'_','')"/><!-- de-mung class_ id_ and style attributes -->
                                <xsl:text>
            result += " </xsl:text>
                                <xsl:text>='" + </xsl:text>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text> + "'"</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                        
                    </xsl:if>
                </xsl:for-each>
                <xsl:text>
        if not self.hasChild()</xsl:text>
            <xsl:if test="(@name = 'Script') or (@name = 'ShaderProgram') or (@name = 'ShaderPart')">
                <xsl:text> and not self.sourceCode</xsl:text>
            </xsl:if>
            <xsl:text>:</xsl:text>
                <xsl:text disable-output-escaping="yes"><![CDATA[
            if syntax.upper() == "HTML5":
                result += '></]]></xsl:text><!-- closing tag -->
                <xsl:value-of select="$elementName"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[>' + '\n' # no self-closing tags allowed by HTML5
            elif syntax.upper() == "XML":
                result += '/>' + '\n' # singleton element
            else:
                raise X3DValueError('.toXML(syntax=' + syntax + ') is incorrect, allowed values are "HTML5" and "XML"')
        else:
            result += '>' + '\n']]></xsl:text>
                <!-- output child SFNode/MFNode fields as child XML elements -->
                <xsl:choose>
                    <xsl:when test="($elementName = 'head')">
                        <!-- head is a special case, component/unit/meta are forcibly collected under MFNode 'children' -->
                        <!-- ## result += indent + '  ' + 'TODO iterate over each child element' + '\n' -->
                        <xsl:text>
            if self.__children: # walk each child in list, if any (avoid empty list recursion)
                ## print('* </xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text> found self.children, now invoking XML(' + str(indentLevel+1) + ')', flush=True)
                # order is significant for component, unit, meta statements
                if self.children: # walk each child in list, if any (avoid empty list recursion)
                    for each in self.children:
                        # TODO check order of output: component unit meta
                        result += each.XML(indentLevel=indentLevel+1, syntax=syntax)</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:for-each select="$allFields[contains(@type,'Node')]">
                            <xsl:sort select="(@type='MFNode')"/>
                            <xsl:sort select="(@type='SFNode')"/>
                            <xsl:sort select="(@name = 'ProtoBody')"/>
                            <xsl:sort select="(@name = 'ProtoInterface')"/>
                            <xsl:sort select="@name" order="ascending"/>

                            <xsl:variable name="fieldName">
                                <xsl:call-template name="fieldName">
                                    <xsl:with-param name="name" select="@name"/>
                                </xsl:call-template>
                            </xsl:variable>
                            <xsl:variable name="defaultValue">
                                <xsl:call-template name="pythonValue">
                                    <xsl:with-param name="x3dValue" select="@default"/>
                                    <xsl:with-param name="x3dType" select="@type"/>
                                </xsl:call-template>
                            </xsl:variable>
                            <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                            <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                                <xsl:choose>
                                    <xsl:when test="(@type='SFNode')">
                                        <xsl:text>
            if self.</xsl:text>
                        <!-- not inherited from  _X3DNode
                        <xsl:if test="not($fieldName = 'IS') and not($fieldName = 'metadata')"> 
                            <xsl:text>__</xsl:text>
                        </xsl:if> -->
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # output this SFNode
                result += self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>.XML(indentLevel=indentLevel+1, syntax=syntax)</xsl:text>
                                    </xsl:when>
                                    <xsl:otherwise>
                        <!-- ## result += indent + '  ' + 'TODO iterate over each child element' + '\n' -->
                                        <xsl:text>
            ### if self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # walk each child in list, if any
            ### print('* </xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text> found self.children with self.hasChild()=' + str(self.hasChild()) + ' and len(</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>)=' + str(len(self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>)) + ', now invoking XML(' + str(indentLevel+1) + ')', flush=True)
            if self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # walk each child in list, if any (avoid empty list recursion)
                for each in self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>:
                    result += each.XML(indentLevel=indentLevel+1, syntax=syntax)</xsl:text>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:if>
                        </xsl:for-each>
                    </xsl:otherwise>
                </xsl:choose>
<!-- '\n']]></xsl:text>
                <xsl:text disable-output-escaping="yes"><![CDATA[
        result += indent +
-->
                <xsl:if test="(@name = 'Script') or (@name = 'ShaderProgram') or (@name = 'ShaderPart')">
                    <!-- debug diagnostic
                    <xsl:message>
                        <xsl:text>*** found @name=</xsl:text>
                        <xsl:value-of select="@name"/>
                        <xsl:text> for sourceCode test</xsl:text>
                    </xsl:message> -->
                    <xsl:text disable-output-escaping="yes"><![CDATA[
            if self.sourceCode:
                result += indent + '<![]]></xsl:text><xsl:text>CDATA[' + (self.sourceCode) + ']</xsl:text>
                    <xsl:text disable-output-escaping="yes"><![CDATA[]>\n']]></xsl:text>
                </xsl:if>
                <xsl:text disable-output-escaping="yes"><![CDATA[
            result += indent + '</]]></xsl:text><!-- closing tag -->
                <xsl:value-of select="$elementName"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[>' + '\n'
#       print('XML serialization complete.', flush=True)
        return result]]></xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- JSON() functions -->
        <xsl:text>
    # output function - - - - - - - - - -
    def JSON(self, indentLevel=0, syntax="JSON"):
        """ Provide X3D output serialization using JSON encoding. """
        result = ''
        indent = '    ' * indentLevel</xsl:text>
        <xsl:choose>
            <xsl:when test="($elementName = 'X3D')">
        <xsl:text>
        # if _DEBUG: result += indent + '# invoked class function </xsl:text>
            <xsl:value-of select="$elementName"/>
            <xsl:text>.JSON(indentLevel=' + str(indentLevel) + '), indent="' + indent + '"' + '\n'
        result += indent + self.JSON_HEADER
        indent = '    ' * 2
        result += indent + '"@version":"' + self.version + '",' + '\n'
        result += indent + '"@profile":"' + self.profile + '",' + '\n'
        if self.head and self.head.hasChild():
            result += str(self.head.JSON(indentLevel=indentLevel+1, syntax=syntax))
        if self.Scene and self.Scene.hasChild():
            result += str(self.Scene.JSON(indentLevel=indentLevel+1, syntax=syntax))
            result += '\n' + indent + '}' + '\n'
            result += '}' + '\n'
#       print('JSON serialization complete.', flush=True)
        return result</xsl:text>
            </xsl:when>
            <xsl:otherwise> <!-- non-X3D (i.e. non-root) JSON() -->
                <xsl:text>
        result = indent ### confirm
        # if _DEBUG: result += indent + '# invoked class function
        # here we are DEBUG</xsl:text>
        <xsl:if test="not(($elementName = 'head') or ($elementName = 'Scene') or ($elementName = 'component') or ($elementName = 'unit') or ($elementName = 'meta'))">
                <xsl:text>
        result += '{ '</xsl:text>
        </xsl:if>
        <xsl:if test="not(($elementName = 'component') or ($elementName = 'unit') or ($elementName = 'meta'))">

                <xsl:text>
        result += '"</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text>"'</xsl:text>

                <xsl:text>
        result += ' : ' </xsl:text>
                <xsl:if test="(($elementName = 'head') or ($elementName = 'Scene'))">
                        <xsl:text>
        result += indent + '{\n'   # added this newline for DEBUG.  attributre group prints the {</xsl:text>
                </xsl:if>
        </xsl:if>
        <xsl:text>
        attributeResult = ''</xsl:text>
                <!-- opening tag is unclosed since followed by attributes -->
                <!-- output simple-type fields as JSON attributes -->
                <xsl:for-each select="$allFields[not(contains(@type,'Node'))]">
                    <xsl:sort select="@name[not(.='DEF') and not(.='USE')]" order="ascending"/>
                    <xsl:sort select="(@name = 'USE')"/>
                    <xsl:sort select="(@name = 'DEF')"/>
                    
                    <xsl:variable name="fieldName">
                        <xsl:call-template name="fieldName">
                            <xsl:with-param name="name" select="@name"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <xsl:variable name="defaultValue">
                        <xsl:call-template name="pythonValue">
                            <xsl:with-param name="x3dValue" select="@default"/>
                            <xsl:with-param name="x3dType" select="@type"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                    <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                        <xsl:text>
        if </xsl:text>
                        <xsl:choose>
                            <xsl:when test="(@type = 'SFBool')">
                                <xsl:if test="(@default = 'true')">
                                    <xsl:text>not </xsl:text>
                                </xsl:if>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>:</xsl:text>
                                <!-- https://peps.python.org/pep-0008/#inline-comments -->
                                <xsl:text>  # default=</xsl:text>
                                <xsl:value-of select="@default"/>
                            </xsl:when>
                            <xsl:when test="not(@type = 'SFString') or (string-length(@default) > 0)">
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text> != </xsl:text>
                                <xsl:value-of select="$defaultValue"/>
                                <xsl:text>:</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>:</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:text>
            attributeResult += indent + </xsl:text>
                        <xsl:text>'"@</xsl:text>
                        <xsl:value-of select="translate($fieldName,'_','')"/><!-- de-mung class_ id_ and style attributes -->
                        <xsl:text>":"' + </xsl:text>
                        <xsl:choose>
                            <!-- always stringify value in field/fieldValue since it is arbitrary type -->
                            <xsl:when test="(starts-with($elementName,'field') and ($fieldName = 'value'))">
                                <xsl:text>str</xsl:text>
                                <xsl:text>(</xsl:text>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>)</xsl:text>
                            </xsl:when>
                            <xsl:when test="(string-length(@type) > 0)"><!-- not(@type='SFString')" -->
                                <!-- Use field type for value conversion, for example SFString handling of apostrophes and quotes -->
                                <xsl:value-of select="@type"/>
                                <xsl:text>(</xsl:text>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>).JSON()</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                            </xsl:otherwise>
                        </xsl:choose>
                        
                        <xsl:text> + '"'</xsl:text>
                        <xsl:if test="not(position() = last())">
                            <xsl:text> + ',\n'</xsl:text>
                        </xsl:if>
                    </xsl:if>
                </xsl:for-each>
                <xsl:text>
        # print("attributeResult=" + attributeResult) # debug
        attributeResult = attributeResult.rstrip()
        if attributeResult.endswith(","):
            attributeResult = attributeResult[:-1] # remove trailing comma from last element of list
        if attributeResult:
            result += "{\n" + attributeResult + '\n'
        if not self.hasChild():
            if syntax.upper() != "JSON":
                raise X3DValueError('.toJSON(syntax=' + syntax + ') is incorrect, allowed value is "JSON"')
        <!--else:
                </xsl:text>
                <xsl:if test="(count(following-sibling::*) > 0)">
                    <xsl:text>,</xsl:text>
                </xsl:if>
                <xsl:text>' + '\n'-->
        else:
            if attributeResult:</xsl:text>
                <xsl:if test="(count(following-sibling::*) > 0)">
                    <xsl:text>
                result +=','</xsl:text>
                </xsl:if>
                <xsl:if test="(count(following-sibling::*) = 0)">
                    <xsl:text>
                pass</xsl:text>
                </xsl:if>
            <!--<xsl:text>
            result += '</xsl:text>
                <xsl:value-of select="$indent"/>
                <xsl:text>  </xsl:text>
                <xsl:text>'</xsl:text> -->
            <!--<xsl:text>}' + ' # hasChild()' + '\n'</xsl:text>-->
                <!-- output child SFNode/MFNode fields as child JSON elements -->
                <xsl:choose>
                    <xsl:when test="($elementName = 'head')">
                        <!-- head is a special case, component/unit/meta are forcibly collected under MFNode 'children' -->
                        <!-- ## result += indent + '  ' + 'TODO iterate over each child element' + '\n' -->
                        <xsl:text>
            if self.__children: # walk each child in list, if any
                ## print('* </xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text> found self.children, now invoking JSON(' + str(indentLevel+1) + ')', flush=True)
                # order is significant for component, unit, meta statements
                if self.children: # walk each child in list, if any (avoid empty list recursion)
                    # for each in self.children:
                        # TODO check order of output: component unit meta
                        # result += each.JSON(indentLevel=indentLevel+1, syntax=syntax)
                        comments =  JSONListHelper("children", Comment, self.children, indentLevel=indentLevel+1, syntax=syntax)
                        components = JSONListHelper("component", component, self.children, indentLevel=indentLevel+1, syntax=syntax)
                        units = JSONListHelper("unit", unit, self.children, indentLevel=indentLevel+1, syntax=syntax)
                        metas = JSONListHelper("meta", meta, self.children, indentLevel=indentLevel+1, syntax=syntax)
                        result += ",\n".join([comments,  components, units, metas])+"\n"</xsl:text>
                        </xsl:when>
                    <xsl:otherwise>
                        <xsl:for-each select="$allFields[contains(@type,'Node')]">
                            <xsl:sort select="(@type='MFNode')"/>
                            <xsl:sort select="(@type='SFNode')"/>
                            <xsl:sort select="(@name = 'ProtoBody')"/>
                            <xsl:sort select="(@name = 'ProtoInterface')"/>
                            <xsl:sort select="@name" order="ascending"/>

                            <xsl:variable name="fieldName">
                                <xsl:call-template name="fieldName">
                                    <xsl:with-param name="name" select="@name"/>
                                </xsl:call-template>
                            </xsl:variable>
                            <xsl:variable name="defaultValue">
                                <xsl:call-template name="pythonValue">
                                    <xsl:with-param name="x3dValue" select="@default"/>
                                    <xsl:with-param name="x3dType" select="@type"/>
                                </xsl:call-template>
                            </xsl:variable>
                            <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                            <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                                <xsl:choose>
                                    <xsl:when test="(@type='SFNode')">
                                        <xsl:text>
            if self.</xsl:text>
                        <!-- not inherited from  _X3DNode
                        <xsl:if test="not($fieldName = 'IS') and not($fieldName = 'metadata')"> 
                            <xsl:text>__</xsl:text>
                        </xsl:if> -->
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # output this SFNode
                result += self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>.JSON(indentLevel=indentLevel+1, syntax=syntax)</xsl:text>
                                    </xsl:when>
                                    <xsl:otherwise>
                        <!-- ## result += indent + '  ' + 'TODO iterate over each child element' + '\n' -->
                                        <xsl:text>
            ### if self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # walk each child in list, if any (avoid empty list recursion)
            ### print('* </xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text> found self.children with self.hasChild()=' + str(self.hasChild()) + ' and len(</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>)=' + str(len(self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>)) + ', now invoking JSON(' + str(indentLevel+1) + ')', flush=True)
            if self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # walk each child in list, if any (avoid empty list recursion)
                </xsl:text>
                                        <xsl:choose>
                                            <xsl:when test="not(@type = 'MFNode')">
                <xsl:text>
                for each in self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>:
                    result += each.JSON(indentLevel=indentLevel+1, syntax=syntax)</xsl:text>
                                            </xsl:when>
                                            <xsl:otherwise>
                <xsl:text>
                result +=  JSONListHelper("</xsl:text><xsl:value-of select="$fieldName"/><xsl:text>", None, self.</xsl:text> <xsl:value-of select="$fieldName"/> <xsl:text>, indentLevel=indentLevel+3, syntax=syntax)</xsl:text>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:if>
                        </xsl:for-each>
                    </xsl:otherwise>
                </xsl:choose>
                
        <xsl:if test="not(($elementName = 'head') or ($elementName = 'component') or ($elementName = 'unit') or ($elementName = 'meta'))">
                <xsl:text>
        result += indent + '}\n' ### here1? </xsl:text>
        </xsl:if>
                <xsl:if test="(count(following-sibling::*) > 0)">
                <xsl:text>
        result += indent + '}' ### here2?
        result +=',\n'</xsl:text>
                </xsl:if>
            <xsl:text>
#       print('JSON serialization complete.', flush=True)
        return result</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        
        <!-- VRML() and HTML5() functions -->
        <xsl:text>
    # output function - - - - - - - - - -
    def HTML5(self, indentLevel=0):
        """ Provide HTML5 output serialization using XML encoding with no singleton self-closing elements. """
        return self.XML(indentLevel=indentLevel+1, syntax="HTML5")</xsl:text>
        <!-- VRML() functions -->
        <xsl:text>
    # output function - - - - - - - - - -
    def VRML(self, indentLevel=0, VRML97=False):
        """ Provide X3D output serialization using VRML encoding. """
        result = ''</xsl:text>
        <xsl:if test="not($elementName = 'X3D')       and not($elementName = 'head') and not($elementName = 'Scene') and 
                      not($elementName = 'component') and not($elementName = 'unit') and not($elementName = 'meta')">
            <xsl:text>
        indent = '  ' * indentLevel</xsl:text>
        </xsl:if>
        <xsl:choose>
            <xsl:when test="($elementName = 'X3D')">
                <xsl:text>
        if VRML97:
            result += self.VRML97_HEADER + '\n'
            result += '# X3D-to-VRML97 serialization autogenerated by X3DPSAIL x3d.py' + '\n'
        else:
            result += self.CLASSIC_VRML_HEADER_PREFIX + str(self.version) + self.CLASSIC_VRML_HEADER_SUFFIX + '\n'
        result += '#X3D-to-ClassicVRML serialization autogenerated by X3DPSAIL x3d.py' + '\n'
        result += '\n'
        if not VRML97:
            result += 'PROFILE '
            if not self.profile or VRML97:
                result += 'IMMERSIVE' + '\n'
            else:
                result += self.profile + '\n'
        if self.head and self.head.hasChild():
            result += str(self.head.VRML(indentLevel=indentLevel+1, VRML97=VRML97))
        if self.Scene and self.Scene.hasChild():
            result += str(self.Scene.VRML(indentLevel=indentLevel+1, VRML97=VRML97))
        result += '\n'</xsl:text>
            </xsl:when>
            <xsl:when test="($elementName = 'Scene')">
                                        <xsl:text>
        if self.children: # walk each child in list, if any (avoid empty list recursion)
            for each in self.children:
                result += each.VRML(indentLevel=indentLevel+1, VRML97=VRML97)</xsl:text>
            </xsl:when>
            <xsl:when test="($elementName = 'head')">
                <!-- head is a special case, component/unit/meta are forcibly collected under MFNode 'children' -->
                <!-- ## result += indent + '  ' + 'TODO iterate over each child element' + '\n' -->
                <xsl:text>
        if self.children: # walk each child in list, if any (avoid empty list recursion)
            ## print('* </xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text> found self.children, now invoking VRML(' + str(indentLevel+1) + ', ' + VRML97 + ')', flush=True)
            # order is significant for component, unit, meta statements
            for each in self.children:
                # TODO check order of output: component unit meta
                result += each.VRML(indentLevel=indentLevel+1, VRML97=VRML97)</xsl:text>
            </xsl:when>
            <xsl:when test="($elementName = 'component')">
                <xsl:text>
        result += 'COMPONENT ' + self.name + ':' + str(self.level) + '\n'</xsl:text>
            </xsl:when>
            <xsl:when test="($elementName = 'unit')">
                <xsl:text>
        result += 'UNIT ' + self.category + ' ' + self.name + ' ' + str(self.conversionFactor) + '\n'</xsl:text>
            </xsl:when>
            <xsl:when test="($elementName = 'meta')">
                <xsl:text>
        result += 'META "' + self.name + '" "' + self.content + '"' + '\n'</xsl:text>
            </xsl:when>
            <xsl:when test="($elementName = 'ROUTE')">
              <xsl:text>
        result += '\n' + indent + 'ROUTE ' + self.fromNode + '.' + self.fromField + ' TO ' + self.toNode + '.' + self.toField + '\n' + indent</xsl:text>
            </xsl:when>
            
            <xsl:otherwise> <!-- non-X3D VRML() -->
                <xsl:if test="not($elementName = 'Scene') and not($elementName = 'head') and not($elementName = 'ROUTE') and not(contains($elementName, 'Proto'))">
                    <xsl:text>
        # if _DEBUG: result += indent + '# invoked class function </xsl:text>
                    <xsl:value-of select="$elementName"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[.VRML(self=' + str(self) + ', indentLevel=' + str(indentLevel) + '), indent="' + indent + '"'
        # print(result)]]></xsl:text>
                </xsl:if>
                <xsl:text>
        if indentLevel == 0:
            result += '\n'</xsl:text>
                
                <xsl:choose>
                  <xsl:when test="not($elementName = 'ROUTE') and not(contains($elementName, 'Proto')) and not(starts-with($elementName, 'field')) and
                                  not($elementName = 'EXPORT') and not($elementName = 'IMPORT') and not($elementName = 'IS') and not($elementName = 'connect') and 
                                  not($elementName = 'head') and not($elementName = 'component') and not($elementName = 'meta') and not($elementName = 'unit') and
                                  not($elementName = 'Scene')">
                    <!-- also see below; TODO simpler construct possible? -->
                    <xsl:text>
        if self.DEF:
            result += 'DEF ' + self.DEF + ' ' + '</xsl:text>
                    <xsl:value-of select="$elementName"/>
                    <xsl:text>' + ' {'
        elif self.USE:
            result += 'USE ' + self.USE # no node name, nothing follows
        else:
            result += '</xsl:text>
                    <xsl:value-of select="$elementName"/>
                    <xsl:text>' + ' {'</xsl:text>
                  </xsl:when>
                  <xsl:otherwise>
                      <!-- non-node statement -->
                      <xsl:text>
        result += '</xsl:text>
                    <xsl:value-of select="$elementName"/>
                    <xsl:text>' + ' {'</xsl:text>
                  </xsl:otherwise>
                </xsl:choose>
                <!-- opening tag is unclosed since followed by attributes -->
                <!-- output simple-type fields as XML attributes -->
                <xsl:for-each select="$allFields[not(contains(@type,'Node'))][not(@name='DEF') and not(@name='USE')]">
                    <xsl:sort select="@name" order="ascending"/>
                    <xsl:sort select="(@name = 'USE')"/>
                    <xsl:sort select="(@name = 'DEF')"/>
                    
                    <xsl:variable name="fieldName">
                        <xsl:call-template name="fieldName">
                            <xsl:with-param name="name" select="@name"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <xsl:variable name="defaultValue">
                        <xsl:call-template name="pythonValue">
                            <xsl:with-param name="x3dValue" select="@default"/>
                            <xsl:with-param name="x3dType" select="@type"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                    <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                        <xsl:text>
        if </xsl:text>
                        <xsl:choose>
                            <xsl:when test="(@type = 'SFBool')">
                                <xsl:if test="(@default = 'true')">
                                    <xsl:text>not </xsl:text>
                                </xsl:if>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>:</xsl:text>
                                <!-- https://peps.python.org/pep-0008/#inline-comments -->
                                <xsl:text> # default=</xsl:text>
                                <xsl:value-of select="@default"/>
                            </xsl:when>
                            <xsl:when test="not(@type = 'SFString') or (string-length(@default) > 0)">
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text> != </xsl:text>
                                <xsl:value-of select="$defaultValue"/>
                                <xsl:text>:</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>:</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:text>
            result += '\n' + indent + '  ' + "</xsl:text>
                        <xsl:choose>
                            <xsl:when test="($fieldName = 'sourceCode')">
                                <xsl:text>url</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="translate($fieldName,'_','')"/><!-- de-mung class_ id_ and style attributes -->
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:text> </xsl:text>
                        <xsl:text>" + </xsl:text>
                        <xsl:choose>
                            <!-- always stringify value output in field/fieldValue since it can be any arbitrary type -->
                            <xsl:when test="(starts-with($elementName,'field') and ($fieldName = 'value'))">
                                <xsl:text>str</xsl:text>
                                <xsl:text>(</xsl:text>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>)</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@type='NMTOKEN')">
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                            </xsl:when>
                            <xsl:when test="(@type='SFString')">
                                <xsl:text> '"' + </xsl:text>
                                <!-- TODO python escape for quote characters -->
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text> + '"'</xsl:text>
                            </xsl:when>
                            <xsl:when test="not(@type='SFString')">
                                <!-- Use field type for value conversion -->
                                <xsl:value-of select="@type"/>
                                <xsl:text>(</xsl:text>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text>).VRML()</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>self.</xsl:text>
                                <xsl:value-of select="$fieldName"/>
                            </xsl:otherwise>
                        </xsl:choose>
                        
                        <xsl:text> + ""</xsl:text>
                    </xsl:if>
                </xsl:for-each>
                <!-- output child SFNode/MFNode fields as child XML elements -->
                        <xsl:for-each select="$allFields[contains(@type,'Node')]">
                            <xsl:sort select="(@type='MFNode')"/>
                            <xsl:sort select="(@type='SFNode')"/>
                            <xsl:sort select="(@name = 'ProtoBody')"/>
                            <xsl:sort select="(@name = 'ProtoInterface')"/>
                            <xsl:sort select="@name" order="ascending"/>

                            <xsl:variable name="fieldName">
                                <xsl:call-template name="fieldName">
                                    <xsl:with-param name="name" select="@name"/>
                                </xsl:call-template>
                            </xsl:variable>
                            <xsl:variable name="defaultValue">
                                <xsl:call-template name="pythonValue">
                                    <xsl:with-param name="x3dValue" select="@default"/>
                                    <xsl:with-param name="x3dType" select="@type"/>
                                </xsl:call-template>
                            </xsl:variable>
                            <!-- diagostic
                            <xsl:message>
                                    <xsl:text>*** elementName=</xsl:text>
                                    <xsl:value-of select="$elementName"/>
                                    <xsl:text>, @name=</xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text>, fieldName=</xsl:text>
                                    <xsl:value-of select="$fieldName"/>
                            </xsl:message> -->
                            <!-- avoid duplicate fields problem in X3DUOM, e.g. ParticleSet geometry (TODO fix X3DUOM) -->
                            <xsl:if test="not(preceding-sibling::*[@name = $fieldName])">
                                <xsl:choose>
                                    <xsl:when test="(@type='SFNode')">
                                        <xsl:text>
        if self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # output this SFNode
            result += '\n' + '  ' + indent + '</xsl:text><!-- one further indent -->
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text> ' + self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>.VRML(indentLevel=indentLevel+1, VRML97=VRML97)</xsl:text>
                                    </xsl:when>
                                    <xsl:otherwise>
                        <!-- ## result += indent + '  ' + 'TODO iterate over each child element' + '\n' -->
                                        <xsl:text>
        if self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>: # walk each child in list, if any (avoid empty list recursion)
            result += '\n' + indent + '  ' + 'children [' + '\n' + indent + '  ' + '  '
            for each in self.</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>:
                result += each.VRML(indentLevel=indentLevel+2, VRML97=VRML97)
            result += '\n' + indent + '  ' + ']' + '\n' + indent</xsl:text>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:if>
                        </xsl:for-each>
                        <xsl:if test="not($elementName = 'ROUTE')">
                <!--  and not(contains($elementName, 'Proto')) and not(starts-with($elementName, 'field')) and
                              not($elementName = 'EXPORT') and not($elementName = 'IMPORT') and not($elementName = 'IS') and not($elementName = 'connect') and 
                              not($elementName = 'head') and not($elementName = 'component') and not($elementName = 'meta') and not($elementName = 'unit') and
                              not($elementName = 'Scene')"> also see above TODO simpler construct possible? -->
                        <xsl:text>
        else:
            result += ' '</xsl:text>
                        <xsl:choose>
                  <xsl:when test="not($elementName = 'ROUTE') and not(contains($elementName, 'Proto')) and not(starts-with($elementName, 'field')) and
                                  not($elementName = 'EXPORT') and not($elementName = 'IMPORT') and not($elementName = 'IS') and not($elementName = 'connect') and 
                                  not($elementName = 'head') and not($elementName = 'component') and not($elementName = 'meta') and not($elementName = 'unit') and
                                  not($elementName = 'Scene')">
                        <xsl:text>
        if not self.USE:
            result += '\n' + indent + '}' +  '\n' + indent</xsl:text>
                  </xsl:when>
                  <xsl:otherwise>
                        <xsl:text>
        result += '\n' + indent + '}' +  '\n' + indent</xsl:text>
                  </xsl:otherwise>
                        </xsl:choose>
                </xsl:if>
            </xsl:otherwise>
        </xsl:choose>

        <xsl:text>
#       print('VRML serialization complete.', flush=True)
        return result</xsl:text>
        
        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
    
        <xsl:variable name="attributeNameNormalizedPython">
            <!-- some X3D field names collide with Python reserved words, append _ character -->
            <!-- "single_trailing_underscore_: used by convention to avoid conflicts with Python keyword" -->
            <!-- PEP 8 - Style Guide for Python Code, Descriptive: Naming Styles -->
            <!-- https://www.python.org/dev/peps/pep-0008/#descriptive-naming-styles -->
            <xsl:choose>
                <xsl:when test="(local-name() = 'class') or (local-name() = 'global') or (local-name() = 'type')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>_</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="local-name()"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        
        <!-- common processing for each attribute -->
        <xsl:text> </xsl:text>
        <xsl:value-of select="$attributeNameNormalizedPython"/>
        <xsl:text>='</xsl:text>
        <xsl:value-of select="."/>
        <xsl:text>'</xsl:text>
        <xsl:if test="not(local-name() = $attributeNameNormalizedPython)">
            <xsl:text>&#10;</xsl:text>
            <xsl:text>""" Appended underscore to field name '</xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>' to avoid naming collision with Python reserved word"""</xsl:text>
        </xsl:if>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()"> <!-- rule to process each comment -->
    
        <!-- TODO indent -->
        <xsl:text>&#10;</xsl:text>
        <xsl:text disable-output-escaping="yes"># </xsl:text>
        <xsl:value-of select="."/>
        <xsl:text>&#10;</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="pythonBaseType">
        <xsl:param name="x3dFieldType"></xsl:param>
        
        <xsl:choose>
            <xsl:when test="contains($x3dFieldType,'Bool')">
                <!-- SFBool MFBool -->
                <xsl:text>bool</xsl:text>
            </xsl:when>
            <xsl:when test="contains($x3dFieldType,'Int32') or contains($x3dFieldType,'Image')">
                <!-- SFInt32 MFInt32, SFImage MFImage -->
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
                <!-- MFNode -->
                <xsl:text>list</xsl:text>
            </xsl:when>
            <xsl:when test="contains($x3dFieldType,'Float') or contains($x3dFieldType,'Double')   or contains($x3dFieldType,'Time') or
                            contains($x3dFieldType,'Color') or contains($x3dFieldType,'Rotation') or contains($x3dFieldType,'Vec')  or contains($x3dFieldType,'Matrix')">
                <!-- SF/MF Float, Double, Color, ColorRGBA, Rotation, Vec, Matrix -->
                <xsl:text>float</xsl:text>
            </xsl:when>
            <!-- SFNode, MFNode not accounted for here -->
            <xsl:otherwise>
                <xsl:text>pythonBaseTypeUnknown</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        
    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="pythonValue">
        <xsl:param name="x3dValue"/>
        <xsl:param name="x3dType">SFString</xsl:param><!-- default if x3dType is unknown -->
        <xsl:variable name="isMFType"        select="starts-with($x3dType,'MF')"/>
        <xsl:variable name="isTuple"         select="contains($x3dType,'Vec') or contains($x3dType,'Rotation') or contains($x3dType,'Color') or contains($x3dType,'Matrix')"/>
        <xsl:variable name="isList"          select="starts-with($x3dType,'MF') or ($x3dType = 'SFImage')"/>
        <xsl:variable name="isString"        select="($x3dType = 'SFString') or ($x3dType ='xs:string') or ($x3dType ='xs:NMTOKEN')"/>
        <xsl:variable name="tupleSize">
            <xsl:call-template name="tupleSize">
                <xsl:with-param name="x3dType" select="@type"/>
            </xsl:call-template>
        </xsl:variable>
        <xsl:variable name="inputString" select="normalize-space(translate(string($x3dValue),',',' '))"/>
        <xsl:variable name="whitespaceCount" select="string-length($inputString) - string-length(translate($inputString,' ', ''))"/>
        
        <!-- prepend delimiter if appropriate -->
        <xsl:choose>
            <xsl:when test="$isTuple and $isList and (string-length($x3dValue) > 0)">
                <xsl:text>[(</xsl:text>
            </xsl:when>
            <xsl:when test="$isList and (string-length($x3dValue) > 0)">
                <xsl:text>[</xsl:text>
            </xsl:when>
            <xsl:when test="$isTuple and not($isList)">
                <xsl:text>(</xsl:text>
            </xsl:when>
            <xsl:when test='$isString and contains($x3dValue,"&apos;")'>
                <xsl:text>"</xsl:text>
            </xsl:when>
            <xsl:when test="$isString">
                <xsl:text>'</xsl:text>
            </xsl:when>
        </xsl:choose>
        <!-- convert value from .x3d XML syntax to Python -->
        <xsl:choose>
            <xsl:when test="($x3dValue = 'true') and ($x3dType = 'SFBool')">
                <xsl:text>True</xsl:text>
            </xsl:when>
            <xsl:when test="($x3dValue = 'false') and ($x3dType = 'SFBool')">
                <xsl:text>False</xsl:text>
            </xsl:when>
            <xsl:when test="($x3dValue = 'NULL') and ($x3dType = 'SFNode')">
                <xsl:text>None</xsl:text>
            </xsl:when>
            <xsl:when test="$isList and (string-length($x3dValue) = 0)">
                <xsl:text>[]</xsl:text><!-- pylint prefers [] to list(), except in initializer?? -->
            </xsl:when>
            <xsl:when test="(string-length($x3dValue) > 0) and $isString">
                <xsl:value-of select="$x3dValue"/>
            </xsl:when>
            <!-- TODO MFString commas between list entries -->
            <xsl:when test="(string-length($inputString) > 0) and $isMFType and ($tupleSize > 1) and ($whitespaceCount + 1 > $tupleSize)">
                <xsl:for-each select="tokenize($inputString,' ')">
                   <xsl:value-of select="."/>
                   <xsl:choose>
                       <xsl:when test="(position() = last())">
                           <!-- done -->
                       </xsl:when>
                       <xsl:when test="(position() mod $tupleSize = 0)">
                            <xsl:text>)</xsl:text>
                            <xsl:if test="(position() != last())">
                                <xsl:text>, (</xsl:text>
                            </xsl:if>
                       </xsl:when>
                       <xsl:otherwise>
                           <xsl:text>, </xsl:text>
                       </xsl:otherwise>
                   </xsl:choose>
               </xsl:for-each>
            </xsl:when>
            <xsl:when test="(string-length($x3dValue) > 0)">
                <xsl:value-of select="replace($x3dValue,' ',', ')"/><!-- pylint wants space after each comma separating values -->
            </xsl:when>
            <xsl:when test="$isString">
                <xsl:text></xsl:text>
            </xsl:when>
             <xsl:when test="not($isList) and not($isTuple)">
                <xsl:text>None</xsl:text>
            </xsl:when>
        </xsl:choose>
        <!-- append delimiter if appropriate -->
        <xsl:choose>
            <xsl:when test="$isTuple and $isList and (string-length($x3dValue) > 0)">
                <xsl:text>)]</xsl:text>
            </xsl:when>
            <xsl:when test="$isList and (string-length($x3dValue) > 0)">
                <xsl:text>]</xsl:text>
            </xsl:when>
            <xsl:when test="$isTuple and not($isList)">
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test='$isString and contains($x3dValue,"&apos;")'>
                <xsl:text>"</xsl:text>
            </xsl:when>
            <xsl:when test="$isString">
                <xsl:text>'</xsl:text>
            </xsl:when>
        </xsl:choose>
    </xsl:template>

    <!-- ===================================================== -->

    <xsl:template name="fieldName">
        <xsl:param name="name"></xsl:param>
        
        <!-- python reserved keywords -->
        <!-- https://docs.python.org/3/reference/lexical_analysis.html#keywords -->
            
        <!-- some X3D field names collide with Python reserved words, append _ character -->
        <!-- "single_trailing_underscore_: used by convention to avoid conflicts with Python keyword" -->
        <!-- PEP 8 - Style Guide for Python Code, Descriptive: Naming Styles -->
        <!-- https://www.python.org/dev/peps/pep-0008/#descriptive-naming-styles -->
    
        <xsl:choose>
            <xsl:when test="($name='class') or ($name='id') or ($name='style') or ($name='global')">
                <xsl:value-of select="$name"/>
                <xsl:text>_</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="translate(@name,'-','')"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <xsl:template name="valueRestrictionCheck">
        <xsl:param name="fieldName"></xsl:param>
        <xsl:param name="simpleType"></xsl:param>
        <xsl:param name="type"></xsl:param>
        <xsl:param name="minInclusive"></xsl:param>
        <xsl:param name="maxInclusive"></xsl:param>
        <xsl:param name="minExclusive"></xsl:param>
        <xsl:param name="maxExclusive"></xsl:param>
        <xsl:param name="indent"></xsl:param>
        
        <xsl:variable name="assertionPrefix">
            <xsl:text>
</xsl:text>
            <xsl:value-of select="$indent"/>
            <xsl:text>    </xsl:text>
        </xsl:variable>
        <xsl:variable name="assertionSuffix">
            <xsl:text>('</xsl:text>
            <xsl:value-of select="$fieldName"/>
            <xsl:text>', </xsl:text>
            <xsl:value-of select="$fieldName"/>
        </xsl:variable>
        
        <xsl:choose>
            <xsl:when test="($fieldName = 'bboxSize')">
                <xsl:value-of select="$assertionPrefix"/>
                <xsl:text>assertBoundingBox</xsl:text>
                <xsl:value-of select="$assertionSuffix"/>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test="ends-with($simpleType,'Choices')">
                <xsl:variable name="assertFunctionName" select="concat('assertValid',upper-case(substring($simpleType,1,1)),substring(substring-before($simpleType,'Choices'),2))"/>
                <xsl:value-of select="$assertionPrefix"/>
                <xsl:value-of select="$assertFunctionName"/>
                <xsl:value-of select="$assertionSuffix"/>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test="contains($type, 'Color') or ((number($minInclusive) = 0) and (number($maxInclusive) = 1))">
                <xsl:value-of select="$assertionPrefix"/>
                <xsl:text>assertZeroToOne</xsl:text>
                <xsl:value-of select="$assertionSuffix"/>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test="(number($minInclusive) = 0) and (string-length($maxInclusive) = 0) and (string-length($maxExclusive) = 0)">
                <xsl:value-of select="$assertionPrefix"/>
                <xsl:text>assertNonNegative</xsl:text>
                <xsl:value-of select="$assertionSuffix"/>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:when test="(number($minExclusive) = 0) and (string-length($maxInclusive) = 0) and (string-length($maxExclusive) = 0)">
                <xsl:value-of select="$assertionPrefix"/>
                <xsl:text>assertPositive</xsl:text>
                <xsl:value-of select="$assertionSuffix"/>
                <xsl:text>)</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:choose>
                    <xsl:when test="(string-length($minInclusive) > 0)">
                        <xsl:value-of select="$assertionPrefix"/>
                        <xsl:text>assertGreaterThanEquals</xsl:text>
                        <xsl:value-of select="$assertionSuffix"/>
                        <xsl:text>, </xsl:text>
                        <xsl:value-of select="$minInclusive"/>
                        <xsl:text>)</xsl:text>
                    </xsl:when>
                    <xsl:when test="(string-length($minExclusive) > 0)">
                        <xsl:value-of select="$assertionPrefix"/>
                        <xsl:text>assertGreaterThan</xsl:text>
                        <xsl:value-of select="$assertionSuffix"/>
                        <xsl:text>, </xsl:text>
                        <xsl:value-of select="$minExclusive"/>
                        <xsl:text>)</xsl:text>
                    </xsl:when>
                </xsl:choose>
                <xsl:choose>
                    <xsl:when test="(string-length($maxInclusive) > 0)">
                        <xsl:value-of select="$assertionPrefix"/>
                        <xsl:text>assertLessThanEquals</xsl:text>
                        <xsl:value-of select="$assertionSuffix"/>
                        <xsl:text>, </xsl:text>
                        <xsl:value-of select="$maxInclusive"/>
                        <xsl:text>)</xsl:text>
                    </xsl:when>
                    <xsl:when test="(string-length($maxExclusive) > 0)">
                        <xsl:value-of select="$assertionPrefix"/>
                        <xsl:text>assertLessThan</xsl:text>
                        <xsl:value-of select="$assertionSuffix"/>
                        <xsl:text>, </xsl:text>
                        <xsl:value-of select="$maxExclusive"/>
                        <xsl:text>)</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text></xsl:text><!-- empty string -->
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template name="tupleSize">
		<xsl:param name="x3dType"/>
		
		<xsl:choose>
			<xsl:when test="contains($x3dType,'FBool')   or contains($x3dType,'FInt32')   or contains($x3dType,'FFloat') or 
                            contains($x3dType,'FDouble') or contains($x3dType,'FString')  or contains($x3dType,'FTime') or 
                            contains($x3dType,'FNode')   or 
                            contains($x3dType,'token')   or starts-with($x3dType,'xs:ID') or contains($x3dType,'NMTOKEN')">
				<xsl:text>1</xsl:text>
			</xsl:when>
			<xsl:when test="contains($x3dType,'FImage')">
				<!-- irregular tuple size, ignore -->
				<xsl:text>1</xsl:text>
			</xsl:when>
			<xsl:when test="contains($x3dType,'FVec2')">
				<xsl:text>2</xsl:text>
			</xsl:when>
			<xsl:when test="contains($x3dType,'FVec3') or ends-with($x3dType,'FColor') or (@baseType='bboxSizeType')">
				<xsl:text>3</xsl:text>
			</xsl:when>
			<xsl:when test="contains($x3dType,'FVec4') or contains($x3dType,'Rotation') or ends-with($x3dType,'FColorRGBA')">
				<xsl:text>4</xsl:text>
			</xsl:when>
			<xsl:when test="contains($x3dType,'FMatrix3')">
				<xsl:text>9</xsl:text>
			</xsl:when>
			<xsl:when test="contains($x3dType,'FMatrix4')">
				<xsl:text>16</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<!-- report problem -->
				<xsl:message>
					<xsl:text>*** tupleSize not computed for type=</xsl:text>
					<xsl:value-of select="$x3dType"/>
				</xsl:message>
				<xsl:text>0</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
    </xsl:template>

    <!-- ===================================================== -->

</xsl:stylesheet>
