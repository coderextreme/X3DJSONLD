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
    meta(content='GunFire.x3d',name='title'),
    meta(content='Animation for the M1 main gun firing',name='description'),
    meta(content='Michael Martin',name='creator'),
    meta(content='12 September 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Tank Fire',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/TankManeuver/GunFire.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(1,0,0,-1.57),
      children=[
      Transform(translation=(0,.3,0),
        children=[
        Shape(
          appearance=Appearance(DEF='Yellow',
            material=Material(ambientIntensity=1,diffuseColor=(1,1,0),emissiveColor=(1,1,0),shininess=0,specularColor=(1,1,0))),
          geometry=Cone(bottomRadius=.5,height=.6))]),
      Transform(rotation=(1,0,0,3.14),translation=(0,-1,0),
        children=[
        Shape(
          appearance=Appearance(USE='Yellow'),
          geometry=Cone(bottomRadius=.5))]),
      Transform(scale=(1.2,1.2,1.2),
        children=[
        Transform(translation=(0,.25,0),
          children=[
          Shape(
            appearance=Appearance(DEF='Red',
              material=Material(ambientIntensity=1,diffuseColor=(1,0,0),emissiveColor=(1,0,0),shininess=0,specularColor=(1,.25,0),transparency=.5)),
            geometry=Cone(bottomRadius=.5,height=.5))]),
        Transform(rotation=(1,0,0,3.14),translation=(0,-1,0),
          children=[
          Shape(
            appearance=Appearance(USE='Red'),
            geometry=Cone(bottomRadius=.5))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GunFire.py")
