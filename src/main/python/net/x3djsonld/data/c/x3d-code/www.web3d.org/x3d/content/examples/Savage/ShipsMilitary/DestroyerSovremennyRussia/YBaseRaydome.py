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
    meta(content='YBaseRaydome.x3d',name='title'),
    meta(content='Kevin Anderson',name='creator'),
    meta(content='1 October 2000',name='created'),
    meta(content='10 November 2002',name='modified'),
    meta(content='YBaseRaydome for use with Sovremennny and/or other Russian Warships. Designed to photos supplied by Janes Online.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/YBaseRaydome.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Y Shaped Base Raydome 
    children=[
    Group(DEF='Base',
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=.7,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.6,.6),(.4,.4)],spine=[(0,0,0),(0,.2,0)]),
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(.55,.53,.5)))),
      Transform(translation=(0,.7,0),
        children=[
        Shape(
          appearance=Appearance(USE='Gray'),
          geometry=Cylinder(height=1,radius=.15))]),
      Transform(rotation=(0,0,1,-1.106),translation=(.4,1.3,0),
        children=[
        Shape(DEF='AngleArm',
          appearance=Appearance(USE='Gray'),
          geometry=Box(size=(.12,.94,.3)))]),
      Transform(rotation=(0,0,1,1.1064),translation=(-.4,1.3,0),
        children=[
        Shape(USE='AngleArm')]),
      Transform(translation=(.794,1.81,0),
        children=[
        Shape(DEF='VerticalArm',
          appearance=Appearance(USE='Gray'),
          geometry=Box(size=(.12,.7,.3)))]),
      Transform(translation=(-.794,1.81,0),
        children=[
        Shape(USE='VerticalArm')])]),
    Group(DEF='T-RayDome',
      children=[
      Transform(rotation=(1,0,0,1.45),translation=(0,2,0),
        children=[
        Shape(
          appearance=Appearance(DEF='White',
            material=Material(diffuseColor=(.9,.9,.9))),
          geometry=Cylinder(height=1.2,radius=.6)),
        Transform(scale=(1,.4,1),translation=(0,.6,0),
          children=[
          Shape(DEF='DomeEnd',
            appearance=Appearance(USE='White'),
            geometry=Sphere(radius=.6))]),
        Transform(scale=(1,.6,1),translation=(0,-.6,0),
          children=[
          Shape(USE='DomeEnd')]),
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(
            appearance=Appearance(USE='Gray'),
            geometry=Cylinder(height=1.6,radius=.1))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for YBaseRaydome.py")
