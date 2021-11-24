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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='CoordinateAxesX3dDIS.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='14 July 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X Y Z axis arrows and labels in X3D and DIS coordinate systems. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.',name='description'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/CoordinateAxesX3dDIS.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. 
    #  This NavigationInfo allows examine mode and will be overridden by any parent scene. 
    #  Each arrow goes from +1m to -1m to allow linear scaling to fit a scene 
    #  Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user 
    children=[
    WorldInfo(title='CoordinateAxesX3dDIS.x3d'),
    Group(
      #  Vertical Y arrow and label 
      children=[
      Group(DEF='ArrowGreen',
        children=[
        Shape(
          geometry=Cylinder(DEF='ArrowCylinder',radius=.025,top=False),
          appearance=Appearance(DEF='Green',
            material=Material(diffuseColor=(.1,.6,.1),emissiveColor=(.05,.2,.05)))),
        Transform(translation=(0,1,0),
          children=[
          Shape(
            geometry=Cone(DEF='ArrowCone',bottomRadius=.05,height=.1),
            appearance=Appearance(USE='Green'))])]),
      Transform(translation=(0,1.5,0),
        children=[
        Billboard(
          children=[
          Shape(
            appearance=Appearance(DEF='LABEL_APPEARANCE',
              material=Material(diffuseColor=(1,1,.3),emissiveColor=(.33,.33,.1))),
            geometry=Text(string=["Up","+Y X3D","-Z DIS"],
              fontStyle=FontStyle(DEF='LABEL_FONT',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=.2)))])])]),
    Transform(rotation=(0,0,1,-1.57079),
      #  Horizontal X arrow and label 
      children=[
      Group(
        children=[
        Group(DEF='ArrowRed',
          children=[
          Shape(
            geometry=Cylinder(USE='ArrowCylinder'),
            appearance=Appearance(DEF='Red',
              material=Material(diffuseColor=(.7,.1,.1),emissiveColor=(.33,0,0)))),
          Transform(translation=(0,1,0),
            children=[
            Shape(
              geometry=Cone(USE='ArrowCone'),
              appearance=Appearance(USE='Red'))])]),
        Transform(rotation=(0,0,1,1.57079),translation=(-0.05,1.1,0),
          #  note label rotated back to original coordinate frame 
          children=[
          Billboard(
            children=[
            Shape(
              appearance=Appearance(USE='LABEL_APPEARANCE'),
              geometry=Text(string=["North","+X X3D","+X DIS"],
                fontStyle=FontStyle(USE='LABEL_FONT')))])])])]),
    Transform(rotation=(1,0,0,1.57079),
      #  Perpendicular Z arrow and label, note right-hand rule 
      children=[
      Group(
        children=[
        Group(DEF='ArrowBlue',
          children=[
          Shape(
            geometry=Cylinder(USE='ArrowCylinder'),
            appearance=Appearance(DEF='Blue',
              material=Material(diffuseColor=(.3,.3,1),emissiveColor=(.1,.1,.33)))),
          Transform(translation=(0,1,0),
            children=[
            Shape(
              geometry=Cone(USE='ArrowCone'),
              appearance=Appearance(USE='Blue'))])]),
        Transform(rotation=(1,0,0,-1.57079),translation=(0,1.1,-0.05),
          #  note label rotated back to original coordinate frame 
          children=[
          Billboard(
            children=[
            Shape(
              appearance=Appearance(USE='LABEL_APPEARANCE'),
              geometry=Text(string=["East","+Z X3D","+Y DIS"],
                fontStyle=FontStyle(USE='LABEL_FONT')))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CoordinateAxesX3dDIS.py")
