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
    meta(content='CetusClosed.x3d',name='title'),
    meta(content='Don Brutzman NPS and Gary Trimble Lockheed-Martin-Perry',name='creator'),
    meta(content='6 September 2000',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Jeffrey Weekley',name='revisedBy'),
    meta(content='CETUS II autonomous underwater vehicle (AUV).',name='description'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/CetusClosed.x3d',name='identifier'),
    meta(content='CetusBow.png',name='Image'),
    meta(content='CetusStarboardSide.png',name='Image'),
    meta(content='CetusStern.png',name='Image'),
    meta(content='CetusFlyerMarch2001.pdf',name='reference'),
    meta(content='http://perrymare.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/CetusClosed.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Cetus II starboard side',orientation=(1,0,0,-0.2),position=(0,.5,2)),
    Viewpoint(description='Cetus II from behind',orientation=(0,1,0,-1.57),position=(-2.5,0.5,0)),
    Transform(rotation=(1,0,0,0.2),
      children=[
      Viewpoint(description='Cetus II port side',orientation=(0,1,0,3.14),position=(0,0.5,-2))]),
    Viewpoint(description='Cetus II from ahead',orientation=(0,1,0,1.57),position=(2.5,0.5,0)),
    #  Convert inches to meters (39.3" :: 1m) 
    Transform(scale=(0.025445,0.025445,0.025445),
      #  Hull body. Gary says to streamline stern a bit more. 
      children=[
      Switch(whichChoice=0,
        #  Hollow body 
        children=[
        Group(
          #  stern section 
          children=[
          Shape(
            geometry=Extrusion(creaseAngle=3.14,crossSection=[(6,0),(6,-10),(4,-13),(0,-14),(-4,-13),(-6,-10),(-6,0),(-6,10),(-4,13),(0,14),(4,13),(6,10),(6,0)],scale=[(0.7,0.7),(0.4,0.4),(0.1,0.1)],spine=[(-18,0,0),(-24,0,0),(-27,0,0)]),
            appearance=Appearance(DEF='InternationalOrange',
              material=Material(diffuseColor=(1,0.5,0),emissiveColor=(0.5,0.25,0)))),
          #  center section - Switch 0 for Open; 1 for Closed hatch 
          Switch(whichChoice=1,
            children=[
            Shape(
              #  Open 
              geometry=Extrusion(creaseAngle=1.5,crossSection=[(-3,0),(-3,-11),(5,-11),(4,-13),(0,-14),(-4,-13),(-6,-10),(-6,0),(-6,10),(-4,13),(0,14),(4,13),(5,11),(-3,11),(-3,0)],scale=[(0.4,0.4),(0.8,0.8),(0.95,0.95),(1,1),(0.9,0.9),(0.7,0.7),(0.4,0.4),(0.1,0.1)],spine=[(27,0,0),(21,0,0),(16,0,0),(0,0,0),(-10,0,0),(-18,0,0),(-24,0,0),(-27,0,0)]),
              appearance=Appearance(USE='InternationalOrange')),
            Shape(
              #  Closed 
              geometry=Extrusion(creaseAngle=1.5,crossSection=[(6,0),(6,-10),(4,-13),(0,-14),(-4,-13),(-6,-10),(-6,0),(-6,10),(-4,13),(0,14),(4,13),(6,10),(6,0)],scale=[(0.4,0.4),(0.8,0.8),(0.95,0.95),(1,1),(0.9,0.9),(0.7,0.7),(0.4,0.4),(0.1,0.1)],spine=[(27,0,0),(21,0,0),(16,0,0),(0,0,0),(-10,0,0),(-18,0,0),(-24,0,0),(-27,0,0)]),
              appearance=Appearance(USE='InternationalOrange'))]),
          #  nose section 
          Shape(
            geometry=Extrusion(creaseAngle=3.14,crossSection=[(6,0),(6,-10),(4,-13),(0,-14),(-4,-13),(-6,-10),(-6,0),(-6,10),(-4,13),(0,14),(4,13),(6,10),(6,0)],scale=[(0.4,0.4),(0.8,0.8),(0.95,0.95)],spine=[(27,0,0),(21,0,0),(16,0,0)]),
            appearance=Appearance(USE='InternationalOrange'))]),
        #  Solid body 
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(6,0),(6,-10),(4,-13),(0,-14),(-4,-13),(-6,-10),(-6,0),(-6,10),(-4,13),(0,14),(4,13),(6,10),(6,0)],scale=[(0.4,0.4),(0.8,0.8),(0.95,0.95),(1,1),(0.9,0.9),(0.7,0.7),(0.4,0.4),(0.1,0.1)],spine=[(27,0,0),(21,0,0),(16,0,0),(0,0,0),(-10,0,0),(-18,0,0),(-24,0,0),(-27,0,0)]),
          appearance=Appearance(USE='InternationalOrange'))]),
      #  Stern planes 
      Transform(DEF='SternPlanes',translation=(-22,0,0),
        children=[
        Shape(
          geometry=Box(size=(6,1.5,22)),
          appearance=Appearance(USE='InternationalOrange')),
        Transform(translation=(0,0,11),
          children=[
          Shape(DEF='Stabilizer',
            geometry=Box(size=(6,3,1)),
            appearance=Appearance(USE='InternationalOrange'))]),
        Transform(translation=(0,0,-11),
          children=[
          Shape(USE='Stabilizer')])]),
      #  Forward vertical thrusters 
      Transform(translation=(19,0,0),
        children=[
        Transform(translation=(0,0,8),
          children=[
          Shape(DEF='ForwardThrusterCylinder',
            geometry=Cylinder(height=11,radius=2),
            appearance=Appearance(DEF='BlackAppearance',
              material=Material(diffuseColor=(0.2,0.2,0.2))))]),
        Transform(translation=(0,0,-8),
          children=[
          Shape(USE='ForwardThrusterCylinder')])]),
      #  Aft vertical thruster 
      Transform(translation=(-24,0,0),
        children=[
        Shape(DEF='AftThrusterCylinder',
          geometry=Cylinder(height=7,radius=2),
          appearance=Appearance(USE='BlackAppearance'))]),
      #  Long-baseline sonar transponder 
      Transform(translation=(-20,3.5,0),
        children=[
        Shape(DEF='LongBaselineSonarTransponder',
          geometry=Cylinder(),
          appearance=Appearance(USE='BlackAppearance'))]),
      #  Propellers 
      Transform(translation=(-27,0,0),
        children=[
        Transform(scale=(20,26,26),translation=(0,0,7),
          children=[
          Inline(DEF='PropulsionThruster',url=["ThrusterTechnadyne.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/ThrusterTechnadyne.x3d","ThrusterTechnadyne.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/ThrusterTechnadyne.wrl"])]),
        Transform(scale=(20,26,26),translation=(0,0,-7),
          children=[
          Inline(USE='PropulsionThruster')])]),
      #  Payload section 
      Switch(whichChoice=-1,
        children=[
        Transform(center=(0,1,0),rotation=(0,0,1,-1.57),translation=(0,1,0),
          children=[
          Shape(
            geometry=Cylinder(height=32,radius=3.5),
            appearance=Appearance(USE='BlackAppearance')),
          Transform(translation=(1,0,6.5),
            children=[
            Shape(DEF='Electronics1',
              geometry=Cylinder(height=32,radius=2.5),
              appearance=Appearance(USE='BlackAppearance'))]),
          Transform(translation=(1,0,-6.5),
            children=[
            Shape(USE='Electronics1')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CetusClosed.py")
