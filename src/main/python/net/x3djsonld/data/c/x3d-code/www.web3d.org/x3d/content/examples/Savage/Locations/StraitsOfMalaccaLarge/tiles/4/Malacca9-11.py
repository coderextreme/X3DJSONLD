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
        texture=ImageTexture(url=['../../images/4/Malacca9-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3545435942297044,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[9,16,7,2,6,-2,14,10,12,4,5,3,2,3,1,3,3,3,1,1,3,3,15,18,9,2,9,7,8,-24,2,4,4,4,3,2,3,2,1,3,2,2,1,2,18,1,2,3,7,7,17,8,2,4,3,4,3,3,2,2,2,1,2,3,2,3,37,12,14,9,27,11,44,3,3,2,2,3,4,3,3,2,2,2,2,1,2,3,39,24,8,3,41,11,43,24,4,2,1,2,2,2,3,2,2,2,2,2,1,0,36,49,8,15,54,33,10,4,2,3,2,1,6,2,2,2,3,1,2,1,1,3,45,11,31,47,39,19,19,16,3,3,1,2,2,1,2,2,2,2,2,2,1,-1,51,15,17,63,41,18,24,3,3,3,3,3,1,0,2,1,2,1,2,2,2,2,17,13,38,38,39,12,34,3,2,3,3,3,3,1,2,3,1,1,3,3,2,2,26,84,74,57,25,10,4,4,4,3,3,2,2,1,2,2,2,0,0,4,1,1,54,15,67,33,10,25,4,4,4,5,4,3,4,3,3,3,3,2,1,2,2,3,80,9,9,20,9,3,3,4,5,3,4,5,4,2,4,3,3,3,4,1,3,2,28,50,14,7,2,2,2,3,4,5,5,4,3,4,3,3,4,3,4,3,2,2,12,80,14,13,28,3,3,4,4,4,3,5,4,2,4,3,3,2,3,2,3,2,10,44,17,15,2,1,3,2,3,2,3,3,4,3,3,4,4,2,3,3,4,3,22,29,56,2,3,3,2,2,2,2,3,3,4,4,4,4,2,3,4,2,2,2,29,42,54,3,2,2,2,1,1,2,3,3,4,2,3,4,4,3,3,3,3,3,38,86,4,2,2,1,2,3,2,2,1,3,4,2,2,3,2,4,3,3,1,3,48,23,5,2,4,2,2,2,2,4,3,2,1,3,1,3,4,3,3,5,2,3,47,25,4,4,4,4,3,2,3,3,2,4,3,2,4,4,3,3,3,4,3,4,51,4,4,4,248,4,4,3,4,2,3,4,2,3,2,1,3,3,4,3,3,3,45,18,4,4,234,4,4,3,4,2,2,4,2,4,1,1,3,3,4,3,3,3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
