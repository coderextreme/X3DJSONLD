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
    meta(content='HelloCostaRica.x3d',name='title'),
    meta(content='Hello World: ¡Pura vida! Hello Costa Rica in Spanish, Hola Costa Rica en español',name='description'),
    meta(content='Don Brutzman and Sarah Brutzman',name='creator'),
    meta(content='3 July 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='HelloWorld.x3d',name='reference'),
    meta(content='Hello World Example Costa Rica Spanish',name='subject'),
    meta(content='https://www.web3d.org/realtime-3d/news/internationalization-x3d',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Spanish_orthography',name='reference'),
    meta(content='images/HelloCostaRica.png',name='Image'),
    meta(content='images/HelloCostaRicaBsContact.png',name='Image'),
    meta(content='images/HelloCostaRicaFreeWrl.png',name='Image'),
    meta(content='images/HelloCostaRicaH3Dviewer.png',name='Image'),
    meta(content='images/HelloCostaRicaInstantReality.png',name='Image'),
    meta(content='images/HelloCostaRicaView3dscene.png',name='Image'),
    meta(content='images/HelloCostaRicaX3DOM.png',name='Image'),
    meta(content='images/HelloCostaRicaXj3D.png',name='Image'),
    meta(content='https://en.wikipedia.org/wiki/Costa_Rica',name='reference'),
    meta(content='https://es.wikipedia.org/wiki/Costa_Rica',name='reference'),
    meta(content='https://es.wikipedia.org/wiki/Pura_vida_(frase)',name='reference'),
    meta(content='Flag_of_Costa_Rica.svg',name='Image'),
    meta(content='Flag_of_Costa_Rica.svg.png',name='Image'),
    meta(content='https://en.wikipedia.org/wiki/Costa_Rica#/media/File:Flag_of_Costa_Rica.svg',name='reference'),
    meta(content='http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloCostaRica.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='¡Hola Costa Rica: Pura Vida!'),
    Viewpoint(DEF='Hola',centerOfRotation=(1.2,0.25,0),description='¡Hola Costa Rica: Pura Vida!',position=(1.2,0.25,8)),
    Transform(translation=(4,1,0),
      children=[
      Anchor(description='Pura Vida page on Wikipedia',parameter=["target=blank"],url=["https://es.wikipedia.org/wiki/Pura_vida_(frase)"],
        children=[
        Shape(
          geometry=Text(string=["¡Pura vida!"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLDITALIC')),
          appearance=Appearance(DEF='TextAppearance',
            material=Material(diffuseColor=(1,1,1)))),
        Shape(
          geometry=Box(size=(4.5,1.2,.001)),
          appearance=Appearance(
            material=Material(transparency=1)))])]),
    Transform(translation=(-0.5,-1.25,0),
      children=[
      Transform(translation=(1.8,0,0),
        children=[
        Shape(
          geometry=Text(string=["Hola Costa Rica en español"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLDITALIC')),
          appearance=Appearance(USE='TextAppearance'))]),
      Transform(translation=(-0.4,2.2,0),
        children=[
        Anchor(description='Costa Rica Wikipedia page',url=["http://en.wikipedia.org/wiki/Costa_Rica"],
          children=[
          Shape(
            geometry=Box(DEF='FlagAspectRatio',size=(5,3,.0001)),
            appearance=Appearance(
              texture=ImageTexture(url=["Flag_of_Costa_Rica.svg.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorld/Flag_of_Costa_Rica.svg.png"])))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloCostaRica.py")
