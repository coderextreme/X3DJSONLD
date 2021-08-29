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
    meta(content='YardArm.x3d',name='title'),
    meta(content='Anderson, Kevin S.',name='creator'),
    meta(content='1 September 2000',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Superstructure Yardarm for Sovremenny Ship',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/YardArm.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  YardArm Structure 
    children=[
    Group(DEF='LeftSideYardArm',
      children=[
      Transform(DEF='SingleYardArm',
        children=[
        Transform(rotation=(0,0,1,1.57),translation=(-5,3,2),
          children=[
          Shape(
            geometry=Cylinder(height=10.05,radius=.1),
            appearance=Appearance(DEF='HullGrey',
              material=Material(diffuseColor=(.62,.639,.612))))]),
        Transform(translation=(-9.955,2.5,2),
          children=[
          Shape(
            geometry=Cylinder(height=1.05,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(translation=(-2,1.5,2),
          children=[
          Shape(
            geometry=Cylinder(height=3,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,1.31466),translation=(-6,1,2),
          children=[
          Shape(
            geometry=Cylinder(height=8.2462,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,1.57),translation=(-1,-.05,2),
          children=[
          Shape(
            geometry=Cylinder(height=2.05,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,.5872),translation=(-3,1.5,2),
          children=[
          Shape(
            geometry=Cylinder(height=3.606,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,.67394),translation=(-5,1.75,2),
          children=[
          Shape(
            geometry=Cylinder(height=3.201,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,.89526),translation=(-7.25,2,2),
          children=[
          Shape(
            geometry=Cylinder(height=3.201,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,.9265),translation=(-9,2.25,2),
          children=[
          Shape(
            geometry=Cylinder(height=2.4,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,-.67394),translation=(-3,1.75,2),
          children=[
          Shape(
            geometry=Cylinder(height=3.202,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,-.7846),translation=(-5,2,2),
          children=[
          Shape(
            geometry=Cylinder(height=2.828,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,-.9265),translation=(-7,2.25,2),
          children=[
          Shape(
            geometry=Cylinder(height=2.5,radius=.1),
            appearance=Appearance(USE='HullGrey'))]),
        Transform(rotation=(0,0,1,-.982),translation=(-9.25,2.5,2),
          children=[
          Shape(
            geometry=Cylinder(height=1.8,radius=.1),
            appearance=Appearance(USE='HullGrey'))])]),
      Transform(translation=(0,0,-4),
        children=[
        Transform(USE='SingleYardArm')]),
      Transform(DEF='EndBar',rotation=(1,0,0,1.57),translation=(-10,3,0),
        children=[
        Shape(
          geometry=Cylinder(height=4,radius=.1),
          appearance=Appearance(USE='HullGrey'))]),
      Transform(translation=(0,-1,0),
        children=[
        Transform(USE='EndBar')]),
      Group(DEF='TopCrossBarSection',
        children=[
        Transform(translation=(-3,3,0),
          children=[
          Group(DEF='OneCrossBarSection',
            children=[
            Transform(rotation=(0.47,0.47,0.75,1.85),
              children=[
              Shape(
                geometry=Cylinder(height=4.4,radius=.1),
                appearance=Appearance(USE='HullGrey'))]),
            Transform(rotation=(-0.47,-0.47,0.75,1.85),
              children=[
              Shape(
                geometry=Cylinder(height=4.4,radius=.1),
                appearance=Appearance(USE='HullGrey'))])])]),
        Transform(translation=(-5,3,0),
          children=[
          Group(USE='OneCrossBarSection')]),
        Transform(translation=(-7,3,0),
          children=[
          Group(USE='OneCrossBarSection')]),
        Transform(translation=(-9,3,0),
          children=[
          Group(USE='OneCrossBarSection')])]),
      Transform(rotation=(0,0,1,1.57),scale=(.5,1,1),translation=(-10,2.5,0),
        children=[
        Group(USE='OneCrossBarSection')]),
      Transform(rotation=(0,0,-1,0.25),translation=(-1,-3.35,0),
        children=[
        Group(USE='TopCrossBarSection')])]),
    Transform(rotation=(0,1,0,3.14),
      children=[
      Group(USE='LeftSideYardArm')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for YardArm.py")
