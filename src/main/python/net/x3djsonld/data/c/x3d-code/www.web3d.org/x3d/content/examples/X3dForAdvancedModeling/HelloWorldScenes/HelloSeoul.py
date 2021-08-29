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
    meta(content='HelloSeoul.x3d',name='title'),
    meta(content='Hello World: Hello Seoul in Korean, 안녕 서울',name='description'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='22 January 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='HelloWorld.x3d',name='reference'),
    meta(content='Hello World Example',name='subject'),
    meta(content='https://www.web3d.org/realtime-3d/news/internationalization-x3d',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Korean_language',name='reference'),
    meta(content='images/HelloSeoul.png',name='Image'),
    meta(content='images/HelloSeoulBsContact.png',name='Image'),
    meta(content='images/HelloSeoulH3Dviewer.png',name='Image'),
    meta(content='images/HelloSeoulInstantReality.png',name='Image'),
    meta(content='images/HelloSeoulView3dscene.png',name='Image'),
    meta(content='images/HelloSeoulX3DOM.png',name='Image'),
    meta(content='images/HelloSeoulXj3D.png',name='Image'),
    meta(content='http://en.wikipedia.org/wiki/Seoul',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/File:Seal_of_Seoul.svg',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Korean_character',name='reference'),
    meta(content='http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloSeoul.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Hello Seoul!! 안녕 서울!!'),
    Viewpoint(description='Hello Seoul!! 안녕 서울!!',position=(0,1,7)),
    #  character entities: &#50504;&#45397; &#49436;&#50872; 
    Transform(translation=(2,1,0),
      children=[
      Shape(
        geometry=Text(string=["안","녕","서","울"],
          #  "&#50504;" "&#45397;" "&#49436;" "&#50872;" 
          fontStyle=FontStyle(horizontal=False,justify=["MIDDLE","MIDDLE"],style_='BOLDITALIC')),
        appearance=Appearance(DEF='TextAppearance',
          material=Material(diffuseColor=(1,1,1))))]),
    Transform(translation=(-0.5,-1.25,0),
      children=[
      Shape(
        geometry=Text(string=["Hello Seoul !!"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLDITALIC')),
        appearance=Appearance(USE='TextAppearance')),
      Transform(translation=(-0.4,2.6,0),
        children=[
        Anchor(description='Seoul Wikipedia page',url=["http://en.wikipedia.org/wiki/Seoul"],
          children=[
          Shape(
            geometry=Box(size=(4,4,.0001)),
            appearance=Appearance(
              texture=ImageTexture(url=["2000px-Seal_of_Seoul.svg.png","https://upload.wikimedia.org/wikipedia/commons/thumb/5/51/Seal_of_Seoul.svg/2000px-Seal_of_Seoul.svg.png","Seoul_Flag.png","https://upload.wikimedia.org/wikipedia/en/b/b1/Seoul_Flag.png","Seal_of_Seoul.svg"]),
              material=Material(diffuseColor=(1,1,1))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloSeoul.py")
