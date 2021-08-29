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
    meta(content='Ladder.x3d',name='title'),
    meta(content='Ladder for the LCAC',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='6 July 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.hazegray.org/features/nato/us/lcac',name='reference'),
    meta(content='lcac.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='lcac-kb97_8.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-kb97_8.jpg',name='reference'),
    meta(content='lcac-dvic076.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-dvic076.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Ladder.x3d',name='identifier'),
    meta(content='LCAC Exterior Ladder',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(-1,0,0,0.16),
        children=[
        Transform(DEF='Rail',
          children=[
          Shape(
            geometry=Extrusion(creaseAngle=1,crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],scale=[(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5)],spine=[(-0.4,0,0),(-0.4,3,0),(-0.375,3.2,0),(-0.3,3.3,0),(-0.2,3.3375,0),(-0.1,3.3395,0),(0.1,3.3395,0),(0.2,3.3375,0),(0.3,3.3,0),(0.375,3.2,0),(0.4,3,0),(0.4,0,0)]),
            appearance=Appearance(DEF='Metal',
              material=Material(diffuseColor=(0.85,0.9,0.95),shininess=0.6,specularColor=(1,1,1))))]),
        Transform(DEF='CenterRail',translation=(0,1.67,0),
          children=[
          Shape(
            geometry=Cylinder(height=3.35,radius=0.05),
            appearance=Appearance(USE='Metal'))]),
        Transform(DEF='Step',rotation=(0,0,1,1.57),translation=(0,0.6,0),
          children=[
          Shape(
            appearance=Appearance(USE='Metal'),
            geometry=Cylinder(height=0.8,radius=0.05))]),
        Transform(translation=(0,0.5,0),
          children=[
          Transform(USE='Step')]),
        Transform(translation=(0,1,0),
          children=[
          Transform(USE='Step')]),
        Transform(translation=(0,1.5,0),
          children=[
          Transform(USE='Step')]),
        Transform(translation=(0,2,0),
          children=[
          Transform(USE='Step')]),
        Transform(translation=(0,2.3,0),
          children=[
          Transform(USE='Step')])]),
      Transform(
        children=[
        Transform(translation=(-0.4,0,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.125),
            appearance=Appearance(USE='Metal'))]),
        Transform(translation=(0.4,0,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.125),
            appearance=Appearance(USE='Metal'))]),
        Transform(
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.125),
            appearance=Appearance(USE='Metal'))])]),
      Transform(DEF='LadderTwo',rotation=(-1,0,0,0.16),translation=(-1.25,0,0),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=1,crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],scale=[(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5)],spine=[(-0.3,0,0),(-0.3,3,0),(-0.275,3.2,0),(-0.2,3.3,0),(-0.15,3.3375,0),(-0.1,3.3395,0),(0.1,3.3395,0),(0.15,3.3375,0),(0.2,3.3,0),(0.275,3.2,0),(0.3,3,0),(0.3,0,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.85,0.9,0.95),shininess=0.6,specularColor=(1,1,1)))),
        Transform(translation=(-0.3,0,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.125),
            appearance=Appearance(USE='Metal'))]),
        Transform(translation=(0.3,0,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.125),
            appearance=Appearance(USE='Metal'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Ladder.py")
