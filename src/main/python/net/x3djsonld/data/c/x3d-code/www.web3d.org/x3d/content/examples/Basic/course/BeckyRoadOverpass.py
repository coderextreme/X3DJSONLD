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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='BeckyRoadOverpass.x3d',name='title'),
    meta(content='Becky and Don Brutzman',name='creator'),
    meta(content='10 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Sixth grade project to build a highway overpass.',name='description'),
    meta(content='BeckyRoadOverpass.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/BeckyRoadOverpass.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BeckyRoadOverpass.x3d'),
    Viewpoint(description='Front view, 4 inches above ground',position=(0,4,20)),
    Viewpoint(description='Side view, 6 inches above ground',orientation=(0,1,0,1.57),position=(25,6,0)),
    Viewpoint(description='Top-down view, 20 inches above',orientation=(1,0,0,-1.57),position=(0,28,0)),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    #  Upper road surface is elevated y=8 inches in the air 
    Transform(translation=(0,8,0),
      children=[
      Group(DEF='Road',
        children=[
        Shape(
          #  Road model is x=20 inches long by z=7 inches wide, with posterboard y=0.25 inches thick 
          geometry=Box(size=(20,0.2,7)),
          #  Road surface color is grey 
          appearance=Appearance(DEF='GreyAppearance',
            material=Material(diffuseColor=(0.4,0.4,0.4)))),
        Transform(translation=(0,0.2,0.3),
          children=[
          Shape(DEF='WhiteLine',
            geometry=Box(size=(20,0.01,0.4)),
            appearance=Appearance(DEF='WhiteAppearance',
              material=Material(diffuseColor=(1,1,1),emissiveColor=(0.5,0.5,0.5))))]),
        Transform(translation=(0,0.2,-0.3),
          children=[
          Shape(USE='WhiteLine')])])]),
    #  Lower road is on the ground at y=0 inches, rotated 90 degrees around y axis 
    Transform(rotation=(0,1,0,1.57),translation=(0,0.1,0),
      children=[
      Group(USE='Road')]),
    #  Vertical center of y=8 inch tall pillar is y=4 inches in the air 
    #  Center of each column matches top-down diagram 
    Transform(DEF='ColumnA',translation=(-6,4,-2),
      children=[
      Shape(DEF='Column',
        geometry=Cylinder(height=8),
        appearance=Appearance(USE='GreyAppearance'))]),
    Transform(DEF='ColumnB',translation=(6,4,-2),
      children=[
      Shape(USE='Column')]),
    Transform(DEF='ColumnC',translation=(-6,4,2),
      children=[
      Shape(USE='Column')]),
    Transform(DEF='ColumnD',translation=(6,4,2),
      children=[
      Shape(USE='Column')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BeckyRoadOverpass.py")
