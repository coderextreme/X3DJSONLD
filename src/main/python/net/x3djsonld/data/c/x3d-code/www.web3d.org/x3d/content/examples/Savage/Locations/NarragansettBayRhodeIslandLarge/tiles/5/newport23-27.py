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
        texture=ImageTexture(url=['../../images/5/newport23-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,8,15,25,34,45,58,60,59,58,63,71,76,77,76,72,70,68,65,63,63,1,1,3,10,17,24,38,50,58,55,55,60,64,68,72,72,69,68,68,65,71,69,1,1,1,6,10,17,27,37,44,49,48,54,58,62,67,70,68,67,64,63,66,64,1,1,1,1,6,9,16,22,29,35,44,49,56,62,67,68,68,67,64,61,60,59,1,1,1,1,1,6,10,12,18,28,40,46,54,63,68,68,67,66,63,60,58,57,1,1,1,1,1,4,7,10,13,20,32,43,54,62,67,69,67,65,61,59,56,56,1,1,1,1,1,2,4,6,9,13,25,40,52,62,68,70,69,66,60,57,56,56,1,1,1,1,1,1,2,5,7,11,21,38,49,62,68,73,74,70,65,60,56,55,1,1,1,1,1,1,2,4,7,9,15,36,44,59,67,71,75,73,70,64,57,56,1,1,1,1,1,1,2,3,6,8,11,22,36,53,60,66,74,76,74,68,63,62,1,1,1,1,1,1,1,3,7,8,10,14,27,43,52,60,68,75,76,74,60,59,1,1,1,1,1,1,1,2,6,8,10,14,19,28,42,51,63,68,70,67,59,58,1,1,1,1,1,1,1,1,7,9,11,14,17,22,33,42,55,61,63,61,59,59,1,1,1,1,1,1,1,3,5,9,12,15,19,24,31,37,46,55,57,58,61,62,1,1,1,1,1,1,1,4,7,8,11,14,18,25,29,34,39,46,52,56,58,59,1,1,1,1,1,1,1,1,6,9,10,14,18,22,29,31,37,43,47,53,54,55,1,1,1,1,1,1,1,1,2,7,9,12,18,20,27,29,33,40,45,47,50,51,1,1,1,1,1,1,1,1,1,1,5,7,14,18,22,27,31,37,42,45,46,47,1,1,1,1,1,1,1,1,1,1,1,5,8,15,19,22,27,33,38,41,43,43,1,1,1,1,1,1,1,1,1,1,1,1,5,10,13,16,23,31,36,39,40,40,1,1,1,1,1,1,1,1,1,1,1,1,1,4,6,12,18,24,31,34,37,37,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,8,12,19,25,29,32,33,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,11,15,20,26,29,30,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,11,14,19,26,29,29],
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
