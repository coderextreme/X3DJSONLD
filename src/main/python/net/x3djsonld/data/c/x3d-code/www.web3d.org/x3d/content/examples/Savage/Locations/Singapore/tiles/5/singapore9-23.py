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
        texture=ImageTexture(url=['../../images/5/singapore9-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,103.92018578496744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[17,16,15,13,13,13,13,13,13,13,13,13,13,13,13,12,12,12,12,11,10,9,8,7,5,2,1,0,0,0,0,0,0,0,0,0,0,16,15,14,13,13,13,13,13,13,13,13,13,13,13,13,12,12,12,11,11,10,9,7,6,3,1,0,0,0,0,0,-1,-1,-1,-1,-1,-1,15,14,13,13,13,13,13,13,13,13,13,13,13,12,12,12,12,11,11,10,9,8,6,4,1,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,14,13,13,13,13,13,13,13,13,13,13,13,13,12,12,12,12,11,11,10,8,7,4,2,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,13,13,13,13,13,13,13,13,13,13,13,12,12,12,12,11,11,11,10,9,7,5,2,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,13,13,13,13,13,13,13,13,13,13,13,12,12,12,12,11,11,10,9,7,5,2,1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,13,13,13,13,13,13,13,13,13,12,12,12,12,11,11,11,10,9,7,5,3,1,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,13,13,13,13,13,12,12,12,12,11,11,11,11,11,11,10,9,8,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,13,13,13,13,12,11,11,10,9,9,9,9,9,9,10,10,8,6,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,13,12,11,10,9,8,8,8,8,8,9,10,10,10,9,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,12,11,10,9,8,8,8,8,8,9,10,11,12,12,11,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,12,11,10,9,8,8,8,8,8,9,10,11,13,14,14,13,10,6,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,10,9,8,8,8,8,8,9,10,11,13,14,14,15,14,12,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,9,8,8,8,8,8,9,10,11,13,14,14,15,15,14,13,10,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,8,8,8,8,8,9,10,11,13,14,14,15,15,15,14,14,12,9,6,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,8,8,8,8,9,10,11,13,14,14,15,15,15,14,14,14,14,12,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,9,10,11,13,14,14,15,15,15,14,14,14,14,14,14,12,10,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,10,11,13,14,14,15,15,15,14,13,13,13,14,14,15,15,13,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,10,11,13,14,14,15,15,14,14,13,12,12,13,14,15,15,16,15,13,10,5,2,1,0,0,0,0,0,0,0,0,0,0,8,8,8,10,11,13,14,14,15,15,14,13,12,11,11,12,13,14,15,16,16,17,16,14,9,5,2,0,0,0,0,0,0,0,0,0,0,8,8,9,11,13,14,14,15,15,14,13,11,10,10,11,12,13,14,15,16,17,17,17,16,13,9,3,0,0,0,0,0,0,0,0,0,0,8,9,11,12,14,14,15,15,14,13,11,10,9,10,11,12,13,14,15,16,17,18,18,17,16,13,5,0,0,0,0,0,0,0,0,0,0],
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
