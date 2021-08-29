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
    meta(content='HelloGermany.x3d',name='title'),
    meta(content='HelloGermany example scene to show German special characters, built for NPS course MV3204 X3D for Web Authors.',name='description'),
    meta(content='Tobias Brennenstuhl',name='creator'),
    meta(content='7 January 2020',name='created'),
    meta(content='8 April 2020',name='modified'),
    meta(content='Hello World, Germany',name='subject'),
    meta(content='images/HelloGermany.freeWRL.png',name='Image'),
    meta(content='images/HelloGermany.H3DViewer.png',name='Image'),
    meta(content='images/HelloGermany.InstantReality.png',name='Image'),
    meta(content='images/HelloGermany.Octaga.png',name='Image'),
    meta(content='images/HelloGermany.view3DScene.png',name='Image'),
    meta(content='images/HelloGermany.Xj3dPlugin.png',name='Image'),
    meta(content='images/HelloGermanyX_ITE.png',name='Image'),
    meta(content='images/HelloGermanyX3DOM.png',name='Image'),
    meta(content='https://www.w3.org/International',name='reference'),
    meta(content='https://de.wikipedia.org/wiki/Liste_von_Hallo-Welt-Programmen/H%C3%B6here_Programmiersprachen',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Percent-encoding',name='reference'),
    meta(content='https://helloworldcollection.de/#VRML',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/Hello_World',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program',name='reference'),
    meta(content='https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world',name='reference'),
    meta(content='https://gitlab.nps.edu/Savage/mv3204x3dforwebauthors/blob/master/assignments/DirectedStudy/Tobias/Scenes/HelloWorldFromGermany.x3d',name='reference'),
    meta(content='https://www.youtube.com/channel/UCSOnGlgAFxkWg8ilg-JEbAQ',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloGermany.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HelloGermany.x3d'),
    Background(skyColor=[(0,0.458824,0.941176)]),
    Viewpoint(description='Hallo Deutschland! Viel Spaß mit X3D!'),
    Anchor(description='List of Hello World example programs in German',url=["https://de.wikipedia.org/wiki/Liste_von_Hallo-Welt-Programmen/H%C3%B6here_Programmiersprachen"],
      children=[
      Transform(translation=(0,-2,0),
        children=[
        Transform(translation=(0,4.8,0),
          children=[
          Shape(
            geometry=Text(string=["Hallo Deutschland!"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
            appearance=Appearance(DEF='BlackAppearance',
              material=Material(diffuseColor=(0.01,0.01,0.01))))]),
        Shape(
          geometry=Text(string=["Viel Spaß mit X3D!","Have fun with X3D!"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(USE='BlackAppearance')),
        Transform(DEF='GermanFlag',translation=(0,0.7,0),
          children=[
          Transform(translation=(0,3,0),
            children=[
            Shape(
              geometry=Box(size=(6,1,0.1)),
              appearance=Appearance(USE='BlackAppearance'))]),
          Transform(translation=(0,2,0),
            children=[
            Shape(
              geometry=Box(size=(6,1,0.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.678431,0.039216,0),shininess=0.5)))]),
          Transform(translation=(0,1,0),
            children=[
            Shape(
              geometry=Box(size=(6,1,0.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.921569,0.854902,0))))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HelloGermany.py")
