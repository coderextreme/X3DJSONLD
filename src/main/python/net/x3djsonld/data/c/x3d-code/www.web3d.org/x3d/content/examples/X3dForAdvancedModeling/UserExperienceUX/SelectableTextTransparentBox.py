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
    meta(content='SelectableTextTransparentBox.x3d',name='title'),
    meta(content='Display Anchor-linked instructions as Text and include transparent Box to simplify user selection. Authors can change the Material transparency value to view the Box, which helps when resizing it to fit the Text.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='9 February 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='SelectableText design pattern is available using Shape customizer in X3D-Edit.',name='info'),
    meta(content='SelectableTextExampleOutput.png',name='Image'),
    meta(content='https://savage.nps.edu/X3D-Edit/images/ShapeCustomizer.png',name='Image'),
    meta(content='https://x3dgraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/UserInterface/SelectableTextTransparentBox.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SelectableTextTransparentBox.x3d'),
    Background(skyColor=[(0,0.333333,0.66667)]),
    Anchor(description='select text to view scene',url=["../HelloWorld.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorld.x3d","../HelloWorld.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorld.wrl"],
      children=[
      Shape(
        geometry=Text(string=["Users can easily select Text","when a transparent Box is","overlaid behind it.","","Select this text to see","HelloWorld.x3d"],
          #  Text string "" means to skip a line, each quoted string is rendered on a separate line. 
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.75,style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.9,0.4)))),
      #  Invisible box behind text makes user selection (and mouse-over hovering for tooltips) easier. 
      Shape(
        geometry=Box(size=(10,4,0.1)),
        appearance=Appearance(
          #  Change Material transparency='0.8' to see and adjust the size of the Box in order to fit the Text. 
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SelectableTextTransparentBox.py")
