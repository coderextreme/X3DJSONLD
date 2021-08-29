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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore31-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4829463469178132,103.79091847780627,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[12,14,16,20,22,16,8,10,13,11,9,8,7,7,8,10,13,12,9,6,4,4,5,6,7,8,9,10,11,13,13,13,12,10,8,6,11,11,12,17,21,14,6,9,11,10,8,8,8,8,9,12,16,15,12,9,5,4,5,6,7,8,8,9,9,11,13,13,12,10,7,6,10,10,10,12,14,10,7,8,10,10,8,8,8,8,9,13,17,17,15,12,8,6,5,6,8,10,9,9,8,9,11,11,9,8,7,8,9,9,9,8,8,8,7,8,9,9,9,9,7,8,9,13,18,18,17,14,11,8,5,5,10,11,10,9,8,7,8,9,7,7,8,10,9,9,8,8,7,7,7,7,8,7,6,6,5,7,9,12,17,18,18,16,13,11,8,8,11,12,11,9,8,7,8,8,8,8,10,11,10,9,8,8,8,8,7,7,7,5,3,3,4,6,9,12,15,17,18,17,15,13,11,11,12,13,12,11,9,8,8,9,10,10,11,11,10,9,8,8,8,8,7,7,5,3,1,1,2,5,8,11,14,16,17,16,14,13,12,12,12,13,13,12,10,9,9,10,11,11,11,12,9,9,9,9,8,8,8,6,3,1,0,0,0,3,8,11,13,14,15,14,13,12,12,12,13,13,13,12,10,9,10,10,11,12,12,12,9,9,10,9,7,7,7,5,3,1,0,0,0,3,8,10,12,13,14,14,13,12,12,13,14,14,13,12,10,9,10,10,11,12,12,12,9,10,11,9,7,6,6,5,3,2,1,0,0,3,8,10,10,11,13,13,13,13,14,15,16,15,13,12,9,8,9,10,11,11,10,10,8,9,9,7,6,6,6,5,4,3,3,2,2,5,8,9,10,10,12,13,13,13,14,15,16,16,14,12,10,8,9,10,11,11,10,9,6,6,6,5,4,5,5,5,5,5,4,4,5,7,8,9,10,10,12,13,12,12,13,15,16,16,15,13,10,8,8,9,11,12,10,8,6,6,7,7,6,7,7,6,6,6,5,5,6,7,9,10,10,10,12,12,12,12,13,15,16,16,15,13,11,8,8,9,11,12,8,7,6,8,10,10,10,9,9,7,6,6,6,6,7,8,10,10,11,11,11,12,12,13,14,14,15,15,14,12,11,9,9,9,10,10,7,6,6,8,10,10,11,10,10,8,7,7,7,7,7,8,10,11,11,12,12,12,13,14,14,15,16,15,14,13,11,10,9,9,9,10,7,6,7,8,9,10,10,11,10,9,9,8,7,7,8,9,10,11,11,12,12,13,14,15,15,15,16,16,15,14,13,11,9,8,9,9,7,6,8,8,8,9,9,10,10,10,10,9,8,8,8,9,10,10,11,11,12,13,14,15,16,16,17,17,16,14,13,11,8,7,8,8,7,6,7,7,7,7,7,8,9,9,10,9,9,9,9,9,9,10,10,11,11,13,14,15,16,16,17,17,15,13,12,9,7,6,7,7,7,7,7,7,7,7,7,7,8,9,9,9,9,9,9,9,9,10,10,10,11,12,14,15,16,17,17,16,14,12,10,8,6,6,6,8,8,8,7,7,6,6,7,7,8,8,8,8,9,10,11,10,10,9,9,10,11,12,13,15,16,17,16,15,12,10,8,6,6,6,7,8,10,10,8,7,6,6,7,7,8,8,8,9,10,13,17,14,10,9,9,10,11,12,13,15,16,16,15,13,11,9,8,6,6,7,8,9,10,11,9,8,7,7,6,8,10,10,10,12,14,19,24,19,11,9,9,10,11,12,13,14,14,14,13,11,9,8,8,7,7,8,9,10,11,12],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
