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
    meta(content='LifeBoatPod.x3d',name='title'),
    meta(content='General Purpose Lifeboat Pod',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='5 July 2001',name='created'),
    meta(content='5 July 2001',name='modified'),
    meta(content='http://www.hazegray.org/features/nato/us/lcac',name='reference'),
    meta(content='lcac.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='lcac-kb97_8.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-kb97_8.jpg',name='reference'),
    meta(content='lcac-dvic076.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-dvic076.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/LifeBoatPod.x3d',name='identifier'),
    meta(content='Lifeboat Pod',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.1,0.1,0.85)]),
    #  No size is given for this object. It is approximately 1 meter in length here. Modify overall size with LifeboatPod Scale. 
    Group(
      children=[
      Transform(DEF='LifeboatPod',scale=(0.33,0.33,0.33),
        children=[
        Transform(DEF='Seal',rotation=(1,0,0,1.57),scale=(1.33,0.8,0.8),
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(-1.025,-0.125),(-1.025,0.125),(1.025,0.125),(1.025,-0.125),(-1.025,-0.125)],scale=[(0.45,1),(0.73,1),(0.86,1),(0.96,1),(0.98,1),(0.98,1),(0.98,1),(0.98,1),(0.93,1),(0.86,1),(0.74,1),(0.46,1)],spine=[(-1.525,0,0),(-1.4,0,0),(-1.3,0,0),(-1.2,0,0),(-1.1,0,0),(-1,0,0),(1,0,0),(1.1,0,0),(1.2,0,0),(1.3,0,0),(1.4,0,0),(1.525,0,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.05,0.05,0.06))))]),
        Transform(DEF='PostFour',translation=(-1.25,-0.75,0.4),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.525))),
            geometry=Cylinder(height=0.3,radius=0.075))]),
        Transform(DEF='PostThree',translation=(-1.25,-0.75,-0.4),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.525))),
            geometry=Cylinder(height=0.3,radius=0.075))]),
        Transform(DEF='PostTwo',translation=(1.25,-0.75,0.4),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.525))),
            geometry=Cylinder(height=0.3,radius=0.075))]),
        Transform(DEF='PostOne',translation=(1.25,-0.75,-0.4),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.525))),
            geometry=Cylinder(height=0.3,radius=0.075))]),
        Transform(DEF='Pod',rotation=(1,0,0,1.57),scale=(1.33,0.8,0.8),
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(-0.6,-0.8),(-0.8,-0.6),(-0.95,-0.3),(-1,0),(-0.95,0.3),(-0.8,0.6),(-0.6,0.8),(0.6,0.8),(0.8,0.6),(0.95,0.3),(1,0),(0.95,-0.3),(0.8,-0.6),(0.6,-0.8),(-0.6,-0.8)],scale=[(0.43,0.48),(0.71,0.76),(0.83,0.88),(0.9,0.95),(0.95,1),(0.95,1),(0.95,1),(0.95,1),(0.9,0.95),(0.83,0.88),(0.71,0.76),(0.43,0.48)],spine=[(-1.5,0,0),(-1.4,0,0),(-1.3,0,0),(-1.2,0,0),(-1.1,0,0),(-1,0,0),(1,0,0),(1.1,0,0),(1.2,0,0),(1.3,0,0),(1.4,0,0),(1.5,0,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.55,0.55,0.6))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LifeBoatPod.py")
