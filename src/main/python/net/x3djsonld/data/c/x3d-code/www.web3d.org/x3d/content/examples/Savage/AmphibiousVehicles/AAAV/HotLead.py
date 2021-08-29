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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='HotLead.x3d',name='title'),
    meta(content='AAAV Hot Lead Projectile',name='description'),
    meta(content='William Geissler',name='creator'),
    meta(content='29 January 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/HotLead.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["AAAV 30mm cannon projectile"],title='Hot Lead Projectile'),
    Group(DEF='Projectile',
      children=[
      Shape(
        geometry=Cylinder(height=4),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.8,0.8),emissiveColor=(0.5,0.5,0.5)))),
      Transform(scale=(1,2,1),translation=(0,2,0),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.8,0.8),emissiveColor=(0.5,0.5,0.5))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HotLead.py")
