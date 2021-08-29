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
        texture=ImageTexture(url=['../../images/4/Malacca6-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[11,12,54,57,75,59,41,46,108,0,2,7,1,2,1,2,3,1,2,2,3,3,10,230,164,162,145,189,34,14,16,5,2,3,3,2,4,4,1,2,2,2,0,4,71,49,53,192,133,34,28,7,4,0,4,0,1,5,1,4,0,5,4,3,2,2,82,116,148,43,138,29,21,3,4,3,2,3,0,3,4,4,3,1,5,4,6,3,119,90,170,190,75,31,33,6,3,1,4,3,3,4,1,3,4,2,2,0,5,2,77,194,102,55,111,17,11,3,1,4,3,4,4,3,3,5,3,2,0,2,10,15,72,84,102,30,110,13,4,5,3,1,2,2,3,3,2,4,3,1,4,7,2,8,139,189,81,30,39,2,4,3,3,5,1,1,2,2,2,1,5,0,4,4,7,5,184,144,93,70,12,7,-3,4,5,4,3,4,1,1,1,2,3,-9,0,1,4,6,78,127,57,26,6,2,1,0,1,3,3,3,1,4,2,3,0,0,-4,-4,1,4,173,134,37,99,4,1,5,1,2,2,2,5,1,4,9,1,2,1,-4,-4,-4,-4,131,82,21,0,4,2,3,1,1,2,2,3,4,1,1,2,-2,2,1,-4,-4,-4,96,36,21,2,0,4,3,15,2,1,16,3,5,1,5,5,-2,-2,2,2,-4,-4,43,130,1,2,9,0,0,2,0,1,3,0,0,3,4,-2,-2,-2,-2,2,1,-4,35,15,0,1,1,3,0,1,3,2,4,4,2,3,2,2,2,2,2,2,2,2,11,22,0,4,4,3,-1,0,1,2,3,1,16,3,3,3,3,3,3,2,2,2,9,1,2,3,2,5,3,3,0,2,2,-1,1,16,3,3,3,3,2,2,2,2,4,6,3,2,0,3,-2,0,0,0,4,10,10,1,16,3,3,5,2,2,2,2,6,12,2,0,4,2,1,0,-1,3,3,2,10,10,1,16,3,5,5,2,2,2,12,2,2,4,10,1,1,0,2,0,4,19,2,10,10,0,16,-1,6,6,2,2,3,2,2,9,1,1,1,3,3,0,23,-1,-1,2,10,10,3,4,-1,5,5,0,0,2,2,11,1,1,2,1,1,1,25,-1,-1,2,10,10,4,-1,-3,3,6,4],
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
