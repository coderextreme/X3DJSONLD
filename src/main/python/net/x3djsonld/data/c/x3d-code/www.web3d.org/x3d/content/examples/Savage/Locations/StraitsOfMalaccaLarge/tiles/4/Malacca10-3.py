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
        texture=ImageTexture(url=['../../images/4/Malacca10-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,95.84375014402414,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,0,-2,-6,0,3,3,1,4,2,4,3,-1,3,2,0,0,3,-3,8,0,1,0,0,-5,-2,1,3,3,10,4,0,31,30,43,21,3,0,0,0,-3,0,0,0,0,3,0,-5,-1,1,3,5,-19,0,12,31,47,6,6,3,-1,-1,1,3,1,0,4,0,0,6,0,0,0,5,43,25,97,6,148,1,0,7,-1,-1,3,2,4,0,0,1,-17,6,2,0,-2,63,206,189,16,1,3,6,1,0,13,0,0,1,2,2,0,-14,-4,-1,-11,11,133,166,182,76,15,5,10,0,18,0,0,0,18,4,0,1,3,16,80,9,123,30,41,39,8,1,1,3,4,1,0,1,0,5,5,0,3,1,34,96,105,153,93,41,10,26,2,1,3,0,0,-4,10,2,3,2,0,2,2,2,94,81,151,81,35,28,6,0,2,4,-5,-1,1,2,1,3,4,13,2,3,0,1,170,101,63,309,5,14,5,1,0,3,1,0,9,-8,3,1,0,5,4,3,3,0,43,43,51,2,4,5,1,4,0,0,5,0,6,-4,5,0,3,4,3,4,3,5,93,8,-2,2,0,3,1,2,3,2,-2,-9,-5,0,-4,0,-4,3,3,2,3,2,11,2,0,0,0,1,4,3,3,5,-17,-2,0,-6,0,4,3,3,3,3,3,4,0,2,3,1,-2,0,0,3,0,0,0,-17,-7,0,0,0,3,5,6,2,3,3,1,1,1,1,1,0,0,2,0,0,0,0,1,3,1,3,0,2,3,2,3,3,2,1,2,0,1,0,1,5,1,-8,0,3,0,1,3,2,2,0,1,3,2,2,2,0,1,0,0,0,1,5,12,24,-8,1,3,0,2,3,2,2,2,2,2,2,1,1,0,-1,-1,0,-2,-8,-5,12,24,0,1,3,2,3,1,3,2,2,2,2,1,2,0,0,0,-1,1,0,-7,-5,2,1,0,2,1,0,3,2,1,3,1,1,1,-1,0,2,1,0,0,2,0,1,4,2,3,2,4,3,1,2,1,1,2,2,2,-2,0,1,0,1,4,0,2,2,1,4,2,2,3,1,2,1,2,1,1,1,1,0,2,3,1,1,0,0,3,2,3,4,2,2,4,2,2,2,1,1,1,2],
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
