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
    meta(content='PortGuardRail.x3d',name='title'),
    meta(content='Forward Port Guardrail for the LCAC',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='5 July 2001',name='created'),
    meta(content='5 July 2001',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='lcac-kb97_8.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-kb97_8.jpg',name='reference'),
    meta(content='lcac-dvic076.jpg',name='photo'),
    meta(content='LCAC Guardrail',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PortGuardRail.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(DEF='Rail',rotation=(1,0,0,1.57),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=1,crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],spine=[(0,0,-0.25),(2,0,-0.25),(3,0,-0.5),(3.2,0,-0.475),(3.425,0,-0.3),(3.5,0,0),(3.425,0,0.3),(3.2,0,0.475),(3,0,0.5),(0,0,0.25),(-3,0,0.5),(-3.2,0,0.475),(-3.425,0,0.3),(-3.5,0,0),(-3.425,0,-0.3),(-3.2,0,-0.475),(-3,0,-0.5),(-2,0,-0.25),(0,0,-0.25)]),
          appearance=Appearance(DEF='Metal',
            material=Material(diffuseColor=(0.85,0.9,0.95),shininess=0.6,specularColor=(1,1,1))))]),
      Transform(DEF='Post',translation=(1,-0.5,0),
        children=[
        Shape(
          appearance=Appearance(USE='Metal'),
          geometry=Cylinder(height=1.7,radius=0.2)),
        Transform(DEF='PostBase',translation=(0,-0.85,0),
          children=[
          Shape(
            appearance=Appearance(USE='Metal'),
            geometry=Cylinder(height=0.2,radius=0.4))])]),
      Transform(DEF='PostTwo',translation=(-1,-0.5,0),
        children=[
        Shape(
          appearance=Appearance(USE='Metal'),
          geometry=Cylinder(height=1.7,radius=0.2)),
        Transform(DEF='PostTwoBase',translation=(0,-0.85,0),
          children=[
          Shape(
            appearance=Appearance(USE='Metal'),
            geometry=Cylinder(height=0.2,radius=0.4))])]),
      Transform(DEF='OutsidePost',translation=(2,-0.55,0),
        children=[
        Shape(
          appearance=Appearance(USE='Metal'),
          geometry=Cylinder(height=1.9,radius=0.1))]),
      Transform(DEF='OutsidePostTwo',translation=(-2,-0.55,0),
        children=[
        Shape(
          appearance=Appearance(USE='Metal'),
          geometry=Cylinder(height=1.9,radius=0.1))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PortGuardRail.py")
