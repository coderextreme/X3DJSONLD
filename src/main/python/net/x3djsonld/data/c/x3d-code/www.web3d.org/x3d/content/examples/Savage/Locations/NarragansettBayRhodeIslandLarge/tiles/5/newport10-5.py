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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport10-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,2,1,0,0,2,3,3,1,0,0,1,4,3,2,1,0,0,0,3,2,1,2,3,2,0,0,1,1,1,0,0,0,4,4,4,4,4,0,0,0,1,3,3,3,3,1,1,1,1,1,1,0,0,0,4,4,4,4,3,0,0,0,0,4,4,3,2,2,2,1,1,3,3,2,0,0,4,4,5,5,0,0,0,0,0,3,4,4,2,4,5,4,3,4,4,4,1,0,6,5,6,7,0,0,0,0,0,5,7,5,5,5,5,5,4,4,3,3,2,2,12,7,7,7,0,0,0,0,0,0,6,7,7,7,7,6,6,6,6,6,5,5,19,16,14,7,0,0,0,0,1,1,3,7,6,7,7,6,5,5,5,5,5,5,23,20,21,14,3,6,6,5,5,7,6,8,8,8,8,8,8,6,2,4,6,7,28,21,25,21,18,13,9,7,5,8,10,10,10,9,8,8,8,7,5,4,8,8,28,25,24,20,22,14,12,11,7,8,10,10,10,10,9,9,10,9,8,7,11,11,24,25,23,22,23,12,11,18,12,9,11,12,11,11,11,12,11,10,9,10,10,10,21,23,20,18,20,13,11,18,16,11,14,13,12,12,12,10,11,12,10,10,11,11,29,29,20,18,18,13,12,15,19,17,17,13,12,12,12,12,11,12,12,11,11,10,35,34,29,24,21,17,16,18,22,23,21,15,11,13,13,14,13,12,13,14,13,11,29,33,36,32,27,23,22,22,24,25,25,21,13,13,14,13,14,14,16,17,11,9,25,30,33,35,31,28,28,26,27,27,26,25,16,14,14,15,15,16,17,16,11,10,15,20,26,29,34,34,32,30,26,27,28,29,18,15,16,15,15,16,16,16,15,14,15,17,25,28,34,35,33,30,27,27,28,29,19,15,16,15,15,16,15,16,15,14],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
