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
    meta(content='RapierMissileExample.x3d',name='title'),
    meta(content='Oliver Tan',name='creator'),
    meta(content='12 February 2004',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='Rapier Missile.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissileExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://www.army-technology.com/projects/jernas/jernas1.html',name='reference'),
    meta(content='Rapier, Rapier missile, missile',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='RapierMissile',url=["RapierMissilePrototype.x3d#RapierMissile","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissilePrototype.x3d#RapierMissile","RapierMissilePrototype.wrl#RapierMissile","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissilePrototype.wrl#RapierMissile"],
      field=[
      field(accessType='initializeOnly',name='rocketAppearance',type='SFNode')]),
    ProtoInstance(name='RapierMissile',
      fieldValue=[
      fieldValue(name='rocketAppearance',
        children=[
        Appearance(
          material=Material(diffuseColor=(.3,.6,.9)),
          texture=ImageTexture(url=["cammie1.jpg","https://savage.nps.edu/Savage/AircraftFixedWing/AV8bHarrierUnitedStates/cammie1.jpg"]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RapierMissileExample.py")
