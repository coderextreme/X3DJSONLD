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
    meta(name='title',content='CoordinateAxes.x3d'),
    meta(name='creator',content='Unknown, see X3D Resources Archives'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d'),
    meta(name='description',content='a box')]),
  Scene=Scene(
    children=[
    Collision(DEF='DoNotCollideWithVisualizationWidget',
      #  Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. 
      #  This NavigationInfo allows examine mode and will be overridden by any parent scene. 
      #  Each arrow goes from +1m to -1m to allow linear scaling to fit a scene 
      #  Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user 
      children=[
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
        Transform(translation=(0,1.08,0),
          children=[
          Billboard(
            children=[
            Shape(
              appearance=Appearance(DEF='LABEL_APPEARANCE',
                material=Material(diffuseColor=(1,1,.3),emissiveColor=(.33,.33,.1))),
              geometry=Text(string=["Y"],
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
          Transform(rotation=(0,0,1,1.57079),translation=(.072,1.1,0),
            #  note label rotated back to original coordinate frame 
            children=[
            Billboard(
              children=[
              Shape(
                appearance=Appearance(USE='LABEL_APPEARANCE'),
                geometry=Text(string=["X"],
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
          Transform(rotation=(1,0,0,-1.57079),translation=(0,1.1,.072),
            #  note label rotated back to original coordinate frame 
            children=[
            Billboard(
              children=[
              Shape(
                appearance=Appearance(USE='LABEL_APPEARANCE'),
                geometry=Text(string=["Z"],
                  fontStyle=FontStyle(USE='LABEL_FONT')))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CoordinateAxes.py")
