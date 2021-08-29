###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    #  note quotes in comment and meta reference: https://en.wikipedia.org/wiki/"Hello,_World!"_program 
    meta(content='TextSpecialCharacters.x3d',name='title'),
    meta(content='Text node demonstration of quotation, apostrophe, ampersand and backslash characters using X3D MFString escaping for XML character entities.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='12 July 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='See screenshot figures and various encoding conversions to note that multiple equivalences in XML character representations lead to consistent results despite slight differences in source.',name='info'),
    meta(content='TextSpecialCharactersScreenshotXmlSource.png',name='reference'),
    meta(content='TextSpecialCharactersScreenshotPrettyPrintHtml.png',name='reference'),
    meta(content='Character entity references in HTML 4, http://www.w3.org/TR/REC-html40/sgml/entities.html',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/"Hello,_World!"_program',name='reference'),
    meta(content='Copyright (c) Don Brutzman and Leonard Daly, 2008',name='rights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextSpecialCharacters.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextSpecialCharacters.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Default View',position=(0,0,15)),
    Shape(
      #  Empty string "" means to skip a line 
      #  The ampersand escape characters are based on XML rules 
      #  apostrophe ' is &apos; and needs to be escaped in single-quote delimiters used for string='value' attribute 
      #  ampersand & is &amp; and needs to be escaped 
      #  quotation mark " is &quot; and isn't needed if single-quote delimiters used for string='value' attribute 
      #  quotation mark " character can be used within an X3D string value if escaped with backslash \ as \" 
      #  backslash \ is used as escape character for " (and itself) in X3D 
      #  character entities are listed in HTML specification and are good for any XML 
      geometry=Text(DEF='DefaultText',string=["Character entity substitutions:"         "empty string \"\" skips a line:"         ""         "apostrophe  \'  is &apos;"          "ampersand & is &"         "quote mark  \"  is &quot;"         "backslash \\ is X3D escape character"         "double backslash \\\\ is X3D backslash \\ character"         "Pi Π is &#928; XML character entity"],
        fontStyle=FontStyle(DEF='CenteredFontStyle',justify=["MIDDLE","MIDDLE"])),
      appearance=Appearance(
        material=Material(DEF='DefaultMaterial',diffuseColor=(0.2,0.2,0.2))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextSpecialCharacters.py")
