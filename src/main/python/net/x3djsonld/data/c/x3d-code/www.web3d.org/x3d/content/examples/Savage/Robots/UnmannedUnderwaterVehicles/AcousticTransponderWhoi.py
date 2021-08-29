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
    meta(content='AcousticTransponderWhoi.x3d',name='title'),
    meta(content='Acoustic Modem Transponder for the WHOI REMUS',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='27 October 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AcousticTransponderWhoi.x3d',name='identifier'),
    meta(content='Acoustic Modem Transiever for the WHOI REMUS',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AcousticTransponderWhoi.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Acoustic Transponder Whoi',position=(0,0,2)),
    Group(DEF='AcousticSource',
      children=[
      Transform(scale=(0.1,0.1,0.1),
        children=[
        Transform(DEF='OuterHousing',
          children=[
          Transform(DEF='UpperRing',
            children=[
            Shape(
              geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],spine=[(0.95,0.2,0.95),(0.95,0.2,-0.95),(-0.95,0.2,-0.95),(-0.95,0.2,0.95),(0.95,0.2,0.95)]),
              appearance=Appearance(DEF='Chrome',
                material=Material(diffuseColor=(0.75,0.75,0.8),shininess=1,specularColor=(0.8,0.8,1))))]),
          Transform(translation=(0,-4,0),
            children=[
            Transform(USE='UpperRing')]),
          Transform(DEF='VerticalBar',
            children=[
            Shape(
              geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],spine=[(0,2,0),(0.95,0.2,0.95),(0.95,-3.8,0.95),(0,-5,0)]),
              appearance=Appearance(USE='Chrome'))]),
          Transform(rotation=(0,1,0,1.57),
            children=[
            Transform(USE='VerticalBar')]),
          Transform(rotation=(0,1,0,3.14),
            children=[
            Transform(USE='VerticalBar')]),
          Transform(rotation=(0,1,0,-1.57),
            children=[
            Transform(USE='VerticalBar')])]),
        Transform(DEF='InnerHousing',
          children=[
          Transform(translation=(0,-3,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.125,radius=0.5),
              appearance=Appearance(USE='Chrome')),
            Transform(rotation=(0.36,0.36,0.86,1.72),
              children=[
              Shape(
                geometry=Cylinder(height=2.8,radius=0.06),
                appearance=Appearance(USE='Chrome'))]),
            Transform(rotation=(-0.36,-0.36,0.86,1.72),
              children=[
              Shape(
                geometry=Cylinder(height=2.8,radius=0.06),
                appearance=Appearance(USE='Chrome'))])]),
          Transform(translation=(0,-2,0),
            children=[
            Shape(
              geometry=Cylinder(radius=0.25),
              appearance=Appearance(
                material=Material(diffuseColor=(0.15,0.13,0.23),specularColor=(0.45,0.55,0.6))))]),
          Transform(translation=(0,-2.925,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.0625,radius=0.4),
              appearance=Appearance(DEF='FlatBlack',
                material=Material(diffuseColor=(0.15,0.15,0.2))))]),
          Transform(rotation=(0,0,1,3.14),translation=(0,-3.25,0),
            children=[
            Shape(
              geometry=Cone(bottomRadius=0.25,height=0.3),
              appearance=Appearance(USE='FlatBlack')),
            Transform(
              children=[
              Shape(
                geometry=Cylinder(height=0.5,radius=0.0625),
                appearance=Appearance(USE='FlatBlack'))])])]),
        Transform(DEF='Hook',translation=(0,2,0),
          children=[
          Transform(DEF='HookPlate',
            children=[
            Shape(
              geometry=Box(size=(0.4,0.9,0.1)),
              appearance=Appearance(USE='Chrome'))]),
          Transform(rotation=(1,0,0,1.57),translation=(0,0.45,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.1,radius=0.2),
              appearance=Appearance(USE='Chrome'))]),
          Transform(rotation=(1,0,0,1.57),translation=(0,0.45,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.1125,radius=0.1),
              appearance=Appearance(USE='FlatBlack'))])]),
        Transform(DEF='Anchor',
          children=[
          Transform(rotation=(1,0,0,3.14),translation=(0,-5,0),
            children=[
            Transform(
              children=[
              Shape(
                geometry=Box(size=(0.4,0.9,0.1)),
                appearance=Appearance(USE='Chrome'))]),
            Transform(rotation=(1,0,0,1.57),translation=(0,0.45,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.1,radius=0.2),
                appearance=Appearance(USE='Chrome'))]),
            Transform(rotation=(1,0,0,1.57),translation=(0,0.45,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.75,radius=0.1825),
                appearance=Appearance(USE='Chrome'))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AcousticTransponderWhoi.py")
