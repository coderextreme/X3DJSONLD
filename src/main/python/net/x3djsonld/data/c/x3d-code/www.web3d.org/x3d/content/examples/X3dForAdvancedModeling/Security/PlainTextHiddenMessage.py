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
    meta(content='PlainTextHiddenMessage.x3d',name='title'),
    meta(content='This example illustrates possibility of message obfuscation by using polygonal and line-based geometry instead of native Text-node strings. Note that Text-node geometries become polygonal once rendered and might also be saved in geometric form.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 April 2011',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='PlainTextHiddenMessageFigure.png',name='Image'),
    meta(content='PlainTextHiddenMessage.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html#Security',name='reference'),
    meta(content='X3D IndexedLineSet Text messages',name='subject'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Security/PlainTextHiddenMessage.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PlainTextHiddenMessage.x3d'),
    Background(skyColor=[(1,0.780392,0)]),
    Viewpoint(description='Plain Text Hidden Message'),
    #  Regular 3D Text string 
    Transform(translation=(0,1,0),
      children=[
      Shape(
        geometry=Text(DEF='PlainText',string=["Plain text"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=1.6)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.4,0.8))))]),
    #  Line drawing text characters 
    Transform(scale=(0.2,0.2,0.2),translation=(-3.9,-2,0),
      children=[
      Shape(
        geometry=IndexedLineSet(DEF='HiddenMessageLineSet',coordIndex=[0,2,1,4,3,5,-1,6,7,-1,8,9,10,11,12,13,8,-1,14,15,16,17,18,19,14,-1,25,20,21,24,21,22,23,-1,26,27,29,28,-1,30,31,32,33,34,-1,40,35,36,39,36,37,38,-1,41,48,47,46,42,43,44,45,-1,49,56,55,54,50,51,52,53,-1,57,58,62,61,60,59,58,62,63,-1,69,70,72,71,65,66,67,68,-1,76,75,74,77,74,73,78,-1],
          coord=Coordinate(point=[(0,0,0),(0,2,0),(0,4,0),(2,0,0),(2,2,0),(2,4,0),(3,0,0),(3,4,0),(4,0,0),(4,4,0),(5,4,0),(6,3,0),(6,1,0),(5,0,0),(7,0,0),(7,4,0),(8,4,0),(9,3,0),(9,1,0),(8,0,0),(10,0,0),(10,2,0),(10,4,0),(12,4,0),(11,2,0),(12,0,0),(13,0,0),(13,4,0),(15,4,0),(15,0,0),(18,0,0),(18,4,0),(19,2,0),(20,4,0),(20,0,0),(21,0,0),(21,2,0),(21,4,0),(23,4,0),(23,2,0),(23,0,0),(24,0,0),(24,2,0),(24,3.5,0),(24.5,4,0),(26,4,0),(25,2,0),(26,2,0),(26,0,0),(27,0,0),(27,2,0),(27,3.5,0),(27.5,4,0),(29,4,0),(28,2,0),(29,2,0),(29,0,0),(30,0,0),(30,2,0),(30,3,0),(31,4,0),(32,3,0),(32,2,0),(32,0,0),(33,0,0),(33,1,0),(33,3,0),(34,4,0),(35,4,0),(34,2,0),(35,2,0),(34,0,0),(35,0,0),(36,0,0),(36,2,0),(36,4,0),(38,4,0),(37,2,0),(38,0,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0.2,0.4,0.8))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PlainTextHiddenMessage.py")
