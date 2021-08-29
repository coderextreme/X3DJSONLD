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
    meta(content='TextHaveFunWithX3D.x3d',name='title'),
    meta(content='Simple smiley-face example illustrating an emoticon character entity, used in an MFString Text.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 April 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TextHaveFunWithX3D.png',name='Image'),
    meta(content='http://unicode.org/emoji/charts/full-emoji-list.html',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Emoticons_(Unicode_block)',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Universal_Character_Set_characters',name='reference'),
    meta(content='https://www.w3.org/TR/html4/sgml/entities.html',name='reference'),
    meta(content='https://dev.w3.org/html5/html-author/charref',name='reference'),
    meta(content='https://www.w3.org/wiki/Common_HTML_entities_used_for_typography',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2007',name='rights'),
    meta(content='emoji emoticon, X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextHaveFunWithX3D.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextHaveFunWithX3D.x3d'),
    Background(skyColor=[(0.819608,0.984314,1)]),
    Shape(
      #  &#9786; = smiley face emoticon, and "" means skip a line 
      geometry=Text(string=["Have fun","with X3D!","",":)   ☺"],
        fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
      appearance=Appearance(
        material=Material(ambientIntensity=0.25,diffuseColor=(0,0.251004,0.239248),shininess=0.06,specularColor=(0.177935,0.249369,0.229278),
          #  Universal Media Library: ArtDeco 19 
          )))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextHaveFunWithX3D.py")
