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
        texture=ImageTexture(url=['../../images/5/newport10-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[12,11,11,7,4,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,14,13,11,9,9,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,12,11,9,10,10,9,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,12,10,11,12,12,10,8,4,0,0,0,0,0,0,0,0,0,0,0,0,22,19,19,11,12,15,13,9,6,5,5,2,0,0,0,0,0,0,0,0,0,0,26,24,27,19,17,15,13,10,10,9,7,5,4,0,0,0,0,0,0,0,0,0,26,29,26,25,21,21,17,19,18,14,9,7,4,4,2,0,0,0,0,0,1,1,40,31,26,30,24,24,21,24,22,14,16,16,8,5,4,3,0,0,0,3,4,4,41,31,31,31,28,26,21,22,26,17,24,25,20,12,8,6,0,0,1,3,4,4,34,45,41,33,35,32,27,25,29,28,26,27,28,20,15,13,11,5,5,5,4,4,38,44,44,40,33,32,33,30,30,31,26,33,27,27,22,19,18,12,11,8,6,6,39,41,42,42,36,34,36,32,35,29,32,34,28,28,26,22,19,18,19,13,12,12,39,40,37,36,36,35,35,33,37,35,33,38,30,30,25,25,22,20,23,21,19,19,32,33,34,32,36,35,37,34,36,30,32,33,30,32,29,28,26,23,23,24,24,23,29,31,30,28,28,32,34,30,29,27,30,31,35,31,34,28,30,26,26,26,29,28,27,26,26,27,26,26,28,29,26,30,33,32,35,33,34,29,32,26,27,29,29,28,27,23,24,28,29,30,28,25,25,30,33,31,31,32,29,25,27,29,27,28,26,24,23,21,22,23,27,28,30,27,29,33,29,28,29,30,25,25,23,27,28,26,22,21,22,22,23,24,26,26,28,29,31,31,29,29,29,27,25,26,21,22,24,25,29,29,23,25,23,24,26,27,28,27,31,31,31,28,26,24,23,23,21,19,23,28,34,35,19,21,22,23,25,28,30,32,34,33,33,32,26,11,11,11,19,21,27,30,29,29,21,21,18,21,27,30,30,31,33,33,34,31,24,13,11,11,11,17,22,23,25,25,21,19,16,20,29,32,30,29,32,29,31,28,20,13,12,11,13,15,17,16,16,15,21,19,16,20,28,32,29,29,33,29,29,27,19,13,12,11,13,15,16,16,15,15],
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
