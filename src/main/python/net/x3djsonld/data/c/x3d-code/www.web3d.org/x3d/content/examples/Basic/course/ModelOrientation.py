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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='ModelOrientation.x3d',name='title'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='15 July 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X Y Z axis arrows and labels of X3D coordinate system to illustrate default entity center of gravity at 0 0 0, with default nose orientation pointing along the +X-axis. Ground vehicles have their position raised to allow bottom to touch the ground.',name='description'),
    meta(content='ModelOrientation.jpg',name='Image'),
    meta(content='../X3dSceneAuthoringHints.html#CoordinateSystems',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/ModelOrientation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ModelOrientation.x3d'),
    Viewpoint(description='Default model orientation: nose +X axis, up +Y axis, right-hand side +Z axis'),
    #  Each arrow goes from +1m to -1m to allow linear scaling to fit a scene 
    #  Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user 
    Transform(scale=(2,2,2),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    Transform(scale=(1.2,1.6,1.6),
      children=[
      Transform(rotation=(0,0,-1,1.57),scale=(0.25,0.25,0.25),
        children=[
        Shape(
          geometry=Cylinder(height=8,radius=0.4425,top=False),
          appearance=Appearance(DEF='Cammi',
            material=Material(diffuseColor=(0.45,0.55,0.55)))),
        Transform(translation=(0,4.9,0),
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.4425,height=1.8),
            appearance=Appearance(USE='Cammi'))]),
        Transform(translation=(0,-4.1,0),
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.2,height=0.66),
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.15,0.15),shininess=0.66,specularColor=(0.22,0.22,0.22))))]),
        Transform(DEF='TailFin',translation=(0.175,-4.5,0),
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,-1],solid=False,
              coord=Coordinate(point=[(0,0.4,0),(0.25,0,0),(0.75,0,0),(0.75,1,0),(0,1.65,0),(0,0.4,0)])),
            appearance=Appearance(USE='Cammi'))]),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Transform(USE='TailFin')]),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Transform(USE='TailFin')]),
        Transform(rotation=(0,1,0,-1.57),
          children=[
          Transform(USE='TailFin')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ModelOrientation.py")
