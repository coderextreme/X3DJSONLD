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
        texture=ImageTexture(url=['../../images/5/newport20-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,2,2,0,0,2,5,11,14,23,25,26,30,35,42,48,48,48,49,0,0,0,0,0,0,0,0,0,7,8,12,16,20,27,29,41,43,46,46,49,50,0,0,0,0,0,0,0,0,0,1,10,11,14,20,25,34,37,42,44,47,49,48,0,0,0,0,0,0,0,0,0,0,6,12,17,17,27,31,37,42,48,48,46,47,0,0,0,0,0,0,0,0,0,0,7,19,16,19,25,30,35,41,48,48,47,48,0,0,0,0,0,0,0,0,0,0,0,10,19,24,23,31,36,42,50,55,51,50,0,0,0,0,0,0,0,0,0,0,0,4,15,20,24,31,36,42,49,55,57,57,0,0,0,0,0,0,0,0,0,0,0,0,9,19,24,30,38,44,44,48,53,54,0,0,0,0,0,0,0,0,0,0,0,0,7,16,22,26,37,40,44,41,42,42,0,0,0,0,0,0,0,0,0,0,0,0,0,13,22,28,33,35,35,31,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,3,20,26,28,29,26,24,22,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,23,23,20,18,16,16,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,19,16,17,15,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,12,17,16,14,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,17,11,15,10,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,5,9,12,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,9,11,14,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,10,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,11,10,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,11,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,13,19,12,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,14,20,15,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,11,11,16,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,12,11,14,13,12],
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
