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
        texture=ImageTexture(url=['../../images/4/Malacca0-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.7118318364,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,1,2,2,3,3,3,2,2,2,3,1,3,2,2,2,1,2,2,3,2,-99,-99,3,2,1,4,2,3,3,3,3,3,2,1,3,3,2,1,0,1,0,1,-99,-99,3,2,2,2,2,3,4,3,3,3,3,2,2,1,2,3,0,2,2,3,-99,-99,2,1,2,2,2,2,3,4,3,3,2,2,2,3,3,3,2,5,2,0,-99,-99,1,2,2,2,2,3,1,2,4,3,2,2,2,3,2,3,2,2,1,0,-99,-99,3,3,4,3,3,2,2,2,2,2,4,4,2,3,1,2,1,1,1,0,-99,-99,3,2,2,2,2,2,2,2,2,1,2,2,1,2,2,1,1,1,0,0,-99,-99,2,2,1,1,2,2,3,2,3,3,3,3,3,2,2,0,1,1,2,0,-99,-99,3,2,2,2,2,2,3,3,3,4,3,3,3,3,1,1,2,0,0,1,-99,-99,1,1,1,2,2,2,2,3,3,3,3,3,3,2,3,1,0,0,1,1,-99,-99,1,2,2,2,2,1,3,2,3,3,3,3,2,3,2,2,2,2,2,0,-99,-99,2,1,1,3,4,3,3,4,3,3,3,3,3,4,3,3,1,1,0,0,-99,-99,2,2,3,3,3,4,4,5,4,5,5,4,5,5,5,2,2,3,3,2,-99,-99,1,2,1,2,3,3,4,3,3,5,4,5,5,4,4,4,4,3,3,3,-99,-99,1,1,2,2,3,4,4,6,6,6,5,24,5,5,6,5,4,3,4,4,2,2,2,2,3,3,5,4,6,6,6,5,5,5,6,6,5,5,3,4,4,4,1,2,1,2,3,3,3,5,6,5,6,4,7,5,5,5,6,5,5,3,4,3,1,2,2,2,2,4,4,5,3,4,4,4,31,2,4,5,5,4,4,4,9,4,1,1,2,2,4,4,3,383,3,16,26,3,47,292,77,76,30,17,16,5,19,17,0,1,3,2,3,4,73,17,101,47,6,3,45,471,241,95,91,38,17,13,21,16,0,1,1,2,3,3,3,4,39,32,3,4,4,109,251,183,139,87,30,25,46,48,1,1,2,2,3,3,4,4,11,32,2,4,3,74,261,182,149,91,33,28,50,40],
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
